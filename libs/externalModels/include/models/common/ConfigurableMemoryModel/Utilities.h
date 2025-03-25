/*
 * Copyright 2024 Chair of EDA, Technical University of Munich
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *	 http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef CONFIGURABLE_MEMORY_MODEL_UTILITIES_H
#define CONFIGURABLE_MEMORY_MODEL_UTILITIES_H

// define to enable/disable logging of cache performance statistics
#define CMM_OUTPUT_STATISTICS

// used to enable/disable code for debugging/statistics purpose
#ifdef CMM_OUTPUT_STATISTICS
#define CMM_STATISTICS_ONLY(...) __VA_ARGS__
#else
#define CMM_STATISTICS_ONLY(...)
#endif

namespace cmm
{

/**
 * @brief The NamedType class. Base class for "strongly typed" integers or
 * decimal types.
 *
 * Plain types (such as integers) are not "strongly typed". I.e. the compiler
 * may convert a plain `int` to `size_t` or vice versa. Further, if a
 * constructor of some class takes multiple arguments of the same type,
 * it may be ambigious which parameter is used for what and we may mix
 * parameters:
 *
 *   struct Rect { Rect(int width, int height) {} };
 *
 *   int height = 10, width = 5;
 *   Rect{height, width}; // mixed up arguments, compiler does not care!
 *
 * To avoid such errors, one can use "named types" that are strongly typed
 * by using dedicated types using `class` or `struct`:
 *
 *   using Width  = NamedType<int, struct WidthTag_>;
 *   using Height = NamedType<int, struct HeightTag_>;
 *
 *   struct Rect { Rect(Width width, Height height) {} };
 *
 *   Rect{Height{10}, Width{5}}; // compilation error!
 *   Rect{Width{5}, Height(10)}; // compiles fine :)
 *
 * @tparam T Underlying type (i.e. value type)
 * @tparam Tag Tag type used to create a "unique" type that can be used
 * to disable implicit conversions between different "named types".
 */
template <typename T, typename Tag>
class NamedType
{
public:

    constexpr inline explicit NamedType(T value) noexcept : m_value(value) {}
    explicit NamedType() = default;

    NamedType(NamedType const&) = default;
    NamedType(NamedType&&) = default;
    NamedType& operator=(NamedType const& value) = default;
    NamedType& operator=(NamedType&& value) = default;
    ~NamedType() = default;

    // Allow comparison between same named types
    constexpr inline bool
    operator==(NamedType const& other) const noexcept { return m_value == other.m_value; }
    constexpr inline bool
    operator!=(NamedType const& other) const noexcept { return !(*this == other); }

    // explicitly disable comparissions between different named types
    template<typename U, typename UTag>
    bool operator==(NamedType<U, UTag> const& other) const noexcept = delete;
    template<typename U, typename UTag>
    bool operator!=(NamedType<U, UTag> const& other) const noexcept = delete;

    // arithmetic operators
    constexpr inline NamedType&
    operator+=(NamedType const& o) noexcept { m_value += o.m_value; return *this; }
    constexpr inline NamedType&
    operator-=(NamedType const& o) noexcept { m_value -= o.m_value; return *this; }
    constexpr inline NamedType&
    operator*=(NamedType const& o) noexcept { m_value *= o.m_value; return *this; }
    constexpr inline NamedType&
    operator/=(NamedType const& o) noexcept { m_value /= o.m_value; return *this; }

    constexpr inline NamedType
    operator+(NamedType const& o) noexcept { return NamedType{m_value + o.m_value}; }
    constexpr inline NamedType
    operator-(NamedType const& o) noexcept { return NamedType{m_value - o.m_value}; }

    // pre increment
    constexpr inline NamedType&
    operator++() noexcept { ++m_value; return *this; }
    // pre decrement
    constexpr inline NamedType&
    operator--() noexcept { --m_value; return *this; }

    // post increment
    constexpr inline NamedType
    operator++(int) noexcept { NamedType v(*this); operator++(); return v; }
    // post decrement
    constexpr inline NamedType
    operator--(int) noexcept { NamedType v(*this); operator--(); return v; }

    // implicit conversion to base type
    constexpr operator T() const { return get(); }

    // explicit conversion to base type
    constexpr inline T
    get() const { return m_value; }

private:
    T m_value{};
};

// global arithmetic operators
template <typename T, typename Tag>
constexpr inline bool
operator+(NamedType<T, Tag> const& a,
          NamedType<T, Tag> const& b) noexcept{ return a.operator+(b); }

template <typename T, typename Tag>
constexpr inline bool
operator-(NamedType<T, Tag> const& a,
          NamedType<T, Tag> const& b) noexcept { return a.operator-(b); }

template <typename T, typename Tag>
constexpr inline bool
operator+=(NamedType<T, Tag> const& a,
           NamedType<T, Tag> const& b) noexcept { return a += b; }

template <typename T, typename Tag>
constexpr inline bool
operator-=(NamedType<T, Tag> const& a,
           NamedType<T, Tag> const& b) noexcept { return a -= b; }

template <typename T, typename Tag>
constexpr inline bool
operator*=(NamedType<T, Tag> const& a,
           NamedType<T, Tag> const& b) noexcept{ return a *= b; }

template <typename T, typename Tag>
constexpr inline bool
operator/=(NamedType<T, Tag> const& a,
           NamedType<T, Tag> const& b) noexcept { return a /= b; }


} // namespace cmm

#endif // CONFIGURABLE_MEMORY_MODEL_UTILITIES_H
