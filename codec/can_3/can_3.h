/**
 * @file can_3.h
 * @author IEM can_codec library
 * @brief CAN message packing/unpacking code generated from can_3.dbc
 * @version 0.1
 * @date 2025-06-17
 */

#ifndef CAN_3_H
#define CAN_3_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

#define CAN_3_SAFETY_AMK_CMD_RL_ID     0x201
#define CAN_3_SAFETY_AMK_CMD_RL_LENGTH 8U
#define CAN_3_SAFETY_AMK_CMD_RL_IS_EXT false

#define CAN_3_SAFETY_AMK_CMD_FL_ID     0x202
#define CAN_3_SAFETY_AMK_CMD_FL_LENGTH 8U
#define CAN_3_SAFETY_AMK_CMD_FL_IS_EXT false

#define CAN_3_SAFETY_AMK_CMD_FR_ID     0x203
#define CAN_3_SAFETY_AMK_CMD_FR_LENGTH 8U
#define CAN_3_SAFETY_AMK_CMD_FR_IS_EXT false

#define CAN_3_SAFETY_AMK_CMD_RR_ID     0x204
#define CAN_3_SAFETY_AMK_CMD_RR_LENGTH 8U
#define CAN_3_SAFETY_AMK_CMD_RR_IS_EXT false

#define CAN_3_AMK_STATUS_RL_ID     0x211
#define CAN_3_AMK_STATUS_RL_LENGTH 8U
#define CAN_3_AMK_STATUS_RL_IS_EXT false

#define CAN_3_AMK_STATUS_FL_ID     0x212
#define CAN_3_AMK_STATUS_FL_LENGTH 8U
#define CAN_3_AMK_STATUS_FL_IS_EXT false

#define CAN_3_AMK_STATUS_FR_ID     0x213
#define CAN_3_AMK_STATUS_FR_LENGTH 8U
#define CAN_3_AMK_STATUS_FR_IS_EXT false

#define CAN_3_AMK_STATUS_RR_ID     0x214
#define CAN_3_AMK_STATUS_RR_LENGTH 8U
#define CAN_3_AMK_STATUS_RR_IS_EXT false

#define CAN_3_AMK_TEMPS_ID_RL_ID     0x221
#define CAN_3_AMK_TEMPS_ID_RL_LENGTH 8U
#define CAN_3_AMK_TEMPS_ID_RL_IS_EXT false

#define CAN_3_AMK_TEMPS_ID_FL_ID     0x222
#define CAN_3_AMK_TEMPS_ID_FL_LENGTH 8U
#define CAN_3_AMK_TEMPS_ID_FL_IS_EXT false

#define CAN_3_AMK_TEMPS_ID_FR_ID     0x223
#define CAN_3_AMK_TEMPS_ID_FR_LENGTH 8U
#define CAN_3_AMK_TEMPS_ID_FR_IS_EXT false

#define CAN_3_AMK_TEMPS_ID_RR_ID     0x224
#define CAN_3_AMK_TEMPS_ID_RR_LENGTH 8U
#define CAN_3_AMK_TEMPS_ID_RR_IS_EXT false

#define CAN_3_AMK_DIAG_1_RL_ID     0x231
#define CAN_3_AMK_DIAG_1_RL_LENGTH 8U
#define CAN_3_AMK_DIAG_1_RL_IS_EXT false

#define CAN_3_AMK_DIAG_1_FL_ID     0x232
#define CAN_3_AMK_DIAG_1_FL_LENGTH 8U
#define CAN_3_AMK_DIAG_1_FL_IS_EXT false

#define CAN_3_AMK_DIAG_1_FR_ID     0x233
#define CAN_3_AMK_DIAG_1_FR_LENGTH 8U
#define CAN_3_AMK_DIAG_1_FR_IS_EXT false

#define CAN_3_AMK_DIAG_1_RR_ID     0x234
#define CAN_3_AMK_DIAG_1_RR_LENGTH 8U
#define CAN_3_AMK_DIAG_1_RR_IS_EXT false

#define CAN_3_AMK_DIAG_2_RL_ID     0x241
#define CAN_3_AMK_DIAG_2_RL_LENGTH 8U
#define CAN_3_AMK_DIAG_2_RL_IS_EXT false

#define CAN_3_AMK_DIAG_2_FL_ID     0x242
#define CAN_3_AMK_DIAG_2_FL_LENGTH 8U
#define CAN_3_AMK_DIAG_2_FL_IS_EXT false

#define CAN_3_AMK_DIAG_2_FR_ID     0x243
#define CAN_3_AMK_DIAG_2_FR_LENGTH 8U
#define CAN_3_AMK_DIAG_2_FR_IS_EXT false

#define CAN_3_AMK_DIAG_2_RR_ID     0x244
#define CAN_3_AMK_DIAG_2_RR_LENGTH 8U
#define CAN_3_AMK_DIAG_2_RR_IS_EXT false

#define CAN_3_AMK_POWER_RL_ID     0x251
#define CAN_3_AMK_POWER_RL_LENGTH 8U
#define CAN_3_AMK_POWER_RL_IS_EXT false

#define CAN_3_AMK_POWER_FL_ID     0x252
#define CAN_3_AMK_POWER_FL_LENGTH 8U
#define CAN_3_AMK_POWER_FL_IS_EXT false

#define CAN_3_AMK_POWER_FR_ID     0x253
#define CAN_3_AMK_POWER_FR_LENGTH 8U
#define CAN_3_AMK_POWER_FR_IS_EXT false

#define CAN_3_AMK_POWER_RR_ID     0x254
#define CAN_3_AMK_POWER_RR_LENGTH 8U
#define CAN_3_AMK_POWER_RR_IS_EXT false

#define CAN_3_AMK_HV_VLT_OVERLOAD_RL_ID     0x261
#define CAN_3_AMK_HV_VLT_OVERLOAD_RL_LENGTH 8U
#define CAN_3_AMK_HV_VLT_OVERLOAD_RL_IS_EXT false

#define CAN_3_AMK_HV_VLT_OVERLOAD_FL_ID     0x262
#define CAN_3_AMK_HV_VLT_OVERLOAD_FL_LENGTH 8U
#define CAN_3_AMK_HV_VLT_OVERLOAD_FL_IS_EXT false

#define CAN_3_AMK_HV_VLT_OVERLOAD_FR_ID     0x263
#define CAN_3_AMK_HV_VLT_OVERLOAD_FR_LENGTH 8U
#define CAN_3_AMK_HV_VLT_OVERLOAD_FR_IS_EXT false

#define CAN_3_AMK_HV_VLT_OVERLOAD_RR_ID     0x264
#define CAN_3_AMK_HV_VLT_OVERLOAD_RR_LENGTH 8U
#define CAN_3_AMK_HV_VLT_OVERLOAD_RR_IS_EXT false

#define CAN_3_AMK_STATUS_GENERIC_ID     0x7FE
#define CAN_3_AMK_STATUS_GENERIC_LENGTH 8U
#define CAN_3_AMK_STATUS_GENERIC_IS_EXT false

#define CAN_3_SAFETY_AMK_CMD_GENERIC_ID     0x7FF
#define CAN_3_SAFETY_AMK_CMD_GENERIC_LENGTH 8U
#define CAN_3_SAFETY_AMK_CMD_GENERIC_IS_EXT false


/**
 * @struct can_3_safety_amk_cmd_rl
 * @brief Unpacked safety_amk_cmd_rl signal values
 *
 * @var can_3_safety_amk_cmd_rl::cmd_inv_enable_rl
 *     @brief cmd_inv_enable_rl. Start: 8, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_safety_amk_cmd_rl::cmd_hv_enable_rl
 *     @brief cmd_hv_enable_rl. Start: 9, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_safety_amk_cmd_rl::cmd_driver_enable_rl
 *     @brief cmd_driver_enable_rl. Start: 10, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_safety_amk_cmd_rl::cmd_error_remove_rl
 *     @brief cmd_error_remove_rl. Start: 11, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_safety_amk_cmd_rl::tq_setpoint_rl
 *     @brief tq_setpoint_rl. Unit: N.m, Start: 16, Scale: 0.0098, Offset: 0, Range: -21 - 21 (Packed: -2143 - 2143)
 * @var can_3_safety_amk_cmd_rl::tq_limit_pos_rl
 *     @brief tq_limit_pos_rl. Unit: N.m, Start: 32, Scale: 0.0098, Offset: 0, Range: -21 - 21 (Packed: -2143 - 2143)
 * @var can_3_safety_amk_cmd_rl::tq_limit_neg_rl
 *     @brief tq_limit_neg_rl. Unit: N.m, Start: 48, Scale: 0.0098, Offset: 0, Range: -21 - 21 (Packed: -2143 - 2143)
 */
struct can_3_safety_amk_cmd_rl {
    bool cmd_inv_enable_rl;
    bool cmd_hv_enable_rl;
    bool cmd_driver_enable_rl;
    bool cmd_error_remove_rl;
    float tq_setpoint_rl;
    float tq_limit_pos_rl;
    float tq_limit_neg_rl;
};

/**
 * @struct can_3_safety_amk_cmd_fl
 * @brief Unpacked safety_amk_cmd_fl signal values
 *
 * @var can_3_safety_amk_cmd_fl::cmd_inv_enable_fl
 *     @brief cmd_inv_enable_fl. Start: 8, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_safety_amk_cmd_fl::cmd_hv_enable_fl
 *     @brief cmd_hv_enable_fl. Start: 9, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_safety_amk_cmd_fl::cmd_driver_enable_fl
 *     @brief cmd_driver_enable_fl. Start: 10, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_safety_amk_cmd_fl::cmd_error_remove_fl
 *     @brief cmd_error_remove_fl. Start: 11, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_safety_amk_cmd_fl::tq_setpoint_fl
 *     @brief tq_setpoint_fl. Unit: N.m, Start: 16, Scale: 0.0098, Offset: 0, Range: -21 - 21 (Packed: -2143 - 2143)
 * @var can_3_safety_amk_cmd_fl::tq_limit_pos_fl
 *     @brief tq_limit_pos_fl. Unit: N.m, Start: 32, Scale: 0.0098, Offset: 0, Range: -21 - 21 (Packed: -2143 - 2143)
 * @var can_3_safety_amk_cmd_fl::tq_limit_neg_fl
 *     @brief tq_limit_neg_fl. Unit: N.m, Start: 48, Scale: 0.0098, Offset: 0, Range: -21 - 21 (Packed: -2143 - 2143)
 */
struct can_3_safety_amk_cmd_fl {
    bool cmd_inv_enable_fl;
    bool cmd_hv_enable_fl;
    bool cmd_driver_enable_fl;
    bool cmd_error_remove_fl;
    float tq_setpoint_fl;
    float tq_limit_pos_fl;
    float tq_limit_neg_fl;
};

/**
 * @struct can_3_safety_amk_cmd_fr
 * @brief Unpacked safety_amk_cmd_fr signal values
 *
 * @var can_3_safety_amk_cmd_fr::cmd_inv_enable_fr
 *     @brief cmd_inv_enable_fr. Start: 8, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_safety_amk_cmd_fr::cmd_hv_enable_fr
 *     @brief cmd_hv_enable_fr. Start: 9, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_safety_amk_cmd_fr::cmd_driver_enable_fr
 *     @brief cmd_driver_enable_fr. Start: 10, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_safety_amk_cmd_fr::cmd_error_remove_fr
 *     @brief cmd_error_remove_fr. Start: 11, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_safety_amk_cmd_fr::tq_setpoint_fr
 *     @brief tq_setpoint_fr. Unit: N.m, Start: 16, Scale: 0.0098, Offset: 0, Range: -21 - 21 (Packed: -2143 - 2143)
 * @var can_3_safety_amk_cmd_fr::tq_limit_pos_fr
 *     @brief tq_limit_pos_fr. Unit: N.m, Start: 32, Scale: 0.0098, Offset: 0, Range: -21 - 21 (Packed: -2143 - 2143)
 * @var can_3_safety_amk_cmd_fr::tq_limit_neg_fr
 *     @brief tq_limit_neg_fr. Unit: N.m, Start: 48, Scale: 0.0098, Offset: 0, Range: -21 - 21 (Packed: -2143 - 2143)
 */
struct can_3_safety_amk_cmd_fr {
    bool cmd_inv_enable_fr;
    bool cmd_hv_enable_fr;
    bool cmd_driver_enable_fr;
    bool cmd_error_remove_fr;
    float tq_setpoint_fr;
    float tq_limit_pos_fr;
    float tq_limit_neg_fr;
};

/**
 * @struct can_3_safety_amk_cmd_rr
 * @brief Unpacked safety_amk_cmd_rr signal values
 *
 * @var can_3_safety_amk_cmd_rr::cmd_inv_enable_rr
 *     @brief cmd_inv_enable_rr. Start: 8, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_safety_amk_cmd_rr::cmd_hv_enable_rr
 *     @brief cmd_hv_enable_rr. Start: 9, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_safety_amk_cmd_rr::cmd_driver_enable_rr
 *     @brief cmd_driver_enable_rr. Start: 10, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_safety_amk_cmd_rr::cmd_error_remove_rr
 *     @brief cmd_error_remove_rr. Start: 11, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_safety_amk_cmd_rr::tq_setpoint_rr
 *     @brief tq_setpoint_rr. Unit: N.m, Start: 16, Scale: 0.0098, Offset: 0, Range: -21 - 21 (Packed: -2143 - 2143)
 * @var can_3_safety_amk_cmd_rr::tq_limit_pos_rr
 *     @brief tq_limit_pos_rr. Unit: N.m, Start: 32, Scale: 0.0098, Offset: 0, Range: -21 - 21 (Packed: -2143 - 2143)
 * @var can_3_safety_amk_cmd_rr::tq_limit_neg_rr
 *     @brief tq_limit_neg_rr. Unit: N.m, Start: 48, Scale: 0.0098, Offset: 0, Range: -21 - 21 (Packed: -2143 - 2143)
 */
struct can_3_safety_amk_cmd_rr {
    bool cmd_inv_enable_rr;
    bool cmd_hv_enable_rr;
    bool cmd_driver_enable_rr;
    bool cmd_error_remove_rr;
    float tq_setpoint_rr;
    float tq_limit_pos_rr;
    float tq_limit_neg_rr;
};

/**
 * @struct can_3_amk_status_rl
 * @brief Unpacked amk_status_rl signal values
 *
 * @var can_3_amk_status_rl::stat_system_ready_rl
 *     @brief stat_system_ready_rl. Start: 8, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_rl::stat_error_rl
 *     @brief stat_error_rl. Start: 9, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_rl::stat_warning_rl
 *     @brief stat_warning_rl. Start: 10, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_rl::stat_hv_enable_rl
 *     @brief stat_hv_enable_rl. Start: 11, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_rl::stat_hv_enable_cplt_rl
 *     @brief stat_hv_enable_cplt_rl. Start: 12, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_rl::stat_inv_enable_rl
 *     @brief stat_inv_enable_rl. Start: 13, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_rl::stat_inv_enable_cplt_rl
 *     @brief stat_inv_enable_cplt_rl. Start: 14, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_rl::stat_derating_rl
 *     @brief stat_derating_rl. Start: 15, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_rl::spd_actual_rl
 *     @brief spd_actual_rl. Start: 16, Scale: 1, Offset: 0, Range: -32768 - 32767 (Packed: -32768 - 32767)
 * @var can_3_amk_status_rl::tq_actual_rl
 *     @brief tq_actual_rl. Unit: N.m, Start: 32, Scale: 0.0098, Offset: 0, Range: -21 - 21 (Packed: -2143 - 2143)
 * @var can_3_amk_status_rl::cur_iq_rl
 *     @brief cur_iq_rl. Unit: A, Start: 48, Scale: 0.00653076171875, Offset: 0, Range: -214 - 213.993469238281 (Packed: -32768 - 32767)
 */
struct can_3_amk_status_rl {
    bool stat_system_ready_rl;
    bool stat_error_rl;
    bool stat_warning_rl;
    bool stat_hv_enable_rl;
    bool stat_hv_enable_cplt_rl;
    bool stat_inv_enable_rl;
    bool stat_inv_enable_cplt_rl;
    bool stat_derating_rl;
    int32_t spd_actual_rl;
    float tq_actual_rl;
    float cur_iq_rl;
};

/**
 * @struct can_3_amk_status_fl
 * @brief Unpacked amk_status_fl signal values
 *
 * @var can_3_amk_status_fl::stat_system_ready_fl
 *     @brief stat_system_ready_fl. Start: 8, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_fl::stat_error_fl
 *     @brief stat_error_fl. Start: 9, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_fl::stat_warning_fl
 *     @brief stat_warning_fl. Start: 10, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_fl::stat_hv_enable_fl
 *     @brief stat_hv_enable_fl. Start: 11, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_fl::stat_hv_enable_cplt_fl
 *     @brief stat_hv_enable_cplt_fl. Start: 12, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_fl::stat_inv_enable_fl
 *     @brief stat_inv_enable_fl. Start: 13, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_fl::stat_inv_enable_cplt_fl
 *     @brief stat_inv_enable_cplt_fl. Start: 14, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_fl::stat_derating_fl
 *     @brief stat_derating_fl. Start: 15, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_fl::spd_actual_fl
 *     @brief spd_actual_fl. Start: 16, Scale: 1, Offset: 0, Range: -32768 - 32767 (Packed: -32768 - 32767)
 * @var can_3_amk_status_fl::tq_actual_fl
 *     @brief tq_actual_fl. Unit: N.m, Start: 32, Scale: 0.0098, Offset: 0, Range: -21 - 21 (Packed: -2143 - 2143)
 * @var can_3_amk_status_fl::cur_iq_fl
 *     @brief cur_iq_fl. Unit: A, Start: 48, Scale: 0.00653076171875, Offset: 0, Range: -214 - 213.993469238281 (Packed: -32768 - 32767)
 */
struct can_3_amk_status_fl {
    bool stat_system_ready_fl;
    bool stat_error_fl;
    bool stat_warning_fl;
    bool stat_hv_enable_fl;
    bool stat_hv_enable_cplt_fl;
    bool stat_inv_enable_fl;
    bool stat_inv_enable_cplt_fl;
    bool stat_derating_fl;
    int32_t spd_actual_fl;
    float tq_actual_fl;
    float cur_iq_fl;
};

/**
 * @struct can_3_amk_status_fr
 * @brief Unpacked amk_status_fr signal values
 *
 * @var can_3_amk_status_fr::stat_system_ready_fr
 *     @brief stat_system_ready_fr. Start: 8, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_fr::stat_error_fr
 *     @brief stat_error_fr. Start: 9, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_fr::stat_warning_fr
 *     @brief stat_warning_fr. Start: 10, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_fr::stat_hv_enable_fr
 *     @brief stat_hv_enable_fr. Start: 11, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_fr::stat_hv_enable_cplt_fr
 *     @brief stat_hv_enable_cplt_fr. Start: 12, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_fr::stat_inv_enable_fr
 *     @brief stat_inv_enable_fr. Start: 13, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_fr::stat_inv_enable_cplt_fr
 *     @brief stat_inv_enable_cplt_fr. Start: 14, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_fr::stat_derating_fr
 *     @brief stat_derating_fr. Start: 15, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_fr::spd_actual_fr
 *     @brief spd_actual_fr. Start: 16, Scale: 1, Offset: 0, Range: -32768 - 32767 (Packed: -32768 - 32767)
 * @var can_3_amk_status_fr::tq_actual_fr
 *     @brief tq_actual_fr. Unit: N.m, Start: 32, Scale: 0.0098, Offset: 0, Range: -21 - 21 (Packed: -2143 - 2143)
 * @var can_3_amk_status_fr::cur_iq_fr
 *     @brief cur_iq_fr. Unit: A, Start: 48, Scale: 0.00653076171875, Offset: 0, Range: -214 - 213.993469238281 (Packed: -32768 - 32767)
 */
struct can_3_amk_status_fr {
    bool stat_system_ready_fr;
    bool stat_error_fr;
    bool stat_warning_fr;
    bool stat_hv_enable_fr;
    bool stat_hv_enable_cplt_fr;
    bool stat_inv_enable_fr;
    bool stat_inv_enable_cplt_fr;
    bool stat_derating_fr;
    int32_t spd_actual_fr;
    float tq_actual_fr;
    float cur_iq_fr;
};

/**
 * @struct can_3_amk_status_rr
 * @brief Unpacked amk_status_rr signal values
 *
 * @var can_3_amk_status_rr::stat_system_ready_rr
 *     @brief stat_system_ready_rr. Start: 8, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_rr::stat_error_rr
 *     @brief stat_error_rr. Start: 9, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_rr::stat_warning_rr
 *     @brief stat_warning_rr. Start: 10, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_rr::stat_hv_enable_rr
 *     @brief stat_hv_enable_rr. Start: 11, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_rr::stat_hv_enable_cplt_rr
 *     @brief stat_hv_enable_cplt_rr. Start: 12, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_rr::stat_inv_enable_rr
 *     @brief stat_inv_enable_rr. Start: 13, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_rr::stat_inv_enable_cplt_rr
 *     @brief stat_inv_enable_cplt_rr. Start: 14, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_rr::stat_derating_rr
 *     @brief stat_derating_rr. Start: 15, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_rr::spd_actual_rr
 *     @brief spd_actual_rr. Start: 16, Scale: 1, Offset: 0, Range: -32768 - 32767 (Packed: -32768 - 32767)
 * @var can_3_amk_status_rr::tq_actual_rr
 *     @brief tq_actual_rr. Unit: N.m, Start: 32, Scale: 0.0098, Offset: 0, Range: -21 - 21 (Packed: -2143 - 2143)
 * @var can_3_amk_status_rr::cur_iq_rr
 *     @brief cur_iq_rr. Unit: A, Start: 48, Scale: 0.00653076171875, Offset: 0, Range: -214 - 213.993469238281 (Packed: -32768 - 32767)
 */
struct can_3_amk_status_rr {
    bool stat_system_ready_rr;
    bool stat_error_rr;
    bool stat_warning_rr;
    bool stat_hv_enable_rr;
    bool stat_hv_enable_cplt_rr;
    bool stat_inv_enable_rr;
    bool stat_inv_enable_cplt_rr;
    bool stat_derating_rr;
    int32_t spd_actual_rr;
    float tq_actual_rr;
    float cur_iq_rr;
};

/**
 * @struct can_3_amk_temps_id_rl
 * @brief Unpacked amk_temps_id_rl signal values
 *
 * @var can_3_amk_temps_id_rl::temp_cold_plate_rl
 *     @brief temp_cold_plate_rl. Unit: C, Start: 0, Scale: 0.1, Offset: 0, Range: -3276.8 - 3276.7 (Packed: -32768 - 32767)
 * @var can_3_amk_temps_id_rl::temp_igbt_rl
 *     @brief temp_igbt_rl. Unit: C, Start: 16, Scale: 0.1, Offset: 0, Range: -3276.8 - 3276.7 (Packed: -32768 - 32767)
 * @var can_3_amk_temps_id_rl::temp_motor_rl
 *     @brief temp_motor_rl. Unit: C, Start: 32, Scale: 0.1, Offset: 0, Range: -3276.8 - 3276.7 (Packed: -32768 - 32767)
 * @var can_3_amk_temps_id_rl::cur_id_rl
 *     @brief cur_id_rl. Unit: A, Start: 48, Scale: 0.00653076171875, Offset: 0, Range: -214 - 213.993469238281 (Packed: -32768 - 32767)
 */
struct can_3_amk_temps_id_rl {
    float temp_cold_plate_rl;
    float temp_igbt_rl;
    float temp_motor_rl;
    float cur_id_rl;
};

/**
 * @struct can_3_amk_temps_id_fl
 * @brief Unpacked amk_temps_id_fl signal values
 *
 * @var can_3_amk_temps_id_fl::temp_cold_plate_fl
 *     @brief temp_cold_plate_fl. Unit: C, Start: 0, Scale: 0.1, Offset: 0, Range: -3276.8 - 3276.7 (Packed: -32768 - 32767)
 * @var can_3_amk_temps_id_fl::temp_igbt_fl
 *     @brief temp_igbt_fl. Unit: C, Start: 16, Scale: 0.1, Offset: 0, Range: -3276.8 - 3276.7 (Packed: -32768 - 32767)
 * @var can_3_amk_temps_id_fl::temp_motor_fl
 *     @brief temp_motor_fl. Unit: C, Start: 32, Scale: 0.1, Offset: 0, Range: -3276.8 - 3276.7 (Packed: -32768 - 32767)
 * @var can_3_amk_temps_id_fl::cur_id_fl
 *     @brief cur_id_fl. Unit: A, Start: 48, Scale: 0.00653076171875, Offset: 0, Range: -214 - 213.993469238281 (Packed: -32768 - 32767)
 */
struct can_3_amk_temps_id_fl {
    float temp_cold_plate_fl;
    float temp_igbt_fl;
    float temp_motor_fl;
    float cur_id_fl;
};

/**
 * @struct can_3_amk_temps_id_fr
 * @brief Unpacked amk_temps_id_fr signal values
 *
 * @var can_3_amk_temps_id_fr::temp_cold_plate_fr
 *     @brief temp_cold_plate_fr. Unit: C, Start: 0, Scale: 0.1, Offset: 0, Range: -3276.8 - 3276.7 (Packed: -32768 - 32767)
 * @var can_3_amk_temps_id_fr::temp_igbt_fr
 *     @brief temp_igbt_fr. Unit: C, Start: 16, Scale: 0.1, Offset: 0, Range: -3276.8 - 3276.7 (Packed: -32768 - 32767)
 * @var can_3_amk_temps_id_fr::temp_motor_fr
 *     @brief temp_motor_fr. Unit: C, Start: 32, Scale: 0.1, Offset: 0, Range: -3276.8 - 3276.7 (Packed: -32768 - 32767)
 * @var can_3_amk_temps_id_fr::cur_id_fr
 *     @brief cur_id_fr. Unit: A, Start: 48, Scale: 0.00653076171875, Offset: 0, Range: -214 - 213.993469238281 (Packed: -32768 - 32767)
 */
struct can_3_amk_temps_id_fr {
    float temp_cold_plate_fr;
    float temp_igbt_fr;
    float temp_motor_fr;
    float cur_id_fr;
};

/**
 * @struct can_3_amk_temps_id_rr
 * @brief Unpacked amk_temps_id_rr signal values
 *
 * @var can_3_amk_temps_id_rr::temp_cold_plate_rr
 *     @brief temp_cold_plate_rr. Unit: C, Start: 0, Scale: 0.1, Offset: 0, Range: -3276.8 - 3276.7 (Packed: -32768 - 32767)
 * @var can_3_amk_temps_id_rr::temp_igbt_rr
 *     @brief temp_igbt_rr. Unit: C, Start: 16, Scale: 0.1, Offset: 0, Range: -3276.8 - 3276.7 (Packed: -32768 - 32767)
 * @var can_3_amk_temps_id_rr::temp_motor_rr
 *     @brief temp_motor_rr. Unit: C, Start: 32, Scale: 0.1, Offset: 0, Range: -3276.8 - 3276.7 (Packed: -32768 - 32767)
 * @var can_3_amk_temps_id_rr::cur_id_rr
 *     @brief cur_id_rr. Unit: A, Start: 48, Scale: 0.00653076171875, Offset: 0, Range: -214 - 213.993469238281 (Packed: -32768 - 32767)
 */
struct can_3_amk_temps_id_rr {
    float temp_cold_plate_rr;
    float temp_igbt_rr;
    float temp_motor_rr;
    float cur_id_rr;
};

/**
 * @struct can_3_amk_diag_1_rl
 * @brief Unpacked amk_diag_1_rl signal values
 *
 * @var can_3_amk_diag_1_rl::diag_number_rl
 *     @brief diag_number_rl. Start: 0, Scale: 1, Offset: 0
 * @var can_3_amk_diag_1_rl::error_info_1_rl
 *     @brief error_info_1_rl. Start: 32, Scale: 1, Offset: 0
 */
struct can_3_amk_diag_1_rl {
    uint32_t diag_number_rl;
    uint32_t error_info_1_rl;
};

/**
 * @struct can_3_amk_diag_1_fl
 * @brief Unpacked amk_diag_1_fl signal values
 *
 * @var can_3_amk_diag_1_fl::diag_number_fl
 *     @brief diag_number_fl. Start: 0, Scale: 1, Offset: 0
 * @var can_3_amk_diag_1_fl::error_info_1_fl
 *     @brief error_info_1_fl. Start: 32, Scale: 1, Offset: 0
 */
struct can_3_amk_diag_1_fl {
    uint32_t diag_number_fl;
    uint32_t error_info_1_fl;
};

/**
 * @struct can_3_amk_diag_1_fr
 * @brief Unpacked amk_diag_1_fr signal values
 *
 * @var can_3_amk_diag_1_fr::diag_number_fr
 *     @brief diag_number_fr. Start: 0, Scale: 1, Offset: 0
 * @var can_3_amk_diag_1_fr::error_info_1_fr
 *     @brief error_info_1_fr. Start: 32, Scale: 1, Offset: 0
 */
struct can_3_amk_diag_1_fr {
    uint32_t diag_number_fr;
    uint32_t error_info_1_fr;
};

/**
 * @struct can_3_amk_diag_1_rr
 * @brief Unpacked amk_diag_1_rr signal values
 *
 * @var can_3_amk_diag_1_rr::diag_number_rr
 *     @brief diag_number_rr. Start: 0, Scale: 1, Offset: 0
 * @var can_3_amk_diag_1_rr::error_info_1_rr
 *     @brief error_info_1_rr. Start: 32, Scale: 1, Offset: 0
 */
struct can_3_amk_diag_1_rr {
    uint32_t diag_number_rr;
    uint32_t error_info_1_rr;
};

/**
 * @struct can_3_amk_diag_2_rl
 * @brief Unpacked amk_diag_2_rl signal values
 *
 * @var can_3_amk_diag_2_rl::error_info_2_rl
 *     @brief error_info_2_rl. Start: 0, Scale: 1, Offset: 0
 * @var can_3_amk_diag_2_rl::error_info_3_rl
 *     @brief error_info_3_rl. Start: 32, Scale: 1, Offset: 0
 */
struct can_3_amk_diag_2_rl {
    uint32_t error_info_2_rl;
    uint32_t error_info_3_rl;
};

/**
 * @struct can_3_amk_diag_2_fl
 * @brief Unpacked amk_diag_2_fl signal values
 *
 * @var can_3_amk_diag_2_fl::error_info_2_fl
 *     @brief error_info_2_fl. Start: 0, Scale: 1, Offset: 0
 * @var can_3_amk_diag_2_fl::error_info_3_fl
 *     @brief error_info_3_fl. Start: 32, Scale: 1, Offset: 0
 */
struct can_3_amk_diag_2_fl {
    uint32_t error_info_2_fl;
    uint32_t error_info_3_fl;
};

/**
 * @struct can_3_amk_diag_2_fr
 * @brief Unpacked amk_diag_2_fr signal values
 *
 * @var can_3_amk_diag_2_fr::error_info_2_fr
 *     @brief error_info_2_fr. Start: 0, Scale: 1, Offset: 0
 * @var can_3_amk_diag_2_fr::error_info_3_fr
 *     @brief error_info_3_fr. Start: 32, Scale: 1, Offset: 0
 */
struct can_3_amk_diag_2_fr {
    uint32_t error_info_2_fr;
    uint32_t error_info_3_fr;
};

/**
 * @struct can_3_amk_diag_2_rr
 * @brief Unpacked amk_diag_2_rr signal values
 *
 * @var can_3_amk_diag_2_rr::error_info_2_rr
 *     @brief error_info_2_rr. Start: 0, Scale: 1, Offset: 0
 * @var can_3_amk_diag_2_rr::error_info_3_rr
 *     @brief error_info_3_rr. Start: 32, Scale: 1, Offset: 0
 */
struct can_3_amk_diag_2_rr {
    uint32_t error_info_2_rr;
    uint32_t error_info_3_rr;
};

/**
 * @struct can_3_amk_power_rl
 * @brief Unpacked amk_power_rl signal values
 *
 * @var can_3_amk_power_rl::pwr_real_rl
 *     @brief pwr_real_rl. Unit: W, Start: 0, Scale: 1, Offset: 0, Range: -2147483648 - 2147483647 (Packed: -2147483648 - 2147483647)
 * @var can_3_amk_power_rl::pwr_reactive_rl
 *     @brief pwr_reactive_rl. Unit: W, Start: 32, Scale: 1, Offset: 0, Range: -2147483648 - 2147483647 (Packed: -2147483648 - 2147483647)
 */
struct can_3_amk_power_rl {
    int32_t pwr_real_rl;
    int32_t pwr_reactive_rl;
};

/**
 * @struct can_3_amk_power_fl
 * @brief Unpacked amk_power_fl signal values
 *
 * @var can_3_amk_power_fl::pwr_real_fl
 *     @brief pwr_real_fl. Unit: W, Start: 0, Scale: 1, Offset: 0, Range: -2147483648 - 2147483647 (Packed: -2147483648 - 2147483647)
 * @var can_3_amk_power_fl::pwr_reactive_fl
 *     @brief pwr_reactive_fl. Unit: W, Start: 32, Scale: 1, Offset: 0, Range: -2147483648 - 2147483647 (Packed: -2147483648 - 2147483647)
 */
struct can_3_amk_power_fl {
    int32_t pwr_real_fl;
    int32_t pwr_reactive_fl;
};

/**
 * @struct can_3_amk_power_fr
 * @brief Unpacked amk_power_fr signal values
 *
 * @var can_3_amk_power_fr::pwr_real_fr
 *     @brief pwr_real_fr. Unit: W, Start: 0, Scale: 1, Offset: 0, Range: -2147483648 - 2147483647 (Packed: -2147483648 - 2147483647)
 * @var can_3_amk_power_fr::pwr_reactive_fr
 *     @brief pwr_reactive_fr. Unit: W, Start: 32, Scale: 1, Offset: 0, Range: -2147483648 - 2147483647 (Packed: -2147483648 - 2147483647)
 */
struct can_3_amk_power_fr {
    int32_t pwr_real_fr;
    int32_t pwr_reactive_fr;
};

/**
 * @struct can_3_amk_power_rr
 * @brief Unpacked amk_power_rr signal values
 *
 * @var can_3_amk_power_rr::pwr_real_rr
 *     @brief pwr_real_rr. Unit: W, Start: 0, Scale: 1, Offset: 0, Range: -2147483648 - 2147483647 (Packed: -2147483648 - 2147483647)
 * @var can_3_amk_power_rr::pwr_reactive_rr
 *     @brief pwr_reactive_rr. Unit: W, Start: 32, Scale: 1, Offset: 0, Range: -2147483648 - 2147483647 (Packed: -2147483648 - 2147483647)
 */
struct can_3_amk_power_rr {
    int32_t pwr_real_rr;
    int32_t pwr_reactive_rr;
};

/**
 * @struct can_3_amk_hv_vlt_overload_rl
 * @brief Unpacked amk_hv_vlt_overload_rl signal values
 *
 * @var can_3_amk_hv_vlt_overload_rl::overload_inverter_rl
 *     @brief overload_inverter_rl. Unit: %, Start: 0, Scale: 0.1, Offset: 0, Range: 0 - 100 (Packed: 0 - 1000)
 * @var can_3_amk_hv_vlt_overload_rl::overload_motor_rl
 *     @brief overload_motor_rl. Unit: %, Start: 16, Scale: 0.1, Offset: 0, Range: 0 - 100 (Packed: 0 - 1000)
 * @var can_3_amk_hv_vlt_overload_rl::overload_time_motor_rl
 *     @brief overload_time_motor_rl. Unit: s, Start: 32, Scale: 0.1, Offset: 0, Range: 0 - 6553.5 (Packed: 0 - 65535)
 * @var can_3_amk_hv_vlt_overload_rl::vlt_amk_hv_bus_rl
 *     @brief vlt_amk_hv_bus_rl. Unit: V, Start: 48, Scale: 1, Offset: 0, Range: 0 - 4096 (Packed: 0 - 4096)
 */
struct can_3_amk_hv_vlt_overload_rl {
    float overload_inverter_rl;
    float overload_motor_rl;
    float overload_time_motor_rl;
    uint32_t vlt_amk_hv_bus_rl;
};

/**
 * @struct can_3_amk_hv_vlt_overload_fl
 * @brief Unpacked amk_hv_vlt_overload_fl signal values
 *
 * @var can_3_amk_hv_vlt_overload_fl::overload_inverter_fl
 *     @brief overload_inverter_fl. Unit: %, Start: 0, Scale: 0.1, Offset: 0, Range: 0 - 100 (Packed: 0 - 1000)
 * @var can_3_amk_hv_vlt_overload_fl::overload_motor_fl
 *     @brief overload_motor_fl. Unit: %, Start: 16, Scale: 0.1, Offset: 0, Range: 0 - 100 (Packed: 0 - 1000)
 * @var can_3_amk_hv_vlt_overload_fl::overload_time_motor_fl
 *     @brief overload_time_motor_fl. Unit: s, Start: 32, Scale: 0.1, Offset: 0, Range: 0 - 6553.5 (Packed: 0 - 65535)
 * @var can_3_amk_hv_vlt_overload_fl::vlt_amk_hv_bus_fl
 *     @brief vlt_amk_hv_bus_fl. Unit: V, Start: 48, Scale: 1, Offset: 0, Range: 0 - 4096 (Packed: 0 - 4096)
 */
struct can_3_amk_hv_vlt_overload_fl {
    float overload_inverter_fl;
    float overload_motor_fl;
    float overload_time_motor_fl;
    uint32_t vlt_amk_hv_bus_fl;
};

/**
 * @struct can_3_amk_hv_vlt_overload_fr
 * @brief Unpacked amk_hv_vlt_overload_fr signal values
 *
 * @var can_3_amk_hv_vlt_overload_fr::overload_inverter_fr
 *     @brief overload_inverter_fr. Unit: %, Start: 0, Scale: 0.1, Offset: 0, Range: 0 - 100 (Packed: 0 - 1000)
 * @var can_3_amk_hv_vlt_overload_fr::overload_motor_fr
 *     @brief overload_motor_fr. Unit: %, Start: 16, Scale: 0.1, Offset: 0, Range: 0 - 100 (Packed: 0 - 1000)
 * @var can_3_amk_hv_vlt_overload_fr::overload_time_motor_fr
 *     @brief overload_time_motor_fr. Unit: s, Start: 32, Scale: 0.1, Offset: 0, Range: 0 - 6553.5 (Packed: 0 - 65535)
 * @var can_3_amk_hv_vlt_overload_fr::vlt_amk_hv_bus_fr
 *     @brief vlt_amk_hv_bus_fr. Unit: V, Start: 48, Scale: 1, Offset: 0, Range: 0 - 4096 (Packed: 0 - 4096)
 */
struct can_3_amk_hv_vlt_overload_fr {
    float overload_inverter_fr;
    float overload_motor_fr;
    float overload_time_motor_fr;
    uint32_t vlt_amk_hv_bus_fr;
};

/**
 * @struct can_3_amk_hv_vlt_overload_rr
 * @brief Unpacked amk_hv_vlt_overload_rr signal values
 *
 * @var can_3_amk_hv_vlt_overload_rr::overload_inverter_rr
 *     @brief overload_inverter_rr. Unit: %, Start: 0, Scale: 0.1, Offset: 0, Range: 0 - 100 (Packed: 0 - 1000)
 * @var can_3_amk_hv_vlt_overload_rr::overload_motor_rr
 *     @brief overload_motor_rr. Unit: %, Start: 16, Scale: 0.1, Offset: 0, Range: 0 - 100 (Packed: 0 - 1000)
 * @var can_3_amk_hv_vlt_overload_rr::overload_time_motor_rr
 *     @brief overload_time_motor_rr. Unit: s, Start: 32, Scale: 0.1, Offset: 0, Range: 0 - 6553.5 (Packed: 0 - 65535)
 * @var can_3_amk_hv_vlt_overload_rr::vlt_amk_hv_bus_rr
 *     @brief vlt_amk_hv_bus_rr. Unit: V, Start: 48, Scale: 1, Offset: 0, Range: 0 - 4096 (Packed: 0 - 4096)
 */
struct can_3_amk_hv_vlt_overload_rr {
    float overload_inverter_rr;
    float overload_motor_rr;
    float overload_time_motor_rr;
    uint32_t vlt_amk_hv_bus_rr;
};

/**
 * @struct can_3_amk_status_generic
 * @brief Unpacked amk_status_generic signal values
 *
 * @var can_3_amk_status_generic::stat_system_ready
 *     @brief stat_system_ready. Start: 8, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_generic::stat_error
 *     @brief stat_error. Start: 9, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_generic::stat_warning
 *     @brief stat_warning. Start: 10, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_generic::stat_hv_enable
 *     @brief stat_hv_enable. Start: 11, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_generic::stat_hv_enable_cplt
 *     @brief stat_hv_enable_cplt. Start: 12, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_generic::stat_inv_enable
 *     @brief stat_inv_enable. Start: 13, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_generic::stat_inv_enable_cplt
 *     @brief stat_inv_enable_cplt. Start: 14, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_generic::stat_derating
 *     @brief stat_derating. Start: 15, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_generic::spd_actual
 *     @brief spd_actual. Start: 16, Scale: 1, Offset: 0, Range: -32768 - 32767 (Packed: -32768 - 32767)
 * @var can_3_amk_status_generic::tq_actual
 *     @brief tq_actual. Unit: N.m, Start: 32, Scale: 0.0098, Offset: 0, Range: -21 - 21 (Packed: -2143 - 2143)
 * @var can_3_amk_status_generic::cur_iq
 *     @brief cur_iq. Unit: A, Start: 48, Scale: 0.00653076171875, Offset: 0, Range: -214 - 213.993469238281 (Packed: -32768 - 32767)
 */
struct can_3_amk_status_generic {
    bool stat_system_ready;
    bool stat_error;
    bool stat_warning;
    bool stat_hv_enable;
    bool stat_hv_enable_cplt;
    bool stat_inv_enable;
    bool stat_inv_enable_cplt;
    bool stat_derating;
    int32_t spd_actual;
    float tq_actual;
    float cur_iq;
};

/**
 * @struct can_3_safety_amk_cmd_generic
 * @brief Unpacked safety_amk_cmd_generic signal values
 *
 * @var can_3_safety_amk_cmd_generic::cmd_inv_enable
 *     @brief cmd_inv_enable. Start: 8, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_safety_amk_cmd_generic::cmd_hv_enable
 *     @brief cmd_hv_enable. Start: 9, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_safety_amk_cmd_generic::cmd_driver_enable
 *     @brief cmd_driver_enable. Start: 10, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_safety_amk_cmd_generic::cmd_error_remove
 *     @brief cmd_error_remove. Start: 11, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_safety_amk_cmd_generic::tq_setpoint
 *     @brief tq_setpoint. Unit: N.m, Start: 16, Scale: 0.0098, Offset: 0, Range: -21 - 21 (Packed: -2143 - 2143)
 * @var can_3_safety_amk_cmd_generic::tq_limit_pos
 *     @brief tq_limit_pos. Unit: N.m, Start: 32, Scale: 0.0098, Offset: 0, Range: -21 - 21 (Packed: -2143 - 2143)
 * @var can_3_safety_amk_cmd_generic::tq_limit_neg
 *     @brief tq_limit_neg. Unit: N.m, Start: 48, Scale: 0.0098, Offset: 0, Range: -21 - 21 (Packed: -2143 - 2143)
 */
struct can_3_safety_amk_cmd_generic {
    bool cmd_inv_enable;
    bool cmd_hv_enable;
    bool cmd_driver_enable;
    bool cmd_error_remove;
    float tq_setpoint;
    float tq_limit_pos;
    float tq_limit_neg;
};


/**
 * @struct can_3_safety_amk_cmd_rl_packed
 * @brief Packed safety_amk_cmd_rl signal values
 *
 * @var can_3_safety_amk_cmd_rl::cmd_inv_enable_rl
 *     @brief cmd_inv_enable_rl. Start: 8, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_safety_amk_cmd_rl::cmd_hv_enable_rl
 *     @brief cmd_hv_enable_rl. Start: 9, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_safety_amk_cmd_rl::cmd_driver_enable_rl
 *     @brief cmd_driver_enable_rl. Start: 10, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_safety_amk_cmd_rl::cmd_error_remove_rl
 *     @brief cmd_error_remove_rl. Start: 11, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_safety_amk_cmd_rl::tq_setpoint_rl
 *     @brief tq_setpoint_rl. Unit: N.m, Start: 16, Scale: 0.0098, Offset: 0, Range: -21 - 21 (Packed: -2143 - 2143)
 * @var can_3_safety_amk_cmd_rl::tq_limit_pos_rl
 *     @brief tq_limit_pos_rl. Unit: N.m, Start: 32, Scale: 0.0098, Offset: 0, Range: -21 - 21 (Packed: -2143 - 2143)
 * @var can_3_safety_amk_cmd_rl::tq_limit_neg_rl
 *     @brief tq_limit_neg_rl. Unit: N.m, Start: 48, Scale: 0.0098, Offset: 0, Range: -21 - 21 (Packed: -2143 - 2143)
 */
struct __attribute__((packed)) can_3_safety_amk_cmd_rl_packed {
    uint8_t _padding_0 : 8;
    uint8_t cmd_inv_enable_rl : 1;
    uint8_t cmd_hv_enable_rl : 1;
    uint8_t cmd_driver_enable_rl : 1;
    uint8_t cmd_error_remove_rl : 1;
    uint8_t _padding_1 : 4;
    int16_t tq_setpoint_rl : 16;
    int16_t tq_limit_pos_rl : 16;
    int16_t tq_limit_neg_rl : 16;
};

/**
 * @struct can_3_safety_amk_cmd_fl_packed
 * @brief Packed safety_amk_cmd_fl signal values
 *
 * @var can_3_safety_amk_cmd_fl::cmd_inv_enable_fl
 *     @brief cmd_inv_enable_fl. Start: 8, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_safety_amk_cmd_fl::cmd_hv_enable_fl
 *     @brief cmd_hv_enable_fl. Start: 9, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_safety_amk_cmd_fl::cmd_driver_enable_fl
 *     @brief cmd_driver_enable_fl. Start: 10, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_safety_amk_cmd_fl::cmd_error_remove_fl
 *     @brief cmd_error_remove_fl. Start: 11, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_safety_amk_cmd_fl::tq_setpoint_fl
 *     @brief tq_setpoint_fl. Unit: N.m, Start: 16, Scale: 0.0098, Offset: 0, Range: -21 - 21 (Packed: -2143 - 2143)
 * @var can_3_safety_amk_cmd_fl::tq_limit_pos_fl
 *     @brief tq_limit_pos_fl. Unit: N.m, Start: 32, Scale: 0.0098, Offset: 0, Range: -21 - 21 (Packed: -2143 - 2143)
 * @var can_3_safety_amk_cmd_fl::tq_limit_neg_fl
 *     @brief tq_limit_neg_fl. Unit: N.m, Start: 48, Scale: 0.0098, Offset: 0, Range: -21 - 21 (Packed: -2143 - 2143)
 */
struct __attribute__((packed)) can_3_safety_amk_cmd_fl_packed {
    uint8_t _padding_0 : 8;
    uint8_t cmd_inv_enable_fl : 1;
    uint8_t cmd_hv_enable_fl : 1;
    uint8_t cmd_driver_enable_fl : 1;
    uint8_t cmd_error_remove_fl : 1;
    uint8_t _padding_1 : 4;
    int16_t tq_setpoint_fl : 16;
    int16_t tq_limit_pos_fl : 16;
    int16_t tq_limit_neg_fl : 16;
};

/**
 * @struct can_3_safety_amk_cmd_fr_packed
 * @brief Packed safety_amk_cmd_fr signal values
 *
 * @var can_3_safety_amk_cmd_fr::cmd_inv_enable_fr
 *     @brief cmd_inv_enable_fr. Start: 8, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_safety_amk_cmd_fr::cmd_hv_enable_fr
 *     @brief cmd_hv_enable_fr. Start: 9, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_safety_amk_cmd_fr::cmd_driver_enable_fr
 *     @brief cmd_driver_enable_fr. Start: 10, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_safety_amk_cmd_fr::cmd_error_remove_fr
 *     @brief cmd_error_remove_fr. Start: 11, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_safety_amk_cmd_fr::tq_setpoint_fr
 *     @brief tq_setpoint_fr. Unit: N.m, Start: 16, Scale: 0.0098, Offset: 0, Range: -21 - 21 (Packed: -2143 - 2143)
 * @var can_3_safety_amk_cmd_fr::tq_limit_pos_fr
 *     @brief tq_limit_pos_fr. Unit: N.m, Start: 32, Scale: 0.0098, Offset: 0, Range: -21 - 21 (Packed: -2143 - 2143)
 * @var can_3_safety_amk_cmd_fr::tq_limit_neg_fr
 *     @brief tq_limit_neg_fr. Unit: N.m, Start: 48, Scale: 0.0098, Offset: 0, Range: -21 - 21 (Packed: -2143 - 2143)
 */
struct __attribute__((packed)) can_3_safety_amk_cmd_fr_packed {
    uint8_t _padding_0 : 8;
    uint8_t cmd_inv_enable_fr : 1;
    uint8_t cmd_hv_enable_fr : 1;
    uint8_t cmd_driver_enable_fr : 1;
    uint8_t cmd_error_remove_fr : 1;
    uint8_t _padding_1 : 4;
    int16_t tq_setpoint_fr : 16;
    int16_t tq_limit_pos_fr : 16;
    int16_t tq_limit_neg_fr : 16;
};

/**
 * @struct can_3_safety_amk_cmd_rr_packed
 * @brief Packed safety_amk_cmd_rr signal values
 *
 * @var can_3_safety_amk_cmd_rr::cmd_inv_enable_rr
 *     @brief cmd_inv_enable_rr. Start: 8, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_safety_amk_cmd_rr::cmd_hv_enable_rr
 *     @brief cmd_hv_enable_rr. Start: 9, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_safety_amk_cmd_rr::cmd_driver_enable_rr
 *     @brief cmd_driver_enable_rr. Start: 10, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_safety_amk_cmd_rr::cmd_error_remove_rr
 *     @brief cmd_error_remove_rr. Start: 11, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_safety_amk_cmd_rr::tq_setpoint_rr
 *     @brief tq_setpoint_rr. Unit: N.m, Start: 16, Scale: 0.0098, Offset: 0, Range: -21 - 21 (Packed: -2143 - 2143)
 * @var can_3_safety_amk_cmd_rr::tq_limit_pos_rr
 *     @brief tq_limit_pos_rr. Unit: N.m, Start: 32, Scale: 0.0098, Offset: 0, Range: -21 - 21 (Packed: -2143 - 2143)
 * @var can_3_safety_amk_cmd_rr::tq_limit_neg_rr
 *     @brief tq_limit_neg_rr. Unit: N.m, Start: 48, Scale: 0.0098, Offset: 0, Range: -21 - 21 (Packed: -2143 - 2143)
 */
struct __attribute__((packed)) can_3_safety_amk_cmd_rr_packed {
    uint8_t _padding_0 : 8;
    uint8_t cmd_inv_enable_rr : 1;
    uint8_t cmd_hv_enable_rr : 1;
    uint8_t cmd_driver_enable_rr : 1;
    uint8_t cmd_error_remove_rr : 1;
    uint8_t _padding_1 : 4;
    int16_t tq_setpoint_rr : 16;
    int16_t tq_limit_pos_rr : 16;
    int16_t tq_limit_neg_rr : 16;
};

/**
 * @struct can_3_amk_status_rl_packed
 * @brief Packed amk_status_rl signal values
 *
 * @var can_3_amk_status_rl::stat_system_ready_rl
 *     @brief stat_system_ready_rl. Start: 8, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_rl::stat_error_rl
 *     @brief stat_error_rl. Start: 9, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_rl::stat_warning_rl
 *     @brief stat_warning_rl. Start: 10, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_rl::stat_hv_enable_rl
 *     @brief stat_hv_enable_rl. Start: 11, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_rl::stat_hv_enable_cplt_rl
 *     @brief stat_hv_enable_cplt_rl. Start: 12, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_rl::stat_inv_enable_rl
 *     @brief stat_inv_enable_rl. Start: 13, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_rl::stat_inv_enable_cplt_rl
 *     @brief stat_inv_enable_cplt_rl. Start: 14, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_rl::stat_derating_rl
 *     @brief stat_derating_rl. Start: 15, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_rl::spd_actual_rl
 *     @brief spd_actual_rl. Start: 16, Scale: 1, Offset: 0, Range: -32768 - 32767 (Packed: -32768 - 32767)
 * @var can_3_amk_status_rl::tq_actual_rl
 *     @brief tq_actual_rl. Unit: N.m, Start: 32, Scale: 0.0098, Offset: 0, Range: -21 - 21 (Packed: -2143 - 2143)
 * @var can_3_amk_status_rl::cur_iq_rl
 *     @brief cur_iq_rl. Unit: A, Start: 48, Scale: 0.00653076171875, Offset: 0, Range: -214 - 213.993469238281 (Packed: -32768 - 32767)
 */
struct __attribute__((packed)) can_3_amk_status_rl_packed {
    uint8_t _padding_0 : 8;
    uint8_t stat_system_ready_rl : 1;
    uint8_t stat_error_rl : 1;
    uint8_t stat_warning_rl : 1;
    uint8_t stat_hv_enable_rl : 1;
    uint8_t stat_hv_enable_cplt_rl : 1;
    uint8_t stat_inv_enable_rl : 1;
    uint8_t stat_inv_enable_cplt_rl : 1;
    uint8_t stat_derating_rl : 1;
    int16_t spd_actual_rl : 16;
    int16_t tq_actual_rl : 16;
    int16_t cur_iq_rl : 16;
};

/**
 * @struct can_3_amk_status_fl_packed
 * @brief Packed amk_status_fl signal values
 *
 * @var can_3_amk_status_fl::stat_system_ready_fl
 *     @brief stat_system_ready_fl. Start: 8, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_fl::stat_error_fl
 *     @brief stat_error_fl. Start: 9, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_fl::stat_warning_fl
 *     @brief stat_warning_fl. Start: 10, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_fl::stat_hv_enable_fl
 *     @brief stat_hv_enable_fl. Start: 11, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_fl::stat_hv_enable_cplt_fl
 *     @brief stat_hv_enable_cplt_fl. Start: 12, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_fl::stat_inv_enable_fl
 *     @brief stat_inv_enable_fl. Start: 13, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_fl::stat_inv_enable_cplt_fl
 *     @brief stat_inv_enable_cplt_fl. Start: 14, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_fl::stat_derating_fl
 *     @brief stat_derating_fl. Start: 15, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_fl::spd_actual_fl
 *     @brief spd_actual_fl. Start: 16, Scale: 1, Offset: 0, Range: -32768 - 32767 (Packed: -32768 - 32767)
 * @var can_3_amk_status_fl::tq_actual_fl
 *     @brief tq_actual_fl. Unit: N.m, Start: 32, Scale: 0.0098, Offset: 0, Range: -21 - 21 (Packed: -2143 - 2143)
 * @var can_3_amk_status_fl::cur_iq_fl
 *     @brief cur_iq_fl. Unit: A, Start: 48, Scale: 0.00653076171875, Offset: 0, Range: -214 - 213.993469238281 (Packed: -32768 - 32767)
 */
struct __attribute__((packed)) can_3_amk_status_fl_packed {
    uint8_t _padding_0 : 8;
    uint8_t stat_system_ready_fl : 1;
    uint8_t stat_error_fl : 1;
    uint8_t stat_warning_fl : 1;
    uint8_t stat_hv_enable_fl : 1;
    uint8_t stat_hv_enable_cplt_fl : 1;
    uint8_t stat_inv_enable_fl : 1;
    uint8_t stat_inv_enable_cplt_fl : 1;
    uint8_t stat_derating_fl : 1;
    int16_t spd_actual_fl : 16;
    int16_t tq_actual_fl : 16;
    int16_t cur_iq_fl : 16;
};

/**
 * @struct can_3_amk_status_fr_packed
 * @brief Packed amk_status_fr signal values
 *
 * @var can_3_amk_status_fr::stat_system_ready_fr
 *     @brief stat_system_ready_fr. Start: 8, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_fr::stat_error_fr
 *     @brief stat_error_fr. Start: 9, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_fr::stat_warning_fr
 *     @brief stat_warning_fr. Start: 10, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_fr::stat_hv_enable_fr
 *     @brief stat_hv_enable_fr. Start: 11, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_fr::stat_hv_enable_cplt_fr
 *     @brief stat_hv_enable_cplt_fr. Start: 12, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_fr::stat_inv_enable_fr
 *     @brief stat_inv_enable_fr. Start: 13, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_fr::stat_inv_enable_cplt_fr
 *     @brief stat_inv_enable_cplt_fr. Start: 14, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_fr::stat_derating_fr
 *     @brief stat_derating_fr. Start: 15, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_fr::spd_actual_fr
 *     @brief spd_actual_fr. Start: 16, Scale: 1, Offset: 0, Range: -32768 - 32767 (Packed: -32768 - 32767)
 * @var can_3_amk_status_fr::tq_actual_fr
 *     @brief tq_actual_fr. Unit: N.m, Start: 32, Scale: 0.0098, Offset: 0, Range: -21 - 21 (Packed: -2143 - 2143)
 * @var can_3_amk_status_fr::cur_iq_fr
 *     @brief cur_iq_fr. Unit: A, Start: 48, Scale: 0.00653076171875, Offset: 0, Range: -214 - 213.993469238281 (Packed: -32768 - 32767)
 */
struct __attribute__((packed)) can_3_amk_status_fr_packed {
    uint8_t _padding_0 : 8;
    uint8_t stat_system_ready_fr : 1;
    uint8_t stat_error_fr : 1;
    uint8_t stat_warning_fr : 1;
    uint8_t stat_hv_enable_fr : 1;
    uint8_t stat_hv_enable_cplt_fr : 1;
    uint8_t stat_inv_enable_fr : 1;
    uint8_t stat_inv_enable_cplt_fr : 1;
    uint8_t stat_derating_fr : 1;
    int16_t spd_actual_fr : 16;
    int16_t tq_actual_fr : 16;
    int16_t cur_iq_fr : 16;
};

/**
 * @struct can_3_amk_status_rr_packed
 * @brief Packed amk_status_rr signal values
 *
 * @var can_3_amk_status_rr::stat_system_ready_rr
 *     @brief stat_system_ready_rr. Start: 8, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_rr::stat_error_rr
 *     @brief stat_error_rr. Start: 9, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_rr::stat_warning_rr
 *     @brief stat_warning_rr. Start: 10, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_rr::stat_hv_enable_rr
 *     @brief stat_hv_enable_rr. Start: 11, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_rr::stat_hv_enable_cplt_rr
 *     @brief stat_hv_enable_cplt_rr. Start: 12, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_rr::stat_inv_enable_rr
 *     @brief stat_inv_enable_rr. Start: 13, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_rr::stat_inv_enable_cplt_rr
 *     @brief stat_inv_enable_cplt_rr. Start: 14, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_rr::stat_derating_rr
 *     @brief stat_derating_rr. Start: 15, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_rr::spd_actual_rr
 *     @brief spd_actual_rr. Start: 16, Scale: 1, Offset: 0, Range: -32768 - 32767 (Packed: -32768 - 32767)
 * @var can_3_amk_status_rr::tq_actual_rr
 *     @brief tq_actual_rr. Unit: N.m, Start: 32, Scale: 0.0098, Offset: 0, Range: -21 - 21 (Packed: -2143 - 2143)
 * @var can_3_amk_status_rr::cur_iq_rr
 *     @brief cur_iq_rr. Unit: A, Start: 48, Scale: 0.00653076171875, Offset: 0, Range: -214 - 213.993469238281 (Packed: -32768 - 32767)
 */
struct __attribute__((packed)) can_3_amk_status_rr_packed {
    uint8_t _padding_0 : 8;
    uint8_t stat_system_ready_rr : 1;
    uint8_t stat_error_rr : 1;
    uint8_t stat_warning_rr : 1;
    uint8_t stat_hv_enable_rr : 1;
    uint8_t stat_hv_enable_cplt_rr : 1;
    uint8_t stat_inv_enable_rr : 1;
    uint8_t stat_inv_enable_cplt_rr : 1;
    uint8_t stat_derating_rr : 1;
    int16_t spd_actual_rr : 16;
    int16_t tq_actual_rr : 16;
    int16_t cur_iq_rr : 16;
};

/**
 * @struct can_3_amk_temps_id_rl_packed
 * @brief Packed amk_temps_id_rl signal values
 *
 * @var can_3_amk_temps_id_rl::temp_cold_plate_rl
 *     @brief temp_cold_plate_rl. Unit: C, Start: 0, Scale: 0.1, Offset: 0, Range: -3276.8 - 3276.7 (Packed: -32768 - 32767)
 * @var can_3_amk_temps_id_rl::temp_igbt_rl
 *     @brief temp_igbt_rl. Unit: C, Start: 16, Scale: 0.1, Offset: 0, Range: -3276.8 - 3276.7 (Packed: -32768 - 32767)
 * @var can_3_amk_temps_id_rl::temp_motor_rl
 *     @brief temp_motor_rl. Unit: C, Start: 32, Scale: 0.1, Offset: 0, Range: -3276.8 - 3276.7 (Packed: -32768 - 32767)
 * @var can_3_amk_temps_id_rl::cur_id_rl
 *     @brief cur_id_rl. Unit: A, Start: 48, Scale: 0.00653076171875, Offset: 0, Range: -214 - 213.993469238281 (Packed: -32768 - 32767)
 */
struct __attribute__((packed)) can_3_amk_temps_id_rl_packed {
    int16_t temp_cold_plate_rl : 16;
    int16_t temp_igbt_rl : 16;
    int16_t temp_motor_rl : 16;
    int16_t cur_id_rl : 16;
};

/**
 * @struct can_3_amk_temps_id_fl_packed
 * @brief Packed amk_temps_id_fl signal values
 *
 * @var can_3_amk_temps_id_fl::temp_cold_plate_fl
 *     @brief temp_cold_plate_fl. Unit: C, Start: 0, Scale: 0.1, Offset: 0, Range: -3276.8 - 3276.7 (Packed: -32768 - 32767)
 * @var can_3_amk_temps_id_fl::temp_igbt_fl
 *     @brief temp_igbt_fl. Unit: C, Start: 16, Scale: 0.1, Offset: 0, Range: -3276.8 - 3276.7 (Packed: -32768 - 32767)
 * @var can_3_amk_temps_id_fl::temp_motor_fl
 *     @brief temp_motor_fl. Unit: C, Start: 32, Scale: 0.1, Offset: 0, Range: -3276.8 - 3276.7 (Packed: -32768 - 32767)
 * @var can_3_amk_temps_id_fl::cur_id_fl
 *     @brief cur_id_fl. Unit: A, Start: 48, Scale: 0.00653076171875, Offset: 0, Range: -214 - 213.993469238281 (Packed: -32768 - 32767)
 */
struct __attribute__((packed)) can_3_amk_temps_id_fl_packed {
    int16_t temp_cold_plate_fl : 16;
    int16_t temp_igbt_fl : 16;
    int16_t temp_motor_fl : 16;
    int16_t cur_id_fl : 16;
};

/**
 * @struct can_3_amk_temps_id_fr_packed
 * @brief Packed amk_temps_id_fr signal values
 *
 * @var can_3_amk_temps_id_fr::temp_cold_plate_fr
 *     @brief temp_cold_plate_fr. Unit: C, Start: 0, Scale: 0.1, Offset: 0, Range: -3276.8 - 3276.7 (Packed: -32768 - 32767)
 * @var can_3_amk_temps_id_fr::temp_igbt_fr
 *     @brief temp_igbt_fr. Unit: C, Start: 16, Scale: 0.1, Offset: 0, Range: -3276.8 - 3276.7 (Packed: -32768 - 32767)
 * @var can_3_amk_temps_id_fr::temp_motor_fr
 *     @brief temp_motor_fr. Unit: C, Start: 32, Scale: 0.1, Offset: 0, Range: -3276.8 - 3276.7 (Packed: -32768 - 32767)
 * @var can_3_amk_temps_id_fr::cur_id_fr
 *     @brief cur_id_fr. Unit: A, Start: 48, Scale: 0.00653076171875, Offset: 0, Range: -214 - 213.993469238281 (Packed: -32768 - 32767)
 */
struct __attribute__((packed)) can_3_amk_temps_id_fr_packed {
    int16_t temp_cold_plate_fr : 16;
    int16_t temp_igbt_fr : 16;
    int16_t temp_motor_fr : 16;
    int16_t cur_id_fr : 16;
};

/**
 * @struct can_3_amk_temps_id_rr_packed
 * @brief Packed amk_temps_id_rr signal values
 *
 * @var can_3_amk_temps_id_rr::temp_cold_plate_rr
 *     @brief temp_cold_plate_rr. Unit: C, Start: 0, Scale: 0.1, Offset: 0, Range: -3276.8 - 3276.7 (Packed: -32768 - 32767)
 * @var can_3_amk_temps_id_rr::temp_igbt_rr
 *     @brief temp_igbt_rr. Unit: C, Start: 16, Scale: 0.1, Offset: 0, Range: -3276.8 - 3276.7 (Packed: -32768 - 32767)
 * @var can_3_amk_temps_id_rr::temp_motor_rr
 *     @brief temp_motor_rr. Unit: C, Start: 32, Scale: 0.1, Offset: 0, Range: -3276.8 - 3276.7 (Packed: -32768 - 32767)
 * @var can_3_amk_temps_id_rr::cur_id_rr
 *     @brief cur_id_rr. Unit: A, Start: 48, Scale: 0.00653076171875, Offset: 0, Range: -214 - 213.993469238281 (Packed: -32768 - 32767)
 */
struct __attribute__((packed)) can_3_amk_temps_id_rr_packed {
    int16_t temp_cold_plate_rr : 16;
    int16_t temp_igbt_rr : 16;
    int16_t temp_motor_rr : 16;
    int16_t cur_id_rr : 16;
};

/**
 * @struct can_3_amk_diag_1_rl_packed
 * @brief Packed amk_diag_1_rl signal values
 *
 * @var can_3_amk_diag_1_rl::diag_number_rl
 *     @brief diag_number_rl. Start: 0, Scale: 1, Offset: 0
 * @var can_3_amk_diag_1_rl::error_info_1_rl
 *     @brief error_info_1_rl. Start: 32, Scale: 1, Offset: 0
 */
struct __attribute__((packed)) can_3_amk_diag_1_rl_packed {
    uint32_t diag_number_rl : 32;
    uint32_t error_info_1_rl : 32;
};

/**
 * @struct can_3_amk_diag_1_fl_packed
 * @brief Packed amk_diag_1_fl signal values
 *
 * @var can_3_amk_diag_1_fl::diag_number_fl
 *     @brief diag_number_fl. Start: 0, Scale: 1, Offset: 0
 * @var can_3_amk_diag_1_fl::error_info_1_fl
 *     @brief error_info_1_fl. Start: 32, Scale: 1, Offset: 0
 */
struct __attribute__((packed)) can_3_amk_diag_1_fl_packed {
    uint32_t diag_number_fl : 32;
    uint32_t error_info_1_fl : 32;
};

/**
 * @struct can_3_amk_diag_1_fr_packed
 * @brief Packed amk_diag_1_fr signal values
 *
 * @var can_3_amk_diag_1_fr::diag_number_fr
 *     @brief diag_number_fr. Start: 0, Scale: 1, Offset: 0
 * @var can_3_amk_diag_1_fr::error_info_1_fr
 *     @brief error_info_1_fr. Start: 32, Scale: 1, Offset: 0
 */
struct __attribute__((packed)) can_3_amk_diag_1_fr_packed {
    uint32_t diag_number_fr : 32;
    uint32_t error_info_1_fr : 32;
};

/**
 * @struct can_3_amk_diag_1_rr_packed
 * @brief Packed amk_diag_1_rr signal values
 *
 * @var can_3_amk_diag_1_rr::diag_number_rr
 *     @brief diag_number_rr. Start: 0, Scale: 1, Offset: 0
 * @var can_3_amk_diag_1_rr::error_info_1_rr
 *     @brief error_info_1_rr. Start: 32, Scale: 1, Offset: 0
 */
struct __attribute__((packed)) can_3_amk_diag_1_rr_packed {
    uint32_t diag_number_rr : 32;
    uint32_t error_info_1_rr : 32;
};

/**
 * @struct can_3_amk_diag_2_rl_packed
 * @brief Packed amk_diag_2_rl signal values
 *
 * @var can_3_amk_diag_2_rl::error_info_2_rl
 *     @brief error_info_2_rl. Start: 0, Scale: 1, Offset: 0
 * @var can_3_amk_diag_2_rl::error_info_3_rl
 *     @brief error_info_3_rl. Start: 32, Scale: 1, Offset: 0
 */
struct __attribute__((packed)) can_3_amk_diag_2_rl_packed {
    uint32_t error_info_2_rl : 32;
    uint32_t error_info_3_rl : 32;
};

/**
 * @struct can_3_amk_diag_2_fl_packed
 * @brief Packed amk_diag_2_fl signal values
 *
 * @var can_3_amk_diag_2_fl::error_info_2_fl
 *     @brief error_info_2_fl. Start: 0, Scale: 1, Offset: 0
 * @var can_3_amk_diag_2_fl::error_info_3_fl
 *     @brief error_info_3_fl. Start: 32, Scale: 1, Offset: 0
 */
struct __attribute__((packed)) can_3_amk_diag_2_fl_packed {
    uint32_t error_info_2_fl : 32;
    uint32_t error_info_3_fl : 32;
};

/**
 * @struct can_3_amk_diag_2_fr_packed
 * @brief Packed amk_diag_2_fr signal values
 *
 * @var can_3_amk_diag_2_fr::error_info_2_fr
 *     @brief error_info_2_fr. Start: 0, Scale: 1, Offset: 0
 * @var can_3_amk_diag_2_fr::error_info_3_fr
 *     @brief error_info_3_fr. Start: 32, Scale: 1, Offset: 0
 */
struct __attribute__((packed)) can_3_amk_diag_2_fr_packed {
    uint32_t error_info_2_fr : 32;
    uint32_t error_info_3_fr : 32;
};

/**
 * @struct can_3_amk_diag_2_rr_packed
 * @brief Packed amk_diag_2_rr signal values
 *
 * @var can_3_amk_diag_2_rr::error_info_2_rr
 *     @brief error_info_2_rr. Start: 0, Scale: 1, Offset: 0
 * @var can_3_amk_diag_2_rr::error_info_3_rr
 *     @brief error_info_3_rr. Start: 32, Scale: 1, Offset: 0
 */
struct __attribute__((packed)) can_3_amk_diag_2_rr_packed {
    uint32_t error_info_2_rr : 32;
    uint32_t error_info_3_rr : 32;
};

/**
 * @struct can_3_amk_power_rl_packed
 * @brief Packed amk_power_rl signal values
 *
 * @var can_3_amk_power_rl::pwr_real_rl
 *     @brief pwr_real_rl. Unit: W, Start: 0, Scale: 1, Offset: 0, Range: -2147483648 - 2147483647 (Packed: -2147483648 - 2147483647)
 * @var can_3_amk_power_rl::pwr_reactive_rl
 *     @brief pwr_reactive_rl. Unit: W, Start: 32, Scale: 1, Offset: 0, Range: -2147483648 - 2147483647 (Packed: -2147483648 - 2147483647)
 */
struct __attribute__((packed)) can_3_amk_power_rl_packed {
    int32_t pwr_real_rl : 32;
    int32_t pwr_reactive_rl : 32;
};

/**
 * @struct can_3_amk_power_fl_packed
 * @brief Packed amk_power_fl signal values
 *
 * @var can_3_amk_power_fl::pwr_real_fl
 *     @brief pwr_real_fl. Unit: W, Start: 0, Scale: 1, Offset: 0, Range: -2147483648 - 2147483647 (Packed: -2147483648 - 2147483647)
 * @var can_3_amk_power_fl::pwr_reactive_fl
 *     @brief pwr_reactive_fl. Unit: W, Start: 32, Scale: 1, Offset: 0, Range: -2147483648 - 2147483647 (Packed: -2147483648 - 2147483647)
 */
struct __attribute__((packed)) can_3_amk_power_fl_packed {
    int32_t pwr_real_fl : 32;
    int32_t pwr_reactive_fl : 32;
};

/**
 * @struct can_3_amk_power_fr_packed
 * @brief Packed amk_power_fr signal values
 *
 * @var can_3_amk_power_fr::pwr_real_fr
 *     @brief pwr_real_fr. Unit: W, Start: 0, Scale: 1, Offset: 0, Range: -2147483648 - 2147483647 (Packed: -2147483648 - 2147483647)
 * @var can_3_amk_power_fr::pwr_reactive_fr
 *     @brief pwr_reactive_fr. Unit: W, Start: 32, Scale: 1, Offset: 0, Range: -2147483648 - 2147483647 (Packed: -2147483648 - 2147483647)
 */
struct __attribute__((packed)) can_3_amk_power_fr_packed {
    int32_t pwr_real_fr : 32;
    int32_t pwr_reactive_fr : 32;
};

/**
 * @struct can_3_amk_power_rr_packed
 * @brief Packed amk_power_rr signal values
 *
 * @var can_3_amk_power_rr::pwr_real_rr
 *     @brief pwr_real_rr. Unit: W, Start: 0, Scale: 1, Offset: 0, Range: -2147483648 - 2147483647 (Packed: -2147483648 - 2147483647)
 * @var can_3_amk_power_rr::pwr_reactive_rr
 *     @brief pwr_reactive_rr. Unit: W, Start: 32, Scale: 1, Offset: 0, Range: -2147483648 - 2147483647 (Packed: -2147483648 - 2147483647)
 */
struct __attribute__((packed)) can_3_amk_power_rr_packed {
    int32_t pwr_real_rr : 32;
    int32_t pwr_reactive_rr : 32;
};

/**
 * @struct can_3_amk_hv_vlt_overload_rl_packed
 * @brief Packed amk_hv_vlt_overload_rl signal values
 *
 * @var can_3_amk_hv_vlt_overload_rl::overload_inverter_rl
 *     @brief overload_inverter_rl. Unit: %, Start: 0, Scale: 0.1, Offset: 0, Range: 0 - 100 (Packed: 0 - 1000)
 * @var can_3_amk_hv_vlt_overload_rl::overload_motor_rl
 *     @brief overload_motor_rl. Unit: %, Start: 16, Scale: 0.1, Offset: 0, Range: 0 - 100 (Packed: 0 - 1000)
 * @var can_3_amk_hv_vlt_overload_rl::overload_time_motor_rl
 *     @brief overload_time_motor_rl. Unit: s, Start: 32, Scale: 0.1, Offset: 0, Range: 0 - 6553.5 (Packed: 0 - 65535)
 * @var can_3_amk_hv_vlt_overload_rl::vlt_amk_hv_bus_rl
 *     @brief vlt_amk_hv_bus_rl. Unit: V, Start: 48, Scale: 1, Offset: 0, Range: 0 - 4096 (Packed: 0 - 4096)
 */
struct __attribute__((packed)) can_3_amk_hv_vlt_overload_rl_packed {
    uint16_t overload_inverter_rl : 16;
    uint16_t overload_motor_rl : 16;
    uint16_t overload_time_motor_rl : 16;
    uint16_t vlt_amk_hv_bus_rl : 16;
};

/**
 * @struct can_3_amk_hv_vlt_overload_fl_packed
 * @brief Packed amk_hv_vlt_overload_fl signal values
 *
 * @var can_3_amk_hv_vlt_overload_fl::overload_inverter_fl
 *     @brief overload_inverter_fl. Unit: %, Start: 0, Scale: 0.1, Offset: 0, Range: 0 - 100 (Packed: 0 - 1000)
 * @var can_3_amk_hv_vlt_overload_fl::overload_motor_fl
 *     @brief overload_motor_fl. Unit: %, Start: 16, Scale: 0.1, Offset: 0, Range: 0 - 100 (Packed: 0 - 1000)
 * @var can_3_amk_hv_vlt_overload_fl::overload_time_motor_fl
 *     @brief overload_time_motor_fl. Unit: s, Start: 32, Scale: 0.1, Offset: 0, Range: 0 - 6553.5 (Packed: 0 - 65535)
 * @var can_3_amk_hv_vlt_overload_fl::vlt_amk_hv_bus_fl
 *     @brief vlt_amk_hv_bus_fl. Unit: V, Start: 48, Scale: 1, Offset: 0, Range: 0 - 4096 (Packed: 0 - 4096)
 */
struct __attribute__((packed)) can_3_amk_hv_vlt_overload_fl_packed {
    uint16_t overload_inverter_fl : 16;
    uint16_t overload_motor_fl : 16;
    uint16_t overload_time_motor_fl : 16;
    uint16_t vlt_amk_hv_bus_fl : 16;
};

/**
 * @struct can_3_amk_hv_vlt_overload_fr_packed
 * @brief Packed amk_hv_vlt_overload_fr signal values
 *
 * @var can_3_amk_hv_vlt_overload_fr::overload_inverter_fr
 *     @brief overload_inverter_fr. Unit: %, Start: 0, Scale: 0.1, Offset: 0, Range: 0 - 100 (Packed: 0 - 1000)
 * @var can_3_amk_hv_vlt_overload_fr::overload_motor_fr
 *     @brief overload_motor_fr. Unit: %, Start: 16, Scale: 0.1, Offset: 0, Range: 0 - 100 (Packed: 0 - 1000)
 * @var can_3_amk_hv_vlt_overload_fr::overload_time_motor_fr
 *     @brief overload_time_motor_fr. Unit: s, Start: 32, Scale: 0.1, Offset: 0, Range: 0 - 6553.5 (Packed: 0 - 65535)
 * @var can_3_amk_hv_vlt_overload_fr::vlt_amk_hv_bus_fr
 *     @brief vlt_amk_hv_bus_fr. Unit: V, Start: 48, Scale: 1, Offset: 0, Range: 0 - 4096 (Packed: 0 - 4096)
 */
struct __attribute__((packed)) can_3_amk_hv_vlt_overload_fr_packed {
    uint16_t overload_inverter_fr : 16;
    uint16_t overload_motor_fr : 16;
    uint16_t overload_time_motor_fr : 16;
    uint16_t vlt_amk_hv_bus_fr : 16;
};

/**
 * @struct can_3_amk_hv_vlt_overload_rr_packed
 * @brief Packed amk_hv_vlt_overload_rr signal values
 *
 * @var can_3_amk_hv_vlt_overload_rr::overload_inverter_rr
 *     @brief overload_inverter_rr. Unit: %, Start: 0, Scale: 0.1, Offset: 0, Range: 0 - 100 (Packed: 0 - 1000)
 * @var can_3_amk_hv_vlt_overload_rr::overload_motor_rr
 *     @brief overload_motor_rr. Unit: %, Start: 16, Scale: 0.1, Offset: 0, Range: 0 - 100 (Packed: 0 - 1000)
 * @var can_3_amk_hv_vlt_overload_rr::overload_time_motor_rr
 *     @brief overload_time_motor_rr. Unit: s, Start: 32, Scale: 0.1, Offset: 0, Range: 0 - 6553.5 (Packed: 0 - 65535)
 * @var can_3_amk_hv_vlt_overload_rr::vlt_amk_hv_bus_rr
 *     @brief vlt_amk_hv_bus_rr. Unit: V, Start: 48, Scale: 1, Offset: 0, Range: 0 - 4096 (Packed: 0 - 4096)
 */
struct __attribute__((packed)) can_3_amk_hv_vlt_overload_rr_packed {
    uint16_t overload_inverter_rr : 16;
    uint16_t overload_motor_rr : 16;
    uint16_t overload_time_motor_rr : 16;
    uint16_t vlt_amk_hv_bus_rr : 16;
};

/**
 * @struct can_3_amk_status_generic_packed
 * @brief Packed amk_status_generic signal values
 *
 * @var can_3_amk_status_generic::stat_system_ready
 *     @brief stat_system_ready. Start: 8, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_generic::stat_error
 *     @brief stat_error. Start: 9, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_generic::stat_warning
 *     @brief stat_warning. Start: 10, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_generic::stat_hv_enable
 *     @brief stat_hv_enable. Start: 11, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_generic::stat_hv_enable_cplt
 *     @brief stat_hv_enable_cplt. Start: 12, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_generic::stat_inv_enable
 *     @brief stat_inv_enable. Start: 13, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_generic::stat_inv_enable_cplt
 *     @brief stat_inv_enable_cplt. Start: 14, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_generic::stat_derating
 *     @brief stat_derating. Start: 15, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_amk_status_generic::spd_actual
 *     @brief spd_actual. Start: 16, Scale: 1, Offset: 0, Range: -32768 - 32767 (Packed: -32768 - 32767)
 * @var can_3_amk_status_generic::tq_actual
 *     @brief tq_actual. Unit: N.m, Start: 32, Scale: 0.0098, Offset: 0, Range: -21 - 21 (Packed: -2143 - 2143)
 * @var can_3_amk_status_generic::cur_iq
 *     @brief cur_iq. Unit: A, Start: 48, Scale: 0.00653076171875, Offset: 0, Range: -214 - 213.993469238281 (Packed: -32768 - 32767)
 */
struct __attribute__((packed)) can_3_amk_status_generic_packed {
    uint8_t _padding_0 : 8;
    uint8_t stat_system_ready : 1;
    uint8_t stat_error : 1;
    uint8_t stat_warning : 1;
    uint8_t stat_hv_enable : 1;
    uint8_t stat_hv_enable_cplt : 1;
    uint8_t stat_inv_enable : 1;
    uint8_t stat_inv_enable_cplt : 1;
    uint8_t stat_derating : 1;
    int16_t spd_actual : 16;
    int16_t tq_actual : 16;
    int16_t cur_iq : 16;
};

/**
 * @struct can_3_safety_amk_cmd_generic_packed
 * @brief Packed safety_amk_cmd_generic signal values
 *
 * @var can_3_safety_amk_cmd_generic::cmd_inv_enable
 *     @brief cmd_inv_enable. Start: 8, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_safety_amk_cmd_generic::cmd_hv_enable
 *     @brief cmd_hv_enable. Start: 9, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_safety_amk_cmd_generic::cmd_driver_enable
 *     @brief cmd_driver_enable. Start: 10, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_safety_amk_cmd_generic::cmd_error_remove
 *     @brief cmd_error_remove. Start: 11, Scale: 1, Offset: 0, Range: 0 - 1 (Packed: 0 - 1)
 * @var can_3_safety_amk_cmd_generic::tq_setpoint
 *     @brief tq_setpoint. Unit: N.m, Start: 16, Scale: 0.0098, Offset: 0, Range: -21 - 21 (Packed: -2143 - 2143)
 * @var can_3_safety_amk_cmd_generic::tq_limit_pos
 *     @brief tq_limit_pos. Unit: N.m, Start: 32, Scale: 0.0098, Offset: 0, Range: -21 - 21 (Packed: -2143 - 2143)
 * @var can_3_safety_amk_cmd_generic::tq_limit_neg
 *     @brief tq_limit_neg. Unit: N.m, Start: 48, Scale: 0.0098, Offset: 0, Range: -21 - 21 (Packed: -2143 - 2143)
 */
struct __attribute__((packed)) can_3_safety_amk_cmd_generic_packed {
    uint8_t _padding_0 : 8;
    uint8_t cmd_inv_enable : 1;
    uint8_t cmd_hv_enable : 1;
    uint8_t cmd_driver_enable : 1;
    uint8_t cmd_error_remove : 1;
    uint8_t _padding_1 : 4;
    int16_t tq_setpoint : 16;
    int16_t tq_limit_pos : 16;
    int16_t tq_limit_neg : 16;
};


int can_3_safety_amk_cmd_rl_pack(uint8_t* dst_ptr, const struct can_3_safety_amk_cmd_rl* src_ptr, size_t size);
int can_3_safety_amk_cmd_rl_unpack(struct can_3_safety_amk_cmd_rl* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_3_safety_amk_cmd_fl_pack(uint8_t* dst_ptr, const struct can_3_safety_amk_cmd_fl* src_ptr, size_t size);
int can_3_safety_amk_cmd_fl_unpack(struct can_3_safety_amk_cmd_fl* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_3_safety_amk_cmd_fr_pack(uint8_t* dst_ptr, const struct can_3_safety_amk_cmd_fr* src_ptr, size_t size);
int can_3_safety_amk_cmd_fr_unpack(struct can_3_safety_amk_cmd_fr* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_3_safety_amk_cmd_rr_pack(uint8_t* dst_ptr, const struct can_3_safety_amk_cmd_rr* src_ptr, size_t size);
int can_3_safety_amk_cmd_rr_unpack(struct can_3_safety_amk_cmd_rr* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_3_amk_status_rl_pack(uint8_t* dst_ptr, const struct can_3_amk_status_rl* src_ptr, size_t size);
int can_3_amk_status_rl_unpack(struct can_3_amk_status_rl* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_3_amk_status_fl_pack(uint8_t* dst_ptr, const struct can_3_amk_status_fl* src_ptr, size_t size);
int can_3_amk_status_fl_unpack(struct can_3_amk_status_fl* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_3_amk_status_fr_pack(uint8_t* dst_ptr, const struct can_3_amk_status_fr* src_ptr, size_t size);
int can_3_amk_status_fr_unpack(struct can_3_amk_status_fr* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_3_amk_status_rr_pack(uint8_t* dst_ptr, const struct can_3_amk_status_rr* src_ptr, size_t size);
int can_3_amk_status_rr_unpack(struct can_3_amk_status_rr* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_3_amk_temps_id_rl_pack(uint8_t* dst_ptr, const struct can_3_amk_temps_id_rl* src_ptr, size_t size);
int can_3_amk_temps_id_rl_unpack(struct can_3_amk_temps_id_rl* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_3_amk_temps_id_fl_pack(uint8_t* dst_ptr, const struct can_3_amk_temps_id_fl* src_ptr, size_t size);
int can_3_amk_temps_id_fl_unpack(struct can_3_amk_temps_id_fl* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_3_amk_temps_id_fr_pack(uint8_t* dst_ptr, const struct can_3_amk_temps_id_fr* src_ptr, size_t size);
int can_3_amk_temps_id_fr_unpack(struct can_3_amk_temps_id_fr* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_3_amk_temps_id_rr_pack(uint8_t* dst_ptr, const struct can_3_amk_temps_id_rr* src_ptr, size_t size);
int can_3_amk_temps_id_rr_unpack(struct can_3_amk_temps_id_rr* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_3_amk_diag_1_rl_pack(uint8_t* dst_ptr, const struct can_3_amk_diag_1_rl* src_ptr, size_t size);
int can_3_amk_diag_1_rl_unpack(struct can_3_amk_diag_1_rl* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_3_amk_diag_1_fl_pack(uint8_t* dst_ptr, const struct can_3_amk_diag_1_fl* src_ptr, size_t size);
int can_3_amk_diag_1_fl_unpack(struct can_3_amk_diag_1_fl* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_3_amk_diag_1_fr_pack(uint8_t* dst_ptr, const struct can_3_amk_diag_1_fr* src_ptr, size_t size);
int can_3_amk_diag_1_fr_unpack(struct can_3_amk_diag_1_fr* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_3_amk_diag_1_rr_pack(uint8_t* dst_ptr, const struct can_3_amk_diag_1_rr* src_ptr, size_t size);
int can_3_amk_diag_1_rr_unpack(struct can_3_amk_diag_1_rr* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_3_amk_diag_2_rl_pack(uint8_t* dst_ptr, const struct can_3_amk_diag_2_rl* src_ptr, size_t size);
int can_3_amk_diag_2_rl_unpack(struct can_3_amk_diag_2_rl* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_3_amk_diag_2_fl_pack(uint8_t* dst_ptr, const struct can_3_amk_diag_2_fl* src_ptr, size_t size);
int can_3_amk_diag_2_fl_unpack(struct can_3_amk_diag_2_fl* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_3_amk_diag_2_fr_pack(uint8_t* dst_ptr, const struct can_3_amk_diag_2_fr* src_ptr, size_t size);
int can_3_amk_diag_2_fr_unpack(struct can_3_amk_diag_2_fr* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_3_amk_diag_2_rr_pack(uint8_t* dst_ptr, const struct can_3_amk_diag_2_rr* src_ptr, size_t size);
int can_3_amk_diag_2_rr_unpack(struct can_3_amk_diag_2_rr* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_3_amk_power_rl_pack(uint8_t* dst_ptr, const struct can_3_amk_power_rl* src_ptr, size_t size);
int can_3_amk_power_rl_unpack(struct can_3_amk_power_rl* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_3_amk_power_fl_pack(uint8_t* dst_ptr, const struct can_3_amk_power_fl* src_ptr, size_t size);
int can_3_amk_power_fl_unpack(struct can_3_amk_power_fl* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_3_amk_power_fr_pack(uint8_t* dst_ptr, const struct can_3_amk_power_fr* src_ptr, size_t size);
int can_3_amk_power_fr_unpack(struct can_3_amk_power_fr* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_3_amk_power_rr_pack(uint8_t* dst_ptr, const struct can_3_amk_power_rr* src_ptr, size_t size);
int can_3_amk_power_rr_unpack(struct can_3_amk_power_rr* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_3_amk_hv_vlt_overload_rl_pack(uint8_t* dst_ptr, const struct can_3_amk_hv_vlt_overload_rl* src_ptr, size_t size);
int can_3_amk_hv_vlt_overload_rl_unpack(struct can_3_amk_hv_vlt_overload_rl* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_3_amk_hv_vlt_overload_fl_pack(uint8_t* dst_ptr, const struct can_3_amk_hv_vlt_overload_fl* src_ptr, size_t size);
int can_3_amk_hv_vlt_overload_fl_unpack(struct can_3_amk_hv_vlt_overload_fl* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_3_amk_hv_vlt_overload_fr_pack(uint8_t* dst_ptr, const struct can_3_amk_hv_vlt_overload_fr* src_ptr, size_t size);
int can_3_amk_hv_vlt_overload_fr_unpack(struct can_3_amk_hv_vlt_overload_fr* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_3_amk_hv_vlt_overload_rr_pack(uint8_t* dst_ptr, const struct can_3_amk_hv_vlt_overload_rr* src_ptr, size_t size);
int can_3_amk_hv_vlt_overload_rr_unpack(struct can_3_amk_hv_vlt_overload_rr* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_3_amk_status_generic_pack(uint8_t* dst_ptr, const struct can_3_amk_status_generic* src_ptr, size_t size);
int can_3_amk_status_generic_unpack(struct can_3_amk_status_generic* dst_ptr, const uint8_t* src_ptr, size_t size);

int can_3_safety_amk_cmd_generic_pack(uint8_t* dst_ptr, const struct can_3_safety_amk_cmd_generic* src_ptr, size_t size);
int can_3_safety_amk_cmd_generic_unpack(struct can_3_safety_amk_cmd_generic* dst_ptr, const uint8_t* src_ptr, size_t size);


#endif /* CAN_3_H */