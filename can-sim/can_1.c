/**
 * @file can_1.c
 * @author IEM can_codec library
 * @brief CAN message packing/unpacking code generated from can_1.dbc
 * @version 0.1
 * @date 2025-06-17
 */

#include "can_1.h"

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <string.h>
#include <errno.h>

/**
 * @brief Packs safety_status signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_1_SAFETY_STATUS_LENGTH (7U)
 */
int can_1_safety_status_pack(uint8_t* dst_ptr, const struct can_1_safety_status* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_1_SAFETY_STATUS_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_1_SAFETY_STATUS_LENGTH);
    struct can_1_safety_status_packed* packed_ptr = (struct can_1_safety_status_packed*)dst_ptr;

    packed_ptr->car_state = (uint8_t)((src_ptr->car_state - 0) / 1);
    packed_ptr->fault_bms = src_ptr->fault_bms;
    packed_ptr->fault_imd = src_ptr->fault_imd;
    packed_ptr->fault_bspd = src_ptr->fault_bspd;
    packed_ptr->shutdown_state = src_ptr->shutdown_state;
    packed_ptr->brake_pressed = src_ptr->brake_pressed;
    packed_ptr->vlt_lv_batt = (uint16_t)((src_ptr->vlt_lv_batt - 0.0F) / 0.03125F);
    packed_ptr->safety_hv_connected = src_ptr->safety_hv_connected;
    packed_ptr->fault_apps = (uint8_t)((src_ptr->fault_apps - 0) / 1);
    packed_ptr->fault_btsf = (uint8_t)((src_ptr->fault_btsf - 0) / 1);
    packed_ptr->bp_rear = (uint8_t)((src_ptr->bp_rear - 0) / 4);
    packed_ptr->bp_front = (uint8_t)((src_ptr->bp_front - 0) / 4);
    packed_ptr->cur_bspd = (uint16_t)((src_ptr->cur_bspd - -256.0F) / 0.0078125F);

    return 0;
}

/**
 * @brief Unpacks safety_status signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_1_SAFETY_STATUS_LENGTH (7U)
 */
int can_1_safety_status_unpack(struct can_1_safety_status* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_1_SAFETY_STATUS_LENGTH) {
        return EINVAL;
    }

    struct can_1_safety_status_packed* packed_ptr = (struct can_1_safety_status_packed*)src_ptr;

    dst_ptr->car_state = ((uint32_t)packed_ptr->car_state * 1) + 0;
    dst_ptr->fault_bms = (bool)packed_ptr->fault_bms;
    dst_ptr->fault_imd = (bool)packed_ptr->fault_imd;
    dst_ptr->fault_bspd = (bool)packed_ptr->fault_bspd;
    dst_ptr->shutdown_state = (bool)packed_ptr->shutdown_state;
    dst_ptr->brake_pressed = (bool)packed_ptr->brake_pressed;
    dst_ptr->vlt_lv_batt = ((float)packed_ptr->vlt_lv_batt * 0.03125F) + 0.0F;
    dst_ptr->safety_hv_connected = (bool)packed_ptr->safety_hv_connected;
    dst_ptr->fault_apps = ((uint32_t)packed_ptr->fault_apps * 1) + 0;
    dst_ptr->fault_btsf = ((uint32_t)packed_ptr->fault_btsf * 1) + 0;
    dst_ptr->bp_rear = ((uint32_t)packed_ptr->bp_rear * 4) + 0;
    dst_ptr->bp_front = ((uint32_t)packed_ptr->bp_front * 4) + 0;
    dst_ptr->cur_bspd = ((float)packed_ptr->cur_bspd * 0.0078125F) + -256.0F;

    return 0;
}

/**
 * @brief Packs safety_sw_hard_fault signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_1_SAFETY_SW_HARD_FAULT_LENGTH (1U)
 */
int can_1_safety_sw_hard_fault_pack(uint8_t* dst_ptr, const struct can_1_safety_sw_hard_fault* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_1_SAFETY_SW_HARD_FAULT_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_1_SAFETY_SW_HARD_FAULT_LENGTH);
    struct can_1_safety_sw_hard_fault_packed* packed_ptr = (struct can_1_safety_sw_hard_fault_packed*)dst_ptr;

    packed_ptr->sw_hard_fault_enable = src_ptr->sw_hard_fault_enable;

    return 0;
}

/**
 * @brief Unpacks safety_sw_hard_fault signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_1_SAFETY_SW_HARD_FAULT_LENGTH (1U)
 */
int can_1_safety_sw_hard_fault_unpack(struct can_1_safety_sw_hard_fault* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_1_SAFETY_SW_HARD_FAULT_LENGTH) {
        return EINVAL;
    }

    struct can_1_safety_sw_hard_fault_packed* packed_ptr = (struct can_1_safety_sw_hard_fault_packed*)src_ptr;

    dst_ptr->sw_hard_fault_enable = (bool)packed_ptr->sw_hard_fault_enable;

    return 0;
}

/**
 * @brief Packs fsb_laptrigger_message signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_1_FSB_LAPTRIGGER_MESSAGE_LENGTH (5U)
 */
int can_1_fsb_laptrigger_message_pack(uint8_t* dst_ptr, const struct can_1_fsb_laptrigger_message* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_1_FSB_LAPTRIGGER_MESSAGE_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_1_FSB_LAPTRIGGER_MESSAGE_LENGTH);
    struct can_1_fsb_laptrigger_message_packed* packed_ptr = (struct can_1_fsb_laptrigger_message_packed*)dst_ptr;

    packed_ptr->fsb_lap_count = (uint8_t)((src_ptr->fsb_lap_count - 0) / 1);
    packed_ptr->fsb_laptrigger_elapsed_time = (uint32_t)((src_ptr->fsb_laptrigger_elapsed_time - 0.0F) / 0.1F);

    return 0;
}

/**
 * @brief Unpacks fsb_laptrigger_message signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_1_FSB_LAPTRIGGER_MESSAGE_LENGTH (5U)
 */
int can_1_fsb_laptrigger_message_unpack(struct can_1_fsb_laptrigger_message* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_1_FSB_LAPTRIGGER_MESSAGE_LENGTH) {
        return EINVAL;
    }

    struct can_1_fsb_laptrigger_message_packed* packed_ptr = (struct can_1_fsb_laptrigger_message_packed*)src_ptr;

    dst_ptr->fsb_lap_count = ((uint32_t)packed_ptr->fsb_lap_count * 1) + 0;
    dst_ptr->fsb_laptrigger_elapsed_time = ((float)packed_ptr->fsb_laptrigger_elapsed_time * 0.1F) + 0.0F;

    return 0;
}

/**
 * @brief Packs apps_right signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_1_APPS_RIGHT_LENGTH (8U)
 */
int can_1_apps_right_pack(uint8_t* dst_ptr, const struct can_1_apps_right* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_1_APPS_RIGHT_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_1_APPS_RIGHT_LENGTH);
    struct can_1_apps_right_packed* packed_ptr = (struct can_1_apps_right_packed*)dst_ptr;

    packed_ptr->pos_apps_r = (int16_t)((src_ptr->pos_apps_r - 0.0F) / 0.02197265625F);
    packed_ptr->vel_apps_r = (int16_t)((src_ptr->vel_apps_r - 0.0F) / 0.055F);
    packed_ptr->apps_err_internal_r = src_ptr->apps_err_internal_r;
    packed_ptr->apps_err_range_r = src_ptr->apps_err_range_r;
    packed_ptr->apps_err_rev_cnt_r = src_ptr->apps_err_rev_cnt_r;
    packed_ptr->apps_err_spd_ovfl_r = src_ptr->apps_err_spd_ovfl_r;
    packed_ptr->rev_cnt_apps_r = (int32_t)((src_ptr->rev_cnt_apps_r - 0) / 1);

    return 0;
}

/**
 * @brief Unpacks apps_right signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_1_APPS_RIGHT_LENGTH (8U)
 */
int can_1_apps_right_unpack(struct can_1_apps_right* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_1_APPS_RIGHT_LENGTH) {
        return EINVAL;
    }

    struct can_1_apps_right_packed* packed_ptr = (struct can_1_apps_right_packed*)src_ptr;

    dst_ptr->pos_apps_r = ((float)packed_ptr->pos_apps_r * 0.02197265625F) + 0.0F;
    dst_ptr->vel_apps_r = ((float)packed_ptr->vel_apps_r * 0.055F) + 0.0F;
    dst_ptr->apps_err_internal_r = (bool)packed_ptr->apps_err_internal_r;
    dst_ptr->apps_err_range_r = (bool)packed_ptr->apps_err_range_r;
    dst_ptr->apps_err_rev_cnt_r = (bool)packed_ptr->apps_err_rev_cnt_r;
    dst_ptr->apps_err_spd_ovfl_r = (bool)packed_ptr->apps_err_spd_ovfl_r;
    dst_ptr->rev_cnt_apps_r = ((int32_t)packed_ptr->rev_cnt_apps_r * 1) + 0;

    return 0;
}

/**
 * @brief Packs apps_left signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_1_APPS_LEFT_LENGTH (8U)
 */
int can_1_apps_left_pack(uint8_t* dst_ptr, const struct can_1_apps_left* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_1_APPS_LEFT_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_1_APPS_LEFT_LENGTH);
    struct can_1_apps_left_packed* packed_ptr = (struct can_1_apps_left_packed*)dst_ptr;

    packed_ptr->pos_apps_l = (int16_t)((src_ptr->pos_apps_l - 0.0F) / 0.02197265625F);
    packed_ptr->vel_apps_l = (int16_t)((src_ptr->vel_apps_l - 0.0F) / 0.055F);
    packed_ptr->apps_err_internal_l = src_ptr->apps_err_internal_l;
    packed_ptr->apps_err_range_l = src_ptr->apps_err_range_l;
    packed_ptr->apps_err_rev_cnt_l = src_ptr->apps_err_rev_cnt_l;
    packed_ptr->apps_err_spd_ovfl_l = src_ptr->apps_err_spd_ovfl_l;
    packed_ptr->rev_cnt_apps_l = (int32_t)((src_ptr->rev_cnt_apps_l - 0) / 1);

    return 0;
}

/**
 * @brief Unpacks apps_left signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_1_APPS_LEFT_LENGTH (8U)
 */
int can_1_apps_left_unpack(struct can_1_apps_left* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_1_APPS_LEFT_LENGTH) {
        return EINVAL;
    }

    struct can_1_apps_left_packed* packed_ptr = (struct can_1_apps_left_packed*)src_ptr;

    dst_ptr->pos_apps_l = ((float)packed_ptr->pos_apps_l * 0.02197265625F) + 0.0F;
    dst_ptr->vel_apps_l = ((float)packed_ptr->vel_apps_l * 0.055F) + 0.0F;
    dst_ptr->apps_err_internal_l = (bool)packed_ptr->apps_err_internal_l;
    dst_ptr->apps_err_range_l = (bool)packed_ptr->apps_err_range_l;
    dst_ptr->apps_err_rev_cnt_l = (bool)packed_ptr->apps_err_rev_cnt_l;
    dst_ptr->apps_err_spd_ovfl_l = (bool)packed_ptr->apps_err_spd_ovfl_l;
    dst_ptr->rev_cnt_apps_l = ((int32_t)packed_ptr->rev_cnt_apps_l * 1) + 0;

    return 0;
}

/**
 * @brief Packs sas_data signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_1_SAS_DATA_LENGTH (8U)
 */
int can_1_sas_data_pack(uint8_t* dst_ptr, const struct can_1_sas_data* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_1_SAS_DATA_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_1_SAS_DATA_LENGTH);
    struct can_1_sas_data_packed* packed_ptr = (struct can_1_sas_data_packed*)dst_ptr;

    packed_ptr->angle_steering = (int16_t)((src_ptr->angle_steering - 0.0F) / 0.02197265625F);
    packed_ptr->vel_steering = (int16_t)((src_ptr->vel_steering - 0.0F) / 0.055F);
    packed_ptr->sas_err_internal = src_ptr->sas_err_internal;
    packed_ptr->sas_err_range = src_ptr->sas_err_range;
    packed_ptr->sas_err_rev_cnt = src_ptr->sas_err_rev_cnt;
    packed_ptr->sas_err_spd_ovfl = src_ptr->sas_err_spd_ovfl;
    packed_ptr->rev_cnt_steering = (int32_t)((src_ptr->rev_cnt_steering - 0) / 1);

    return 0;
}

/**
 * @brief Unpacks sas_data signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_1_SAS_DATA_LENGTH (8U)
 */
int can_1_sas_data_unpack(struct can_1_sas_data* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_1_SAS_DATA_LENGTH) {
        return EINVAL;
    }

    struct can_1_sas_data_packed* packed_ptr = (struct can_1_sas_data_packed*)src_ptr;

    dst_ptr->angle_steering = ((float)packed_ptr->angle_steering * 0.02197265625F) + 0.0F;
    dst_ptr->vel_steering = ((float)packed_ptr->vel_steering * 0.055F) + 0.0F;
    dst_ptr->sas_err_internal = (bool)packed_ptr->sas_err_internal;
    dst_ptr->sas_err_range = (bool)packed_ptr->sas_err_range;
    dst_ptr->sas_err_rev_cnt = (bool)packed_ptr->sas_err_rev_cnt;
    dst_ptr->sas_err_spd_ovfl = (bool)packed_ptr->sas_err_spd_ovfl;
    dst_ptr->rev_cnt_steering = ((int32_t)packed_ptr->rev_cnt_steering * 1) + 0;

    return 0;
}

/**
 * @brief Packs bms_status signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_1_BMS_STATUS_LENGTH (8U)
 */
int can_1_bms_status_pack(uint8_t* dst_ptr, const struct can_1_bms_status* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_1_BMS_STATUS_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_1_BMS_STATUS_LENGTH);
    struct can_1_bms_status_packed* packed_ptr = (struct can_1_bms_status_packed*)dst_ptr;

    packed_ptr->soc_accum = (uint16_t)((src_ptr->soc_accum - 0.0F) / 0.03125F);
    packed_ptr->bms_fault_ovp = src_ptr->bms_fault_ovp;
    packed_ptr->bms_fault_uvp = src_ptr->bms_fault_uvp;
    packed_ptr->bms_fault_otp = src_ptr->bms_fault_otp;
    packed_ptr->bms_fault_utp = src_ptr->bms_fault_utp;
    packed_ptr->cur_accum = (uint16_t)((src_ptr->cur_accum - -256.0F) / 0.0078125F);
    packed_ptr->vlt_accum_6811 = (uint16_t)((src_ptr->vlt_accum_6811 - 0.0F) / 0.0390625F);
    packed_ptr->bms_fault_pcharge = src_ptr->bms_fault_pcharge;
    packed_ptr->precharge_cplt = src_ptr->precharge_cplt;
    packed_ptr->vlt_accum = (uint16_t)((src_ptr->vlt_accum - 0.0F) / 0.009765625F);

    return 0;
}

/**
 * @brief Unpacks bms_status signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_1_BMS_STATUS_LENGTH (8U)
 */
int can_1_bms_status_unpack(struct can_1_bms_status* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_1_BMS_STATUS_LENGTH) {
        return EINVAL;
    }

    struct can_1_bms_status_packed* packed_ptr = (struct can_1_bms_status_packed*)src_ptr;

    dst_ptr->soc_accum = ((float)packed_ptr->soc_accum * 0.03125F) + 0.0F;
    dst_ptr->bms_fault_ovp = (bool)packed_ptr->bms_fault_ovp;
    dst_ptr->bms_fault_uvp = (bool)packed_ptr->bms_fault_uvp;
    dst_ptr->bms_fault_otp = (bool)packed_ptr->bms_fault_otp;
    dst_ptr->bms_fault_utp = (bool)packed_ptr->bms_fault_utp;
    dst_ptr->cur_accum = ((float)packed_ptr->cur_accum * 0.0078125F) + -256.0F;
    dst_ptr->vlt_accum_6811 = ((float)packed_ptr->vlt_accum_6811 * 0.0390625F) + 0.0F;
    dst_ptr->bms_fault_pcharge = (bool)packed_ptr->bms_fault_pcharge;
    dst_ptr->precharge_cplt = (bool)packed_ptr->precharge_cplt;
    dst_ptr->vlt_accum = ((float)packed_ptr->vlt_accum * 0.009765625F) + 0.0F;

    return 0;
}

/**
 * @brief Packs swb_regen signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_1_SWB_REGEN_LENGTH (4U)
 */
int can_1_swb_regen_pack(uint8_t* dst_ptr, const struct can_1_swb_regen* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_1_SWB_REGEN_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_1_SWB_REGEN_LENGTH);
    struct can_1_swb_regen_packed* packed_ptr = (struct can_1_swb_regen_packed*)dst_ptr;

    packed_ptr->swb_load_cell_0 = (uint16_t)((src_ptr->swb_load_cell_0 - 0.0F) / 0.00152590219F);
    packed_ptr->swb_load_cell_1 = (uint16_t)((src_ptr->swb_load_cell_1 - 0.0F) / 0.00152590219F);

    return 0;
}

/**
 * @brief Unpacks swb_regen signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_1_SWB_REGEN_LENGTH (4U)
 */
int can_1_swb_regen_unpack(struct can_1_swb_regen* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_1_SWB_REGEN_LENGTH) {
        return EINVAL;
    }

    struct can_1_swb_regen_packed* packed_ptr = (struct can_1_swb_regen_packed*)src_ptr;

    dst_ptr->swb_load_cell_0 = ((float)packed_ptr->swb_load_cell_0 * 0.00152590219F) + 0.0F;
    dst_ptr->swb_load_cell_1 = ((float)packed_ptr->swb_load_cell_1 * 0.00152590219F) + 0.0F;

    return 0;
}

/**
 * @brief Packs swb_switches signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_1_SWB_SWITCHES_LENGTH (3U)
 */
int can_1_swb_switches_pack(uint8_t* dst_ptr, const struct can_1_swb_switches* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_1_SWB_SWITCHES_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_1_SWB_SWITCHES_LENGTH);
    struct can_1_swb_switches_packed* packed_ptr = (struct can_1_swb_switches_packed*)dst_ptr;

    packed_ptr->swb_quad_enc = (uint8_t)((src_ptr->swb_quad_enc - 0.0F) / 0.003921568627F);
    packed_ptr->swb_rotary_0 = (uint8_t)((src_ptr->swb_rotary_0 - 0) / 1);
    packed_ptr->swb_rotary_1 = (uint8_t)((src_ptr->swb_rotary_1 - 0) / 1);
    packed_ptr->swb_button_0 = src_ptr->swb_button_0;
    packed_ptr->swb_button_1 = src_ptr->swb_button_1;
    packed_ptr->swb_rotary_2 = (uint8_t)((src_ptr->swb_rotary_2 - 0) / 1);
    packed_ptr->swb_rotary_3 = (uint8_t)((src_ptr->swb_rotary_3 - 0) / 1);

    return 0;
}

/**
 * @brief Unpacks swb_switches signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_1_SWB_SWITCHES_LENGTH (3U)
 */
int can_1_swb_switches_unpack(struct can_1_swb_switches* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_1_SWB_SWITCHES_LENGTH) {
        return EINVAL;
    }

    struct can_1_swb_switches_packed* packed_ptr = (struct can_1_swb_switches_packed*)src_ptr;

    dst_ptr->swb_quad_enc = ((float)packed_ptr->swb_quad_enc * 0.003921568627F) + 0.0F;
    dst_ptr->swb_rotary_0 = ((uint32_t)packed_ptr->swb_rotary_0 * 1) + 0;
    dst_ptr->swb_rotary_1 = ((uint32_t)packed_ptr->swb_rotary_1 * 1) + 0;
    dst_ptr->swb_button_0 = (bool)packed_ptr->swb_button_0;
    dst_ptr->swb_button_1 = (bool)packed_ptr->swb_button_1;
    dst_ptr->swb_rotary_2 = ((uint32_t)packed_ptr->swb_rotary_2 * 1) + 0;
    dst_ptr->swb_rotary_3 = ((uint32_t)packed_ptr->swb_rotary_3 * 1) + 0;

    return 0;
}

/**
 * @brief Packs fsb_aux_switches signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_1_FSB_AUX_SWITCHES_LENGTH (1U)
 */
int can_1_fsb_aux_switches_pack(uint8_t* dst_ptr, const struct can_1_fsb_aux_switches* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_1_FSB_AUX_SWITCHES_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_1_FSB_AUX_SWITCHES_LENGTH);
    struct can_1_fsb_aux_switches_packed* packed_ptr = (struct can_1_fsb_aux_switches_packed*)dst_ptr;

    packed_ptr->aux_tv = (uint8_t)((src_ptr->aux_tv - 1) / -1);
    packed_ptr->aux_drive = (uint8_t)((src_ptr->aux_drive - 1) / -1);
    packed_ptr->aux_cooling = (uint8_t)((src_ptr->aux_cooling - 1) / -1);
    packed_ptr->aux_3 = (uint8_t)((src_ptr->aux_3 - 1) / -1);
    packed_ptr->aux_4 = (uint8_t)((src_ptr->aux_4 - 1) / -1);

    return 0;
}

/**
 * @brief Unpacks fsb_aux_switches signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_1_FSB_AUX_SWITCHES_LENGTH (1U)
 */
int can_1_fsb_aux_switches_unpack(struct can_1_fsb_aux_switches* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_1_FSB_AUX_SWITCHES_LENGTH) {
        return EINVAL;
    }

    struct can_1_fsb_aux_switches_packed* packed_ptr = (struct can_1_fsb_aux_switches_packed*)src_ptr;

    dst_ptr->aux_tv = ((uint32_t)packed_ptr->aux_tv * -1) + 1;
    dst_ptr->aux_drive = ((uint32_t)packed_ptr->aux_drive * -1) + 1;
    dst_ptr->aux_cooling = ((uint32_t)packed_ptr->aux_cooling * -1) + 1;
    dst_ptr->aux_3 = ((uint32_t)packed_ptr->aux_3 * -1) + 1;
    dst_ptr->aux_4 = ((uint32_t)packed_ptr->aux_4 * -1) + 1;

    return 0;
}

/**
 * @brief Packs cpu_bms_viewer_poll signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_1_CPU_BMS_VIEWER_POLL_LENGTH (1U)
 */
int can_1_cpu_bms_viewer_poll_pack(uint8_t* dst_ptr, const struct can_1_cpu_bms_viewer_poll* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_1_CPU_BMS_VIEWER_POLL_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_1_CPU_BMS_VIEWER_POLL_LENGTH);
    struct can_1_cpu_bms_viewer_poll_packed* packed_ptr = (struct can_1_cpu_bms_viewer_poll_packed*)dst_ptr;

    packed_ptr->bms_viewer_poll_en = src_ptr->bms_viewer_poll_en;

    return 0;
}

/**
 * @brief Unpacks cpu_bms_viewer_poll signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_1_CPU_BMS_VIEWER_POLL_LENGTH (1U)
 */
int can_1_cpu_bms_viewer_poll_unpack(struct can_1_cpu_bms_viewer_poll* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_1_CPU_BMS_VIEWER_POLL_LENGTH) {
        return EINVAL;
    }

    struct can_1_cpu_bms_viewer_poll_packed* packed_ptr = (struct can_1_cpu_bms_viewer_poll_packed*)src_ptr;

    dst_ptr->bms_viewer_poll_en = (bool)packed_ptr->bms_viewer_poll_en;

    return 0;
}

/**
 * @brief Packs safety_pump_duty signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_1_SAFETY_PUMP_DUTY_LENGTH (1U)
 */
int can_1_safety_pump_duty_pack(uint8_t* dst_ptr, const struct can_1_safety_pump_duty* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_1_SAFETY_PUMP_DUTY_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_1_SAFETY_PUMP_DUTY_LENGTH);
    struct can_1_safety_pump_duty_packed* packed_ptr = (struct can_1_safety_pump_duty_packed*)dst_ptr;

    packed_ptr->pump_duty_cycle = (uint8_t)((src_ptr->pump_duty_cycle - 0) / 1);

    return 0;
}

/**
 * @brief Unpacks safety_pump_duty signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_1_SAFETY_PUMP_DUTY_LENGTH (1U)
 */
int can_1_safety_pump_duty_unpack(struct can_1_safety_pump_duty* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_1_SAFETY_PUMP_DUTY_LENGTH) {
        return EINVAL;
    }

    struct can_1_safety_pump_duty_packed* packed_ptr = (struct can_1_safety_pump_duty_packed*)src_ptr;

    dst_ptr->pump_duty_cycle = ((uint32_t)packed_ptr->pump_duty_cycle * 1) + 0;

    return 0;
}

/**
 * @brief Packs bms_cell_data signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_1_BMS_CELL_DATA_LENGTH (8U)
 */
int can_1_bms_cell_data_pack(uint8_t* dst_ptr, const struct can_1_bms_cell_data* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_1_BMS_CELL_DATA_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_1_BMS_CELL_DATA_LENGTH);
    struct can_1_bms_cell_data_packed* packed_ptr = (struct can_1_bms_cell_data_packed*)dst_ptr;

    packed_ptr->idx_cell_data = (uint8_t)((src_ptr->idx_cell_data - 0) / 1);
    packed_ptr->vlt_cell_data = (uint16_t)((src_ptr->vlt_cell_data - 0.0F) / 0.0001F);
    packed_ptr->temp_cell_data = (uint16_t)((src_ptr->temp_cell_data - -10.0F) / 0.01953125F);
    packed_ptr->cell_fault_disconnected = src_ptr->cell_fault_disconnected;
    packed_ptr->cell_fault_dc = src_ptr->cell_fault_dc;
    packed_ptr->cell_fault_temp = src_ptr->cell_fault_temp;
    packed_ptr->cell_fault_pec = src_ptr->cell_fault_pec;
    packed_ptr->soc_cell_data = (uint16_t)((src_ptr->soc_cell_data - 0.0F) / 0.03125F);
    packed_ptr->soh_cell_data = (uint16_t)((src_ptr->soh_cell_data - 0.0F) / 0.03125F);

    return 0;
}

/**
 * @brief Unpacks bms_cell_data signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_1_BMS_CELL_DATA_LENGTH (8U)
 */
int can_1_bms_cell_data_unpack(struct can_1_bms_cell_data* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_1_BMS_CELL_DATA_LENGTH) {
        return EINVAL;
    }

    struct can_1_bms_cell_data_packed* packed_ptr = (struct can_1_bms_cell_data_packed*)src_ptr;

    dst_ptr->idx_cell_data = ((uint32_t)packed_ptr->idx_cell_data * 1) + 0;
    dst_ptr->vlt_cell_data = ((float)packed_ptr->vlt_cell_data * 0.0001F) + 0.0F;
    dst_ptr->temp_cell_data = ((float)packed_ptr->temp_cell_data * 0.01953125F) + -10.0F;
    dst_ptr->cell_fault_disconnected = (bool)packed_ptr->cell_fault_disconnected;
    dst_ptr->cell_fault_dc = (bool)packed_ptr->cell_fault_dc;
    dst_ptr->cell_fault_temp = (bool)packed_ptr->cell_fault_temp;
    dst_ptr->cell_fault_pec = (bool)packed_ptr->cell_fault_pec;
    dst_ptr->soc_cell_data = ((float)packed_ptr->soc_cell_data * 0.03125F) + 0.0F;
    dst_ptr->soh_cell_data = ((float)packed_ptr->soh_cell_data * 0.03125F) + 0.0F;

    return 0;
}

/**
 * @brief Packs safety_tractive_status signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_1_SAFETY_TRACTIVE_STATUS_LENGTH (5U)
 */
int can_1_safety_tractive_status_pack(uint8_t* dst_ptr, const struct can_1_safety_tractive_status* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_1_SAFETY_TRACTIVE_STATUS_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_1_SAFETY_TRACTIVE_STATUS_LENGTH);
    struct can_1_safety_tractive_status_packed* packed_ptr = (struct can_1_safety_tractive_status_packed*)dst_ptr;

    packed_ptr->throttle_cmd = (int16_t)((src_ptr->throttle_cmd - 0.0F) / 0.05F);
    packed_ptr->tv_pwr_limit_on = src_ptr->tv_pwr_limit_on;
    packed_ptr->tv_ec_enabled = src_ptr->tv_ec_enabled;
    packed_ptr->tv_enabled = src_ptr->tv_enabled;
    packed_ptr->tv_on = src_ptr->tv_on;
    packed_ptr->amk_state_rl = (uint8_t)((src_ptr->amk_state_rl - 0) / 1);
    packed_ptr->amk_state_rr = (uint8_t)((src_ptr->amk_state_rr - 0) / 1);
    packed_ptr->regen_active = src_ptr->regen_active;
    packed_ptr->amk_state_fl = (uint8_t)((src_ptr->amk_state_fl - 0) / 1);
    packed_ptr->amk_state_fr = (uint8_t)((src_ptr->amk_state_fr - 0) / 1);
    packed_ptr->tractive_ctrl_type = (uint8_t)((src_ptr->tractive_ctrl_type - 0) / 1);
    packed_ptr->err_vnav_msg = src_ptr->err_vnav_msg;
    packed_ptr->err_bms_msg = src_ptr->err_bms_msg;
    packed_ptr->err_sas_msg = src_ptr->err_sas_msg;
    packed_ptr->err_swb_msg = src_ptr->err_swb_msg;
    packed_ptr->err_aux_msg = src_ptr->err_aux_msg;

    return 0;
}

/**
 * @brief Unpacks safety_tractive_status signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_1_SAFETY_TRACTIVE_STATUS_LENGTH (5U)
 */
int can_1_safety_tractive_status_unpack(struct can_1_safety_tractive_status* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_1_SAFETY_TRACTIVE_STATUS_LENGTH) {
        return EINVAL;
    }

    struct can_1_safety_tractive_status_packed* packed_ptr = (struct can_1_safety_tractive_status_packed*)src_ptr;

    dst_ptr->throttle_cmd = ((float)packed_ptr->throttle_cmd * 0.05F) + 0.0F;
    dst_ptr->tv_pwr_limit_on = (bool)packed_ptr->tv_pwr_limit_on;
    dst_ptr->tv_ec_enabled = (bool)packed_ptr->tv_ec_enabled;
    dst_ptr->tv_enabled = (bool)packed_ptr->tv_enabled;
    dst_ptr->tv_on = (bool)packed_ptr->tv_on;
    dst_ptr->amk_state_rl = ((uint32_t)packed_ptr->amk_state_rl * 1) + 0;
    dst_ptr->amk_state_rr = ((uint32_t)packed_ptr->amk_state_rr * 1) + 0;
    dst_ptr->regen_active = (bool)packed_ptr->regen_active;
    dst_ptr->amk_state_fl = ((uint32_t)packed_ptr->amk_state_fl * 1) + 0;
    dst_ptr->amk_state_fr = ((uint32_t)packed_ptr->amk_state_fr * 1) + 0;
    dst_ptr->tractive_ctrl_type = ((uint32_t)packed_ptr->tractive_ctrl_type * 1) + 0;
    dst_ptr->err_vnav_msg = (bool)packed_ptr->err_vnav_msg;
    dst_ptr->err_bms_msg = (bool)packed_ptr->err_bms_msg;
    dst_ptr->err_sas_msg = (bool)packed_ptr->err_sas_msg;
    dst_ptr->err_swb_msg = (bool)packed_ptr->err_swb_msg;
    dst_ptr->err_aux_msg = (bool)packed_ptr->err_aux_msg;

    return 0;
}

/**
 * @brief Packs bms_cell_vlt signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_1_BMS_CELL_VLT_LENGTH (6U)
 */
int can_1_bms_cell_vlt_pack(uint8_t* dst_ptr, const struct can_1_bms_cell_vlt* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_1_BMS_CELL_VLT_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_1_BMS_CELL_VLT_LENGTH);
    struct can_1_bms_cell_vlt_packed* packed_ptr = (struct can_1_bms_cell_vlt_packed*)dst_ptr;

    packed_ptr->vlt_cell_min = (uint16_t)((src_ptr->vlt_cell_min - 0.0F) / 0.0001F);
    packed_ptr->idx_vlt_min = (uint8_t)((src_ptr->idx_vlt_min - 0) / 1);
    packed_ptr->idx_vlt_max = (uint8_t)((src_ptr->idx_vlt_max - 0) / 1);
    packed_ptr->vlt_cell_max = (uint16_t)((src_ptr->vlt_cell_max - 0.0F) / 0.0001F);

    return 0;
}

/**
 * @brief Unpacks bms_cell_vlt signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_1_BMS_CELL_VLT_LENGTH (6U)
 */
int can_1_bms_cell_vlt_unpack(struct can_1_bms_cell_vlt* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_1_BMS_CELL_VLT_LENGTH) {
        return EINVAL;
    }

    struct can_1_bms_cell_vlt_packed* packed_ptr = (struct can_1_bms_cell_vlt_packed*)src_ptr;

    dst_ptr->vlt_cell_min = ((float)packed_ptr->vlt_cell_min * 0.0001F) + 0.0F;
    dst_ptr->idx_vlt_min = ((uint32_t)packed_ptr->idx_vlt_min * 1) + 0;
    dst_ptr->idx_vlt_max = ((uint32_t)packed_ptr->idx_vlt_max * 1) + 0;
    dst_ptr->vlt_cell_max = ((float)packed_ptr->vlt_cell_max * 0.0001F) + 0.0F;

    return 0;
}

/**
 * @brief Packs bms_cell_temp signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_1_BMS_CELL_TEMP_LENGTH (7U)
 */
int can_1_bms_cell_temp_pack(uint8_t* dst_ptr, const struct can_1_bms_cell_temp* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_1_BMS_CELL_TEMP_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_1_BMS_CELL_TEMP_LENGTH);
    struct can_1_bms_cell_temp_packed* packed_ptr = (struct can_1_bms_cell_temp_packed*)dst_ptr;

    packed_ptr->idx_temp_min = (uint8_t)((src_ptr->idx_temp_min - 0) / 1);
    packed_ptr->idx_temp_max = (uint8_t)((src_ptr->idx_temp_max - 0) / 1);
    packed_ptr->temp_cell_min = (uint16_t)((src_ptr->temp_cell_min - -10.0F) / 0.01953125F);
    packed_ptr->temp_cell_max = (uint16_t)((src_ptr->temp_cell_max - -10.0F) / 0.01953125F);
    packed_ptr->temp_accum_avg = (uint16_t)((src_ptr->temp_accum_avg - -10.0F) / 0.01953125F);

    return 0;
}

/**
 * @brief Unpacks bms_cell_temp signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_1_BMS_CELL_TEMP_LENGTH (7U)
 */
int can_1_bms_cell_temp_unpack(struct can_1_bms_cell_temp* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_1_BMS_CELL_TEMP_LENGTH) {
        return EINVAL;
    }

    struct can_1_bms_cell_temp_packed* packed_ptr = (struct can_1_bms_cell_temp_packed*)src_ptr;

    dst_ptr->idx_temp_min = ((uint32_t)packed_ptr->idx_temp_min * 1) + 0;
    dst_ptr->idx_temp_max = ((uint32_t)packed_ptr->idx_temp_max * 1) + 0;
    dst_ptr->temp_cell_min = ((float)packed_ptr->temp_cell_min * 0.01953125F) + -10.0F;
    dst_ptr->temp_cell_max = ((float)packed_ptr->temp_cell_max * 0.01953125F) + -10.0F;
    dst_ptr->temp_accum_avg = ((float)packed_ptr->temp_accum_avg * 0.01953125F) + -10.0F;

    return 0;
}

/**
 * @brief Packs fsb_status signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_1_FSB_STATUS_LENGTH (7U)
 */
int can_1_fsb_status_pack(uint8_t* dst_ptr, const struct can_1_fsb_status* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_1_FSB_STATUS_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_1_FSB_STATUS_LENGTH);
    struct can_1_fsb_status_packed* packed_ptr = (struct can_1_fsb_status_packed*)dst_ptr;

    packed_ptr->degc_board_temp_fsb = (uint16_t)((src_ptr->degc_board_temp_fsb - 0.0F) / 0.001953125F);
    packed_ptr->v_5va_fsb = (uint16_t)((src_ptr->v_5va_fsb - 0.0F) / 0.0001F);
    packed_ptr->v_3v3a_fsb = (uint16_t)((src_ptr->v_3v3a_fsb - 0.0F) / 0.0001F);
    packed_ptr->fsb_analog_voltage_fail = src_ptr->fsb_analog_voltage_fail;
    packed_ptr->fsb_digital_power_fail = src_ptr->fsb_digital_power_fail;
    packed_ptr->fsb_overtemp = src_ptr->fsb_overtemp;
    packed_ptr->fsb_setup_complete = src_ptr->fsb_setup_complete;

    return 0;
}

/**
 * @brief Unpacks fsb_status signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_1_FSB_STATUS_LENGTH (7U)
 */
int can_1_fsb_status_unpack(struct can_1_fsb_status* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_1_FSB_STATUS_LENGTH) {
        return EINVAL;
    }

    struct can_1_fsb_status_packed* packed_ptr = (struct can_1_fsb_status_packed*)src_ptr;

    dst_ptr->degc_board_temp_fsb = ((float)packed_ptr->degc_board_temp_fsb * 0.001953125F) + 0.0F;
    dst_ptr->v_5va_fsb = ((float)packed_ptr->v_5va_fsb * 0.0001F) + 0.0F;
    dst_ptr->v_3v3a_fsb = ((float)packed_ptr->v_3v3a_fsb * 0.0001F) + 0.0F;
    dst_ptr->fsb_analog_voltage_fail = (bool)packed_ptr->fsb_analog_voltage_fail;
    dst_ptr->fsb_digital_power_fail = (bool)packed_ptr->fsb_digital_power_fail;
    dst_ptr->fsb_overtemp = (bool)packed_ptr->fsb_overtemp;
    dst_ptr->fsb_setup_complete = (bool)packed_ptr->fsb_setup_complete;

    return 0;
}

/**
 * @brief Packs rsb_status signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_1_RSB_STATUS_LENGTH (7U)
 */
int can_1_rsb_status_pack(uint8_t* dst_ptr, const struct can_1_rsb_status* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_1_RSB_STATUS_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_1_RSB_STATUS_LENGTH);
    struct can_1_rsb_status_packed* packed_ptr = (struct can_1_rsb_status_packed*)dst_ptr;

    packed_ptr->degc_board_temp_rsb = (uint16_t)((src_ptr->degc_board_temp_rsb - 0.0F) / 0.001953125F);
    packed_ptr->v_5va_rsb = (uint16_t)((src_ptr->v_5va_rsb - 0.0F) / 0.0001F);
    packed_ptr->v_3v3a_rsb = (uint16_t)((src_ptr->v_3v3a_rsb - 0.0F) / 0.0001F);
    packed_ptr->rsb_analog_voltage_fail = src_ptr->rsb_analog_voltage_fail;
    packed_ptr->rsb_digital_power_fail = src_ptr->rsb_digital_power_fail;
    packed_ptr->rsb_overtemp = src_ptr->rsb_overtemp;
    packed_ptr->rsb_setup_complete = src_ptr->rsb_setup_complete;

    return 0;
}

/**
 * @brief Unpacks rsb_status signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_1_RSB_STATUS_LENGTH (7U)
 */
int can_1_rsb_status_unpack(struct can_1_rsb_status* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_1_RSB_STATUS_LENGTH) {
        return EINVAL;
    }

    struct can_1_rsb_status_packed* packed_ptr = (struct can_1_rsb_status_packed*)src_ptr;

    dst_ptr->degc_board_temp_rsb = ((float)packed_ptr->degc_board_temp_rsb * 0.001953125F) + 0.0F;
    dst_ptr->v_5va_rsb = ((float)packed_ptr->v_5va_rsb * 0.0001F) + 0.0F;
    dst_ptr->v_3v3a_rsb = ((float)packed_ptr->v_3v3a_rsb * 0.0001F) + 0.0F;
    dst_ptr->rsb_analog_voltage_fail = (bool)packed_ptr->rsb_analog_voltage_fail;
    dst_ptr->rsb_digital_power_fail = (bool)packed_ptr->rsb_digital_power_fail;
    dst_ptr->rsb_overtemp = (bool)packed_ptr->rsb_overtemp;
    dst_ptr->rsb_setup_complete = (bool)packed_ptr->rsb_setup_complete;

    return 0;
}
