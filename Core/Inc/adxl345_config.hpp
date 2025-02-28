#ifndef ADXL345_CONFIG_HPP
#define ADXL345_CONFIG_HPP

#include "vector3d.hpp"
#include <cstdint>

namespace ADXL345 {

    template <typename T>
    using Vec3D = Utility::Vector3D<T>;

    enum struct RA : std::uint8_t {
        DEVID = 0x00,
        THRESH_TAP = 0x1D,
        OFSX = 0x1E,
        OFSY = 0x1F,
        OFXZ = 0x20,
        DUR = 0x21,
        LATENT = 0x22,
        WINDOW = 0x23,
        THRESH_ACT = 0x24,
        THRESH_INACT = 0x25,
        TIME_INACT = 0x26,
        ACT_INACT_CTL = 0x27,
        THRESH_FF = 0x28,
        TIME_FF = 0x29,
        TAP_AXES = 0x2A,
        ACT_TAP_STATUS = 0x2B,
        BW_RATE = 0x2C,
        POWER_CTL = 0x2D,
        INT_ENABLE = 0x2E,
        INT_MAP = 0x2F,
        INT_SOURCE = 0x30,
        DATA_FORMAT = 0x31,
        DATA_X0 = 0x32,
        DATA_X1 = 0x33,
        DATA_Y0 = 0x34,
        DATA_Y1 = 0x35,
        DATA_Z0 = 0x36,
        DATA_Z1 = 0x37,
        FIFO_CTL = 0x38,
        FIFO_STATUS = 0x39,
    };

}; // namespace ADXL345

#endif // ADXL345_CONFIG_HPP