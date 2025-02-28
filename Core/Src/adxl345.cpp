#include "adxl345.hpp"
#include "adxl345_config.hpp"
#include "adxl345_registers.hpp"

namespace ADXL345 {

    ADXL345::ADXL345(I2CDevice&& i2c_device,
                     THRESH_TAP const thresh_tap,
                     OFSX const ofsx,
                     OFSY const ofsy,
                     OFSZ const ofsz,
                     DUR const dur,
                     LATENT const latent,
                     WINDOW const window,
                     THRESH_ACT const thresh_act,
                     THRESH_INACT const thresh_inact,
                     TIME_INACT const time_inact,
                     ACT_INACT_CTL const act_inact_ctl,
                     THRESH_FF const thresh_ff,
                     TIME_FF const time_ff,
                     TAP_AXES const tap_axes,
                     BW_RATE const bw_rate,
                     POWER_CTL const power_ctl,
                     INT_ENABLE const int_enable,
                     INT_MAP const int_map,
                     DATA_FORMAT const data_format,
                     FIFO_CTL const fifo_ctl) noexcept
    {}

    ADXL345::~ADXL345() noexcept
    {}

    float ADXL345::get_acceleration_x_scaled() const noexcept
    {
        return 0.0f;
    }

    float ADXL345::get_acceleration_y_scaled() const noexcept
    {
        return 0.0f;
    }
    float ADXL345::get_acceleration_z_scaled() const noexcept
    {
        return 0.0f;
    }

    Vec3D<float> ADXL345::get_acceleration_scaled() const noexcept
    {
        return Vec3D<float>();
    }

    void ADXL345::initialize(THRESH_TAP const thresh_tap,
                             OFSX const ofsx,
                             OFSY const ofsy,
                             OFSZ const ofsz,
                             DUR const dur,
                             LATENT const latent,
                             WINDOW const window,
                             THRESH_ACT const thresh_act,
                             THRESH_INACT const thresh_inact,
                             TIME_INACT const time_inact,
                             ACT_INACT_CTL const act_inact_ctl,
                             THRESH_FF const thresh_ff,
                             TIME_FF const time_ff,
                             TAP_AXES const tap_axes,
                             BW_RATE const bw_rate,
                             POWER_CTL const power_ctl,
                             INT_ENABLE const int_enable,
                             INT_MAP const int_map,
                             DATA_FORMAT const data_format,
                             FIFO_CTL const fifo_ctl) noexcept
    {}

    void ADXL345::deinitialize() noexcept
    {}

    std::int16_t ADXL345::get_acceleration_x_raw() const noexcept
    {}

    std::int16_t ADXL345::get_acceleration_y_raw() const noexcept
    {}

    std::int16_t ADXL345::get_acceleration_z_raw() const noexcept
    {}

    Vec3D<std::int16_t> ADXL345::get_acceleration_raw() const noexcept
    {}

    DEVID ADXL345::get_devid_register() const noexcept
    {}

    THRESH_TAP ADXL345::get_thresh_tap_register() const noexcept
    {}

    void ADXL345::set_thresh_tap_register(THRESH_TAP const thresh_tap) const noexcept
    {}

    OFSX ADXL345::get_ofsx_register() const noexcept
    {}

    void ADXL345::set_ofsx_register(OFSX const ofsx) const noexcept
    {}

    OFSY ADXL345::get_ofsy_register() const noexcept
    {}

    void ADXL345::set_ofsy_register(OFSY const ofsy) const noexcept
    {}

    OFSZ ADXL345::get_ofsz_register() const noexcept
    {}

    void ADXL345::set_ofsz_register(OFSZ const ofsz) const noexcept
    {}

    DUR ADXL345::get_dur_register() const noexcept
    {}

    void ADXL345::set_dur_register(DUR const dur) const noexcept
    {}

    LATENT ADXL345::get_latent_register() const noexcept
    {}

    void ADXL345::set_latent_register(LATENT const latent) const noexcept
    {}

    WINDOW ADXL345::get_window_register() const noexcept
    {}

    void ADXL345::set_window_register(WINDOW const window) const noexcept
    {}

    THRESH_ACT ADXL345::get_thresh_act_register() const noexcept
    {}

    void ADXL345::set_thresh_act_register(THRESH_ACT const thresh_act) const noexcept
    {}

    THRESH_INACT ADXL345::get_thresh_inact_register() const noexcept
    {}

    void ADXL345::set_thresh_inact_register(THRESH_INACT const thresh_inact) const noexcept
    {}

    TIME_INACT ADXL345::get_time_inact_register() const noexcept
    {}

    void ADXL345::set_time_inact_register(TIME_INACT const time_inact) const noexcept
    {}

    ACT_INACT_CTL ADXL345::get_act_inact_ctl_register() const noexcept
    {}

    void ADXL345::set_act_inact_ctl_register(ACT_INACT_CTL const act_inact_ctl) const noexcept
    {}

    THRESH_FF ADXL345::get_thresh_ff_register() const noexcept
    {}

    void ADXL345::set_thresh_ff_register(THRESH_FF const thresh_ff) const noexcept
    {}

    TIME_FF ADXL345::get_time_ff_register() const noexcept
    {}

    void ADXL345::set_time_ff_register(TIME_FF const time_ff) const noexcept
    {}

    TAP_AXES ADXL345::get_tap_axes_register() const noexcept
    {}

    void ADXL345::set_tap_axes_register(TAP_AXES const tap_axes) const noexcept
    {}

    ACT_TAP_STATUS ADXL345::get_act_tap_status_register() const noexcept
    {}

    BW_RATE ADXL345::get_bw_rate_register() const noexcept
    {}

    void ADXL345::set_bw_rate_register(BW_RATE const bw_rate) const noexcept
    {}

    POWER_CTL ADXL345::get_power_ctl_register() const noexcept
    {}

    void ADXL345::set_power_ctl_register(POWER_CTL const power_ctl) const noexcept
    {}

    INT_ENABLE ADXL345::get_int_enable_register() const noexcept
    {}

    void ADXL345::set_int_enable_register() const noexcept
    {}

    INT_MAP ADXL345::get_int_map_register() const noexcept
    {}

    void ADXL345::set_int_map_register(INT_MAP const int_map) const noexcept
    {}

    INT_SOURCE ADXL345::get_int_source_register() const noexcept
    {}

    DATA_FORMAT ADXL345::get_data_format_register() const noexcept
    {}

    void ADXL345::set_data_format_register(DATA_FORMAT const data_format) const noexcept
    {}

    DATA_X ADXL345::get_data_x_registers() const noexcept
    {}

    DATA_Y ADXL345::get_data_y_registers() const noexcept
    {}

    DATA_Z ADXL345::get_data_z_registers() const noexcept
    {}

    DATA ADXL345::get_data_registers() const noexcept
    {}

    FIFO_CTL ADXL345::get_fifo_ctl_register() const noexcept
    {}

    void ADXL345::set_fifo_ctl_register(FIFO_CTL const fifo_ctl) const noexcept
    {}

    FIFO_STATUS ADXL345::get_fifo_status_register() const noexcept
    {}

}; // namespace ADXL345
