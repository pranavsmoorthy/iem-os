/**
 * @file can_2.h
 * @author IEM can_codec library
 * @brief CAN message packing/unpacking code generated from can_2.dbc
 * @version 0.1
 * @date 2025-06-17
 */

#ifndef CAN_2_H
#define CAN_2_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

#define CAN_2_VNAV_TV_INPUTS_ID     0x100
#define CAN_2_VNAV_TV_INPUTS_LENGTH 8U
#define CAN_2_VNAV_TV_INPUTS_IS_EXT false

#define CAN_2_VNAV_VEL_ACCEL_ID     0x101
#define CAN_2_VNAV_VEL_ACCEL_LENGTH 7U
#define CAN_2_VNAV_VEL_ACCEL_IS_EXT false

#define CAN_2_VNAV_POS_STAT_ID     0x102
#define CAN_2_VNAV_POS_STAT_LENGTH 8U
#define CAN_2_VNAV_POS_STAT_IS_EXT false

#define CAN_2_VNAV_STATUS_ID     0x103
#define CAN_2_VNAV_STATUS_LENGTH 6U
#define CAN_2_VNAV_STATUS_IS_EXT false

#define CAN_2_SAFETY_TV_MZ_ID     0x106
#define CAN_2_SAFETY_TV_MZ_LENGTH 6U
#define CAN_2_SAFETY_TV_MZ_IS_EXT false

#define CAN_2_SAFETY_TV_CTRL_FEEDBACK_ID     0x10E
#define CAN_2_SAFETY_TV_CTRL_FEEDBACK_LENGTH 7U
#define CAN_2_SAFETY_TV_CTRL_FEEDBACK_IS_EXT false

#define CAN_2_SAFETY_TV_INPUTS_FILT_ID     0x10F
#define CAN_2_SAFETY_TV_INPUTS_FILT_LENGTH 8U
#define CAN_2_SAFETY_TV_INPUTS_FILT_IS_EXT false

#define CAN_2_SAFETY_TV_PWR_ID     0x110
#define CAN_2_SAFETY_TV_PWR_LENGTH 8U
#define CAN_2_SAFETY_TV_PWR_IS_EXT false

#define CAN_2_SAFETY_TV_SPEED_FILT_ID     0x111
#define CAN_2_SAFETY_TV_SPEED_FILT_LENGTH 8U
#define CAN_2_SAFETY_TV_SPEED_FILT_IS_EXT false

#define CAN_2_SAFETY_TV_GAINS_ID     0x112
#define CAN_2_SAFETY_TV_GAINS_LENGTH 7U
#define CAN_2_SAFETY_TV_GAINS_IS_EXT false

#define CAN_2_SAFETY_TV_REGEN_TQ_ID     0x113
#define CAN_2_SAFETY_TV_REGEN_TQ_LENGTH 8U
#define CAN_2_SAFETY_TV_REGEN_TQ_IS_EXT false

#define CAN_2_FSB_ANALOG_CH_1_ID     0x681
#define CAN_2_FSB_ANALOG_CH_1_LENGTH 2U
#define CAN_2_FSB_ANALOG_CH_1_IS_EXT false

#define CAN_2_FSB_ANALOG_CH_2_ID     0x682
#define CAN_2_FSB_ANALOG_CH_2_LENGTH 2U
#define CAN_2_FSB_ANALOG_CH_2_IS_EXT false

#define CAN_2_FSB_ANALOG_CH_3_ID     0x683
#define CAN_2_FSB_ANALOG_CH_3_LENGTH 2U
#define CAN_2_FSB_ANALOG_CH_3_IS_EXT false

#define CAN_2_FSB_ANALOG_CH_4_ID     0x684
#define CAN_2_FSB_ANALOG_CH_4_LENGTH 2U
#define CAN_2_FSB_ANALOG_CH_4_IS_EXT false

#define CAN_2_FSB_ANALOG_CH_5_ID     0x685
#define CAN_2_FSB_ANALOG_CH_5_LENGTH 2U
#define CAN_2_FSB_ANALOG_CH_5_IS_EXT false

#define CAN_2_FSB_ANALOG_CH_6_ID     0x686
#define CAN_2_FSB_ANALOG_CH_6_LENGTH 2U
#define CAN_2_FSB_ANALOG_CH_6_IS_EXT false

#define CAN_2_FSB_ANALOG_CH_7_ID     0x687
#define CAN_2_FSB_ANALOG_CH_7_LENGTH 2U
#define CAN_2_FSB_ANALOG_CH_7_IS_EXT false

#define CAN_2_FSB_ANALOG_CH_8_ID     0x688
#define CAN_2_FSB_ANALOG_CH_8_LENGTH 2U
#define CAN_2_FSB_ANALOG_CH_8_IS_EXT false

#define CAN_2_FSB_ANALOG_CH_9_ID     0x689
#define CAN_2_FSB_ANALOG_CH_9_LENGTH 2U
#define CAN_2_FSB_ANALOG_CH_9_IS_EXT false

#define CAN_2_FSB_ANALOG_CH_10_ID     0x68A
#define CAN_2_FSB_ANALOG_CH_10_LENGTH 2U
#define CAN_2_FSB_ANALOG_CH_10_IS_EXT false

#define CAN_2_FSB_ANALOG_CH_11_ID     0x68B
#define CAN_2_FSB_ANALOG_CH_11_LENGTH 2U
#define CAN_2_FSB_ANALOG_CH_11_IS_EXT false

#define CAN_2_FSB_ANALOG_CH_12_ID     0x68C
#define CAN_2_FSB_ANALOG_CH_12_LENGTH 2U
#define CAN_2_FSB_ANALOG_CH_12_IS_EXT false

#define CAN_2_FSB_ANALOG_CH_13_ID     0x68D
#define CAN_2_FSB_ANALOG_CH_13_LENGTH 2U
#define CAN_2_FSB_ANALOG_CH_13_IS_EXT false

#define CAN_2_FSB_ANALOG_CH_14_ID     0x68E
#define CAN_2_FSB_ANALOG_CH_14_LENGTH 2U
#define CAN_2_FSB_ANALOG_CH_14_IS_EXT false

#define CAN_2_FSB_ANALOG_CH_15_ID     0x68F
#define CAN_2_FSB_ANALOG_CH_15_LENGTH 2U
#define CAN_2_FSB_ANALOG_CH_15_IS_EXT false

#define CAN_2_FSB_ANALOG_CH_16_ID     0x690
#define CAN_2_FSB_ANALOG_CH_16_LENGTH 2U
#define CAN_2_FSB_ANALOG_CH_16_IS_EXT false

#define CAN_2_FSB_ANALOG_CH_17_ID     0x691
#define CAN_2_FSB_ANALOG_CH_17_LENGTH 2U
#define CAN_2_FSB_ANALOG_CH_17_IS_EXT false

#define CAN_2_FSB_PWM_IN_CH_1_ID     0x6D1
#define CAN_2_FSB_PWM_IN_CH_1_LENGTH 3U
#define CAN_2_FSB_PWM_IN_CH_1_IS_EXT false

#define CAN_2_FSB_PWM_IN_CH_2_ID     0x6D2
#define CAN_2_FSB_PWM_IN_CH_2_LENGTH 3U
#define CAN_2_FSB_PWM_IN_CH_2_IS_EXT false

#define CAN_2_FSB_PWM_IN_CH_3_ID     0x6D3
#define CAN_2_FSB_PWM_IN_CH_3_LENGTH 3U
#define CAN_2_FSB_PWM_IN_CH_3_IS_EXT false

#define CAN_2_FSB_PWM_OUT_CH_1_ID     0x6E1
#define CAN_2_FSB_PWM_OUT_CH_1_LENGTH 1U
#define CAN_2_FSB_PWM_OUT_CH_1_IS_EXT false

#define CAN_2_FSB_PWM_OUT_CH_2_ID     0x6E2
#define CAN_2_FSB_PWM_OUT_CH_2_LENGTH 1U
#define CAN_2_FSB_PWM_OUT_CH_2_IS_EXT false

#define CAN_2_FSB_PWM_OUT_CH_3_ID     0x6E3
#define CAN_2_FSB_PWM_OUT_CH_3_LENGTH 1U
#define CAN_2_FSB_PWM_OUT_CH_3_IS_EXT false

#define CAN_2_RSB_ANALOG_CH_1_ID     0x781
#define CAN_2_RSB_ANALOG_CH_1_LENGTH 2U
#define CAN_2_RSB_ANALOG_CH_1_IS_EXT false

#define CAN_2_RSB_ANALOG_CH_2_ID     0x782
#define CAN_2_RSB_ANALOG_CH_2_LENGTH 2U
#define CAN_2_RSB_ANALOG_CH_2_IS_EXT false

#define CAN_2_RSB_ANALOG_CH_3_ID     0x783
#define CAN_2_RSB_ANALOG_CH_3_LENGTH 2U
#define CAN_2_RSB_ANALOG_CH_3_IS_EXT false

#define CAN_2_RSB_ANALOG_CH_4_ID     0x784
#define CAN_2_RSB_ANALOG_CH_4_LENGTH 2U
#define CAN_2_RSB_ANALOG_CH_4_IS_EXT false

#define CAN_2_RSB_ANALOG_CH_5_ID     0x785
#define CAN_2_RSB_ANALOG_CH_5_LENGTH 2U
#define CAN_2_RSB_ANALOG_CH_5_IS_EXT false

#define CAN_2_RSB_ANALOG_CH_6_ID     0x786
#define CAN_2_RSB_ANALOG_CH_6_LENGTH 2U
#define CAN_2_RSB_ANALOG_CH_6_IS_EXT false

#define CAN_2_RSB_ANALOG_CH_7_ID     0x787
#define CAN_2_RSB_ANALOG_CH_7_LENGTH 2U
#define CAN_2_RSB_ANALOG_CH_7_IS_EXT false

#define CAN_2_RSB_ANALOG_CH_8_ID     0x788
#define CAN_2_RSB_ANALOG_CH_8_LENGTH 2U
#define CAN_2_RSB_ANALOG_CH_8_IS_EXT false

#define CAN_2_RSB_ANALOG_CH_9_ID     0x789
#define CAN_2_RSB_ANALOG_CH_9_LENGTH 2U
#define CAN_2_RSB_ANALOG_CH_9_IS_EXT false

#define CAN_2_RSB_ANALOG_CH_10_ID     0x78A
#define CAN_2_RSB_ANALOG_CH_10_LENGTH 2U
#define CAN_2_RSB_ANALOG_CH_10_IS_EXT false

#define CAN_2_RSB_ANALOG_CH_11_ID     0x78B
#define CAN_2_RSB_ANALOG_CH_11_LENGTH 2U
#define CAN_2_RSB_ANALOG_CH_11_IS_EXT false

#define CAN_2_RSB_ANALOG_CH_12_ID     0x78C
#define CAN_2_RSB_ANALOG_CH_12_LENGTH 2U
#define CAN_2_RSB_ANALOG_CH_12_IS_EXT false

#define CAN_2_RSB_ANALOG_CH_13_ID     0x78D
#define CAN_2_RSB_ANALOG_CH_13_LENGTH 2U
#define CAN_2_RSB_ANALOG_CH_13_IS_EXT false

#define CAN_2_RSB_ANALOG_CH_14_ID     0x78E
#define CAN_2_RSB_ANALOG_CH_14_LENGTH 2U
#define CAN_2_RSB_ANALOG_CH_14_IS_EXT false

#define CAN_2_RSB_ANALOG_CH_15_ID     0x78F
#define CAN_2_RSB_ANALOG_CH_15_LENGTH 2U
#define CAN_2_RSB_ANALOG_CH_15_IS_EXT false

#define CAN_2_RSB_ANALOG_CH_16_ID     0x790
#define CAN_2_RSB_ANALOG_CH_16_LENGTH 2U
#define CAN_2_RSB_ANALOG_CH_16_IS_EXT false

#define CAN_2_RSB_ANALOG_CH_17_ID     0x791
#define CAN_2_RSB_ANALOG_CH_17_LENGTH 2U
#define CAN_2_RSB_ANALOG_CH_17_IS_EXT false

#define CAN_2_RSB_PWM_IN_CH_1_ID     0x7D1
#define CAN_2_RSB_PWM_IN_CH_1_LENGTH 3U
#define CAN_2_RSB_PWM_IN_CH_1_IS_EXT false

#define CAN_2_RSB_PWM_IN_CH_2_ID     0x7D2
#define CAN_2_RSB_PWM_IN_CH_2_LENGTH 3U
#define CAN_2_RSB_PWM_IN_CH_2_IS_EXT false

#define CAN_2_RSB_PWM_IN_CH_3_ID     0x7D3
#define CAN_2_RSB_PWM_IN_CH_3_LENGTH 3U
#define CAN_2_RSB_PWM_IN_CH_3_IS_EXT false

#define CAN_2_RSB_PWM_OUT_CH_1_ID     0x7E1
#define CAN_2_RSB_PWM_OUT_CH_1_LENGTH 1U
#define CAN_2_RSB_PWM_OUT_CH_1_IS_EXT false

#define CAN_2_RSB_PWM_OUT_CH_2_ID     0x7E2
#define CAN_2_RSB_PWM_OUT_CH_2_LENGTH 1U
#define CAN_2_RSB_PWM_OUT_CH_2_IS_EXT false

#define CAN_2_RSB_PWM_OUT_CH_3_ID     0x7E3
#define CAN_2_RSB_PWM_OUT_CH_3_LENGTH 1U
#define CAN_2_RSB_PWM_OUT_CH_3_IS_EXT false


/**
 * @struct can_2_vnav_tv_inputs
 * @brief Unpacked vnav_tv_inputs signal values
 *
 * @var can_2_vnav_tv_inputs::ax
 *     @brief ax. Unit: m/s/s, Start: 0, Scale: 0.0009155413138, Offset: -30, Range: -30 - 30 (Packed: 0 - 65535)
 * @var can_2_vnav_tv_inputs::ay
 *     @brief ay. Unit: m/s/s, Start: 16, Scale: 0.0009155413138, Offset: -30, Range: -30 - 30 (Packed: 0 - 65535)
 * @var can_2_vnav_tv_inputs::gz
 *     @brief gz. Unit: rad/s, Start: 32, Scale: 0.00010681315328, Offset: -3.5, Range: -3.5 - 3.5 (Packed: 0 - 65535)
 * @var can_2_vnav_tv_inputs::vx
 *     @brief vx. Unit: m/s, Start: 48, Scale: 0.00274674967955, Offset: -5, Range: -5 - 40 (Packed: 0 - 16383)
 * @var can_2_vnav_tv_inputs::vnav_status
 *     @brief vnav_status. Start: 62, Scale: 1, Offset: 0, Range: 0 - 2 (Packed: 0 - 2)
 */
struct can_2_vnav_tv_inputs {
    float ax;
    float ay;
    float gz;
    float vx;
    uint32_t vnav_status;
};

/**
 * @struct can_2_vnav_vel_accel
 * @brief Unpacked vnav_vel_accel signal values
 *
 * @var can_2_vnav_vel_accel::gx
 *     @brief gx. Unit: rad/s, Start: 0, Scale: 0.01176470588235, Offset: -1.5, Range: -1.5 - 1.5 (Packed: 0 - 255)
 * @var can_2_vnav_vel_accel::gy
 *     @brief gy. Unit: rad/s, Start: 8, Scale: 0.01176470588235, Offset: -1.5, Range: -1.5 - 1.5 (Packed: 0 - 255)
 * @var can_2_vnav_vel_accel::vy
 *     @brief vy. Unit: m/s, Start: 16, Scale: 0.11764705882353, Offset: -15, Range: -15 - 15 (Packed: 0 - 255)
 * @var can_2_vnav_vel_accel::vz
 *     @brief vz. Unit: m/s, Start: 24, Scale: 0.0156862745098, Offset: -2, Range: -2 - 2 (Packed: 0 - 255)
 * @var can_2_vnav_vel_accel::az
 *     @brief az. Unit: m/s/s, Start: 32, Scale: 0.00854700854701, Offset: -30, Range: -30 - 5 (Packed: 0 - 4095)
 * @var can_2_vnav_vel_accel::ins_mode
 *     @brief ins_mode. Start: 48, Scale: 1, Offset: 0, Range: 0 - 3 (Packed: 0 - 3)
 * @var can_2_vnav_vel_accel::gnss_heading_ins
 *     @brief gnss_heading_ins. Start: 50, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_2_vnav_vel_accel::gnss_err
 *     @brief gnss_err. Start: 51, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_2_vnav_vel_accel::gnss_fix
 *     @brief gnss_fix. Start: 52, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_2_vnav_vel_accel::imu_err
 *     @brief imu_err. Start: 53, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_2_vnav_vel_accel::mag_pres_err
 *     @brief mag_pres_err. Start: 54, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_2_vnav_vel_accel::vnav_active
 *     @brief vnav_active. Start: 55, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 */
struct can_2_vnav_vel_accel {
    float gx;
    float gy;
    float vy;
    float vz;
    float az;
    uint32_t ins_mode;
    bool gnss_heading_ins;
    bool gnss_err;
    bool gnss_fix;
    bool imu_err;
    bool mag_pres_err;
    bool vnav_active;
};

/**
 * @struct can_2_vnav_pos_stat
 * @brief Unpacked vnav_pos_stat signal values
 *
 * @var can_2_vnav_pos_stat::pos_latitude
 *     @brief pos_latitude. Unit: deg, Start: 0, Scale: 3.0518044e-07, Offset: -0.01, Range: -0.01 - 0.01 (Packed: 0 - 65535)
 * @var can_2_vnav_pos_stat::pos_longitude
 *     @brief pos_longitude. Unit: deg, Start: 16, Scale: 3.0518044e-07, Offset: -0.01, Range: -0.01 - 0.01 (Packed: 0 - 65535)
 * @var can_2_vnav_pos_stat::pos_altitude
 *     @brief pos_altitude. Unit: m, Start: 32, Scale: 0.3921568627451, Offset: -50, Range: -50 - 50 (Packed: 0 - 255)
 * @var can_2_vnav_pos_stat::v_east
 *     @brief v_east. Unit: m/s, Start: 40, Scale: 0.019536019536, Offset: -40, Range: -40 - 40 (Packed: 0 - 4095)
 * @var can_2_vnav_pos_stat::v_north
 *     @brief v_north. Unit: m/s, Start: 52, Scale: 0.019536019536, Offset: -40, Range: -40 - 40 (Packed: 0 - 4095)
 */
struct can_2_vnav_pos_stat {
    float pos_latitude;
    float pos_longitude;
    float pos_altitude;
    float v_east;
    float v_north;
};

/**
 * @struct can_2_vnav_status
 * @brief Unpacked vnav_status signal values
 *
 * @var can_2_vnav_status::time_since_start
 *     @brief time_since_start. Unit: ms, Start: 0, Scale: 1, Offset: 0, Range: 0 - 16777215 (Packed: 0 - 16777215)
 * @var can_2_vnav_status::vnav_gnss_fix_type
 *     @brief vnav_gnss_fix_type. Start: 24, Scale: 1, Offset: 0, Range: 0 - 6 (Packed: 0 - 6)
 * @var can_2_vnav_status::vnav_uart_err_parity
 *     @brief vnav_uart_err_parity. Start: 27, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_2_vnav_status::vnav_uart_err_noise
 *     @brief vnav_uart_err_noise. Start: 28, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_2_vnav_status::vnav_uart_err_frame
 *     @brief vnav_uart_err_frame. Start: 29, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_2_vnav_status::vnav_uart_err_overrun
 *     @brief vnav_uart_err_overrun. Start: 30, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_2_vnav_status::vnav_uart_err_dma
 *     @brief vnav_uart_err_dma. Start: 31, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_2_vnav_status::vnav_uart_err_rcvr_timeout
 *     @brief vnav_uart_err_rcvr_timeout. Start: 32, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_2_vnav_status::sensor_sat_ax
 *     @brief sensor_sat_ax. Start: 33, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_2_vnav_status::sensor_sat_ay
 *     @brief sensor_sat_ay. Start: 34, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_2_vnav_status::sensor_sat_az
 *     @brief sensor_sat_az. Start: 35, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_2_vnav_status::sensor_sat_gx
 *     @brief sensor_sat_gx. Start: 36, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_2_vnav_status::sensor_sat_gy
 *     @brief sensor_sat_gy. Start: 37, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_2_vnav_status::sensor_sat_gz
 *     @brief sensor_sat_gz. Start: 38, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_2_vnav_status::vnav_sync_out_timeout
 *     @brief vnav_sync_out_timeout. Start: 39, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_2_vnav_status::vnav_gnss_sat_cnt
 *     @brief vnav_gnss_sat_cnt. Start: 40, Scale: 1, Offset: 0, Range: 0 - 255 (Packed: 0 - 255)
 */
struct can_2_vnav_status {
    uint32_t time_since_start;
    uint32_t vnav_gnss_fix_type;
    bool vnav_uart_err_parity;
    bool vnav_uart_err_noise;
    bool vnav_uart_err_frame;
    bool vnav_uart_err_overrun;
    bool vnav_uart_err_dma;
    bool vnav_uart_err_rcvr_timeout;
    bool sensor_sat_ax;
    bool sensor_sat_ay;
    bool sensor_sat_az;
    bool sensor_sat_gx;
    bool sensor_sat_gy;
    bool sensor_sat_gz;
    bool vnav_sync_out_timeout;
    uint32_t vnav_gnss_sat_cnt;
};

/**
 * @struct can_2_safety_tv_mz
 * @brief Unpacked safety_tv_mz signal values
 *
 * @var can_2_safety_tv_mz::mz_raw
 *     @brief mz_raw. Start: 0, Scale: 0.04577636719, Offset: -1500, Range: -1500 - 1500 (Packed: 0 - 65536)
 * @var can_2_safety_tv_mz::mz_scaled
 *     @brief mz_scaled. Start: 16, Scale: 0.04577636719, Offset: -1500, Range: -1500 - 1500 (Packed: 0 - 65536)
 * @var can_2_safety_tv_mz::beta_est
 *     @brief beta_est. Start: 32, Scale: 6.103515625e-05, Offset: -2, Range: -2 - 2 (Packed: 0 - 65536)
 */
struct can_2_safety_tv_mz {
    float mz_raw;
    float mz_scaled;
    float beta_est;
};

/**
 * @struct can_2_safety_tv_ctrl_feedback
 * @brief Unpacked safety_tv_ctrl_feedback signal values
 *
 * @var can_2_safety_tv_ctrl_feedback::gz_target
 *     @brief gz_target. Unit: rad/s, Start: 0, Scale: 0.000191747598, Offset: -6.28318530717959, Range: -6.28318530717959 - 6.28299352775041 (Packed: 0 - 65535)
 * @var can_2_safety_tv_ctrl_feedback::tq_req_driver
 *     @brief tq_req_driver. Unit: N.m, Start: 16, Scale: 0.009765625, Offset: -40, Range: -40 - 40 (Packed: 0 - 8192)
 * @var can_2_safety_tv_ctrl_feedback::pwr_limit_tq_scale
 *     @brief pwr_limit_tq_scale. Start: 29, Scale: 0.0009765625, Offset: 0, Range: 0 - 1 (Packed: 0 - 1024)
 * @var can_2_safety_tv_ctrl_feedback::tq_split_tv
 *     @brief tq_split_tv. Start: 40, Scale: 0.009765625, Offset: -40, Range: -40 - 40 (Packed: 0 - 8192)
 */
struct can_2_safety_tv_ctrl_feedback {
    float gz_target;
    float tq_req_driver;
    float pwr_limit_tq_scale;
    float tq_split_tv;
};

/**
 * @struct can_2_safety_tv_inputs_filt
 * @brief Unpacked safety_tv_inputs_filt signal values
 *
 * @var can_2_safety_tv_inputs_filt::ax_filt
 *     @brief ax_filt. Unit: m/s/s, Start: 0, Scale: 0.000915541313802, Offset: -30, Range: -30 - 30 (Packed: 0 - 65535)
 * @var can_2_safety_tv_inputs_filt::ay_filt
 *     @brief ay_filt. Unit: m/s/s, Start: 16, Scale: 0.000915541313802, Offset: -30, Range: -30 - 30 (Packed: 0 - 65535)
 * @var can_2_safety_tv_inputs_filt::vx_filt
 *     @brief vx_filt. Unit: m/s, Start: 32, Scale: 0.002746749679546, Offset: -5, Range: -5 - 40 (Packed: 0 - 16383)
 * @var can_2_safety_tv_inputs_filt::gz_filt
 *     @brief gz_filt. Unit: rad/s, Start: 48, Scale: 0.000106837607, Offset: -3.5, Range: -3.5 - 3.5 (Packed: 0 - 65520)
 */
struct can_2_safety_tv_inputs_filt {
    float ax_filt;
    float ay_filt;
    float vx_filt;
    float gz_filt;
};

/**
 * @struct can_2_safety_tv_pwr
 * @brief Unpacked safety_tv_pwr signal values
 *
 * @var can_2_safety_tv_pwr::tq_rr_pre_pwr_limit
 *     @brief tq_rr_pre_pwr_limit. Unit: N.m, Start: 0, Scale: 0.011233211233211, Offset: -23, Range: -23 - 23 (Packed: 0 - 4095)
 * @var can_2_safety_tv_pwr::tq_rl_pre_pwr_limit
 *     @brief tq_rl_pre_pwr_limit. Unit: N.m, Start: 12, Scale: 0.011233211233211, Offset: -23, Range: -23 - 23 (Packed: 0 - 4095)
 * @var can_2_safety_tv_pwr::tq_fr_pre_pwr_limit
 *     @brief tq_fr_pre_pwr_limit. Unit: N.m, Start: 24, Scale: 0.011233211233211, Offset: -23, Range: -23 - 23 (Packed: 0 - 4095)
 * @var can_2_safety_tv_pwr::tq_fl_pre_pwr_limit
 *     @brief tq_fl_pre_pwr_limit. Unit: N.m, Start: 36, Scale: 0.011233211233211, Offset: -23, Range: -23 - 23 (Packed: 0 - 4095)
 * @var can_2_safety_tv_pwr::pwr_tv_estimate
 *     @brief pwr_tv_estimate. Unit: kW, Start: 48, Scale: 0.068376068376068, Offset: -140, Range: -140 - 140 (Packed: 0 - 4095)
 */
struct can_2_safety_tv_pwr {
    float tq_rr_pre_pwr_limit;
    float tq_rl_pre_pwr_limit;
    float tq_fr_pre_pwr_limit;
    float tq_fl_pre_pwr_limit;
    float pwr_tv_estimate;
};

/**
 * @struct can_2_safety_tv_speed_filt
 * @brief Unpacked safety_tv_speed_filt signal values
 *
 * @var can_2_safety_tv_speed_filt::spd_rr_filt
 *     @brief spd_rr_filt. Unit: rpm, Start: 0, Scale: 0.343327992675669, Offset: -500, Range: -500 - 22000 (Packed: 0 - 65535)
 * @var can_2_safety_tv_speed_filt::spd_rl_filt
 *     @brief spd_rl_filt. Unit: rpm, Start: 16, Scale: 0.343327992675669, Offset: -500, Range: -500 - 22000 (Packed: 0 - 65535)
 * @var can_2_safety_tv_speed_filt::spd_fr_filt
 *     @brief spd_fr_filt. Unit: rpm, Start: 32, Scale: 0.343327992675669, Offset: -500, Range: -500 - 22000 (Packed: 0 - 65535)
 * @var can_2_safety_tv_speed_filt::spd_fl_filt
 *     @brief spd_fl_filt. Unit: rpm, Start: 48, Scale: 0.343327992675669, Offset: -500, Range: -500 - 22000 (Packed: 0 - 65535)
 */
struct can_2_safety_tv_speed_filt {
    float spd_rr_filt;
    float spd_rl_filt;
    float spd_fr_filt;
    float spd_fl_filt;
};

/**
 * @struct can_2_safety_tv_gains
 * @brief Unpacked safety_tv_gains signal values
 *
 * @var can_2_safety_tv_gains::loss_scalar_tv
 *     @brief loss_scalar_tv. Start: 0, Scale: 0.001953125, Offset: 0, Range: 0 - 2 (Packed: 0 - 1024)
 * @var can_2_safety_tv_gains::inverter_efficiency
 *     @brief inverter_efficiency. Start: 10, Scale: 0.0009765625, Offset: 0, Range: 0 - 1 (Packed: 0 - 1024)
 * @var can_2_safety_tv_gains::vy_filt
 *     @brief vy_filt. Unit: m/s, Start: 20, Scale: 0.0073529411764706, Offset: -15, Range: -15 - 15 (Packed: 0 - 4080)
 * @var can_2_safety_tv_gains::tv_ku
 *     @brief tv_ku. Start: 32, Scale: 0.009765625, Offset: -10, Range: -10 - 10 (Packed: 0 - 2048)
 */
struct can_2_safety_tv_gains {
    float loss_scalar_tv;
    float inverter_efficiency;
    float vy_filt;
    float tv_ku;
};

/**
 * @struct can_2_safety_tv_regen_tq
 * @brief Unpacked safety_tv_regen_tq signal values
 *
 * @var can_2_safety_tv_regen_tq::tq_regen_rr
 *     @brief tq_regen_rr. Unit: N.m, Start: 0, Scale: 0.000701904297, Offset: -23, Range: -23 - 23 (Packed: 0 - 65536)
 * @var can_2_safety_tv_regen_tq::tq_regen_rl
 *     @brief tq_regen_rl. Unit: N.m, Start: 16, Scale: 0.000701904297, Offset: -23, Range: -23 - 23 (Packed: 0 - 65536)
 * @var can_2_safety_tv_regen_tq::tq_regen_fr
 *     @brief tq_regen_fr. Unit: N.m, Start: 32, Scale: 0.000701904297, Offset: -23, Range: -23 - 23 (Packed: 0 - 65536)
 * @var can_2_safety_tv_regen_tq::tq_regen_fl
 *     @brief tq_regen_fl. Unit: N.m, Start: 48, Scale: 0.000701904297, Offset: -23, Range: -23 - 23 (Packed: 0 - 65536)
 */
struct can_2_safety_tv_regen_tq {
    float tq_regen_rr;
    float tq_regen_rl;
    float tq_regen_fr;
    float tq_regen_fl;
};

/**
 * @struct can_2_fsb_analog_ch_1
 * @brief Unpacked fsb_analog_ch_1 signal values
 *
 * @var can_2_fsb_analog_ch_1::v_fsb_analog_ch1
 *     @brief v_fsb_analog_ch1. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct can_2_fsb_analog_ch_1 {
    float v_fsb_analog_ch1;
};

/**
 * @struct can_2_fsb_analog_ch_2
 * @brief Unpacked fsb_analog_ch_2 signal values
 *
 * @var can_2_fsb_analog_ch_2::v_fsb_analog_ch2
 *     @brief v_fsb_analog_ch2. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct can_2_fsb_analog_ch_2 {
    float v_fsb_analog_ch2;
};

/**
 * @struct can_2_fsb_analog_ch_3
 * @brief Unpacked fsb_analog_ch_3 signal values
 *
 * @var can_2_fsb_analog_ch_3::v_fsb_analog_ch3
 *     @brief v_fsb_analog_ch3. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct can_2_fsb_analog_ch_3 {
    float v_fsb_analog_ch3;
};

/**
 * @struct can_2_fsb_analog_ch_4
 * @brief Unpacked fsb_analog_ch_4 signal values
 *
 * @var can_2_fsb_analog_ch_4::v_fsb_fl_ride_height
 *     @brief v_fsb_fl_ride_height. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct can_2_fsb_analog_ch_4 {
    float v_fsb_fl_ride_height;
};

/**
 * @struct can_2_fsb_analog_ch_5
 * @brief Unpacked fsb_analog_ch_5 signal values
 *
 * @var can_2_fsb_analog_ch_5::v_fsb_analog_ch5
 *     @brief v_fsb_analog_ch5. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct can_2_fsb_analog_ch_5 {
    float v_fsb_analog_ch5;
};

/**
 * @struct can_2_fsb_analog_ch_6
 * @brief Unpacked fsb_analog_ch_6 signal values
 *
 * @var can_2_fsb_analog_ch_6::v_fsb_analog_ch6
 *     @brief v_fsb_analog_ch6. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct can_2_fsb_analog_ch_6 {
    float v_fsb_analog_ch6;
};

/**
 * @struct can_2_fsb_analog_ch_7
 * @brief Unpacked fsb_analog_ch_7 signal values
 *
 * @var can_2_fsb_analog_ch_7::v_fsb_f_heave_lpot
 *     @brief v_fsb_f_heave_lpot. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct can_2_fsb_analog_ch_7 {
    float v_fsb_f_heave_lpot;
};

/**
 * @struct can_2_fsb_analog_ch_8
 * @brief Unpacked fsb_analog_ch_8 signal values
 *
 * @var can_2_fsb_analog_ch_8::v_fsb_pitot_tube
 *     @brief v_fsb_pitot_tube. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct can_2_fsb_analog_ch_8 {
    float v_fsb_pitot_tube;
};

/**
 * @struct can_2_fsb_analog_ch_9
 * @brief Unpacked fsb_analog_ch_9 signal values
 *
 * @var can_2_fsb_analog_ch_9::v_fsb_analog_ch9
 *     @brief v_fsb_analog_ch9. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct can_2_fsb_analog_ch_9 {
    float v_fsb_analog_ch9;
};

/**
 * @struct can_2_fsb_analog_ch_10
 * @brief Unpacked fsb_analog_ch_10 signal values
 *
 * @var can_2_fsb_analog_ch_10::v_fsb_analog_ch10
 *     @brief v_fsb_analog_ch10. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct can_2_fsb_analog_ch_10 {
    float v_fsb_analog_ch10;
};

/**
 * @struct can_2_fsb_analog_ch_11
 * @brief Unpacked fsb_analog_ch_11 signal values
 *
 * @var can_2_fsb_analog_ch_11::v_fsb_fr_ride_height
 *     @brief v_fsb_fr_ride_height. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct can_2_fsb_analog_ch_11 {
    float v_fsb_fr_ride_height;
};

/**
 * @struct can_2_fsb_analog_ch_12
 * @brief Unpacked fsb_analog_ch_12 signal values
 *
 * @var can_2_fsb_analog_ch_12::v_fsb_steering_lpot
 *     @brief v_fsb_steering_lpot. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct can_2_fsb_analog_ch_12 {
    float v_fsb_steering_lpot;
};

/**
 * @struct can_2_fsb_analog_ch_13
 * @brief Unpacked fsb_analog_ch_13 signal values
 *
 * @var can_2_fsb_analog_ch_13::v_fsb_f_roll_lpot
 *     @brief v_fsb_f_roll_lpot. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct can_2_fsb_analog_ch_13 {
    float v_fsb_f_roll_lpot;
};

/**
 * @struct can_2_fsb_analog_ch_14
 * @brief Unpacked fsb_analog_ch_14 signal values
 *
 * @var can_2_fsb_analog_ch_14::v_fsb_fr_oil_temp
 *     @brief v_fsb_fr_oil_temp. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct can_2_fsb_analog_ch_14 {
    float v_fsb_fr_oil_temp;
};

/**
 * @struct can_2_fsb_analog_ch_15
 * @brief Unpacked fsb_analog_ch_15 signal values
 *
 * @var can_2_fsb_analog_ch_15::v_fsb_motor_inlet_temp
 *     @brief v_fsb_motor_inlet_temp. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct can_2_fsb_analog_ch_15 {
    float v_fsb_motor_inlet_temp;
};

/**
 * @struct can_2_fsb_analog_ch_16
 * @brief Unpacked fsb_analog_ch_16 signal values
 *
 * @var can_2_fsb_analog_ch_16::v_fsb_motor_outlet_temp
 *     @brief v_fsb_motor_outlet_temp. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct can_2_fsb_analog_ch_16 {
    float v_fsb_motor_outlet_temp;
};

/**
 * @struct can_2_fsb_analog_ch_17
 * @brief Unpacked fsb_analog_ch_17 signal values
 *
 * @var can_2_fsb_analog_ch_17::v_fsb_fl_oil_temp
 *     @brief v_fsb_fl_oil_temp. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct can_2_fsb_analog_ch_17 {
    float v_fsb_fl_oil_temp;
};

/**
 * @struct can_2_fsb_pwm_in_ch_1
 * @brief Unpacked fsb_pwm_in_ch_1 signal values
 *
 * @var can_2_fsb_pwm_in_ch_1::duty_pwm_in_fsb_ch1
 *     @brief duty_pwm_in_fsb_ch1. Unit: %, Start: 0, Scale: 1, Offset: 0, Range: 0 - 255 (Packed: 0 - 255)
 * @var can_2_fsb_pwm_in_ch_1::hz_pwm_in_fsb_ch1
 *     @brief hz_pwm_in_fsb_ch1. Unit: Hz, Start: 8, Scale: 0.01, Offset: 0, Range: 0 - 655.35 (Packed: 0 - 65535)
 */
struct can_2_fsb_pwm_in_ch_1 {
    uint32_t duty_pwm_in_fsb_ch1;
    float hz_pwm_in_fsb_ch1;
};

/**
 * @struct can_2_fsb_pwm_in_ch_2
 * @brief Unpacked fsb_pwm_in_ch_2 signal values
 *
 * @var can_2_fsb_pwm_in_ch_2::duty_pwm_in_fsb_ch2
 *     @brief duty_pwm_in_fsb_ch2. Unit: %, Start: 0, Scale: 1, Offset: 0, Range: 0 - 255 (Packed: 0 - 255)
 * @var can_2_fsb_pwm_in_ch_2::hz_pwm_in_fsb_ch2
 *     @brief hz_pwm_in_fsb_ch2. Unit: Hz, Start: 8, Scale: 0.01, Offset: 0, Range: 0 - 655.35 (Packed: 0 - 65535)
 */
struct can_2_fsb_pwm_in_ch_2 {
    uint32_t duty_pwm_in_fsb_ch2;
    float hz_pwm_in_fsb_ch2;
};

/**
 * @struct can_2_fsb_pwm_in_ch_3
 * @brief Unpacked fsb_pwm_in_ch_3 signal values
 *
 * @var can_2_fsb_pwm_in_ch_3::duty_pwm_in_fsb_ch3
 *     @brief duty_pwm_in_fsb_ch3. Unit: %, Start: 0, Scale: 1, Offset: 0, Range: 0 - 255 (Packed: 0 - 255)
 * @var can_2_fsb_pwm_in_ch_3::hz_pwm_in_fsb_ch3
 *     @brief hz_pwm_in_fsb_ch3. Unit: Hz, Start: 8, Scale: 0.01, Offset: 0, Range: 0 - 655.35 (Packed: 0 - 65535)
 */
struct can_2_fsb_pwm_in_ch_3 {
    uint32_t duty_pwm_in_fsb_ch3;
    float hz_pwm_in_fsb_ch3;
};

/**
 * @struct can_2_fsb_pwm_out_ch_1
 * @brief Unpacked fsb_pwm_out_ch_1 signal values
 *
 * @var can_2_fsb_pwm_out_ch_1::duty_pwm_out_fsb_ch1
 *     @brief duty_pwm_out_fsb_ch1. Unit: %, Start: 0, Scale: 1, Offset: 0, Range: 0 - 100 (Packed: 0 - 100)
 */
struct can_2_fsb_pwm_out_ch_1 {
    uint32_t duty_pwm_out_fsb_ch1;
};

/**
 * @struct can_2_fsb_pwm_out_ch_2
 * @brief Unpacked fsb_pwm_out_ch_2 signal values
 *
 * @var can_2_fsb_pwm_out_ch_2::duty_pwm_out_fsb_ch2
 *     @brief duty_pwm_out_fsb_ch2. Unit: %, Start: 0, Scale: 1, Offset: 0, Range: 0 - 100 (Packed: 0 - 100)
 */
struct can_2_fsb_pwm_out_ch_2 {
    uint32_t duty_pwm_out_fsb_ch2;
};

/**
 * @struct can_2_fsb_pwm_out_ch_3
 * @brief Unpacked fsb_pwm_out_ch_3 signal values
 *
 * @var can_2_fsb_pwm_out_ch_3::duty_pwm_out_fsb_ch3
 *     @brief duty_pwm_out_fsb_ch3. Unit: %, Start: 0, Scale: 1, Offset: 0, Range: 0 - 100 (Packed: 0 - 100)
 */
struct can_2_fsb_pwm_out_ch_3 {
    uint32_t duty_pwm_out_fsb_ch3;
};

/**
 * @struct can_2_rsb_analog_ch_1
 * @brief Unpacked rsb_analog_ch_1 signal values
 *
 * @var can_2_rsb_analog_ch_1::v_rsb_analog_ch1
 *     @brief v_rsb_analog_ch1. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct can_2_rsb_analog_ch_1 {
    float v_rsb_analog_ch1;
};

/**
 * @struct can_2_rsb_analog_ch_2
 * @brief Unpacked rsb_analog_ch_2 signal values
 *
 * @var can_2_rsb_analog_ch_2::v_rsb_analog_ch2
 *     @brief v_rsb_analog_ch2. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct can_2_rsb_analog_ch_2 {
    float v_rsb_analog_ch2;
};

/**
 * @struct can_2_rsb_analog_ch_3
 * @brief Unpacked rsb_analog_ch_3 signal values
 *
 * @var can_2_rsb_analog_ch_3::v_rsb_rl_motor_out_temp
 *     @brief v_rsb_rl_motor_out_temp. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct can_2_rsb_analog_ch_3 {
    float v_rsb_rl_motor_out_temp;
};

/**
 * @struct can_2_rsb_analog_ch_4
 * @brief Unpacked rsb_analog_ch_4 signal values
 *
 * @var can_2_rsb_analog_ch_4::v_rsb_rl_ride_height
 *     @brief v_rsb_rl_ride_height. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct can_2_rsb_analog_ch_4 {
    float v_rsb_rl_ride_height;
};

/**
 * @struct can_2_rsb_analog_ch_5
 * @brief Unpacked rsb_analog_ch_5 signal values
 *
 * @var can_2_rsb_analog_ch_5::v_rsb_analog_ch5
 *     @brief v_rsb_analog_ch5. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct can_2_rsb_analog_ch_5 {
    float v_rsb_analog_ch5;
};

/**
 * @struct can_2_rsb_analog_ch_6
 * @brief Unpacked rsb_analog_ch_6 signal values
 *
 * @var can_2_rsb_analog_ch_6::v_rsb_analog_ch6
 *     @brief v_rsb_analog_ch6. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct can_2_rsb_analog_ch_6 {
    float v_rsb_analog_ch6;
};

/**
 * @struct can_2_rsb_analog_ch_7
 * @brief Unpacked rsb_analog_ch_7 signal values
 *
 * @var can_2_rsb_analog_ch_7::v_rsb_r_heave_lpot
 *     @brief v_rsb_r_heave_lpot. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct can_2_rsb_analog_ch_7 {
    float v_rsb_r_heave_lpot;
};

/**
 * @struct can_2_rsb_analog_ch_8
 * @brief Unpacked rsb_analog_ch_8 signal values
 *
 * @var can_2_rsb_analog_ch_8::v_rsb_analog_ch8
 *     @brief v_rsb_analog_ch8. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct can_2_rsb_analog_ch_8 {
    float v_rsb_analog_ch8;
};

/**
 * @struct can_2_rsb_analog_ch_9
 * @brief Unpacked rsb_analog_ch_9 signal values
 *
 * @var can_2_rsb_analog_ch_9::v_rsb_pump_temp
 *     @brief v_rsb_pump_temp. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct can_2_rsb_analog_ch_9 {
    float v_rsb_pump_temp;
};

/**
 * @struct can_2_rsb_analog_ch_10
 * @brief Unpacked rsb_analog_ch_10 signal values
 *
 * @var can_2_rsb_analog_ch_10::v_rsb_rl_motor_in_temp
 *     @brief v_rsb_rl_motor_in_temp. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct can_2_rsb_analog_ch_10 {
    float v_rsb_rl_motor_in_temp;
};

/**
 * @struct can_2_rsb_analog_ch_11
 * @brief Unpacked rsb_analog_ch_11 signal values
 *
 * @var can_2_rsb_analog_ch_11::v_rsb_rr_ride_height
 *     @brief v_rsb_rr_ride_height. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct can_2_rsb_analog_ch_11 {
    float v_rsb_rr_ride_height;
};

/**
 * @struct can_2_rsb_analog_ch_12
 * @brief Unpacked rsb_analog_ch_12 signal values
 *
 * @var can_2_rsb_analog_ch_12::v_rsb_analog_ch12
 *     @brief v_rsb_analog_ch12. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct can_2_rsb_analog_ch_12 {
    float v_rsb_analog_ch12;
};

/**
 * @struct can_2_rsb_analog_ch_13
 * @brief Unpacked rsb_analog_ch_13 signal values
 *
 * @var can_2_rsb_analog_ch_13::v_rsb_r_roll_lpot
 *     @brief v_rsb_r_roll_lpot. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct can_2_rsb_analog_ch_13 {
    float v_rsb_r_roll_lpot;
};

/**
 * @struct can_2_rsb_analog_ch_14
 * @brief Unpacked rsb_analog_ch_14 signal values
 *
 * @var can_2_rsb_analog_ch_14::v_rsb_rr_oil_temp
 *     @brief v_rsb_rr_oil_temp. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct can_2_rsb_analog_ch_14 {
    float v_rsb_rr_oil_temp;
};

/**
 * @struct can_2_rsb_analog_ch_15
 * @brief Unpacked rsb_analog_ch_15 signal values
 *
 * @var can_2_rsb_analog_ch_15::v_rsb_coldplate_in_temp
 *     @brief v_rsb_coldplate_in_temp. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct can_2_rsb_analog_ch_15 {
    float v_rsb_coldplate_in_temp;
};

/**
 * @struct can_2_rsb_analog_ch_16
 * @brief Unpacked rsb_analog_ch_16 signal values
 *
 * @var can_2_rsb_analog_ch_16::v_rsb_coldplate_out_temp
 *     @brief v_rsb_coldplate_out_temp. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct can_2_rsb_analog_ch_16 {
    float v_rsb_coldplate_out_temp;
};

/**
 * @struct can_2_rsb_analog_ch_17
 * @brief Unpacked rsb_analog_ch_17 signal values
 *
 * @var can_2_rsb_analog_ch_17::v_rsb_rr_oil_temp
 *     @brief v_rsb_rr_oil_temp. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct can_2_rsb_analog_ch_17 {
    float v_rsb_rr_oil_temp;
};

/**
 * @struct can_2_rsb_pwm_in_ch_1
 * @brief Unpacked rsb_pwm_in_ch_1 signal values
 *
 * @var can_2_rsb_pwm_in_ch_1::duty_pwm_in_rsb_ch1
 *     @brief duty_pwm_in_rsb_ch1. Unit: %, Start: 0, Scale: 1, Offset: 0, Range: 0 - 255 (Packed: 0 - 255)
 * @var can_2_rsb_pwm_in_ch_1::hz_pwm_in_rsb_ch1
 *     @brief hz_pwm_in_rsb_ch1. Unit: Hz, Start: 8, Scale: 0.01, Offset: 0, Range: 0 - 655.35 (Packed: 0 - 65535)
 */
struct can_2_rsb_pwm_in_ch_1 {
    uint32_t duty_pwm_in_rsb_ch1;
    float hz_pwm_in_rsb_ch1;
};

/**
 * @struct can_2_rsb_pwm_in_ch_2
 * @brief Unpacked rsb_pwm_in_ch_2 signal values
 *
 * @var can_2_rsb_pwm_in_ch_2::duty_pwm_in_rsb_ch2
 *     @brief duty_pwm_in_rsb_ch2. Unit: %, Start: 0, Scale: 1, Offset: 0, Range: 0 - 255 (Packed: 0 - 255)
 * @var can_2_rsb_pwm_in_ch_2::hz_pwm_in_rsb_ch2
 *     @brief hz_pwm_in_rsb_ch2. Unit: Hz, Start: 8, Scale: 0.01, Offset: 0, Range: 0 - 655.35 (Packed: 0 - 65535)
 */
struct can_2_rsb_pwm_in_ch_2 {
    uint32_t duty_pwm_in_rsb_ch2;
    float hz_pwm_in_rsb_ch2;
};

/**
 * @struct can_2_rsb_pwm_in_ch_3
 * @brief Unpacked rsb_pwm_in_ch_3 signal values
 *
 * @var can_2_rsb_pwm_in_ch_3::duty_pwm_in_rsb_ch3
 *     @brief duty_pwm_in_rsb_ch3. Unit: %, Start: 0, Scale: 1, Offset: 0, Range: 0 - 255 (Packed: 0 - 255)
 * @var can_2_rsb_pwm_in_ch_3::hz_pwm_in_rsb_ch3
 *     @brief hz_pwm_in_rsb_ch3. Unit: Hz, Start: 8, Scale: 0.01, Offset: 0, Range: 0 - 655.35 (Packed: 0 - 65535)
 */
struct can_2_rsb_pwm_in_ch_3 {
    uint32_t duty_pwm_in_rsb_ch3;
    float hz_pwm_in_rsb_ch3;
};

/**
 * @struct can_2_rsb_pwm_out_ch_1
 * @brief Unpacked rsb_pwm_out_ch_1 signal values
 *
 * @var can_2_rsb_pwm_out_ch_1::duty_pwm_out_rsb_ch1
 *     @brief duty_pwm_out_rsb_ch1. Unit: %, Start: 0, Scale: 1, Offset: 0, Range: 0 - 100 (Packed: 0 - 100)
 */
struct can_2_rsb_pwm_out_ch_1 {
    uint32_t duty_pwm_out_rsb_ch1;
};

/**
 * @struct can_2_rsb_pwm_out_ch_2
 * @brief Unpacked rsb_pwm_out_ch_2 signal values
 *
 * @var can_2_rsb_pwm_out_ch_2::duty_pwm_out_rsb_ch2
 *     @brief duty_pwm_out_rsb_ch2. Unit: %, Start: 0, Scale: 1, Offset: 0, Range: 0 - 100 (Packed: 0 - 100)
 */
struct can_2_rsb_pwm_out_ch_2 {
    uint32_t duty_pwm_out_rsb_ch2;
};

/**
 * @struct can_2_rsb_pwm_out_ch_3
 * @brief Unpacked rsb_pwm_out_ch_3 signal values
 *
 * @var can_2_rsb_pwm_out_ch_3::duty_pwm_out_rsb_ch3
 *     @brief duty_pwm_out_rsb_ch3. Unit: %, Start: 0, Scale: 1, Offset: 0, Range: 0 - 100 (Packed: 0 - 100)
 */
struct can_2_rsb_pwm_out_ch_3 {
    uint32_t duty_pwm_out_rsb_ch3;
};


/**
 * @struct can_2_vnav_tv_inputs_packed
 * @brief Packed vnav_tv_inputs signal values
 *
 * @var can_2_vnav_tv_inputs::ax
 *     @brief ax. Unit: m/s/s, Start: 0, Scale: 0.0009155413138, Offset: -30, Range: -30 - 30 (Packed: 0 - 65535)
 * @var can_2_vnav_tv_inputs::ay
 *     @brief ay. Unit: m/s/s, Start: 16, Scale: 0.0009155413138, Offset: -30, Range: -30 - 30 (Packed: 0 - 65535)
 * @var can_2_vnav_tv_inputs::gz
 *     @brief gz. Unit: rad/s, Start: 32, Scale: 0.00010681315328, Offset: -3.5, Range: -3.5 - 3.5 (Packed: 0 - 65535)
 * @var can_2_vnav_tv_inputs::vx
 *     @brief vx. Unit: m/s, Start: 48, Scale: 0.00274674967955, Offset: -5, Range: -5 - 40 (Packed: 0 - 16383)
 * @var can_2_vnav_tv_inputs::vnav_status
 *     @brief vnav_status. Start: 62, Scale: 1, Offset: 0, Range: 0 - 2 (Packed: 0 - 2)
 */
struct __attribute__((packed)) can_2_vnav_tv_inputs_packed {
    uint16_t ax : 16;
    uint16_t ay : 16;
    uint16_t gz : 16;
    uint16_t vx : 14;
    uint8_t vnav_status : 2;
};

/**
 * @struct can_2_vnav_vel_accel_packed
 * @brief Packed vnav_vel_accel signal values
 *
 * @var can_2_vnav_vel_accel::gx
 *     @brief gx. Unit: rad/s, Start: 0, Scale: 0.01176470588235, Offset: -1.5, Range: -1.5 - 1.5 (Packed: 0 - 255)
 * @var can_2_vnav_vel_accel::gy
 *     @brief gy. Unit: rad/s, Start: 8, Scale: 0.01176470588235, Offset: -1.5, Range: -1.5 - 1.5 (Packed: 0 - 255)
 * @var can_2_vnav_vel_accel::vy
 *     @brief vy. Unit: m/s, Start: 16, Scale: 0.11764705882353, Offset: -15, Range: -15 - 15 (Packed: 0 - 255)
 * @var can_2_vnav_vel_accel::vz
 *     @brief vz. Unit: m/s, Start: 24, Scale: 0.0156862745098, Offset: -2, Range: -2 - 2 (Packed: 0 - 255)
 * @var can_2_vnav_vel_accel::az
 *     @brief az. Unit: m/s/s, Start: 32, Scale: 0.00854700854701, Offset: -30, Range: -30 - 5 (Packed: 0 - 4095)
 * @var can_2_vnav_vel_accel::ins_mode
 *     @brief ins_mode. Start: 48, Scale: 1, Offset: 0, Range: 0 - 3 (Packed: 0 - 3)
 * @var can_2_vnav_vel_accel::gnss_heading_ins
 *     @brief gnss_heading_ins. Start: 50, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_2_vnav_vel_accel::gnss_err
 *     @brief gnss_err. Start: 51, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_2_vnav_vel_accel::gnss_fix
 *     @brief gnss_fix. Start: 52, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_2_vnav_vel_accel::imu_err
 *     @brief imu_err. Start: 53, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_2_vnav_vel_accel::mag_pres_err
 *     @brief mag_pres_err. Start: 54, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_2_vnav_vel_accel::vnav_active
 *     @brief vnav_active. Start: 55, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 */
struct __attribute__((packed)) can_2_vnav_vel_accel_packed {
    uint8_t gx : 8;
    uint8_t gy : 8;
    uint8_t vy : 8;
    uint8_t vz : 8;
    uint16_t az : 12;
    uint8_t _padding_0 : 4;
    uint8_t ins_mode : 2;
    uint8_t gnss_heading_ins : 1;
    uint8_t gnss_err : 1;
    uint8_t gnss_fix : 1;
    uint8_t imu_err : 1;
    uint8_t mag_pres_err : 1;
    uint8_t vnav_active : 1;
};

/**
 * @struct can_2_vnav_pos_stat_packed
 * @brief Packed vnav_pos_stat signal values
 *
 * @var can_2_vnav_pos_stat::pos_latitude
 *     @brief pos_latitude. Unit: deg, Start: 0, Scale: 3.0518044e-07, Offset: -0.01, Range: -0.01 - 0.01 (Packed: 0 - 65535)
 * @var can_2_vnav_pos_stat::pos_longitude
 *     @brief pos_longitude. Unit: deg, Start: 16, Scale: 3.0518044e-07, Offset: -0.01, Range: -0.01 - 0.01 (Packed: 0 - 65535)
 * @var can_2_vnav_pos_stat::pos_altitude
 *     @brief pos_altitude. Unit: m, Start: 32, Scale: 0.3921568627451, Offset: -50, Range: -50 - 50 (Packed: 0 - 255)
 * @var can_2_vnav_pos_stat::v_east
 *     @brief v_east. Unit: m/s, Start: 40, Scale: 0.019536019536, Offset: -40, Range: -40 - 40 (Packed: 0 - 4095)
 * @var can_2_vnav_pos_stat::v_north
 *     @brief v_north. Unit: m/s, Start: 52, Scale: 0.019536019536, Offset: -40, Range: -40 - 40 (Packed: 0 - 4095)
 */
struct __attribute__((packed)) can_2_vnav_pos_stat_packed {
    uint16_t pos_latitude : 16;
    uint16_t pos_longitude : 16;
    uint8_t pos_altitude : 8;
    uint16_t v_east : 12;
    uint16_t v_north : 12;
};

/**
 * @struct can_2_vnav_status_packed
 * @brief Packed vnav_status signal values
 *
 * @var can_2_vnav_status::time_since_start
 *     @brief time_since_start. Unit: ms, Start: 0, Scale: 1, Offset: 0, Range: 0 - 16777215 (Packed: 0 - 16777215)
 * @var can_2_vnav_status::vnav_gnss_fix_type
 *     @brief vnav_gnss_fix_type. Start: 24, Scale: 1, Offset: 0, Range: 0 - 6 (Packed: 0 - 6)
 * @var can_2_vnav_status::vnav_uart_err_parity
 *     @brief vnav_uart_err_parity. Start: 27, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_2_vnav_status::vnav_uart_err_noise
 *     @brief vnav_uart_err_noise. Start: 28, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_2_vnav_status::vnav_uart_err_frame
 *     @brief vnav_uart_err_frame. Start: 29, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_2_vnav_status::vnav_uart_err_overrun
 *     @brief vnav_uart_err_overrun. Start: 30, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_2_vnav_status::vnav_uart_err_dma
 *     @brief vnav_uart_err_dma. Start: 31, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_2_vnav_status::vnav_uart_err_rcvr_timeout
 *     @brief vnav_uart_err_rcvr_timeout. Start: 32, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_2_vnav_status::sensor_sat_ax
 *     @brief sensor_sat_ax. Start: 33, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_2_vnav_status::sensor_sat_ay
 *     @brief sensor_sat_ay. Start: 34, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_2_vnav_status::sensor_sat_az
 *     @brief sensor_sat_az. Start: 35, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_2_vnav_status::sensor_sat_gx
 *     @brief sensor_sat_gx. Start: 36, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_2_vnav_status::sensor_sat_gy
 *     @brief sensor_sat_gy. Start: 37, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_2_vnav_status::sensor_sat_gz
 *     @brief sensor_sat_gz. Start: 38, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_2_vnav_status::vnav_sync_out_timeout
 *     @brief vnav_sync_out_timeout. Start: 39, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_2_vnav_status::vnav_gnss_sat_cnt
 *     @brief vnav_gnss_sat_cnt. Start: 40, Scale: 1, Offset: 0, Range: 0 - 255 (Packed: 0 - 255)
 */
struct __attribute__((packed)) can_2_vnav_status_packed {
    uint32_t time_since_start : 24;
    uint8_t vnav_gnss_fix_type : 3;
    uint8_t vnav_uart_err_parity : 1;
    uint8_t vnav_uart_err_noise : 1;
    uint8_t vnav_uart_err_frame : 1;
    uint8_t vnav_uart_err_overrun : 1;
    uint8_t vnav_uart_err_dma : 1;
    uint8_t vnav_uart_err_rcvr_timeout : 1;
    uint8_t sensor_sat_ax : 1;
    uint8_t sensor_sat_ay : 1;
    uint8_t sensor_sat_az : 1;
    uint8_t sensor_sat_gx : 1;
    uint8_t sensor_sat_gy : 1;
    uint8_t sensor_sat_gz : 1;
    uint8_t vnav_sync_out_timeout : 1;
    uint8_t vnav_gnss_sat_cnt : 8;
};

/**
 * @struct can_2_safety_tv_mz_packed
 * @brief Packed safety_tv_mz signal values
 *
 * @var can_2_safety_tv_mz::mz_raw
 *     @brief mz_raw. Start: 0, Scale: 0.04577636719, Offset: -1500, Range: -1500 - 1500 (Packed: 0 - 65536)
 * @var can_2_safety_tv_mz::mz_scaled
 *     @brief mz_scaled. Start: 16, Scale: 0.04577636719, Offset: -1500, Range: -1500 - 1500 (Packed: 0 - 65536)
 * @var can_2_safety_tv_mz::beta_est
 *     @brief beta_est. Start: 32, Scale: 6.103515625e-05, Offset: -2, Range: -2 - 2 (Packed: 0 - 65536)
 */
struct __attribute__((packed)) can_2_safety_tv_mz_packed {
    uint16_t mz_raw : 16;
    uint16_t mz_scaled : 16;
    uint16_t beta_est : 16;
};

/**
 * @struct can_2_safety_tv_ctrl_feedback_packed
 * @brief Packed safety_tv_ctrl_feedback signal values
 *
 * @var can_2_safety_tv_ctrl_feedback::gz_target
 *     @brief gz_target. Unit: rad/s, Start: 0, Scale: 0.000191747598, Offset: -6.28318530717959, Range: -6.28318530717959 - 6.28299352775041 (Packed: 0 - 65535)
 * @var can_2_safety_tv_ctrl_feedback::tq_req_driver
 *     @brief tq_req_driver. Unit: N.m, Start: 16, Scale: 0.009765625, Offset: -40, Range: -40 - 40 (Packed: 0 - 8192)
 * @var can_2_safety_tv_ctrl_feedback::pwr_limit_tq_scale
 *     @brief pwr_limit_tq_scale. Start: 29, Scale: 0.0009765625, Offset: 0, Range: 0 - 1 (Packed: 0 - 1024)
 * @var can_2_safety_tv_ctrl_feedback::tq_split_tv
 *     @brief tq_split_tv. Start: 40, Scale: 0.009765625, Offset: -40, Range: -40 - 40 (Packed: 0 - 8192)
 */
struct __attribute__((packed)) can_2_safety_tv_ctrl_feedback_packed {
    uint16_t gz_target : 16;
    uint16_t tq_req_driver : 13;
    uint16_t pwr_limit_tq_scale : 10;
    uint8_t _padding_0 : 1;
    uint16_t tq_split_tv : 13;
    uint8_t _padding_1 : 3;
};

/**
 * @struct can_2_safety_tv_inputs_filt_packed
 * @brief Packed safety_tv_inputs_filt signal values
 *
 * @var can_2_safety_tv_inputs_filt::ax_filt
 *     @brief ax_filt. Unit: m/s/s, Start: 0, Scale: 0.000915541313802, Offset: -30, Range: -30 - 30 (Packed: 0 - 65535)
 * @var can_2_safety_tv_inputs_filt::ay_filt
 *     @brief ay_filt. Unit: m/s/s, Start: 16, Scale: 0.000915541313802, Offset: -30, Range: -30 - 30 (Packed: 0 - 65535)
 * @var can_2_safety_tv_inputs_filt::vx_filt
 *     @brief vx_filt. Unit: m/s, Start: 32, Scale: 0.002746749679546, Offset: -5, Range: -5 - 40 (Packed: 0 - 16383)
 * @var can_2_safety_tv_inputs_filt::gz_filt
 *     @brief gz_filt. Unit: rad/s, Start: 48, Scale: 0.000106837607, Offset: -3.5, Range: -3.5 - 3.5 (Packed: 0 - 65520)
 */
struct __attribute__((packed)) can_2_safety_tv_inputs_filt_packed {
    uint16_t ax_filt : 16;
    uint16_t ay_filt : 16;
    uint16_t vx_filt : 14;
    uint8_t _padding_0 : 2;
    uint16_t gz_filt : 16;
};

/**
 * @struct can_2_safety_tv_pwr_packed
 * @brief Packed safety_tv_pwr signal values
 *
 * @var can_2_safety_tv_pwr::tq_rr_pre_pwr_limit
 *     @brief tq_rr_pre_pwr_limit. Unit: N.m, Start: 0, Scale: 0.011233211233211, Offset: -23, Range: -23 - 23 (Packed: 0 - 4095)
 * @var can_2_safety_tv_pwr::tq_rl_pre_pwr_limit
 *     @brief tq_rl_pre_pwr_limit. Unit: N.m, Start: 12, Scale: 0.011233211233211, Offset: -23, Range: -23 - 23 (Packed: 0 - 4095)
 * @var can_2_safety_tv_pwr::tq_fr_pre_pwr_limit
 *     @brief tq_fr_pre_pwr_limit. Unit: N.m, Start: 24, Scale: 0.011233211233211, Offset: -23, Range: -23 - 23 (Packed: 0 - 4095)
 * @var can_2_safety_tv_pwr::tq_fl_pre_pwr_limit
 *     @brief tq_fl_pre_pwr_limit. Unit: N.m, Start: 36, Scale: 0.011233211233211, Offset: -23, Range: -23 - 23 (Packed: 0 - 4095)
 * @var can_2_safety_tv_pwr::pwr_tv_estimate
 *     @brief pwr_tv_estimate. Unit: kW, Start: 48, Scale: 0.068376068376068, Offset: -140, Range: -140 - 140 (Packed: 0 - 4095)
 */
struct __attribute__((packed)) can_2_safety_tv_pwr_packed {
    uint16_t tq_rr_pre_pwr_limit : 12;
    uint16_t tq_rl_pre_pwr_limit : 12;
    uint16_t tq_fr_pre_pwr_limit : 12;
    uint16_t tq_fl_pre_pwr_limit : 12;
    uint16_t pwr_tv_estimate : 12;
    uint8_t _padding_0 : 4;
};

/**
 * @struct can_2_safety_tv_speed_filt_packed
 * @brief Packed safety_tv_speed_filt signal values
 *
 * @var can_2_safety_tv_speed_filt::spd_rr_filt
 *     @brief spd_rr_filt. Unit: rpm, Start: 0, Scale: 0.343327992675669, Offset: -500, Range: -500 - 22000 (Packed: 0 - 65535)
 * @var can_2_safety_tv_speed_filt::spd_rl_filt
 *     @brief spd_rl_filt. Unit: rpm, Start: 16, Scale: 0.343327992675669, Offset: -500, Range: -500 - 22000 (Packed: 0 - 65535)
 * @var can_2_safety_tv_speed_filt::spd_fr_filt
 *     @brief spd_fr_filt. Unit: rpm, Start: 32, Scale: 0.343327992675669, Offset: -500, Range: -500 - 22000 (Packed: 0 - 65535)
 * @var can_2_safety_tv_speed_filt::spd_fl_filt
 *     @brief spd_fl_filt. Unit: rpm, Start: 48, Scale: 0.343327992675669, Offset: -500, Range: -500 - 22000 (Packed: 0 - 65535)
 */
struct __attribute__((packed)) can_2_safety_tv_speed_filt_packed {
    uint16_t spd_rr_filt : 16;
    uint16_t spd_rl_filt : 16;
    uint16_t spd_fr_filt : 16;
    uint16_t spd_fl_filt : 16;
};

/**
 * @struct can_2_safety_tv_gains_packed
 * @brief Packed safety_tv_gains signal values
 *
 * @var can_2_safety_tv_gains::loss_scalar_tv
 *     @brief loss_scalar_tv. Start: 0, Scale: 0.001953125, Offset: 0, Range: 0 - 2 (Packed: 0 - 1024)
 * @var can_2_safety_tv_gains::inverter_efficiency
 *     @brief inverter_efficiency. Start: 10, Scale: 0.0009765625, Offset: 0, Range: 0 - 1 (Packed: 0 - 1024)
 * @var can_2_safety_tv_gains::vy_filt
 *     @brief vy_filt. Unit: m/s, Start: 20, Scale: 0.0073529411764706, Offset: -15, Range: -15 - 15 (Packed: 0 - 4080)
 * @var can_2_safety_tv_gains::tv_ku
 *     @brief tv_ku. Start: 32, Scale: 0.009765625, Offset: -10, Range: -10 - 10 (Packed: 0 - 2048)
 */
struct __attribute__((packed)) can_2_safety_tv_gains_packed {
    uint16_t loss_scalar_tv : 10;
    uint16_t inverter_efficiency : 10;
    uint16_t vy_filt : 12;
    uint16_t tv_ku : 11;
    uint16_t _padding_0 : 13;
};

/**
 * @struct can_2_safety_tv_regen_tq_packed
 * @brief Packed safety_tv_regen_tq signal values
 *
 * @var can_2_safety_tv_regen_tq::tq_regen_rr
 *     @brief tq_regen_rr. Unit: N.m, Start: 0, Scale: 0.000701904297, Offset: -23, Range: -23 - 23 (Packed: 0 - 65536)
 * @var can_2_safety_tv_regen_tq::tq_regen_rl
 *     @brief tq_regen_rl. Unit: N.m, Start: 16, Scale: 0.000701904297, Offset: -23, Range: -23 - 23 (Packed: 0 - 65536)
 * @var can_2_safety_tv_regen_tq::tq_regen_fr
 *     @brief tq_regen_fr. Unit: N.m, Start: 32, Scale: 0.000701904297, Offset: -23, Range: -23 - 23 (Packed: 0 - 65536)
 * @var can_2_safety_tv_regen_tq::tq_regen_fl
 *     @brief tq_regen_fl. Unit: N.m, Start: 48, Scale: 0.000701904297, Offset: -23, Range: -23 - 23 (Packed: 0 - 65536)
 */
struct __attribute__((packed)) can_2_safety_tv_regen_tq_packed {
    uint16_t tq_regen_rr : 16;
    uint16_t tq_regen_rl : 16;
    uint16_t tq_regen_fr : 16;
    uint16_t tq_regen_fl : 16;
};

/**
 * @struct can_2_fsb_analog_ch_1_packed
 * @brief Packed fsb_analog_ch_1 signal values
 *
 * @var can_2_fsb_analog_ch_1::v_fsb_analog_ch1
 *     @brief v_fsb_analog_ch1. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct __attribute__((packed)) can_2_fsb_analog_ch_1_packed {
    uint16_t v_fsb_analog_ch1 : 16;
};

/**
 * @struct can_2_fsb_analog_ch_2_packed
 * @brief Packed fsb_analog_ch_2 signal values
 *
 * @var can_2_fsb_analog_ch_2::v_fsb_analog_ch2
 *     @brief v_fsb_analog_ch2. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct __attribute__((packed)) can_2_fsb_analog_ch_2_packed {
    uint16_t v_fsb_analog_ch2 : 16;
};

/**
 * @struct can_2_fsb_analog_ch_3_packed
 * @brief Packed fsb_analog_ch_3 signal values
 *
 * @var can_2_fsb_analog_ch_3::v_fsb_analog_ch3
 *     @brief v_fsb_analog_ch3. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct __attribute__((packed)) can_2_fsb_analog_ch_3_packed {
    uint16_t v_fsb_analog_ch3 : 16;
};

/**
 * @struct can_2_fsb_analog_ch_4_packed
 * @brief Packed fsb_analog_ch_4 signal values
 *
 * @var can_2_fsb_analog_ch_4::v_fsb_fl_ride_height
 *     @brief v_fsb_fl_ride_height. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct __attribute__((packed)) can_2_fsb_analog_ch_4_packed {
    uint16_t v_fsb_fl_ride_height : 16;
};

/**
 * @struct can_2_fsb_analog_ch_5_packed
 * @brief Packed fsb_analog_ch_5 signal values
 *
 * @var can_2_fsb_analog_ch_5::v_fsb_analog_ch5
 *     @brief v_fsb_analog_ch5. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct __attribute__((packed)) can_2_fsb_analog_ch_5_packed {
    uint16_t v_fsb_analog_ch5 : 16;
};

/**
 * @struct can_2_fsb_analog_ch_6_packed
 * @brief Packed fsb_analog_ch_6 signal values
 *
 * @var can_2_fsb_analog_ch_6::v_fsb_analog_ch6
 *     @brief v_fsb_analog_ch6. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct __attribute__((packed)) can_2_fsb_analog_ch_6_packed {
    uint16_t v_fsb_analog_ch6 : 16;
};

/**
 * @struct can_2_fsb_analog_ch_7_packed
 * @brief Packed fsb_analog_ch_7 signal values
 *
 * @var can_2_fsb_analog_ch_7::v_fsb_f_heave_lpot
 *     @brief v_fsb_f_heave_lpot. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct __attribute__((packed)) can_2_fsb_analog_ch_7_packed {
    uint16_t v_fsb_f_heave_lpot : 16;
};

/**
 * @struct can_2_fsb_analog_ch_8_packed
 * @brief Packed fsb_analog_ch_8 signal values
 *
 * @var can_2_fsb_analog_ch_8::v_fsb_pitot_tube
 *     @brief v_fsb_pitot_tube. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct __attribute__((packed)) can_2_fsb_analog_ch_8_packed {
    uint16_t v_fsb_pitot_tube : 16;
};

/**
 * @struct can_2_fsb_analog_ch_9_packed
 * @brief Packed fsb_analog_ch_9 signal values
 *
 * @var can_2_fsb_analog_ch_9::v_fsb_analog_ch9
 *     @brief v_fsb_analog_ch9. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct __attribute__((packed)) can_2_fsb_analog_ch_9_packed {
    uint16_t v_fsb_analog_ch9 : 16;
};

/**
 * @struct can_2_fsb_analog_ch_10_packed
 * @brief Packed fsb_analog_ch_10 signal values
 *
 * @var can_2_fsb_analog_ch_10::v_fsb_analog_ch10
 *     @brief v_fsb_analog_ch10. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct __attribute__((packed)) can_2_fsb_analog_ch_10_packed {
    uint16_t v_fsb_analog_ch10 : 16;
};

/**
 * @struct can_2_fsb_analog_ch_11_packed
 * @brief Packed fsb_analog_ch_11 signal values
 *
 * @var can_2_fsb_analog_ch_11::v_fsb_fr_ride_height
 *     @brief v_fsb_fr_ride_height. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct __attribute__((packed)) can_2_fsb_analog_ch_11_packed {
    uint16_t v_fsb_fr_ride_height : 16;
};

/**
 * @struct can_2_fsb_analog_ch_12_packed
 * @brief Packed fsb_analog_ch_12 signal values
 *
 * @var can_2_fsb_analog_ch_12::v_fsb_steering_lpot
 *     @brief v_fsb_steering_lpot. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct __attribute__((packed)) can_2_fsb_analog_ch_12_packed {
    uint16_t v_fsb_steering_lpot : 16;
};

/**
 * @struct can_2_fsb_analog_ch_13_packed
 * @brief Packed fsb_analog_ch_13 signal values
 *
 * @var can_2_fsb_analog_ch_13::v_fsb_f_roll_lpot
 *     @brief v_fsb_f_roll_lpot. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct __attribute__((packed)) can_2_fsb_analog_ch_13_packed {
    uint16_t v_fsb_f_roll_lpot : 16;
};

/**
 * @struct can_2_fsb_analog_ch_14_packed
 * @brief Packed fsb_analog_ch_14 signal values
 *
 * @var can_2_fsb_analog_ch_14::v_fsb_fr_oil_temp
 *     @brief v_fsb_fr_oil_temp. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct __attribute__((packed)) can_2_fsb_analog_ch_14_packed {
    uint16_t v_fsb_fr_oil_temp : 16;
};

/**
 * @struct can_2_fsb_analog_ch_15_packed
 * @brief Packed fsb_analog_ch_15 signal values
 *
 * @var can_2_fsb_analog_ch_15::v_fsb_motor_inlet_temp
 *     @brief v_fsb_motor_inlet_temp. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct __attribute__((packed)) can_2_fsb_analog_ch_15_packed {
    uint16_t v_fsb_motor_inlet_temp : 16;
};

/**
 * @struct can_2_fsb_analog_ch_16_packed
 * @brief Packed fsb_analog_ch_16 signal values
 *
 * @var can_2_fsb_analog_ch_16::v_fsb_motor_outlet_temp
 *     @brief v_fsb_motor_outlet_temp. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct __attribute__((packed)) can_2_fsb_analog_ch_16_packed {
    uint16_t v_fsb_motor_outlet_temp : 16;
};

/**
 * @struct can_2_fsb_analog_ch_17_packed
 * @brief Packed fsb_analog_ch_17 signal values
 *
 * @var can_2_fsb_analog_ch_17::v_fsb_fl_oil_temp
 *     @brief v_fsb_fl_oil_temp. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct __attribute__((packed)) can_2_fsb_analog_ch_17_packed {
    uint16_t v_fsb_fl_oil_temp : 16;
};

/**
 * @struct can_2_fsb_pwm_in_ch_1_packed
 * @brief Packed fsb_pwm_in_ch_1 signal values
 *
 * @var can_2_fsb_pwm_in_ch_1::duty_pwm_in_fsb_ch1
 *     @brief duty_pwm_in_fsb_ch1. Unit: %, Start: 0, Scale: 1, Offset: 0, Range: 0 - 255 (Packed: 0 - 255)
 * @var can_2_fsb_pwm_in_ch_1::hz_pwm_in_fsb_ch1
 *     @brief hz_pwm_in_fsb_ch1. Unit: Hz, Start: 8, Scale: 0.01, Offset: 0, Range: 0 - 655.35 (Packed: 0 - 65535)
 */
struct __attribute__((packed)) can_2_fsb_pwm_in_ch_1_packed {
    uint8_t duty_pwm_in_fsb_ch1 : 8;
    uint16_t hz_pwm_in_fsb_ch1 : 16;
};

/**
 * @struct can_2_fsb_pwm_in_ch_2_packed
 * @brief Packed fsb_pwm_in_ch_2 signal values
 *
 * @var can_2_fsb_pwm_in_ch_2::duty_pwm_in_fsb_ch2
 *     @brief duty_pwm_in_fsb_ch2. Unit: %, Start: 0, Scale: 1, Offset: 0, Range: 0 - 255 (Packed: 0 - 255)
 * @var can_2_fsb_pwm_in_ch_2::hz_pwm_in_fsb_ch2
 *     @brief hz_pwm_in_fsb_ch2. Unit: Hz, Start: 8, Scale: 0.01, Offset: 0, Range: 0 - 655.35 (Packed: 0 - 65535)
 */
struct __attribute__((packed)) can_2_fsb_pwm_in_ch_2_packed {
    uint8_t duty_pwm_in_fsb_ch2 : 8;
    uint16_t hz_pwm_in_fsb_ch2 : 16;
};

/**
 * @struct can_2_fsb_pwm_in_ch_3_packed
 * @brief Packed fsb_pwm_in_ch_3 signal values
 *
 * @var can_2_fsb_pwm_in_ch_3::duty_pwm_in_fsb_ch3
 *     @brief duty_pwm_in_fsb_ch3. Unit: %, Start: 0, Scale: 1, Offset: 0, Range: 0 - 255 (Packed: 0 - 255)
 * @var can_2_fsb_pwm_in_ch_3::hz_pwm_in_fsb_ch3
 *     @brief hz_pwm_in_fsb_ch3. Unit: Hz, Start: 8, Scale: 0.01, Offset: 0, Range: 0 - 655.35 (Packed: 0 - 65535)
 */
struct __attribute__((packed)) can_2_fsb_pwm_in_ch_3_packed {
    uint8_t duty_pwm_in_fsb_ch3 : 8;
    uint16_t hz_pwm_in_fsb_ch3 : 16;
};

/**
 * @struct can_2_fsb_pwm_out_ch_1_packed
 * @brief Packed fsb_pwm_out_ch_1 signal values
 *
 * @var can_2_fsb_pwm_out_ch_1::duty_pwm_out_fsb_ch1
 *     @brief duty_pwm_out_fsb_ch1. Unit: %, Start: 0, Scale: 1, Offset: 0, Range: 0 - 100 (Packed: 0 - 100)
 */
struct __attribute__((packed)) can_2_fsb_pwm_out_ch_1_packed {
    uint8_t duty_pwm_out_fsb_ch1 : 8;
};

/**
 * @struct can_2_fsb_pwm_out_ch_2_packed
 * @brief Packed fsb_pwm_out_ch_2 signal values
 *
 * @var can_2_fsb_pwm_out_ch_2::duty_pwm_out_fsb_ch2
 *     @brief duty_pwm_out_fsb_ch2. Unit: %, Start: 0, Scale: 1, Offset: 0, Range: 0 - 100 (Packed: 0 - 100)
 */
struct __attribute__((packed)) can_2_fsb_pwm_out_ch_2_packed {
    uint8_t duty_pwm_out_fsb_ch2 : 8;
};

/**
 * @struct can_2_fsb_pwm_out_ch_3_packed
 * @brief Packed fsb_pwm_out_ch_3 signal values
 *
 * @var can_2_fsb_pwm_out_ch_3::duty_pwm_out_fsb_ch3
 *     @brief duty_pwm_out_fsb_ch3. Unit: %, Start: 0, Scale: 1, Offset: 0, Range: 0 - 100 (Packed: 0 - 100)
 */
struct __attribute__((packed)) can_2_fsb_pwm_out_ch_3_packed {
    uint8_t duty_pwm_out_fsb_ch3 : 8;
};

/**
 * @struct can_2_rsb_analog_ch_1_packed
 * @brief Packed rsb_analog_ch_1 signal values
 *
 * @var can_2_rsb_analog_ch_1::v_rsb_analog_ch1
 *     @brief v_rsb_analog_ch1. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct __attribute__((packed)) can_2_rsb_analog_ch_1_packed {
    uint16_t v_rsb_analog_ch1 : 16;
};

/**
 * @struct can_2_rsb_analog_ch_2_packed
 * @brief Packed rsb_analog_ch_2 signal values
 *
 * @var can_2_rsb_analog_ch_2::v_rsb_analog_ch2
 *     @brief v_rsb_analog_ch2. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct __attribute__((packed)) can_2_rsb_analog_ch_2_packed {
    uint16_t v_rsb_analog_ch2 : 16;
};

/**
 * @struct can_2_rsb_analog_ch_3_packed
 * @brief Packed rsb_analog_ch_3 signal values
 *
 * @var can_2_rsb_analog_ch_3::v_rsb_rl_motor_out_temp
 *     @brief v_rsb_rl_motor_out_temp. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct __attribute__((packed)) can_2_rsb_analog_ch_3_packed {
    uint16_t v_rsb_rl_motor_out_temp : 16;
};

/**
 * @struct can_2_rsb_analog_ch_4_packed
 * @brief Packed rsb_analog_ch_4 signal values
 *
 * @var can_2_rsb_analog_ch_4::v_rsb_rl_ride_height
 *     @brief v_rsb_rl_ride_height. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct __attribute__((packed)) can_2_rsb_analog_ch_4_packed {
    uint16_t v_rsb_rl_ride_height : 16;
};

/**
 * @struct can_2_rsb_analog_ch_5_packed
 * @brief Packed rsb_analog_ch_5 signal values
 *
 * @var can_2_rsb_analog_ch_5::v_rsb_analog_ch5
 *     @brief v_rsb_analog_ch5. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct __attribute__((packed)) can_2_rsb_analog_ch_5_packed {
    uint16_t v_rsb_analog_ch5 : 16;
};

/**
 * @struct can_2_rsb_analog_ch_6_packed
 * @brief Packed rsb_analog_ch_6 signal values
 *
 * @var can_2_rsb_analog_ch_6::v_rsb_analog_ch6
 *     @brief v_rsb_analog_ch6. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct __attribute__((packed)) can_2_rsb_analog_ch_6_packed {
    uint16_t v_rsb_analog_ch6 : 16;
};

/**
 * @struct can_2_rsb_analog_ch_7_packed
 * @brief Packed rsb_analog_ch_7 signal values
 *
 * @var can_2_rsb_analog_ch_7::v_rsb_r_heave_lpot
 *     @brief v_rsb_r_heave_lpot. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct __attribute__((packed)) can_2_rsb_analog_ch_7_packed {
    uint16_t v_rsb_r_heave_lpot : 16;
};

/**
 * @struct can_2_rsb_analog_ch_8_packed
 * @brief Packed rsb_analog_ch_8 signal values
 *
 * @var can_2_rsb_analog_ch_8::v_rsb_analog_ch8
 *     @brief v_rsb_analog_ch8. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct __attribute__((packed)) can_2_rsb_analog_ch_8_packed {
    uint16_t v_rsb_analog_ch8 : 16;
};

/**
 * @struct can_2_rsb_analog_ch_9_packed
 * @brief Packed rsb_analog_ch_9 signal values
 *
 * @var can_2_rsb_analog_ch_9::v_rsb_pump_temp
 *     @brief v_rsb_pump_temp. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct __attribute__((packed)) can_2_rsb_analog_ch_9_packed {
    uint16_t v_rsb_pump_temp : 16;
};

/**
 * @struct can_2_rsb_analog_ch_10_packed
 * @brief Packed rsb_analog_ch_10 signal values
 *
 * @var can_2_rsb_analog_ch_10::v_rsb_rl_motor_in_temp
 *     @brief v_rsb_rl_motor_in_temp. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct __attribute__((packed)) can_2_rsb_analog_ch_10_packed {
    uint16_t v_rsb_rl_motor_in_temp : 16;
};

/**
 * @struct can_2_rsb_analog_ch_11_packed
 * @brief Packed rsb_analog_ch_11 signal values
 *
 * @var can_2_rsb_analog_ch_11::v_rsb_rr_ride_height
 *     @brief v_rsb_rr_ride_height. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct __attribute__((packed)) can_2_rsb_analog_ch_11_packed {
    uint16_t v_rsb_rr_ride_height : 16;
};

/**
 * @struct can_2_rsb_analog_ch_12_packed
 * @brief Packed rsb_analog_ch_12 signal values
 *
 * @var can_2_rsb_analog_ch_12::v_rsb_analog_ch12
 *     @brief v_rsb_analog_ch12. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct __attribute__((packed)) can_2_rsb_analog_ch_12_packed {
    uint16_t v_rsb_analog_ch12 : 16;
};

/**
 * @struct can_2_rsb_analog_ch_13_packed
 * @brief Packed rsb_analog_ch_13 signal values
 *
 * @var can_2_rsb_analog_ch_13::v_rsb_r_roll_lpot
 *     @brief v_rsb_r_roll_lpot. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct __attribute__((packed)) can_2_rsb_analog_ch_13_packed {
    uint16_t v_rsb_r_roll_lpot : 16;
};

/**
 * @struct can_2_rsb_analog_ch_14_packed
 * @brief Packed rsb_analog_ch_14 signal values
 *
 * @var can_2_rsb_analog_ch_14::v_rsb_rr_oil_temp
 *     @brief v_rsb_rr_oil_temp. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct __attribute__((packed)) can_2_rsb_analog_ch_14_packed {
    uint16_t v_rsb_rr_oil_temp : 16;
};

/**
 * @struct can_2_rsb_analog_ch_15_packed
 * @brief Packed rsb_analog_ch_15 signal values
 *
 * @var can_2_rsb_analog_ch_15::v_rsb_coldplate_in_temp
 *     @brief v_rsb_coldplate_in_temp. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct __attribute__((packed)) can_2_rsb_analog_ch_15_packed {
    uint16_t v_rsb_coldplate_in_temp : 16;
};

/**
 * @struct can_2_rsb_analog_ch_16_packed
 * @brief Packed rsb_analog_ch_16 signal values
 *
 * @var can_2_rsb_analog_ch_16::v_rsb_coldplate_out_temp
 *     @brief v_rsb_coldplate_out_temp. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct __attribute__((packed)) can_2_rsb_analog_ch_16_packed {
    uint16_t v_rsb_coldplate_out_temp : 16;
};

/**
 * @struct can_2_rsb_analog_ch_17_packed
 * @brief Packed rsb_analog_ch_17 signal values
 *
 * @var can_2_rsb_analog_ch_17::v_rsb_rr_oil_temp
 *     @brief v_rsb_rr_oil_temp. Unit: V, Start: 0, Scale: 8.01099e-05, Offset: 0, Range: 0 - 5.2500022965 (Packed: 0 - 65535)
 */
struct __attribute__((packed)) can_2_rsb_analog_ch_17_packed {
    uint16_t v_rsb_rr_oil_temp : 16;
};

/**
 * @struct can_2_rsb_pwm_in_ch_1_packed
 * @brief Packed rsb_pwm_in_ch_1 signal values
 *
 * @var can_2_rsb_pwm_in_ch_1::duty_pwm_in_rsb_ch1
 *     @brief duty_pwm_in_rsb_ch1. Unit: %, Start: 0, Scale: 1, Offset: 0, Range: 0 - 255 (Packed: 0 - 255)
 * @var can_2_rsb_pwm_in_ch_1::hz_pwm_in_rsb_ch1
 *     @brief hz_pwm_in_rsb_ch1. Unit: Hz, Start: 8, Scale: 0.01, Offset: 0, Range: 0 - 655.35 (Packed: 0 - 65535)
 */
struct __attribute__((packed)) can_2_rsb_pwm_in_ch_1_packed {
    uint8_t duty_pwm_in_rsb_ch1 : 8;
    uint16_t hz_pwm_in_rsb_ch1 : 16;
};

/**
 * @struct can_2_rsb_pwm_in_ch_2_packed
 * @brief Packed rsb_pwm_in_ch_2 signal values
 *
 * @var can_2_rsb_pwm_in_ch_2::duty_pwm_in_rsb_ch2
 *     @brief duty_pwm_in_rsb_ch2. Unit: %, Start: 0, Scale: 1, Offset: 0, Range: 0 - 255 (Packed: 0 - 255)
 * @var can_2_rsb_pwm_in_ch_2::hz_pwm_in_rsb_ch2
 *     @brief hz_pwm_in_rsb_ch2. Unit: Hz, Start: 8, Scale: 0.01, Offset: 0, Range: 0 - 655.35 (Packed: 0 - 65535)
 */
struct __attribute__((packed)) can_2_rsb_pwm_in_ch_2_packed {
    uint8_t duty_pwm_in_rsb_ch2 : 8;
    uint16_t hz_pwm_in_rsb_ch2 : 16;
};

/**
 * @struct can_2_rsb_pwm_in_ch_3_packed
 * @brief Packed rsb_pwm_in_ch_3 signal values
 *
 * @var can_2_rsb_pwm_in_ch_3::duty_pwm_in_rsb_ch3
 *     @brief duty_pwm_in_rsb_ch3. Unit: %, Start: 0, Scale: 1, Offset: 0, Range: 0 - 255 (Packed: 0 - 255)
 * @var can_2_rsb_pwm_in_ch_3::hz_pwm_in_rsb_ch3
 *     @brief hz_pwm_in_rsb_ch3. Unit: Hz, Start: 8, Scale: 0.01, Offset: 0, Range: 0 - 655.35 (Packed: 0 - 65535)
 */
struct __attribute__((packed)) can_2_rsb_pwm_in_ch_3_packed {
    uint8_t duty_pwm_in_rsb_ch3 : 8;
    uint16_t hz_pwm_in_rsb_ch3 : 16;
};

/**
 * @struct can_2_rsb_pwm_out_ch_1_packed
 * @brief Packed rsb_pwm_out_ch_1 signal values
 *
 * @var can_2_rsb_pwm_out_ch_1::duty_pwm_out_rsb_ch1
 *     @brief duty_pwm_out_rsb_ch1. Unit: %, Start: 0, Scale: 1, Offset: 0, Range: 0 - 100 (Packed: 0 - 100)
 */
struct __attribute__((packed)) can_2_rsb_pwm_out_ch_1_packed {
    uint8_t duty_pwm_out_rsb_ch1 : 8;
};

/**
 * @struct can_2_rsb_pwm_out_ch_2_packed
 * @brief Packed rsb_pwm_out_ch_2 signal values
 *
 * @var can_2_rsb_pwm_out_ch_2::duty_pwm_out_rsb_ch2
 *     @brief duty_pwm_out_rsb_ch2. Unit: %, Start: 0, Scale: 1, Offset: 0, Range: 0 - 100 (Packed: 0 - 100)
 */
struct __attribute__((packed)) can_2_rsb_pwm_out_ch_2_packed {
    uint8_t duty_pwm_out_rsb_ch2 : 8;
};

/**
 * @struct can_2_rsb_pwm_out_ch_3_packed
 * @brief Packed rsb_pwm_out_ch_3 signal values
 *
 * @var can_2_rsb_pwm_out_ch_3::duty_pwm_out_rsb_ch3
 *     @brief duty_pwm_out_rsb_ch3. Unit: %, Start: 0, Scale: 1, Offset: 0, Range: 0 - 100 (Packed: 0 - 100)
 */
struct __attribute__((packed)) can_2_rsb_pwm_out_ch_3_packed {
    uint8_t duty_pwm_out_rsb_ch3 : 8;
};


int can_2_vnav_tv_inputs_pack(uint8_t* dst_ptr, const struct can_2_vnav_tv_inputs* src_ptr, size_t size);
int can_2_vnav_tv_inputs_unpack(struct can_2_vnav_tv_inputs* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_vnav_vel_accel_pack(uint8_t* dst_ptr, const struct can_2_vnav_vel_accel* src_ptr, size_t size);
int can_2_vnav_vel_accel_unpack(struct can_2_vnav_vel_accel* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_vnav_pos_stat_pack(uint8_t* dst_ptr, const struct can_2_vnav_pos_stat* src_ptr, size_t size);
int can_2_vnav_pos_stat_unpack(struct can_2_vnav_pos_stat* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_vnav_status_pack(uint8_t* dst_ptr, const struct can_2_vnav_status* src_ptr, size_t size);
int can_2_vnav_status_unpack(struct can_2_vnav_status* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_safety_tv_mz_pack(uint8_t* dst_ptr, const struct can_2_safety_tv_mz* src_ptr, size_t size);
int can_2_safety_tv_mz_unpack(struct can_2_safety_tv_mz* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_safety_tv_ctrl_feedback_pack(uint8_t* dst_ptr, const struct can_2_safety_tv_ctrl_feedback* src_ptr, size_t size);
int can_2_safety_tv_ctrl_feedback_unpack(struct can_2_safety_tv_ctrl_feedback* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_safety_tv_inputs_filt_pack(uint8_t* dst_ptr, const struct can_2_safety_tv_inputs_filt* src_ptr, size_t size);
int can_2_safety_tv_inputs_filt_unpack(struct can_2_safety_tv_inputs_filt* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_safety_tv_pwr_pack(uint8_t* dst_ptr, const struct can_2_safety_tv_pwr* src_ptr, size_t size);
int can_2_safety_tv_pwr_unpack(struct can_2_safety_tv_pwr* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_safety_tv_speed_filt_pack(uint8_t* dst_ptr, const struct can_2_safety_tv_speed_filt* src_ptr, size_t size);
int can_2_safety_tv_speed_filt_unpack(struct can_2_safety_tv_speed_filt* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_safety_tv_gains_pack(uint8_t* dst_ptr, const struct can_2_safety_tv_gains* src_ptr, size_t size);
int can_2_safety_tv_gains_unpack(struct can_2_safety_tv_gains* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_safety_tv_regen_tq_pack(uint8_t* dst_ptr, const struct can_2_safety_tv_regen_tq* src_ptr, size_t size);
int can_2_safety_tv_regen_tq_unpack(struct can_2_safety_tv_regen_tq* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_fsb_analog_ch_1_pack(uint8_t* dst_ptr, const struct can_2_fsb_analog_ch_1* src_ptr, size_t size);
int can_2_fsb_analog_ch_1_unpack(struct can_2_fsb_analog_ch_1* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_fsb_analog_ch_2_pack(uint8_t* dst_ptr, const struct can_2_fsb_analog_ch_2* src_ptr, size_t size);
int can_2_fsb_analog_ch_2_unpack(struct can_2_fsb_analog_ch_2* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_fsb_analog_ch_3_pack(uint8_t* dst_ptr, const struct can_2_fsb_analog_ch_3* src_ptr, size_t size);
int can_2_fsb_analog_ch_3_unpack(struct can_2_fsb_analog_ch_3* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_fsb_analog_ch_4_pack(uint8_t* dst_ptr, const struct can_2_fsb_analog_ch_4* src_ptr, size_t size);
int can_2_fsb_analog_ch_4_unpack(struct can_2_fsb_analog_ch_4* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_fsb_analog_ch_5_pack(uint8_t* dst_ptr, const struct can_2_fsb_analog_ch_5* src_ptr, size_t size);
int can_2_fsb_analog_ch_5_unpack(struct can_2_fsb_analog_ch_5* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_fsb_analog_ch_6_pack(uint8_t* dst_ptr, const struct can_2_fsb_analog_ch_6* src_ptr, size_t size);
int can_2_fsb_analog_ch_6_unpack(struct can_2_fsb_analog_ch_6* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_fsb_analog_ch_7_pack(uint8_t* dst_ptr, const struct can_2_fsb_analog_ch_7* src_ptr, size_t size);
int can_2_fsb_analog_ch_7_unpack(struct can_2_fsb_analog_ch_7* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_fsb_analog_ch_8_pack(uint8_t* dst_ptr, const struct can_2_fsb_analog_ch_8* src_ptr, size_t size);
int can_2_fsb_analog_ch_8_unpack(struct can_2_fsb_analog_ch_8* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_fsb_analog_ch_9_pack(uint8_t* dst_ptr, const struct can_2_fsb_analog_ch_9* src_ptr, size_t size);
int can_2_fsb_analog_ch_9_unpack(struct can_2_fsb_analog_ch_9* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_fsb_analog_ch_10_pack(uint8_t* dst_ptr, const struct can_2_fsb_analog_ch_10* src_ptr, size_t size);
int can_2_fsb_analog_ch_10_unpack(struct can_2_fsb_analog_ch_10* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_fsb_analog_ch_11_pack(uint8_t* dst_ptr, const struct can_2_fsb_analog_ch_11* src_ptr, size_t size);
int can_2_fsb_analog_ch_11_unpack(struct can_2_fsb_analog_ch_11* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_fsb_analog_ch_12_pack(uint8_t* dst_ptr, const struct can_2_fsb_analog_ch_12* src_ptr, size_t size);
int can_2_fsb_analog_ch_12_unpack(struct can_2_fsb_analog_ch_12* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_fsb_analog_ch_13_pack(uint8_t* dst_ptr, const struct can_2_fsb_analog_ch_13* src_ptr, size_t size);
int can_2_fsb_analog_ch_13_unpack(struct can_2_fsb_analog_ch_13* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_fsb_analog_ch_14_pack(uint8_t* dst_ptr, const struct can_2_fsb_analog_ch_14* src_ptr, size_t size);
int can_2_fsb_analog_ch_14_unpack(struct can_2_fsb_analog_ch_14* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_fsb_analog_ch_15_pack(uint8_t* dst_ptr, const struct can_2_fsb_analog_ch_15* src_ptr, size_t size);
int can_2_fsb_analog_ch_15_unpack(struct can_2_fsb_analog_ch_15* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_fsb_analog_ch_16_pack(uint8_t* dst_ptr, const struct can_2_fsb_analog_ch_16* src_ptr, size_t size);
int can_2_fsb_analog_ch_16_unpack(struct can_2_fsb_analog_ch_16* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_fsb_analog_ch_17_pack(uint8_t* dst_ptr, const struct can_2_fsb_analog_ch_17* src_ptr, size_t size);
int can_2_fsb_analog_ch_17_unpack(struct can_2_fsb_analog_ch_17* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_fsb_pwm_in_ch_1_pack(uint8_t* dst_ptr, const struct can_2_fsb_pwm_in_ch_1* src_ptr, size_t size);
int can_2_fsb_pwm_in_ch_1_unpack(struct can_2_fsb_pwm_in_ch_1* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_fsb_pwm_in_ch_2_pack(uint8_t* dst_ptr, const struct can_2_fsb_pwm_in_ch_2* src_ptr, size_t size);
int can_2_fsb_pwm_in_ch_2_unpack(struct can_2_fsb_pwm_in_ch_2* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_fsb_pwm_in_ch_3_pack(uint8_t* dst_ptr, const struct can_2_fsb_pwm_in_ch_3* src_ptr, size_t size);
int can_2_fsb_pwm_in_ch_3_unpack(struct can_2_fsb_pwm_in_ch_3* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_fsb_pwm_out_ch_1_pack(uint8_t* dst_ptr, const struct can_2_fsb_pwm_out_ch_1* src_ptr, size_t size);
int can_2_fsb_pwm_out_ch_1_unpack(struct can_2_fsb_pwm_out_ch_1* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_fsb_pwm_out_ch_2_pack(uint8_t* dst_ptr, const struct can_2_fsb_pwm_out_ch_2* src_ptr, size_t size);
int can_2_fsb_pwm_out_ch_2_unpack(struct can_2_fsb_pwm_out_ch_2* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_fsb_pwm_out_ch_3_pack(uint8_t* dst_ptr, const struct can_2_fsb_pwm_out_ch_3* src_ptr, size_t size);
int can_2_fsb_pwm_out_ch_3_unpack(struct can_2_fsb_pwm_out_ch_3* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_rsb_analog_ch_1_pack(uint8_t* dst_ptr, const struct can_2_rsb_analog_ch_1* src_ptr, size_t size);
int can_2_rsb_analog_ch_1_unpack(struct can_2_rsb_analog_ch_1* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_rsb_analog_ch_2_pack(uint8_t* dst_ptr, const struct can_2_rsb_analog_ch_2* src_ptr, size_t size);
int can_2_rsb_analog_ch_2_unpack(struct can_2_rsb_analog_ch_2* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_rsb_analog_ch_3_pack(uint8_t* dst_ptr, const struct can_2_rsb_analog_ch_3* src_ptr, size_t size);
int can_2_rsb_analog_ch_3_unpack(struct can_2_rsb_analog_ch_3* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_rsb_analog_ch_4_pack(uint8_t* dst_ptr, const struct can_2_rsb_analog_ch_4* src_ptr, size_t size);
int can_2_rsb_analog_ch_4_unpack(struct can_2_rsb_analog_ch_4* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_rsb_analog_ch_5_pack(uint8_t* dst_ptr, const struct can_2_rsb_analog_ch_5* src_ptr, size_t size);
int can_2_rsb_analog_ch_5_unpack(struct can_2_rsb_analog_ch_5* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_rsb_analog_ch_6_pack(uint8_t* dst_ptr, const struct can_2_rsb_analog_ch_6* src_ptr, size_t size);
int can_2_rsb_analog_ch_6_unpack(struct can_2_rsb_analog_ch_6* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_rsb_analog_ch_7_pack(uint8_t* dst_ptr, const struct can_2_rsb_analog_ch_7* src_ptr, size_t size);
int can_2_rsb_analog_ch_7_unpack(struct can_2_rsb_analog_ch_7* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_rsb_analog_ch_8_pack(uint8_t* dst_ptr, const struct can_2_rsb_analog_ch_8* src_ptr, size_t size);
int can_2_rsb_analog_ch_8_unpack(struct can_2_rsb_analog_ch_8* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_rsb_analog_ch_9_pack(uint8_t* dst_ptr, const struct can_2_rsb_analog_ch_9* src_ptr, size_t size);
int can_2_rsb_analog_ch_9_unpack(struct can_2_rsb_analog_ch_9* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_rsb_analog_ch_10_pack(uint8_t* dst_ptr, const struct can_2_rsb_analog_ch_10* src_ptr, size_t size);
int can_2_rsb_analog_ch_10_unpack(struct can_2_rsb_analog_ch_10* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_rsb_analog_ch_11_pack(uint8_t* dst_ptr, const struct can_2_rsb_analog_ch_11* src_ptr, size_t size);
int can_2_rsb_analog_ch_11_unpack(struct can_2_rsb_analog_ch_11* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_rsb_analog_ch_12_pack(uint8_t* dst_ptr, const struct can_2_rsb_analog_ch_12* src_ptr, size_t size);
int can_2_rsb_analog_ch_12_unpack(struct can_2_rsb_analog_ch_12* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_rsb_analog_ch_13_pack(uint8_t* dst_ptr, const struct can_2_rsb_analog_ch_13* src_ptr, size_t size);
int can_2_rsb_analog_ch_13_unpack(struct can_2_rsb_analog_ch_13* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_rsb_analog_ch_14_pack(uint8_t* dst_ptr, const struct can_2_rsb_analog_ch_14* src_ptr, size_t size);
int can_2_rsb_analog_ch_14_unpack(struct can_2_rsb_analog_ch_14* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_rsb_analog_ch_15_pack(uint8_t* dst_ptr, const struct can_2_rsb_analog_ch_15* src_ptr, size_t size);
int can_2_rsb_analog_ch_15_unpack(struct can_2_rsb_analog_ch_15* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_rsb_analog_ch_16_pack(uint8_t* dst_ptr, const struct can_2_rsb_analog_ch_16* src_ptr, size_t size);
int can_2_rsb_analog_ch_16_unpack(struct can_2_rsb_analog_ch_16* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_rsb_analog_ch_17_pack(uint8_t* dst_ptr, const struct can_2_rsb_analog_ch_17* src_ptr, size_t size);
int can_2_rsb_analog_ch_17_unpack(struct can_2_rsb_analog_ch_17* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_rsb_pwm_in_ch_1_pack(uint8_t* dst_ptr, const struct can_2_rsb_pwm_in_ch_1* src_ptr, size_t size);
int can_2_rsb_pwm_in_ch_1_unpack(struct can_2_rsb_pwm_in_ch_1* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_rsb_pwm_in_ch_2_pack(uint8_t* dst_ptr, const struct can_2_rsb_pwm_in_ch_2* src_ptr, size_t size);
int can_2_rsb_pwm_in_ch_2_unpack(struct can_2_rsb_pwm_in_ch_2* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_rsb_pwm_in_ch_3_pack(uint8_t* dst_ptr, const struct can_2_rsb_pwm_in_ch_3* src_ptr, size_t size);
int can_2_rsb_pwm_in_ch_3_unpack(struct can_2_rsb_pwm_in_ch_3* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_rsb_pwm_out_ch_1_pack(uint8_t* dst_ptr, const struct can_2_rsb_pwm_out_ch_1* src_ptr, size_t size);
int can_2_rsb_pwm_out_ch_1_unpack(struct can_2_rsb_pwm_out_ch_1* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_rsb_pwm_out_ch_2_pack(uint8_t* dst_ptr, const struct can_2_rsb_pwm_out_ch_2* src_ptr, size_t size);
int can_2_rsb_pwm_out_ch_2_unpack(struct can_2_rsb_pwm_out_ch_2* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_2_rsb_pwm_out_ch_3_pack(uint8_t* dst_ptr, const struct can_2_rsb_pwm_out_ch_3* src_ptr, size_t size);
int can_2_rsb_pwm_out_ch_3_unpack(struct can_2_rsb_pwm_out_ch_3* dst_ptr, const uint8_t* src_ptr, size_t size);


#endif /* CAN_2_H */