/**
 * @file can_1.h
 * @author IEM can_codec library
 * @brief CAN message packing/unpacking code generated from can_1.dbc
 * @version 0.1
 * @date 2025-06-17
 */

#ifndef CAN_1_H
#define CAN_1_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

#define CAN_1_SAFETY_STATUS_ID     0x100
#define CAN_1_SAFETY_STATUS_LENGTH 7U
#define CAN_1_SAFETY_STATUS_IS_EXT false

#define CAN_1_SAFETY_SW_HARD_FAULT_ID     0x101
#define CAN_1_SAFETY_SW_HARD_FAULT_LENGTH 1U
#define CAN_1_SAFETY_SW_HARD_FAULT_IS_EXT false

#define CAN_1_FSB_LAPTRIGGER_MESSAGE_ID     0x140
#define CAN_1_FSB_LAPTRIGGER_MESSAGE_LENGTH 5U
#define CAN_1_FSB_LAPTRIGGER_MESSAGE_IS_EXT false

#define CAN_1_APPS_RIGHT_ID     0x18FFAA80
#define CAN_1_APPS_RIGHT_LENGTH 8U
#define CAN_1_APPS_RIGHT_IS_EXT true

#define CAN_1_APPS_LEFT_ID     0x18FFAA81
#define CAN_1_APPS_LEFT_LENGTH 8U
#define CAN_1_APPS_LEFT_IS_EXT true

#define CAN_1_SAS_DATA_ID     0x18FFAA82
#define CAN_1_SAS_DATA_LENGTH 8U
#define CAN_1_SAS_DATA_IS_EXT true

#define CAN_1_BMS_STATUS_ID     0x220
#define CAN_1_BMS_STATUS_LENGTH 8U
#define CAN_1_BMS_STATUS_IS_EXT false

#define CAN_1_SWB_REGEN_ID     0x230
#define CAN_1_SWB_REGEN_LENGTH 4U
#define CAN_1_SWB_REGEN_IS_EXT false

#define CAN_1_SWB_SWITCHES_ID     0x231
#define CAN_1_SWB_SWITCHES_LENGTH 3U
#define CAN_1_SWB_SWITCHES_IS_EXT false

#define CAN_1_FSB_AUX_SWITCHES_ID     0x240
#define CAN_1_FSB_AUX_SWITCHES_LENGTH 1U
#define CAN_1_FSB_AUX_SWITCHES_IS_EXT false

#define CAN_1_CPU_BMS_VIEWER_POLL_ID     0x380
#define CAN_1_CPU_BMS_VIEWER_POLL_LENGTH 1U
#define CAN_1_CPU_BMS_VIEWER_POLL_IS_EXT false

#define CAN_1_SAFETY_PUMP_DUTY_ID     0x501
#define CAN_1_SAFETY_PUMP_DUTY_LENGTH 1U
#define CAN_1_SAFETY_PUMP_DUTY_IS_EXT false

#define CAN_1_BMS_CELL_DATA_ID     0x620
#define CAN_1_BMS_CELL_DATA_LENGTH 8U
#define CAN_1_BMS_CELL_DATA_IS_EXT false

#define CAN_1_SAFETY_TRACTIVE_STATUS_ID     0x701
#define CAN_1_SAFETY_TRACTIVE_STATUS_LENGTH 5U
#define CAN_1_SAFETY_TRACTIVE_STATUS_IS_EXT false

#define CAN_1_BMS_CELL_VLT_ID     0x720
#define CAN_1_BMS_CELL_VLT_LENGTH 6U
#define CAN_1_BMS_CELL_VLT_IS_EXT false

#define CAN_1_BMS_CELL_TEMP_ID     0x721
#define CAN_1_BMS_CELL_TEMP_LENGTH 7U
#define CAN_1_BMS_CELL_TEMP_IS_EXT false

#define CAN_1_FSB_STATUS_ID     0x740
#define CAN_1_FSB_STATUS_LENGTH 7U
#define CAN_1_FSB_STATUS_IS_EXT false

#define CAN_1_RSB_STATUS_ID     0x750
#define CAN_1_RSB_STATUS_LENGTH 7U
#define CAN_1_RSB_STATUS_IS_EXT false


/**
 * @struct can_1_safety_status
 * @brief Unpacked safety_status signal values
 *
 * @var can_1_safety_status::car_state
 *     @brief car_state. Start: 0, Scale: 1, Offset: 0, Range: 0 - 6 (Packed: 0 - 6)
 * @var can_1_safety_status::fault_bms
 *     @brief fault_bms. Start: 3, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_safety_status::fault_imd
 *     @brief fault_imd. Start: 4, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_safety_status::fault_bspd
 *     @brief fault_bspd. Start: 5, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_safety_status::shutdown_state
 *     @brief shutdown_state. Start: 6, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_safety_status::brake_pressed
 *     @brief brake_pressed. Start: 7, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_safety_status::vlt_lv_batt
 *     @brief vlt_lv_batt. Unit: V, Start: 8, Scale: 0.03125, Offset: 0, Range: 0 - 63.96875 (Packed: 0 - 2047)
 * @var can_1_safety_status::safety_hv_connected
 *     @brief safety_hv_connected. Start: 19, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_safety_status::fault_apps
 *     @brief fault_apps. Start: 20, Scale: 1, Offset: 0, Range: 0 - 3 (Packed: 0 - 3)
 * @var can_1_safety_status::fault_btsf
 *     @brief fault_btsf. Start: 22, Scale: 1, Offset: 0, Range: 0 - 3 (Packed: 0 - 3)
 * @var can_1_safety_status::bp_rear
 *     @brief bp_rear. Unit: psi, Start: 24, Scale: 4, Offset: 0, Range: 0 - 1020 (Packed: 0 - 255)
 * @var can_1_safety_status::bp_front
 *     @brief bp_front. Unit: psi, Start: 32, Scale: 4, Offset: 0, Range: 0 - 1020 (Packed: 0 - 255)
 * @var can_1_safety_status::cur_bspd
 *     @brief cur_bspd. Unit: A, Start: 40, Scale: 0.0078125, Offset: -256, Range: -256 - 256 (Packed: 0 - 65536)
 */
struct can_1_safety_status {
    uint32_t car_state;
    bool fault_bms;
    bool fault_imd;
    bool fault_bspd;
    bool shutdown_state;
    bool brake_pressed;
    float vlt_lv_batt;
    bool safety_hv_connected;
    uint32_t fault_apps;
    uint32_t fault_btsf;
    uint32_t bp_rear;
    uint32_t bp_front;
    float cur_bspd;
};

/**
 * @struct can_1_safety_sw_hard_fault
 * @brief Unpacked safety_sw_hard_fault signal values
 *
 * @var can_1_safety_sw_hard_fault::sw_hard_fault_enable
 *     @brief sw_hard_fault_enable. Start: 0, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 */
struct can_1_safety_sw_hard_fault {
    bool sw_hard_fault_enable;
};

/**
 * @struct can_1_fsb_laptrigger_message
 * @brief Unpacked fsb_laptrigger_message signal values
 *
 * @var can_1_fsb_laptrigger_message::fsb_lap_count
 *     @brief fsb_lap_count. Start: 0, Scale: 1, Offset: 0, Range: 0 - 255 (Packed: 0 - 255)
 * @var can_1_fsb_laptrigger_message::fsb_laptrigger_elapsed_time
 *     @brief fsb_laptrigger_elapsed_time. Unit: ms, Start: 8, Scale: 0.1, Offset: 0, Range: 0 - 429496729.5 (Packed: 0 - 4294967295)
 */
struct can_1_fsb_laptrigger_message {
    uint32_t fsb_lap_count;
    float fsb_laptrigger_elapsed_time;
};

/**
 * @struct can_1_apps_right
 * @brief Unpacked apps_right signal values
 *
 * @var can_1_apps_right::pos_apps_r
 *     @brief pos_apps_r. Unit: deg, Start: 0, Scale: 0.02197265625, Offset: 0, Range: -180 - 179.97802734375 (Packed: -8192 - 8191)
 * @var can_1_apps_right::vel_apps_r
 *     @brief vel_apps_r. Unit: deg/s, Start: 16, Scale: 0.055, Offset: 0, Range: -18.75 - 18.75 (Packed: -341 - 341)
 * @var can_1_apps_right::apps_err_internal_r
 *     @brief apps_err_internal_r. Start: 28, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_apps_right::apps_err_range_r
 *     @brief apps_err_range_r. Start: 29, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_apps_right::apps_err_rev_cnt_r
 *     @brief apps_err_rev_cnt_r. Start: 30, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_apps_right::apps_err_spd_ovfl_r
 *     @brief apps_err_spd_ovfl_r. Start: 31, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_apps_right::rev_cnt_apps_r
 *     @brief rev_cnt_apps_r. Unit: rev, Start: 32, Scale: 1, Offset: 0, Range: -2147483648 - 2147483647 (Packed: -2147483648 - 2147483647)
 */
struct can_1_apps_right {
    float pos_apps_r;
    float vel_apps_r;
    bool apps_err_internal_r;
    bool apps_err_range_r;
    bool apps_err_rev_cnt_r;
    bool apps_err_spd_ovfl_r;
    int32_t rev_cnt_apps_r;
};

/**
 * @struct can_1_apps_left
 * @brief Unpacked apps_left signal values
 *
 * @var can_1_apps_left::pos_apps_l
 *     @brief pos_apps_l. Unit: deg, Start: 0, Scale: 0.02197265625, Offset: 0, Range: -180 - 179.97802734375 (Packed: -8192 - 8191)
 * @var can_1_apps_left::vel_apps_l
 *     @brief vel_apps_l. Unit: deg/s, Start: 16, Scale: 0.055, Offset: 0, Range: -18.75 - 18.75 (Packed: -341 - 341)
 * @var can_1_apps_left::apps_err_internal_l
 *     @brief apps_err_internal_l. Start: 28, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_apps_left::apps_err_range_l
 *     @brief apps_err_range_l. Start: 29, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_apps_left::apps_err_rev_cnt_l
 *     @brief apps_err_rev_cnt_l. Start: 30, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_apps_left::apps_err_spd_ovfl_l
 *     @brief apps_err_spd_ovfl_l. Start: 31, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_apps_left::rev_cnt_apps_l
 *     @brief rev_cnt_apps_l. Unit: rev, Start: 32, Scale: 1, Offset: 0, Range: -2147483648 - 2147483647 (Packed: -2147483648 - 2147483647)
 */
struct can_1_apps_left {
    float pos_apps_l;
    float vel_apps_l;
    bool apps_err_internal_l;
    bool apps_err_range_l;
    bool apps_err_rev_cnt_l;
    bool apps_err_spd_ovfl_l;
    int32_t rev_cnt_apps_l;
};

/**
 * @struct can_1_sas_data
 * @brief Unpacked sas_data signal values
 *
 * @var can_1_sas_data::angle_steering
 *     @brief angle_steering. Unit: deg, Start: 0, Scale: 0.02197265625, Offset: 0, Range: -130 - 130 (Packed: -5916 - 5916)
 * @var can_1_sas_data::vel_steering
 *     @brief vel_steering. Unit: deg/s, Start: 16, Scale: 0.055, Offset: 0, Range: -18.75 - 18.75 (Packed: -341 - 341)
 * @var can_1_sas_data::sas_err_internal
 *     @brief sas_err_internal. Start: 28, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_sas_data::sas_err_range
 *     @brief sas_err_range. Start: 29, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_sas_data::sas_err_rev_cnt
 *     @brief sas_err_rev_cnt. Start: 30, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_sas_data::sas_err_spd_ovfl
 *     @brief sas_err_spd_ovfl. Start: 31, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_sas_data::rev_cnt_steering
 *     @brief rev_cnt_steering. Unit: rev, Start: 32, Scale: 1, Offset: 0, Range: -2147483648 - 2147483647 (Packed: -2147483648 - 2147483647)
 */
struct can_1_sas_data {
    float angle_steering;
    float vel_steering;
    bool sas_err_internal;
    bool sas_err_range;
    bool sas_err_rev_cnt;
    bool sas_err_spd_ovfl;
    int32_t rev_cnt_steering;
};

/**
 * @struct can_1_bms_status
 * @brief Unpacked bms_status signal values
 *
 * @var can_1_bms_status::soc_accum
 *     @brief soc_accum. Unit: %, Start: 0, Scale: 0.03125, Offset: 0, Range: 0 - 128 (Packed: 0 - 4096)
 * @var can_1_bms_status::bms_fault_ovp
 *     @brief bms_fault_ovp. Start: 12, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_bms_status::bms_fault_uvp
 *     @brief bms_fault_uvp. Start: 13, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_bms_status::bms_fault_otp
 *     @brief bms_fault_otp. Start: 14, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_bms_status::bms_fault_utp
 *     @brief bms_fault_utp. Start: 15, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_bms_status::cur_accum
 *     @brief cur_accum. Unit: A, Start: 16, Scale: 0.0078125, Offset: -256, Range: -256 - 256 (Packed: 0 - 65536)
 * @var can_1_bms_status::vlt_accum_6811
 *     @brief vlt_accum_6811. Unit: V, Start: 32, Scale: 0.0390625, Offset: 0, Range: 0 - 640 (Packed: 0 - 16384)
 * @var can_1_bms_status::bms_fault_pcharge
 *     @brief bms_fault_pcharge. Start: 46, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_bms_status::precharge_cplt
 *     @brief precharge_cplt. Start: 47, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_bms_status::vlt_accum
 *     @brief vlt_accum. Unit: V, Start: 48, Scale: 0.009765625, Offset: 0, Range: 0 - 640 (Packed: 0 - 65536)
 */
struct can_1_bms_status {
    float soc_accum;
    bool bms_fault_ovp;
    bool bms_fault_uvp;
    bool bms_fault_otp;
    bool bms_fault_utp;
    float cur_accum;
    float vlt_accum_6811;
    bool bms_fault_pcharge;
    bool precharge_cplt;
    float vlt_accum;
};

/**
 * @struct can_1_swb_regen
 * @brief Unpacked swb_regen signal values
 *
 * @var can_1_swb_regen::swb_load_cell_0
 *     @brief swb_load_cell_0. Unit: %, Start: 0, Scale: 0.00152590218966964, Offset: 0, Range: 0 - 100 (Packed: 0 - 65535)
 * @var can_1_swb_regen::swb_load_cell_1
 *     @brief swb_load_cell_1. Unit: %, Start: 16, Scale: 0.00152590218966964, Offset: 0, Range: 0 - 100 (Packed: 0 - 65535)
 */
struct can_1_swb_regen {
    float swb_load_cell_0;
    float swb_load_cell_1;
};

/**
 * @struct can_1_swb_switches
 * @brief Unpacked swb_switches signal values
 *
 * @var can_1_swb_switches::swb_quad_enc
 *     @brief swb_quad_enc. Unit: %, Start: 0, Scale: 0.00392156862745098, Offset: 0, Range: 0 - 1 (Packed: 0 - 255)
 * @var can_1_swb_switches::swb_rotary_0
 *     @brief swb_rotary_0. Start: 8, Scale: 1, Offset: 0, Range: 0 - 7 (Packed: 0 - 7)
 * @var can_1_swb_switches::swb_rotary_1
 *     @brief swb_rotary_1. Start: 11, Scale: 1, Offset: 0, Range: 0 - 7 (Packed: 0 - 7)
 * @var can_1_swb_switches::swb_button_0
 *     @brief swb_button_0. Start: 14, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_swb_switches::swb_button_1
 *     @brief swb_button_1. Start: 15, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_swb_switches::swb_rotary_2
 *     @brief swb_rotary_2. Start: 16, Scale: 1, Offset: 0, Range: 0 - 7 (Packed: 0 - 7)
 * @var can_1_swb_switches::swb_rotary_3
 *     @brief swb_rotary_3. Start: 19, Scale: 1, Offset: 0, Range: 0 - 7 (Packed: 0 - 7)
 */
struct can_1_swb_switches {
    float swb_quad_enc;
    uint32_t swb_rotary_0;
    uint32_t swb_rotary_1;
    bool swb_button_0;
    bool swb_button_1;
    uint32_t swb_rotary_2;
    uint32_t swb_rotary_3;
};

/**
 * @struct can_1_fsb_aux_switches
 * @brief Unpacked fsb_aux_switches signal values
 *
 * @var can_1_fsb_aux_switches::aux_tv
 *     @brief aux_tv. Start: 0, Scale: -1, Offset: 1, Range: 0 - 1 (Packed: 1 - 0)
 * @var can_1_fsb_aux_switches::aux_drive
 *     @brief aux_drive. Start: 1, Scale: -1, Offset: 1, Range: 0 - 1 (Packed: 1 - 0)
 * @var can_1_fsb_aux_switches::aux_cooling
 *     @brief aux_cooling. Start: 2, Scale: -1, Offset: 1, Range: 0 - 1 (Packed: 1 - 0)
 * @var can_1_fsb_aux_switches::aux_3
 *     @brief aux_3. Start: 3, Scale: -1, Offset: 1, Range: 0 - 1 (Packed: 1 - 0)
 * @var can_1_fsb_aux_switches::aux_4
 *     @brief aux_4. Start: 4, Scale: -1, Offset: 1, Range: 0 - 1 (Packed: 1 - 0)
 */
struct can_1_fsb_aux_switches {
    uint32_t aux_tv;
    uint32_t aux_drive;
    uint32_t aux_cooling;
    uint32_t aux_3;
    uint32_t aux_4;
};

/**
 * @struct can_1_cpu_bms_viewer_poll
 * @brief Unpacked cpu_bms_viewer_poll signal values
 *
 * @var can_1_cpu_bms_viewer_poll::bms_viewer_poll_en
 *     @brief bms_viewer_poll_en. Start: 0, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 */
struct can_1_cpu_bms_viewer_poll {
    bool bms_viewer_poll_en;
};

/**
 * @struct can_1_safety_pump_duty
 * @brief Unpacked safety_pump_duty signal values
 *
 * @var can_1_safety_pump_duty::pump_duty_cycle
 *     @brief pump_duty_cycle. Start: 0, Scale: 1, Offset: 0, Range: 0 - 255 (Packed: 0 - 255)
 */
struct can_1_safety_pump_duty {
    uint32_t pump_duty_cycle;
};

/**
 * @struct can_1_bms_cell_data
 * @brief Unpacked bms_cell_data signal values
 *
 * @var can_1_bms_cell_data::idx_cell_data
 *     @brief idx_cell_data. Start: 0, Scale: 1, Offset: 0, Range: 0 - 143 (Packed: 0 - 143)
 * @var can_1_bms_cell_data::vlt_cell_data
 *     @brief vlt_cell_data. Unit: V, Start: 8, Scale: 0.0001, Offset: 0, Range: 0 - 6.5535 (Packed: 0 - 65535)
 * @var can_1_bms_cell_data::temp_cell_data
 *     @brief temp_cell_data. Unit: C, Start: 24, Scale: 0.01953125, Offset: -10, Range: -10 - 70 (Packed: 0 - 4096)
 * @var can_1_bms_cell_data::cell_fault_disconnected
 *     @brief cell_fault_disconnected. Start: 36, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_bms_cell_data::cell_fault_dc
 *     @brief cell_fault_dc. Start: 37, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_bms_cell_data::cell_fault_temp
 *     @brief cell_fault_temp. Start: 38, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_bms_cell_data::cell_fault_pec
 *     @brief cell_fault_pec. Start: 39, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_bms_cell_data::soc_cell_data
 *     @brief soc_cell_data. Unit: %, Start: 40, Scale: 0.03125, Offset: 0, Range: 0 - 128 (Packed: 0 - 4096)
 * @var can_1_bms_cell_data::soh_cell_data
 *     @brief soh_cell_data. Unit: %, Start: 52, Scale: 0.03125, Offset: 0, Range: 0 - 128 (Packed: 0 - 4096)
 */
struct can_1_bms_cell_data {
    uint32_t idx_cell_data;
    float vlt_cell_data;
    float temp_cell_data;
    bool cell_fault_disconnected;
    bool cell_fault_dc;
    bool cell_fault_temp;
    bool cell_fault_pec;
    float soc_cell_data;
    float soh_cell_data;
};

/**
 * @struct can_1_safety_tractive_status
 * @brief Unpacked safety_tractive_status signal values
 *
 * @var can_1_safety_tractive_status::throttle_cmd
 *     @brief throttle_cmd. Unit: %, Start: 0, Scale: 0.05, Offset: 0, Range: -100 - 100 (Packed: -2000 - 2000)
 * @var can_1_safety_tractive_status::tv_pwr_limit_on
 *     @brief tv_pwr_limit_on. Start: 12, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_safety_tractive_status::tv_ec_enabled
 *     @brief tv_ec_enabled. Start: 13, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_safety_tractive_status::tv_enabled
 *     @brief tv_enabled. Start: 14, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_safety_tractive_status::tv_on
 *     @brief tv_on. Start: 15, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_safety_tractive_status::amk_state_rl
 *     @brief amk_state_rl. Start: 16, Scale: 1, Offset: 0, Range: 0 - 4 (Packed: 0 - 4)
 * @var can_1_safety_tractive_status::amk_state_rr
 *     @brief amk_state_rr. Start: 19, Scale: 1, Offset: 0, Range: 0 - 4 (Packed: 0 - 4)
 * @var can_1_safety_tractive_status::regen_active
 *     @brief regen_active. Start: 23, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_safety_tractive_status::amk_state_fl
 *     @brief amk_state_fl. Start: 24, Scale: 1, Offset: 0, Range: 0 - 4 (Packed: 0 - 4)
 * @var can_1_safety_tractive_status::amk_state_fr
 *     @brief amk_state_fr. Start: 27, Scale: 1, Offset: 0, Range: 0 - 4 (Packed: 0 - 4)
 * @var can_1_safety_tractive_status::tractive_ctrl_type
 *     @brief tractive_ctrl_type. Start: 32, Scale: 1, Offset: 0, Range: 0 - 5 (Packed: 0 - 5)
 * @var can_1_safety_tractive_status::err_vnav_msg
 *     @brief err_vnav_msg. Start: 35, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_safety_tractive_status::err_bms_msg
 *     @brief err_bms_msg. Start: 36, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_safety_tractive_status::err_sas_msg
 *     @brief err_sas_msg. Start: 37, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_safety_tractive_status::err_swb_msg
 *     @brief err_swb_msg. Start: 38, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_safety_tractive_status::err_aux_msg
 *     @brief err_aux_msg. Start: 39, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 */
struct can_1_safety_tractive_status {
    float throttle_cmd;
    bool tv_pwr_limit_on;
    bool tv_ec_enabled;
    bool tv_enabled;
    bool tv_on;
    uint32_t amk_state_rl;
    uint32_t amk_state_rr;
    bool regen_active;
    uint32_t amk_state_fl;
    uint32_t amk_state_fr;
    uint32_t tractive_ctrl_type;
    bool err_vnav_msg;
    bool err_bms_msg;
    bool err_sas_msg;
    bool err_swb_msg;
    bool err_aux_msg;
};

/**
 * @struct can_1_bms_cell_vlt
 * @brief Unpacked bms_cell_vlt signal values
 *
 * @var can_1_bms_cell_vlt::vlt_cell_min
 *     @brief vlt_cell_min. Unit: V, Start: 0, Scale: 0.0001, Offset: 0, Range: 0 - 6.5535 (Packed: 0 - 65535)
 * @var can_1_bms_cell_vlt::idx_vlt_min
 *     @brief idx_vlt_min. Start: 16, Scale: 1, Offset: 0, Range: 0 - 143 (Packed: 0 - 143)
 * @var can_1_bms_cell_vlt::idx_vlt_max
 *     @brief idx_vlt_max. Start: 24, Scale: 1, Offset: 0, Range: 0 - 143 (Packed: 0 - 143)
 * @var can_1_bms_cell_vlt::vlt_cell_max
 *     @brief vlt_cell_max. Unit: V, Start: 32, Scale: 0.0001, Offset: 0, Range: 0 - 6.5535 (Packed: 0 - 65535)
 */
struct can_1_bms_cell_vlt {
    float vlt_cell_min;
    uint32_t idx_vlt_min;
    uint32_t idx_vlt_max;
    float vlt_cell_max;
};

/**
 * @struct can_1_bms_cell_temp
 * @brief Unpacked bms_cell_temp signal values
 *
 * @var can_1_bms_cell_temp::idx_temp_min
 *     @brief idx_temp_min. Start: 0, Scale: 1, Offset: 0, Range: 0 - 143 (Packed: 0 - 143)
 * @var can_1_bms_cell_temp::idx_temp_max
 *     @brief idx_temp_max. Start: 8, Scale: 1, Offset: 0, Range: 0 - 143 (Packed: 0 - 143)
 * @var can_1_bms_cell_temp::temp_cell_min
 *     @brief temp_cell_min. Unit: C, Start: 16, Scale: 0.01953125, Offset: -10, Range: 0 - 70 (Packed: 512 - 4096)
 * @var can_1_bms_cell_temp::temp_cell_max
 *     @brief temp_cell_max. Unit: C, Start: 28, Scale: 0.01953125, Offset: -10, Range: 0 - 70 (Packed: 512 - 4096)
 * @var can_1_bms_cell_temp::temp_accum_avg
 *     @brief temp_accum_avg. Unit: C, Start: 40, Scale: 0.01953125, Offset: -10, Range: 0 - 70 (Packed: 512 - 4096)
 */
struct can_1_bms_cell_temp {
    uint32_t idx_temp_min;
    uint32_t idx_temp_max;
    float temp_cell_min;
    float temp_cell_max;
    float temp_accum_avg;
};

/**
 * @struct can_1_fsb_status
 * @brief Unpacked fsb_status signal values
 *
 * @var can_1_fsb_status::degc_board_temp_fsb
 *     @brief degc_board_temp_fsb. Unit: C, Start: 0, Scale: 0.001953125, Offset: 0, Range: 0 - 127.998046875 (Packed: 0 - 65535)
 * @var can_1_fsb_status::v_5va_fsb
 *     @brief v_5va_fsb. Unit: V, Start: 16, Scale: 0.0001, Offset: 0, Range: 0 - 6.5535 (Packed: 0 - 65535)
 * @var can_1_fsb_status::v_3v3a_fsb
 *     @brief v_3v3a_fsb. Unit: V, Start: 32, Scale: 0.0001, Offset: 0, Range: 0 - 6.5535 (Packed: 0 - 65535)
 * @var can_1_fsb_status::fsb_analog_voltage_fail
 *     @brief fsb_analog_voltage_fail. Start: 48, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_fsb_status::fsb_digital_power_fail
 *     @brief fsb_digital_power_fail. Start: 49, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_fsb_status::fsb_overtemp
 *     @brief fsb_overtemp. Start: 50, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_fsb_status::fsb_setup_complete
 *     @brief fsb_setup_complete. Start: 51, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 */
struct can_1_fsb_status {
    float degc_board_temp_fsb;
    float v_5va_fsb;
    float v_3v3a_fsb;
    bool fsb_analog_voltage_fail;
    bool fsb_digital_power_fail;
    bool fsb_overtemp;
    bool fsb_setup_complete;
};

/**
 * @struct can_1_rsb_status
 * @brief Unpacked rsb_status signal values
 *
 * @var can_1_rsb_status::degc_board_temp_rsb
 *     @brief degc_board_temp_rsb. Unit: C, Start: 0, Scale: 0.001953125, Offset: 0, Range: 0 - 127.998046875 (Packed: 0 - 65535)
 * @var can_1_rsb_status::v_5va_rsb
 *     @brief v_5va_rsb. Unit: V, Start: 16, Scale: 0.0001, Offset: 0, Range: 0 - 6.5535 (Packed: 0 - 65535)
 * @var can_1_rsb_status::v_3v3a_rsb
 *     @brief v_3v3a_rsb. Unit: V, Start: 32, Scale: 0.0001, Offset: 0, Range: 0 - 6.5535 (Packed: 0 - 65535)
 * @var can_1_rsb_status::rsb_analog_voltage_fail
 *     @brief rsb_analog_voltage_fail. Start: 48, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_rsb_status::rsb_digital_power_fail
 *     @brief rsb_digital_power_fail. Start: 49, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_rsb_status::rsb_overtemp
 *     @brief rsb_overtemp. Start: 50, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_rsb_status::rsb_setup_complete
 *     @brief rsb_setup_complete. Start: 51, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 */
struct can_1_rsb_status {
    float degc_board_temp_rsb;
    float v_5va_rsb;
    float v_3v3a_rsb;
    bool rsb_analog_voltage_fail;
    bool rsb_digital_power_fail;
    bool rsb_overtemp;
    bool rsb_setup_complete;
};


/**
 * @struct can_1_safety_status_packed
 * @brief Packed safety_status signal values
 *
 * @var can_1_safety_status::car_state
 *     @brief car_state. Start: 0, Scale: 1, Offset: 0, Range: 0 - 6 (Packed: 0 - 6)
 * @var can_1_safety_status::fault_bms
 *     @brief fault_bms. Start: 3, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_safety_status::fault_imd
 *     @brief fault_imd. Start: 4, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_safety_status::fault_bspd
 *     @brief fault_bspd. Start: 5, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_safety_status::shutdown_state
 *     @brief shutdown_state. Start: 6, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_safety_status::brake_pressed
 *     @brief brake_pressed. Start: 7, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_safety_status::vlt_lv_batt
 *     @brief vlt_lv_batt. Unit: V, Start: 8, Scale: 0.03125, Offset: 0, Range: 0 - 63.96875 (Packed: 0 - 2047)
 * @var can_1_safety_status::safety_hv_connected
 *     @brief safety_hv_connected. Start: 19, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_safety_status::fault_apps
 *     @brief fault_apps. Start: 20, Scale: 1, Offset: 0, Range: 0 - 3 (Packed: 0 - 3)
 * @var can_1_safety_status::fault_btsf
 *     @brief fault_btsf. Start: 22, Scale: 1, Offset: 0, Range: 0 - 3 (Packed: 0 - 3)
 * @var can_1_safety_status::bp_rear
 *     @brief bp_rear. Unit: psi, Start: 24, Scale: 4, Offset: 0, Range: 0 - 1020 (Packed: 0 - 255)
 * @var can_1_safety_status::bp_front
 *     @brief bp_front. Unit: psi, Start: 32, Scale: 4, Offset: 0, Range: 0 - 1020 (Packed: 0 - 255)
 * @var can_1_safety_status::cur_bspd
 *     @brief cur_bspd. Unit: A, Start: 40, Scale: 0.0078125, Offset: -256, Range: -256 - 256 (Packed: 0 - 65536)
 */
struct __attribute__((packed)) can_1_safety_status_packed {
    uint8_t car_state : 3;
    uint8_t fault_bms : 1;
    uint8_t fault_imd : 1;
    uint8_t fault_bspd : 1;
    uint8_t shutdown_state : 1;
    uint8_t brake_pressed : 1;
    uint16_t vlt_lv_batt : 11;
    uint8_t safety_hv_connected : 1;
    uint8_t fault_apps : 2;
    uint8_t fault_btsf : 2;
    uint8_t bp_rear : 8;
    uint8_t bp_front : 8;
    uint16_t cur_bspd : 16;
};

/**
 * @struct can_1_safety_sw_hard_fault_packed
 * @brief Packed safety_sw_hard_fault signal values
 *
 * @var can_1_safety_sw_hard_fault::sw_hard_fault_enable
 *     @brief sw_hard_fault_enable. Start: 0, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 */
struct __attribute__((packed)) can_1_safety_sw_hard_fault_packed {
    uint8_t sw_hard_fault_enable : 1;
    uint8_t _padding_0 : 7;
};

/**
 * @struct can_1_fsb_laptrigger_message_packed
 * @brief Packed fsb_laptrigger_message signal values
 *
 * @var can_1_fsb_laptrigger_message::fsb_lap_count
 *     @brief fsb_lap_count. Start: 0, Scale: 1, Offset: 0, Range: 0 - 255 (Packed: 0 - 255)
 * @var can_1_fsb_laptrigger_message::fsb_laptrigger_elapsed_time
 *     @brief fsb_laptrigger_elapsed_time. Unit: ms, Start: 8, Scale: 0.1, Offset: 0, Range: 0 - 429496729.5 (Packed: 0 - 4294967295)
 */
struct __attribute__((packed)) can_1_fsb_laptrigger_message_packed {
    uint8_t fsb_lap_count : 8;
    uint32_t fsb_laptrigger_elapsed_time : 32;
};

/**
 * @struct can_1_apps_right_packed
 * @brief Packed apps_right signal values
 *
 * @var can_1_apps_right::pos_apps_r
 *     @brief pos_apps_r. Unit: deg, Start: 0, Scale: 0.02197265625, Offset: 0, Range: -180 - 179.97802734375 (Packed: -8192 - 8191)
 * @var can_1_apps_right::vel_apps_r
 *     @brief vel_apps_r. Unit: deg/s, Start: 16, Scale: 0.055, Offset: 0, Range: -18.75 - 18.75 (Packed: -341 - 341)
 * @var can_1_apps_right::apps_err_internal_r
 *     @brief apps_err_internal_r. Start: 28, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_apps_right::apps_err_range_r
 *     @brief apps_err_range_r. Start: 29, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_apps_right::apps_err_rev_cnt_r
 *     @brief apps_err_rev_cnt_r. Start: 30, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_apps_right::apps_err_spd_ovfl_r
 *     @brief apps_err_spd_ovfl_r. Start: 31, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_apps_right::rev_cnt_apps_r
 *     @brief rev_cnt_apps_r. Unit: rev, Start: 32, Scale: 1, Offset: 0, Range: -2147483648 - 2147483647 (Packed: -2147483648 - 2147483647)
 */
struct __attribute__((packed)) can_1_apps_right_packed {
    int16_t pos_apps_r : 14;
    uint8_t _padding_0 : 2;
    int16_t vel_apps_r : 12;
    uint8_t apps_err_internal_r : 1;
    uint8_t apps_err_range_r : 1;
    uint8_t apps_err_rev_cnt_r : 1;
    uint8_t apps_err_spd_ovfl_r : 1;
    int32_t rev_cnt_apps_r : 32;
};

/**
 * @struct can_1_apps_left_packed
 * @brief Packed apps_left signal values
 *
 * @var can_1_apps_left::pos_apps_l
 *     @brief pos_apps_l. Unit: deg, Start: 0, Scale: 0.02197265625, Offset: 0, Range: -180 - 179.97802734375 (Packed: -8192 - 8191)
 * @var can_1_apps_left::vel_apps_l
 *     @brief vel_apps_l. Unit: deg/s, Start: 16, Scale: 0.055, Offset: 0, Range: -18.75 - 18.75 (Packed: -341 - 341)
 * @var can_1_apps_left::apps_err_internal_l
 *     @brief apps_err_internal_l. Start: 28, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_apps_left::apps_err_range_l
 *     @brief apps_err_range_l. Start: 29, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_apps_left::apps_err_rev_cnt_l
 *     @brief apps_err_rev_cnt_l. Start: 30, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_apps_left::apps_err_spd_ovfl_l
 *     @brief apps_err_spd_ovfl_l. Start: 31, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_apps_left::rev_cnt_apps_l
 *     @brief rev_cnt_apps_l. Unit: rev, Start: 32, Scale: 1, Offset: 0, Range: -2147483648 - 2147483647 (Packed: -2147483648 - 2147483647)
 */
struct __attribute__((packed)) can_1_apps_left_packed {
    int16_t pos_apps_l : 14;
    uint8_t _padding_0 : 2;
    int16_t vel_apps_l : 12;
    uint8_t apps_err_internal_l : 1;
    uint8_t apps_err_range_l : 1;
    uint8_t apps_err_rev_cnt_l : 1;
    uint8_t apps_err_spd_ovfl_l : 1;
    int32_t rev_cnt_apps_l : 32;
};

/**
 * @struct can_1_sas_data_packed
 * @brief Packed sas_data signal values
 *
 * @var can_1_sas_data::angle_steering
 *     @brief angle_steering. Unit: deg, Start: 0, Scale: 0.02197265625, Offset: 0, Range: -130 - 130 (Packed: -5916 - 5916)
 * @var can_1_sas_data::vel_steering
 *     @brief vel_steering. Unit: deg/s, Start: 16, Scale: 0.055, Offset: 0, Range: -18.75 - 18.75 (Packed: -341 - 341)
 * @var can_1_sas_data::sas_err_internal
 *     @brief sas_err_internal. Start: 28, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_sas_data::sas_err_range
 *     @brief sas_err_range. Start: 29, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_sas_data::sas_err_rev_cnt
 *     @brief sas_err_rev_cnt. Start: 30, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_sas_data::sas_err_spd_ovfl
 *     @brief sas_err_spd_ovfl. Start: 31, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_sas_data::rev_cnt_steering
 *     @brief rev_cnt_steering. Unit: rev, Start: 32, Scale: 1, Offset: 0, Range: -2147483648 - 2147483647 (Packed: -2147483648 - 2147483647)
 */
struct __attribute__((packed)) can_1_sas_data_packed {
    int16_t angle_steering : 14;
    uint8_t _padding_0 : 2;
    int16_t vel_steering : 12;
    uint8_t sas_err_internal : 1;
    uint8_t sas_err_range : 1;
    uint8_t sas_err_rev_cnt : 1;
    uint8_t sas_err_spd_ovfl : 1;
    int32_t rev_cnt_steering : 32;
};

/**
 * @struct can_1_bms_status_packed
 * @brief Packed bms_status signal values
 *
 * @var can_1_bms_status::soc_accum
 *     @brief soc_accum. Unit: %, Start: 0, Scale: 0.03125, Offset: 0, Range: 0 - 128 (Packed: 0 - 4096)
 * @var can_1_bms_status::bms_fault_ovp
 *     @brief bms_fault_ovp. Start: 12, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_bms_status::bms_fault_uvp
 *     @brief bms_fault_uvp. Start: 13, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_bms_status::bms_fault_otp
 *     @brief bms_fault_otp. Start: 14, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_bms_status::bms_fault_utp
 *     @brief bms_fault_utp. Start: 15, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_bms_status::cur_accum
 *     @brief cur_accum. Unit: A, Start: 16, Scale: 0.0078125, Offset: -256, Range: -256 - 256 (Packed: 0 - 65536)
 * @var can_1_bms_status::vlt_accum_6811
 *     @brief vlt_accum_6811. Unit: V, Start: 32, Scale: 0.0390625, Offset: 0, Range: 0 - 640 (Packed: 0 - 16384)
 * @var can_1_bms_status::bms_fault_pcharge
 *     @brief bms_fault_pcharge. Start: 46, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_bms_status::precharge_cplt
 *     @brief precharge_cplt. Start: 47, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_bms_status::vlt_accum
 *     @brief vlt_accum. Unit: V, Start: 48, Scale: 0.009765625, Offset: 0, Range: 0 - 640 (Packed: 0 - 65536)
 */
struct __attribute__((packed)) can_1_bms_status_packed {
    uint16_t soc_accum : 12;
    uint8_t bms_fault_ovp : 1;
    uint8_t bms_fault_uvp : 1;
    uint8_t bms_fault_otp : 1;
    uint8_t bms_fault_utp : 1;
    uint16_t cur_accum : 16;
    uint16_t vlt_accum_6811 : 14;
    uint8_t bms_fault_pcharge : 1;
    uint8_t precharge_cplt : 1;
    uint16_t vlt_accum : 16;
};

/**
 * @struct can_1_swb_regen_packed
 * @brief Packed swb_regen signal values
 *
 * @var can_1_swb_regen::swb_load_cell_0
 *     @brief swb_load_cell_0. Unit: %, Start: 0, Scale: 0.00152590218966964, Offset: 0, Range: 0 - 100 (Packed: 0 - 65535)
 * @var can_1_swb_regen::swb_load_cell_1
 *     @brief swb_load_cell_1. Unit: %, Start: 16, Scale: 0.00152590218966964, Offset: 0, Range: 0 - 100 (Packed: 0 - 65535)
 */
struct __attribute__((packed)) can_1_swb_regen_packed {
    uint16_t swb_load_cell_0 : 16;
    uint16_t swb_load_cell_1 : 16;
};

/**
 * @struct can_1_swb_switches_packed
 * @brief Packed swb_switches signal values
 *
 * @var can_1_swb_switches::swb_quad_enc
 *     @brief swb_quad_enc. Unit: %, Start: 0, Scale: 0.00392156862745098, Offset: 0, Range: 0 - 1 (Packed: 0 - 255)
 * @var can_1_swb_switches::swb_rotary_0
 *     @brief swb_rotary_0. Start: 8, Scale: 1, Offset: 0, Range: 0 - 7 (Packed: 0 - 7)
 * @var can_1_swb_switches::swb_rotary_1
 *     @brief swb_rotary_1. Start: 11, Scale: 1, Offset: 0, Range: 0 - 7 (Packed: 0 - 7)
 * @var can_1_swb_switches::swb_button_0
 *     @brief swb_button_0. Start: 14, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_swb_switches::swb_button_1
 *     @brief swb_button_1. Start: 15, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_swb_switches::swb_rotary_2
 *     @brief swb_rotary_2. Start: 16, Scale: 1, Offset: 0, Range: 0 - 7 (Packed: 0 - 7)
 * @var can_1_swb_switches::swb_rotary_3
 *     @brief swb_rotary_3. Start: 19, Scale: 1, Offset: 0, Range: 0 - 7 (Packed: 0 - 7)
 */
struct __attribute__((packed)) can_1_swb_switches_packed {
    uint8_t swb_quad_enc : 8;
    uint8_t swb_rotary_0 : 3;
    uint8_t swb_rotary_1 : 3;
    uint8_t swb_button_0 : 1;
    uint8_t swb_button_1 : 1;
    uint8_t swb_rotary_2 : 3;
    uint8_t swb_rotary_3 : 3;
    uint8_t _padding_0 : 2;
};

/**
 * @struct can_1_fsb_aux_switches_packed
 * @brief Packed fsb_aux_switches signal values
 *
 * @var can_1_fsb_aux_switches::aux_tv
 *     @brief aux_tv. Start: 0, Scale: -1, Offset: 1, Range: 0 - 1 (Packed: 1 - 0)
 * @var can_1_fsb_aux_switches::aux_drive
 *     @brief aux_drive. Start: 1, Scale: -1, Offset: 1, Range: 0 - 1 (Packed: 1 - 0)
 * @var can_1_fsb_aux_switches::aux_cooling
 *     @brief aux_cooling. Start: 2, Scale: -1, Offset: 1, Range: 0 - 1 (Packed: 1 - 0)
 * @var can_1_fsb_aux_switches::aux_3
 *     @brief aux_3. Start: 3, Scale: -1, Offset: 1, Range: 0 - 1 (Packed: 1 - 0)
 * @var can_1_fsb_aux_switches::aux_4
 *     @brief aux_4. Start: 4, Scale: -1, Offset: 1, Range: 0 - 1 (Packed: 1 - 0)
 */
struct __attribute__((packed)) can_1_fsb_aux_switches_packed {
    uint8_t aux_tv : 1;
    uint8_t aux_drive : 1;
    uint8_t aux_cooling : 1;
    uint8_t aux_3 : 1;
    uint8_t aux_4 : 1;
    uint8_t _padding_0 : 3;
};

/**
 * @struct can_1_cpu_bms_viewer_poll_packed
 * @brief Packed cpu_bms_viewer_poll signal values
 *
 * @var can_1_cpu_bms_viewer_poll::bms_viewer_poll_en
 *     @brief bms_viewer_poll_en. Start: 0, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 */
struct __attribute__((packed)) can_1_cpu_bms_viewer_poll_packed {
    uint8_t bms_viewer_poll_en : 1;
    uint8_t _padding_0 : 7;
};

/**
 * @struct can_1_safety_pump_duty_packed
 * @brief Packed safety_pump_duty signal values
 *
 * @var can_1_safety_pump_duty::pump_duty_cycle
 *     @brief pump_duty_cycle. Start: 0, Scale: 1, Offset: 0, Range: 0 - 255 (Packed: 0 - 255)
 */
struct __attribute__((packed)) can_1_safety_pump_duty_packed {
    uint8_t pump_duty_cycle : 8;
};

/**
 * @struct can_1_bms_cell_data_packed
 * @brief Packed bms_cell_data signal values
 *
 * @var can_1_bms_cell_data::idx_cell_data
 *     @brief idx_cell_data. Start: 0, Scale: 1, Offset: 0, Range: 0 - 143 (Packed: 0 - 143)
 * @var can_1_bms_cell_data::vlt_cell_data
 *     @brief vlt_cell_data. Unit: V, Start: 8, Scale: 0.0001, Offset: 0, Range: 0 - 6.5535 (Packed: 0 - 65535)
 * @var can_1_bms_cell_data::temp_cell_data
 *     @brief temp_cell_data. Unit: C, Start: 24, Scale: 0.01953125, Offset: -10, Range: -10 - 70 (Packed: 0 - 4096)
 * @var can_1_bms_cell_data::cell_fault_disconnected
 *     @brief cell_fault_disconnected. Start: 36, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_bms_cell_data::cell_fault_dc
 *     @brief cell_fault_dc. Start: 37, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_bms_cell_data::cell_fault_temp
 *     @brief cell_fault_temp. Start: 38, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_bms_cell_data::cell_fault_pec
 *     @brief cell_fault_pec. Start: 39, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_bms_cell_data::soc_cell_data
 *     @brief soc_cell_data. Unit: %, Start: 40, Scale: 0.03125, Offset: 0, Range: 0 - 128 (Packed: 0 - 4096)
 * @var can_1_bms_cell_data::soh_cell_data
 *     @brief soh_cell_data. Unit: %, Start: 52, Scale: 0.03125, Offset: 0, Range: 0 - 128 (Packed: 0 - 4096)
 */
struct __attribute__((packed)) can_1_bms_cell_data_packed {
    uint8_t idx_cell_data : 8;
    uint16_t vlt_cell_data : 16;
    uint16_t temp_cell_data : 12;
    uint8_t cell_fault_disconnected : 1;
    uint8_t cell_fault_dc : 1;
    uint8_t cell_fault_temp : 1;
    uint8_t cell_fault_pec : 1;
    uint16_t soc_cell_data : 12;
    uint16_t soh_cell_data : 12;
};

/**
 * @struct can_1_safety_tractive_status_packed
 * @brief Packed safety_tractive_status signal values
 *
 * @var can_1_safety_tractive_status::throttle_cmd
 *     @brief throttle_cmd. Unit: %, Start: 0, Scale: 0.05, Offset: 0, Range: -100 - 100 (Packed: -2000 - 2000)
 * @var can_1_safety_tractive_status::tv_pwr_limit_on
 *     @brief tv_pwr_limit_on. Start: 12, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_safety_tractive_status::tv_ec_enabled
 *     @brief tv_ec_enabled. Start: 13, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_safety_tractive_status::tv_enabled
 *     @brief tv_enabled. Start: 14, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_safety_tractive_status::tv_on
 *     @brief tv_on. Start: 15, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_safety_tractive_status::amk_state_rl
 *     @brief amk_state_rl. Start: 16, Scale: 1, Offset: 0, Range: 0 - 4 (Packed: 0 - 4)
 * @var can_1_safety_tractive_status::amk_state_rr
 *     @brief amk_state_rr. Start: 19, Scale: 1, Offset: 0, Range: 0 - 4 (Packed: 0 - 4)
 * @var can_1_safety_tractive_status::regen_active
 *     @brief regen_active. Start: 23, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_safety_tractive_status::amk_state_fl
 *     @brief amk_state_fl. Start: 24, Scale: 1, Offset: 0, Range: 0 - 4 (Packed: 0 - 4)
 * @var can_1_safety_tractive_status::amk_state_fr
 *     @brief amk_state_fr. Start: 27, Scale: 1, Offset: 0, Range: 0 - 4 (Packed: 0 - 4)
 * @var can_1_safety_tractive_status::tractive_ctrl_type
 *     @brief tractive_ctrl_type. Start: 32, Scale: 1, Offset: 0, Range: 0 - 5 (Packed: 0 - 5)
 * @var can_1_safety_tractive_status::err_vnav_msg
 *     @brief err_vnav_msg. Start: 35, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_safety_tractive_status::err_bms_msg
 *     @brief err_bms_msg. Start: 36, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_safety_tractive_status::err_sas_msg
 *     @brief err_sas_msg. Start: 37, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_safety_tractive_status::err_swb_msg
 *     @brief err_swb_msg. Start: 38, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_safety_tractive_status::err_aux_msg
 *     @brief err_aux_msg. Start: 39, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 */
struct __attribute__((packed)) can_1_safety_tractive_status_packed {
    int16_t throttle_cmd : 12;
    uint8_t tv_pwr_limit_on : 1;
    uint8_t tv_ec_enabled : 1;
    uint8_t tv_enabled : 1;
    uint8_t tv_on : 1;
    uint8_t amk_state_rl : 3;
    uint8_t amk_state_rr : 3;
    uint8_t _padding_0 : 1;
    uint8_t regen_active : 1;
    uint8_t amk_state_fl : 3;
    uint8_t amk_state_fr : 3;
    uint8_t _padding_1 : 2;
    uint8_t tractive_ctrl_type : 3;
    uint8_t err_vnav_msg : 1;
    uint8_t err_bms_msg : 1;
    uint8_t err_sas_msg : 1;
    uint8_t err_swb_msg : 1;
    uint8_t err_aux_msg : 1;
};

/**
 * @struct can_1_bms_cell_vlt_packed
 * @brief Packed bms_cell_vlt signal values
 *
 * @var can_1_bms_cell_vlt::vlt_cell_min
 *     @brief vlt_cell_min. Unit: V, Start: 0, Scale: 0.0001, Offset: 0, Range: 0 - 6.5535 (Packed: 0 - 65535)
 * @var can_1_bms_cell_vlt::idx_vlt_min
 *     @brief idx_vlt_min. Start: 16, Scale: 1, Offset: 0, Range: 0 - 143 (Packed: 0 - 143)
 * @var can_1_bms_cell_vlt::idx_vlt_max
 *     @brief idx_vlt_max. Start: 24, Scale: 1, Offset: 0, Range: 0 - 143 (Packed: 0 - 143)
 * @var can_1_bms_cell_vlt::vlt_cell_max
 *     @brief vlt_cell_max. Unit: V, Start: 32, Scale: 0.0001, Offset: 0, Range: 0 - 6.5535 (Packed: 0 - 65535)
 */
struct __attribute__((packed)) can_1_bms_cell_vlt_packed {
    uint16_t vlt_cell_min : 16;
    uint8_t idx_vlt_min : 8;
    uint8_t idx_vlt_max : 8;
    uint16_t vlt_cell_max : 16;
};

/**
 * @struct can_1_bms_cell_temp_packed
 * @brief Packed bms_cell_temp signal values
 *
 * @var can_1_bms_cell_temp::idx_temp_min
 *     @brief idx_temp_min. Start: 0, Scale: 1, Offset: 0, Range: 0 - 143 (Packed: 0 - 143)
 * @var can_1_bms_cell_temp::idx_temp_max
 *     @brief idx_temp_max. Start: 8, Scale: 1, Offset: 0, Range: 0 - 143 (Packed: 0 - 143)
 * @var can_1_bms_cell_temp::temp_cell_min
 *     @brief temp_cell_min. Unit: C, Start: 16, Scale: 0.01953125, Offset: -10, Range: 0 - 70 (Packed: 512 - 4096)
 * @var can_1_bms_cell_temp::temp_cell_max
 *     @brief temp_cell_max. Unit: C, Start: 28, Scale: 0.01953125, Offset: -10, Range: 0 - 70 (Packed: 512 - 4096)
 * @var can_1_bms_cell_temp::temp_accum_avg
 *     @brief temp_accum_avg. Unit: C, Start: 40, Scale: 0.01953125, Offset: -10, Range: 0 - 70 (Packed: 512 - 4096)
 */
struct __attribute__((packed)) can_1_bms_cell_temp_packed {
    uint8_t idx_temp_min : 8;
    uint8_t idx_temp_max : 8;
    uint16_t temp_cell_min : 12;
    uint16_t temp_cell_max : 12;
    uint16_t temp_accum_avg : 12;
    uint8_t _padding_0 : 4;
};

/**
 * @struct can_1_fsb_status_packed
 * @brief Packed fsb_status signal values
 *
 * @var can_1_fsb_status::degc_board_temp_fsb
 *     @brief degc_board_temp_fsb. Unit: C, Start: 0, Scale: 0.001953125, Offset: 0, Range: 0 - 127.998046875 (Packed: 0 - 65535)
 * @var can_1_fsb_status::v_5va_fsb
 *     @brief v_5va_fsb. Unit: V, Start: 16, Scale: 0.0001, Offset: 0, Range: 0 - 6.5535 (Packed: 0 - 65535)
 * @var can_1_fsb_status::v_3v3a_fsb
 *     @brief v_3v3a_fsb. Unit: V, Start: 32, Scale: 0.0001, Offset: 0, Range: 0 - 6.5535 (Packed: 0 - 65535)
 * @var can_1_fsb_status::fsb_analog_voltage_fail
 *     @brief fsb_analog_voltage_fail. Start: 48, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_fsb_status::fsb_digital_power_fail
 *     @brief fsb_digital_power_fail. Start: 49, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_fsb_status::fsb_overtemp
 *     @brief fsb_overtemp. Start: 50, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_fsb_status::fsb_setup_complete
 *     @brief fsb_setup_complete. Start: 51, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 */
struct __attribute__((packed)) can_1_fsb_status_packed {
    uint16_t degc_board_temp_fsb : 16;
    uint16_t v_5va_fsb : 16;
    uint16_t v_3v3a_fsb : 16;
    uint8_t fsb_analog_voltage_fail : 1;
    uint8_t fsb_digital_power_fail : 1;
    uint8_t fsb_overtemp : 1;
    uint8_t fsb_setup_complete : 1;
    uint8_t _padding_0 : 4;
};

/**
 * @struct can_1_rsb_status_packed
 * @brief Packed rsb_status signal values
 *
 * @var can_1_rsb_status::degc_board_temp_rsb
 *     @brief degc_board_temp_rsb. Unit: C, Start: 0, Scale: 0.001953125, Offset: 0, Range: 0 - 127.998046875 (Packed: 0 - 65535)
 * @var can_1_rsb_status::v_5va_rsb
 *     @brief v_5va_rsb. Unit: V, Start: 16, Scale: 0.0001, Offset: 0, Range: 0 - 6.5535 (Packed: 0 - 65535)
 * @var can_1_rsb_status::v_3v3a_rsb
 *     @brief v_3v3a_rsb. Unit: V, Start: 32, Scale: 0.0001, Offset: 0, Range: 0 - 6.5535 (Packed: 0 - 65535)
 * @var can_1_rsb_status::rsb_analog_voltage_fail
 *     @brief rsb_analog_voltage_fail. Start: 48, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_rsb_status::rsb_digital_power_fail
 *     @brief rsb_digital_power_fail. Start: 49, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_rsb_status::rsb_overtemp
 *     @brief rsb_overtemp. Start: 50, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_1_rsb_status::rsb_setup_complete
 *     @brief rsb_setup_complete. Start: 51, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 */
struct __attribute__((packed)) can_1_rsb_status_packed {
    uint16_t degc_board_temp_rsb : 16;
    uint16_t v_5va_rsb : 16;
    uint16_t v_3v3a_rsb : 16;
    uint8_t rsb_analog_voltage_fail : 1;
    uint8_t rsb_digital_power_fail : 1;
    uint8_t rsb_overtemp : 1;
    uint8_t rsb_setup_complete : 1;
    uint8_t _padding_0 : 4;
};


int can_1_safety_status_pack(uint8_t* dst_ptr, const struct can_1_safety_status* src_ptr, size_t size);
int can_1_safety_status_unpack(struct can_1_safety_status* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_1_safety_sw_hard_fault_pack(uint8_t* dst_ptr, const struct can_1_safety_sw_hard_fault* src_ptr, size_t size);
int can_1_safety_sw_hard_fault_unpack(struct can_1_safety_sw_hard_fault* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_1_fsb_laptrigger_message_pack(uint8_t* dst_ptr, const struct can_1_fsb_laptrigger_message* src_ptr, size_t size);
int can_1_fsb_laptrigger_message_unpack(struct can_1_fsb_laptrigger_message* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_1_apps_right_pack(uint8_t* dst_ptr, const struct can_1_apps_right* src_ptr, size_t size);
int can_1_apps_right_unpack(struct can_1_apps_right* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_1_apps_left_pack(uint8_t* dst_ptr, const struct can_1_apps_left* src_ptr, size_t size);
int can_1_apps_left_unpack(struct can_1_apps_left* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_1_sas_data_pack(uint8_t* dst_ptr, const struct can_1_sas_data* src_ptr, size_t size);
int can_1_sas_data_unpack(struct can_1_sas_data* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_1_bms_status_pack(uint8_t* dst_ptr, const struct can_1_bms_status* src_ptr, size_t size);
int can_1_bms_status_unpack(struct can_1_bms_status* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_1_swb_regen_pack(uint8_t* dst_ptr, const struct can_1_swb_regen* src_ptr, size_t size);
int can_1_swb_regen_unpack(struct can_1_swb_regen* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_1_swb_switches_pack(uint8_t* dst_ptr, const struct can_1_swb_switches* src_ptr, size_t size);
int can_1_swb_switches_unpack(struct can_1_swb_switches* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_1_fsb_aux_switches_pack(uint8_t* dst_ptr, const struct can_1_fsb_aux_switches* src_ptr, size_t size);
int can_1_fsb_aux_switches_unpack(struct can_1_fsb_aux_switches* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_1_cpu_bms_viewer_poll_pack(uint8_t* dst_ptr, const struct can_1_cpu_bms_viewer_poll* src_ptr, size_t size);
int can_1_cpu_bms_viewer_poll_unpack(struct can_1_cpu_bms_viewer_poll* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_1_safety_pump_duty_pack(uint8_t* dst_ptr, const struct can_1_safety_pump_duty* src_ptr, size_t size);
int can_1_safety_pump_duty_unpack(struct can_1_safety_pump_duty* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_1_bms_cell_data_pack(uint8_t* dst_ptr, const struct can_1_bms_cell_data* src_ptr, size_t size);
int can_1_bms_cell_data_unpack(struct can_1_bms_cell_data* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_1_safety_tractive_status_pack(uint8_t* dst_ptr, const struct can_1_safety_tractive_status* src_ptr, size_t size);
int can_1_safety_tractive_status_unpack(struct can_1_safety_tractive_status* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_1_bms_cell_vlt_pack(uint8_t* dst_ptr, const struct can_1_bms_cell_vlt* src_ptr, size_t size);
int can_1_bms_cell_vlt_unpack(struct can_1_bms_cell_vlt* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_1_bms_cell_temp_pack(uint8_t* dst_ptr, const struct can_1_bms_cell_temp* src_ptr, size_t size);
int can_1_bms_cell_temp_unpack(struct can_1_bms_cell_temp* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_1_fsb_status_pack(uint8_t* dst_ptr, const struct can_1_fsb_status* src_ptr, size_t size);
int can_1_fsb_status_unpack(struct can_1_fsb_status* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_1_rsb_status_pack(uint8_t* dst_ptr, const struct can_1_rsb_status* src_ptr, size_t size);
int can_1_rsb_status_unpack(struct can_1_rsb_status* dst_ptr, const uint8_t* src_ptr, size_t size);


#endif /* CAN_1_H */