#include "models/Vicuna/PackUnpackLsu.h"
#include <cstdint>

namespace Vicuna
{

auto PackUnpackLsu::log2(uint64_t value) -> uint64_t
{
    auto result = 0;
    value >>= 1;
    while (value)
    {
        result++;
        value >>= 1;
    }
    return result;
}

auto PackUnpackLsu::lmulIsFractional(uint64_t const lmul) -> bool
{
    static constexpr auto fractionalLmulBitmask = 0b100;
    return (lmul & fractionalLmulBitmask) != 0;
}

int PackUnpackLsu::getDelay(void)
{
    return getLoadStoreEmul();
}

auto PackUnpackLsu::getLmul() -> uint64_t
{
    uint64_t const vtype = vtype_ptr[getInstrIndex()];
    static constexpr auto fractionalLmulBitmask = 0b100;
    auto const isFractionalLmul = vtype & fractionalLmulBitmask;
    auto lmul = 1;

    if (!isFractionalLmul && ((vtype & 0b11) != 0))
    {
        static constexpr auto lmulValueBitmask = 0b11;
        lmul = 1 << (vtype & lmulValueBitmask);
    }

    return lmul;
}

auto PackUnpackLsu::getSew() -> uint64_t
{
    uint64_t const vtype = vtype_ptr[getInstrIndex()];
    uint64_t const vsew = (vtype >> 3) & 0b11;
    // SEW can be calculated by shifting 8 left by the register value (vsew)
    return 8 << vsew;
}

auto PackUnpackLsu::decodeMultiplicativeLmul(uint64_t const encodedLmul) -> uint64_t
{
    static constexpr auto lmulValueBitmask = 0b11;
    return 1 << (encodedLmul & lmulValueBitmask);
}

auto PackUnpackLsu::getEncodedLmul() -> uint64_t
{
    uint64_t const vtype = vtype_ptr[getInstrIndex()];
    static constexpr auto vlmulBitmask = 0b111;
    return vtype & vlmulBitmask;
}

auto PackUnpackLsu::lmulIsFractional() -> bool
{
    uint64_t const vtype = vtype_ptr[getInstrIndex()];
    static constexpr auto fractionalLmulBitmask = 0b100;
    auto const isFractionalLmul = vtype & fractionalLmulBitmask;
    return isFractionalLmul != 0;
}

auto PackUnpackLsu::getLoadStoreEmul() -> uint64_t
{
    auto const loadWidth = lsWidth_ptr[getInstrIndex()];
    auto const sew = getSew();

    // EMUL = LMUL >= m1 if loadWidth == sew
    auto emul = getLmul();

    if (loadWidth > sew)
    {
        // EMUL = multiple of LMUL
        // Calculate by adding log2(loadWidth / sew) to vlmul
        // If the fractional bit is still 1, EMUL = 1
        // otherwise just the decoded multiplicative LMUL of that new value.
        // m8 overflowing should result in an illegal instruction anyway, so it is
        // not checked. See spec.
        auto const encodedEmul = getEncodedLmul() + log2(loadWidth / sew);
        emul = lmulIsFractional(encodedEmul) ? 1 : decodeMultiplicativeLmul(encodedEmul);
    }
    else if (loadWidth < sew)
    {
        // EMUL = fraction of LMUL
        // If LMUL fractional, or log2(loadWidth / sew) >= vlmul, EMUL = 1
        // otherwise subtract log2(loadWidth / sew) from vlmul and decode.
        // See spec.
        auto const vlmul = getEncodedLmul();
        auto const decrement = log2(sew / loadWidth);
        if (lmulIsFractional() || decrement > vlmul)
        {
            emul = 1;
        }
        else
        {
            emul = decodeMultiplicativeLmul(vlmul - decrement);
        }
    }
    return emul;
}

} // namespace Vicuna
