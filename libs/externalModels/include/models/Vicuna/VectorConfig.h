#pragma once

namespace VectorConfig {
// inline constexpr auto vlen = 1024;
// inline constexpr auto vLaneWidth = 32;

constexpr auto vMemWidth = 32;
constexpr auto dividerDelay = 35;
constexpr auto nVectorRegisters = 32;
constexpr auto maskRegisterIndex = 0;
constexpr auto masked = 0;
constexpr auto unmasked = 1;
} // namespace VectorConfig
