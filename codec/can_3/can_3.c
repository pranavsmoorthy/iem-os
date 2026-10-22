/**
 * @file can_3.c
 * @author IEM can_codec library
 * @brief CAN message packing/unpacking code generated from can_3.dbc
 * @version 0.1
 * @date 2025-06-17
 */

#include "can_3.h"

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <string.h>
#include <errno.h>

/**
 * @brief Packs safety_amk_cmd_rl signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_SAFETY_AMK_CMD_RL_LENGTH (8U)
 */
int can_3_safety_amk_cmd_rl_pack(uint8_t* dst_ptr, const struct can_3_safety_amk_cmd_rl* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_SAFETY_AMK_CMD_RL_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_3_SAFETY_AMK_CMD_RL_LENGTH);
    struct can_3_safety_amk_cmd_rl_packed* packed_ptr = (struct can_3_safety_amk_cmd_rl_packed*)dst_ptr;

    packed_ptr->cmd_inv_enable_rl = src_ptr->cmd_inv_enable_rl;
    packed_ptr->cmd_hv_enable_rl = src_ptr->cmd_hv_enable_rl;
    packed_ptr->cmd_driver_enable_rl = src_ptr->cmd_driver_enable_rl;
    packed_ptr->cmd_error_remove_rl = src_ptr->cmd_error_remove_rl;
    packed_ptr->tq_setpoint_rl = (int16_t)((src_ptr->tq_setpoint_rl - 0.0F) / 0.0098F);
    packed_ptr->tq_limit_pos_rl = (int16_t)((src_ptr->tq_limit_pos_rl - 0.0F) / 0.0098F);
    packed_ptr->tq_limit_neg_rl = (int16_t)((src_ptr->tq_limit_neg_rl - 0.0F) / 0.0098F);

    return 0;
}

/**
 * @brief Unpacks safety_amk_cmd_rl signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_SAFETY_AMK_CMD_RL_LENGTH (8U)
 */
int can_3_safety_amk_cmd_rl_unpack(struct can_3_safety_amk_cmd_rl* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_SAFETY_AMK_CMD_RL_LENGTH) {
        return EINVAL;
    }

    struct can_3_safety_amk_cmd_rl_packed* packed_ptr = (struct can_3_safety_amk_cmd_rl_packed*)src_ptr;

    dst_ptr->cmd_inv_enable_rl = (bool)packed_ptr->cmd_inv_enable_rl;
    dst_ptr->cmd_hv_enable_rl = (bool)packed_ptr->cmd_hv_enable_rl;
    dst_ptr->cmd_driver_enable_rl = (bool)packed_ptr->cmd_driver_enable_rl;
    dst_ptr->cmd_error_remove_rl = (bool)packed_ptr->cmd_error_remove_rl;
    dst_ptr->tq_setpoint_rl = ((float)packed_ptr->tq_setpoint_rl * 0.0098F) + 0.0F;
    dst_ptr->tq_limit_pos_rl = ((float)packed_ptr->tq_limit_pos_rl * 0.0098F) + 0.0F;
    dst_ptr->tq_limit_neg_rl = ((float)packed_ptr->tq_limit_neg_rl * 0.0098F) + 0.0F;

    return 0;
}

/**
 * @brief Packs safety_amk_cmd_fl signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_SAFETY_AMK_CMD_FL_LENGTH (8U)
 */
int can_3_safety_amk_cmd_fl_pack(uint8_t* dst_ptr, const struct can_3_safety_amk_cmd_fl* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_SAFETY_AMK_CMD_FL_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_3_SAFETY_AMK_CMD_FL_LENGTH);
    struct can_3_safety_amk_cmd_fl_packed* packed_ptr = (struct can_3_safety_amk_cmd_fl_packed*)dst_ptr;

    packed_ptr->cmd_inv_enable_fl = src_ptr->cmd_inv_enable_fl;
    packed_ptr->cmd_hv_enable_fl = src_ptr->cmd_hv_enable_fl;
    packed_ptr->cmd_driver_enable_fl = src_ptr->cmd_driver_enable_fl;
    packed_ptr->cmd_error_remove_fl = src_ptr->cmd_error_remove_fl;
    packed_ptr->tq_setpoint_fl = (int16_t)((src_ptr->tq_setpoint_fl - 0.0F) / 0.0098F);
    packed_ptr->tq_limit_pos_fl = (int16_t)((src_ptr->tq_limit_pos_fl - 0.0F) / 0.0098F);
    packed_ptr->tq_limit_neg_fl = (int16_t)((src_ptr->tq_limit_neg_fl - 0.0F) / 0.0098F);

    return 0;
}

/**
 * @brief Unpacks safety_amk_cmd_fl signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_SAFETY_AMK_CMD_FL_LENGTH (8U)
 */
int can_3_safety_amk_cmd_fl_unpack(struct can_3_safety_amk_cmd_fl* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_SAFETY_AMK_CMD_FL_LENGTH) {
        return EINVAL;
    }

    struct can_3_safety_amk_cmd_fl_packed* packed_ptr = (struct can_3_safety_amk_cmd_fl_packed*)src_ptr;

    dst_ptr->cmd_inv_enable_fl = (bool)packed_ptr->cmd_inv_enable_fl;
    dst_ptr->cmd_hv_enable_fl = (bool)packed_ptr->cmd_hv_enable_fl;
    dst_ptr->cmd_driver_enable_fl = (bool)packed_ptr->cmd_driver_enable_fl;
    dst_ptr->cmd_error_remove_fl = (bool)packed_ptr->cmd_error_remove_fl;
    dst_ptr->tq_setpoint_fl = ((float)packed_ptr->tq_setpoint_fl * 0.0098F) + 0.0F;
    dst_ptr->tq_limit_pos_fl = ((float)packed_ptr->tq_limit_pos_fl * 0.0098F) + 0.0F;
    dst_ptr->tq_limit_neg_fl = ((float)packed_ptr->tq_limit_neg_fl * 0.0098F) + 0.0F;

    return 0;
}

/**
 * @brief Packs safety_amk_cmd_fr signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_SAFETY_AMK_CMD_FR_LENGTH (8U)
 */
int can_3_safety_amk_cmd_fr_pack(uint8_t* dst_ptr, const struct can_3_safety_amk_cmd_fr* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_SAFETY_AMK_CMD_FR_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_3_SAFETY_AMK_CMD_FR_LENGTH);
    struct can_3_safety_amk_cmd_fr_packed* packed_ptr = (struct can_3_safety_amk_cmd_fr_packed*)dst_ptr;

    packed_ptr->cmd_inv_enable_fr = src_ptr->cmd_inv_enable_fr;
    packed_ptr->cmd_hv_enable_fr = src_ptr->cmd_hv_enable_fr;
    packed_ptr->cmd_driver_enable_fr = src_ptr->cmd_driver_enable_fr;
    packed_ptr->cmd_error_remove_fr = src_ptr->cmd_error_remove_fr;
    packed_ptr->tq_setpoint_fr = (int16_t)((src_ptr->tq_setpoint_fr - 0.0F) / 0.0098F);
    packed_ptr->tq_limit_pos_fr = (int16_t)((src_ptr->tq_limit_pos_fr - 0.0F) / 0.0098F);
    packed_ptr->tq_limit_neg_fr = (int16_t)((src_ptr->tq_limit_neg_fr - 0.0F) / 0.0098F);

    return 0;
}

/**
 * @brief Unpacks safety_amk_cmd_fr signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_SAFETY_AMK_CMD_FR_LENGTH (8U)
 */
int can_3_safety_amk_cmd_fr_unpack(struct can_3_safety_amk_cmd_fr* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_SAFETY_AMK_CMD_FR_LENGTH) {
        return EINVAL;
    }

    struct can_3_safety_amk_cmd_fr_packed* packed_ptr = (struct can_3_safety_amk_cmd_fr_packed*)src_ptr;

    dst_ptr->cmd_inv_enable_fr = (bool)packed_ptr->cmd_inv_enable_fr;
    dst_ptr->cmd_hv_enable_fr = (bool)packed_ptr->cmd_hv_enable_fr;
    dst_ptr->cmd_driver_enable_fr = (bool)packed_ptr->cmd_driver_enable_fr;
    dst_ptr->cmd_error_remove_fr = (bool)packed_ptr->cmd_error_remove_fr;
    dst_ptr->tq_setpoint_fr = ((float)packed_ptr->tq_setpoint_fr * 0.0098F) + 0.0F;
    dst_ptr->tq_limit_pos_fr = ((float)packed_ptr->tq_limit_pos_fr * 0.0098F) + 0.0F;
    dst_ptr->tq_limit_neg_fr = ((float)packed_ptr->tq_limit_neg_fr * 0.0098F) + 0.0F;

    return 0;
}

/**
 * @brief Packs safety_amk_cmd_rr signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_SAFETY_AMK_CMD_RR_LENGTH (8U)
 */
int can_3_safety_amk_cmd_rr_pack(uint8_t* dst_ptr, const struct can_3_safety_amk_cmd_rr* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_SAFETY_AMK_CMD_RR_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_3_SAFETY_AMK_CMD_RR_LENGTH);
    struct can_3_safety_amk_cmd_rr_packed* packed_ptr = (struct can_3_safety_amk_cmd_rr_packed*)dst_ptr;

    packed_ptr->cmd_inv_enable_rr = src_ptr->cmd_inv_enable_rr;
    packed_ptr->cmd_hv_enable_rr = src_ptr->cmd_hv_enable_rr;
    packed_ptr->cmd_driver_enable_rr = src_ptr->cmd_driver_enable_rr;
    packed_ptr->cmd_error_remove_rr = src_ptr->cmd_error_remove_rr;
    packed_ptr->tq_setpoint_rr = (int16_t)((src_ptr->tq_setpoint_rr - 0.0F) / 0.0098F);
    packed_ptr->tq_limit_pos_rr = (int16_t)((src_ptr->tq_limit_pos_rr - 0.0F) / 0.0098F);
    packed_ptr->tq_limit_neg_rr = (int16_t)((src_ptr->tq_limit_neg_rr - 0.0F) / 0.0098F);

    return 0;
}

/**
 * @brief Unpacks safety_amk_cmd_rr signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_SAFETY_AMK_CMD_RR_LENGTH (8U)
 */
int can_3_safety_amk_cmd_rr_unpack(struct can_3_safety_amk_cmd_rr* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_SAFETY_AMK_CMD_RR_LENGTH) {
        return EINVAL;
    }

    struct can_3_safety_amk_cmd_rr_packed* packed_ptr = (struct can_3_safety_amk_cmd_rr_packed*)src_ptr;

    dst_ptr->cmd_inv_enable_rr = (bool)packed_ptr->cmd_inv_enable_rr;
    dst_ptr->cmd_hv_enable_rr = (bool)packed_ptr->cmd_hv_enable_rr;
    dst_ptr->cmd_driver_enable_rr = (bool)packed_ptr->cmd_driver_enable_rr;
    dst_ptr->cmd_error_remove_rr = (bool)packed_ptr->cmd_error_remove_rr;
    dst_ptr->tq_setpoint_rr = ((float)packed_ptr->tq_setpoint_rr * 0.0098F) + 0.0F;
    dst_ptr->tq_limit_pos_rr = ((float)packed_ptr->tq_limit_pos_rr * 0.0098F) + 0.0F;
    dst_ptr->tq_limit_neg_rr = ((float)packed_ptr->tq_limit_neg_rr * 0.0098F) + 0.0F;

    return 0;
}

/**
 * @brief Packs amk_status_rl signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_AMK_STATUS_RL_LENGTH (8U)
 */
int can_3_amk_status_rl_pack(uint8_t* dst_ptr, const struct can_3_amk_status_rl* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_AMK_STATUS_RL_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_3_AMK_STATUS_RL_LENGTH);
    struct can_3_amk_status_rl_packed* packed_ptr = (struct can_3_amk_status_rl_packed*)dst_ptr;

    packed_ptr->stat_system_ready_rl = src_ptr->stat_system_ready_rl;
    packed_ptr->stat_error_rl = src_ptr->stat_error_rl;
    packed_ptr->stat_warning_rl = src_ptr->stat_warning_rl;
    packed_ptr->stat_hv_enable_rl = src_ptr->stat_hv_enable_rl;
    packed_ptr->stat_hv_enable_cplt_rl = src_ptr->stat_hv_enable_cplt_rl;
    packed_ptr->stat_inv_enable_rl = src_ptr->stat_inv_enable_rl;
    packed_ptr->stat_inv_enable_cplt_rl = src_ptr->stat_inv_enable_cplt_rl;
    packed_ptr->stat_derating_rl = src_ptr->stat_derating_rl;
    packed_ptr->spd_actual_rl = (int16_t)((src_ptr->spd_actual_rl - 0) / 1);
    packed_ptr->tq_actual_rl = (int16_t)((src_ptr->tq_actual_rl - 0.0F) / 0.0098F);
    packed_ptr->cur_iq_rl = (int16_t)((src_ptr->cur_iq_rl - 0.0F) / 0.006530761719F);

    return 0;
}

/**
 * @brief Unpacks amk_status_rl signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_AMK_STATUS_RL_LENGTH (8U)
 */
int can_3_amk_status_rl_unpack(struct can_3_amk_status_rl* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_AMK_STATUS_RL_LENGTH) {
        return EINVAL;
    }

    struct can_3_amk_status_rl_packed* packed_ptr = (struct can_3_amk_status_rl_packed*)src_ptr;

    dst_ptr->stat_system_ready_rl = (bool)packed_ptr->stat_system_ready_rl;
    dst_ptr->stat_error_rl = (bool)packed_ptr->stat_error_rl;
    dst_ptr->stat_warning_rl = (bool)packed_ptr->stat_warning_rl;
    dst_ptr->stat_hv_enable_rl = (bool)packed_ptr->stat_hv_enable_rl;
    dst_ptr->stat_hv_enable_cplt_rl = (bool)packed_ptr->stat_hv_enable_cplt_rl;
    dst_ptr->stat_inv_enable_rl = (bool)packed_ptr->stat_inv_enable_rl;
    dst_ptr->stat_inv_enable_cplt_rl = (bool)packed_ptr->stat_inv_enable_cplt_rl;
    dst_ptr->stat_derating_rl = (bool)packed_ptr->stat_derating_rl;
    dst_ptr->spd_actual_rl = ((int32_t)packed_ptr->spd_actual_rl * 1) + 0;
    dst_ptr->tq_actual_rl = ((float)packed_ptr->tq_actual_rl * 0.0098F) + 0.0F;
    dst_ptr->cur_iq_rl = ((float)packed_ptr->cur_iq_rl * 0.006530761719F) + 0.0F;

    return 0;
}

/**
 * @brief Packs amk_status_fl signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_AMK_STATUS_FL_LENGTH (8U)
 */
int can_3_amk_status_fl_pack(uint8_t* dst_ptr, const struct can_3_amk_status_fl* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_AMK_STATUS_FL_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_3_AMK_STATUS_FL_LENGTH);
    struct can_3_amk_status_fl_packed* packed_ptr = (struct can_3_amk_status_fl_packed*)dst_ptr;

    packed_ptr->stat_system_ready_fl = src_ptr->stat_system_ready_fl;
    packed_ptr->stat_error_fl = src_ptr->stat_error_fl;
    packed_ptr->stat_warning_fl = src_ptr->stat_warning_fl;
    packed_ptr->stat_hv_enable_fl = src_ptr->stat_hv_enable_fl;
    packed_ptr->stat_hv_enable_cplt_fl = src_ptr->stat_hv_enable_cplt_fl;
    packed_ptr->stat_inv_enable_fl = src_ptr->stat_inv_enable_fl;
    packed_ptr->stat_inv_enable_cplt_fl = src_ptr->stat_inv_enable_cplt_fl;
    packed_ptr->stat_derating_fl = src_ptr->stat_derating_fl;
    packed_ptr->spd_actual_fl = (int16_t)((src_ptr->spd_actual_fl - 0) / 1);
    packed_ptr->tq_actual_fl = (int16_t)((src_ptr->tq_actual_fl - 0.0F) / 0.0098F);
    packed_ptr->cur_iq_fl = (int16_t)((src_ptr->cur_iq_fl - 0.0F) / 0.006530761719F);

    return 0;
}

/**
 * @brief Unpacks amk_status_fl signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_AMK_STATUS_FL_LENGTH (8U)
 */
int can_3_amk_status_fl_unpack(struct can_3_amk_status_fl* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_AMK_STATUS_FL_LENGTH) {
        return EINVAL;
    }

    struct can_3_amk_status_fl_packed* packed_ptr = (struct can_3_amk_status_fl_packed*)src_ptr;

    dst_ptr->stat_system_ready_fl = (bool)packed_ptr->stat_system_ready_fl;
    dst_ptr->stat_error_fl = (bool)packed_ptr->stat_error_fl;
    dst_ptr->stat_warning_fl = (bool)packed_ptr->stat_warning_fl;
    dst_ptr->stat_hv_enable_fl = (bool)packed_ptr->stat_hv_enable_fl;
    dst_ptr->stat_hv_enable_cplt_fl = (bool)packed_ptr->stat_hv_enable_cplt_fl;
    dst_ptr->stat_inv_enable_fl = (bool)packed_ptr->stat_inv_enable_fl;
    dst_ptr->stat_inv_enable_cplt_fl = (bool)packed_ptr->stat_inv_enable_cplt_fl;
    dst_ptr->stat_derating_fl = (bool)packed_ptr->stat_derating_fl;
    dst_ptr->spd_actual_fl = ((int32_t)packed_ptr->spd_actual_fl * 1) + 0;
    dst_ptr->tq_actual_fl = ((float)packed_ptr->tq_actual_fl * 0.0098F) + 0.0F;
    dst_ptr->cur_iq_fl = ((float)packed_ptr->cur_iq_fl * 0.006530761719F) + 0.0F;

    return 0;
}

/**
 * @brief Packs amk_status_fr signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_AMK_STATUS_FR_LENGTH (8U)
 */
int can_3_amk_status_fr_pack(uint8_t* dst_ptr, const struct can_3_amk_status_fr* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_AMK_STATUS_FR_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_3_AMK_STATUS_FR_LENGTH);
    struct can_3_amk_status_fr_packed* packed_ptr = (struct can_3_amk_status_fr_packed*)dst_ptr;

    packed_ptr->stat_system_ready_fr = src_ptr->stat_system_ready_fr;
    packed_ptr->stat_error_fr = src_ptr->stat_error_fr;
    packed_ptr->stat_warning_fr = src_ptr->stat_warning_fr;
    packed_ptr->stat_hv_enable_fr = src_ptr->stat_hv_enable_fr;
    packed_ptr->stat_hv_enable_cplt_fr = src_ptr->stat_hv_enable_cplt_fr;
    packed_ptr->stat_inv_enable_fr = src_ptr->stat_inv_enable_fr;
    packed_ptr->stat_inv_enable_cplt_fr = src_ptr->stat_inv_enable_cplt_fr;
    packed_ptr->stat_derating_fr = src_ptr->stat_derating_fr;
    packed_ptr->spd_actual_fr = (int16_t)((src_ptr->spd_actual_fr - 0) / 1);
    packed_ptr->tq_actual_fr = (int16_t)((src_ptr->tq_actual_fr - 0.0F) / 0.0098F);
    packed_ptr->cur_iq_fr = (int16_t)((src_ptr->cur_iq_fr - 0.0F) / 0.006530761719F);

    return 0;
}

/**
 * @brief Unpacks amk_status_fr signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_AMK_STATUS_FR_LENGTH (8U)
 */
int can_3_amk_status_fr_unpack(struct can_3_amk_status_fr* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_AMK_STATUS_FR_LENGTH) {
        return EINVAL;
    }

    struct can_3_amk_status_fr_packed* packed_ptr = (struct can_3_amk_status_fr_packed*)src_ptr;

    dst_ptr->stat_system_ready_fr = (bool)packed_ptr->stat_system_ready_fr;
    dst_ptr->stat_error_fr = (bool)packed_ptr->stat_error_fr;
    dst_ptr->stat_warning_fr = (bool)packed_ptr->stat_warning_fr;
    dst_ptr->stat_hv_enable_fr = (bool)packed_ptr->stat_hv_enable_fr;
    dst_ptr->stat_hv_enable_cplt_fr = (bool)packed_ptr->stat_hv_enable_cplt_fr;
    dst_ptr->stat_inv_enable_fr = (bool)packed_ptr->stat_inv_enable_fr;
    dst_ptr->stat_inv_enable_cplt_fr = (bool)packed_ptr->stat_inv_enable_cplt_fr;
    dst_ptr->stat_derating_fr = (bool)packed_ptr->stat_derating_fr;
    dst_ptr->spd_actual_fr = ((int32_t)packed_ptr->spd_actual_fr * 1) + 0;
    dst_ptr->tq_actual_fr = ((float)packed_ptr->tq_actual_fr * 0.0098F) + 0.0F;
    dst_ptr->cur_iq_fr = ((float)packed_ptr->cur_iq_fr * 0.006530761719F) + 0.0F;

    return 0;
}

/**
 * @brief Packs amk_status_rr signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_AMK_STATUS_RR_LENGTH (8U)
 */
int can_3_amk_status_rr_pack(uint8_t* dst_ptr, const struct can_3_amk_status_rr* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_AMK_STATUS_RR_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_3_AMK_STATUS_RR_LENGTH);
    struct can_3_amk_status_rr_packed* packed_ptr = (struct can_3_amk_status_rr_packed*)dst_ptr;

    packed_ptr->stat_system_ready_rr = src_ptr->stat_system_ready_rr;
    packed_ptr->stat_error_rr = src_ptr->stat_error_rr;
    packed_ptr->stat_warning_rr = src_ptr->stat_warning_rr;
    packed_ptr->stat_hv_enable_rr = src_ptr->stat_hv_enable_rr;
    packed_ptr->stat_hv_enable_cplt_rr = src_ptr->stat_hv_enable_cplt_rr;
    packed_ptr->stat_inv_enable_rr = src_ptr->stat_inv_enable_rr;
    packed_ptr->stat_inv_enable_cplt_rr = src_ptr->stat_inv_enable_cplt_rr;
    packed_ptr->stat_derating_rr = src_ptr->stat_derating_rr;
    packed_ptr->spd_actual_rr = (int16_t)((src_ptr->spd_actual_rr - 0) / 1);
    packed_ptr->tq_actual_rr = (int16_t)((src_ptr->tq_actual_rr - 0.0F) / 0.0098F);
    packed_ptr->cur_iq_rr = (int16_t)((src_ptr->cur_iq_rr - 0.0F) / 0.006530761719F);

    return 0;
}

/**
 * @brief Unpacks amk_status_rr signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_AMK_STATUS_RR_LENGTH (8U)
 */
int can_3_amk_status_rr_unpack(struct can_3_amk_status_rr* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_AMK_STATUS_RR_LENGTH) {
        return EINVAL;
    }

    struct can_3_amk_status_rr_packed* packed_ptr = (struct can_3_amk_status_rr_packed*)src_ptr;

    dst_ptr->stat_system_ready_rr = (bool)packed_ptr->stat_system_ready_rr;
    dst_ptr->stat_error_rr = (bool)packed_ptr->stat_error_rr;
    dst_ptr->stat_warning_rr = (bool)packed_ptr->stat_warning_rr;
    dst_ptr->stat_hv_enable_rr = (bool)packed_ptr->stat_hv_enable_rr;
    dst_ptr->stat_hv_enable_cplt_rr = (bool)packed_ptr->stat_hv_enable_cplt_rr;
    dst_ptr->stat_inv_enable_rr = (bool)packed_ptr->stat_inv_enable_rr;
    dst_ptr->stat_inv_enable_cplt_rr = (bool)packed_ptr->stat_inv_enable_cplt_rr;
    dst_ptr->stat_derating_rr = (bool)packed_ptr->stat_derating_rr;
    dst_ptr->spd_actual_rr = ((int32_t)packed_ptr->spd_actual_rr * 1) + 0;
    dst_ptr->tq_actual_rr = ((float)packed_ptr->tq_actual_rr * 0.0098F) + 0.0F;
    dst_ptr->cur_iq_rr = ((float)packed_ptr->cur_iq_rr * 0.006530761719F) + 0.0F;

    return 0;
}

/**
 * @brief Packs amk_temps_id_rl signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_AMK_TEMPS_ID_RL_LENGTH (8U)
 */
int can_3_amk_temps_id_rl_pack(uint8_t* dst_ptr, const struct can_3_amk_temps_id_rl* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_AMK_TEMPS_ID_RL_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_3_AMK_TEMPS_ID_RL_LENGTH);
    struct can_3_amk_temps_id_rl_packed* packed_ptr = (struct can_3_amk_temps_id_rl_packed*)dst_ptr;

    packed_ptr->temp_cold_plate_rl = (int16_t)((src_ptr->temp_cold_plate_rl - 0.0F) / 0.1F);
    packed_ptr->temp_igbt_rl = (int16_t)((src_ptr->temp_igbt_rl - 0.0F) / 0.1F);
    packed_ptr->temp_motor_rl = (int16_t)((src_ptr->temp_motor_rl - 0.0F) / 0.1F);
    packed_ptr->cur_id_rl = (int16_t)((src_ptr->cur_id_rl - 0.0F) / 0.006530761719F);

    return 0;
}

/**
 * @brief Unpacks amk_temps_id_rl signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_AMK_TEMPS_ID_RL_LENGTH (8U)
 */
int can_3_amk_temps_id_rl_unpack(struct can_3_amk_temps_id_rl* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_AMK_TEMPS_ID_RL_LENGTH) {
        return EINVAL;
    }

    struct can_3_amk_temps_id_rl_packed* packed_ptr = (struct can_3_amk_temps_id_rl_packed*)src_ptr;

    dst_ptr->temp_cold_plate_rl = ((float)packed_ptr->temp_cold_plate_rl * 0.1F) + 0.0F;
    dst_ptr->temp_igbt_rl = ((float)packed_ptr->temp_igbt_rl * 0.1F) + 0.0F;
    dst_ptr->temp_motor_rl = ((float)packed_ptr->temp_motor_rl * 0.1F) + 0.0F;
    dst_ptr->cur_id_rl = ((float)packed_ptr->cur_id_rl * 0.006530761719F) + 0.0F;

    return 0;
}

/**
 * @brief Packs amk_temps_id_fl signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_AMK_TEMPS_ID_FL_LENGTH (8U)
 */
int can_3_amk_temps_id_fl_pack(uint8_t* dst_ptr, const struct can_3_amk_temps_id_fl* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_AMK_TEMPS_ID_FL_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_3_AMK_TEMPS_ID_FL_LENGTH);
    struct can_3_amk_temps_id_fl_packed* packed_ptr = (struct can_3_amk_temps_id_fl_packed*)dst_ptr;

    packed_ptr->temp_cold_plate_fl = (int16_t)((src_ptr->temp_cold_plate_fl - 0.0F) / 0.1F);
    packed_ptr->temp_igbt_fl = (int16_t)((src_ptr->temp_igbt_fl - 0.0F) / 0.1F);
    packed_ptr->temp_motor_fl = (int16_t)((src_ptr->temp_motor_fl - 0.0F) / 0.1F);
    packed_ptr->cur_id_fl = (int16_t)((src_ptr->cur_id_fl - 0.0F) / 0.006530761719F);

    return 0;
}

/**
 * @brief Unpacks amk_temps_id_fl signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_AMK_TEMPS_ID_FL_LENGTH (8U)
 */
int can_3_amk_temps_id_fl_unpack(struct can_3_amk_temps_id_fl* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_AMK_TEMPS_ID_FL_LENGTH) {
        return EINVAL;
    }

    struct can_3_amk_temps_id_fl_packed* packed_ptr = (struct can_3_amk_temps_id_fl_packed*)src_ptr;

    dst_ptr->temp_cold_plate_fl = ((float)packed_ptr->temp_cold_plate_fl * 0.1F) + 0.0F;
    dst_ptr->temp_igbt_fl = ((float)packed_ptr->temp_igbt_fl * 0.1F) + 0.0F;
    dst_ptr->temp_motor_fl = ((float)packed_ptr->temp_motor_fl * 0.1F) + 0.0F;
    dst_ptr->cur_id_fl = ((float)packed_ptr->cur_id_fl * 0.006530761719F) + 0.0F;

    return 0;
}

/**
 * @brief Packs amk_temps_id_fr signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_AMK_TEMPS_ID_FR_LENGTH (8U)
 */
int can_3_amk_temps_id_fr_pack(uint8_t* dst_ptr, const struct can_3_amk_temps_id_fr* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_AMK_TEMPS_ID_FR_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_3_AMK_TEMPS_ID_FR_LENGTH);
    struct can_3_amk_temps_id_fr_packed* packed_ptr = (struct can_3_amk_temps_id_fr_packed*)dst_ptr;

    packed_ptr->temp_cold_plate_fr = (int16_t)((src_ptr->temp_cold_plate_fr - 0.0F) / 0.1F);
    packed_ptr->temp_igbt_fr = (int16_t)((src_ptr->temp_igbt_fr - 0.0F) / 0.1F);
    packed_ptr->temp_motor_fr = (int16_t)((src_ptr->temp_motor_fr - 0.0F) / 0.1F);
    packed_ptr->cur_id_fr = (int16_t)((src_ptr->cur_id_fr - 0.0F) / 0.006530761719F);

    return 0;
}

/**
 * @brief Unpacks amk_temps_id_fr signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_AMK_TEMPS_ID_FR_LENGTH (8U)
 */
int can_3_amk_temps_id_fr_unpack(struct can_3_amk_temps_id_fr* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_AMK_TEMPS_ID_FR_LENGTH) {
        return EINVAL;
    }

    struct can_3_amk_temps_id_fr_packed* packed_ptr = (struct can_3_amk_temps_id_fr_packed*)src_ptr;

    dst_ptr->temp_cold_plate_fr = ((float)packed_ptr->temp_cold_plate_fr * 0.1F) + 0.0F;
    dst_ptr->temp_igbt_fr = ((float)packed_ptr->temp_igbt_fr * 0.1F) + 0.0F;
    dst_ptr->temp_motor_fr = ((float)packed_ptr->temp_motor_fr * 0.1F) + 0.0F;
    dst_ptr->cur_id_fr = ((float)packed_ptr->cur_id_fr * 0.006530761719F) + 0.0F;

    return 0;
}

/**
 * @brief Packs amk_temps_id_rr signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_AMK_TEMPS_ID_RR_LENGTH (8U)
 */
int can_3_amk_temps_id_rr_pack(uint8_t* dst_ptr, const struct can_3_amk_temps_id_rr* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_AMK_TEMPS_ID_RR_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_3_AMK_TEMPS_ID_RR_LENGTH);
    struct can_3_amk_temps_id_rr_packed* packed_ptr = (struct can_3_amk_temps_id_rr_packed*)dst_ptr;

    packed_ptr->temp_cold_plate_rr = (int16_t)((src_ptr->temp_cold_plate_rr - 0.0F) / 0.1F);
    packed_ptr->temp_igbt_rr = (int16_t)((src_ptr->temp_igbt_rr - 0.0F) / 0.1F);
    packed_ptr->temp_motor_rr = (int16_t)((src_ptr->temp_motor_rr - 0.0F) / 0.1F);
    packed_ptr->cur_id_rr = (int16_t)((src_ptr->cur_id_rr - 0.0F) / 0.006530761719F);

    return 0;
}

/**
 * @brief Unpacks amk_temps_id_rr signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_AMK_TEMPS_ID_RR_LENGTH (8U)
 */
int can_3_amk_temps_id_rr_unpack(struct can_3_amk_temps_id_rr* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_AMK_TEMPS_ID_RR_LENGTH) {
        return EINVAL;
    }

    struct can_3_amk_temps_id_rr_packed* packed_ptr = (struct can_3_amk_temps_id_rr_packed*)src_ptr;

    dst_ptr->temp_cold_plate_rr = ((float)packed_ptr->temp_cold_plate_rr * 0.1F) + 0.0F;
    dst_ptr->temp_igbt_rr = ((float)packed_ptr->temp_igbt_rr * 0.1F) + 0.0F;
    dst_ptr->temp_motor_rr = ((float)packed_ptr->temp_motor_rr * 0.1F) + 0.0F;
    dst_ptr->cur_id_rr = ((float)packed_ptr->cur_id_rr * 0.006530761719F) + 0.0F;

    return 0;
}

/**
 * @brief Packs amk_diag_1_rl signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_AMK_DIAG_1_RL_LENGTH (8U)
 */
int can_3_amk_diag_1_rl_pack(uint8_t* dst_ptr, const struct can_3_amk_diag_1_rl* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_AMK_DIAG_1_RL_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_3_AMK_DIAG_1_RL_LENGTH);
    struct can_3_amk_diag_1_rl_packed* packed_ptr = (struct can_3_amk_diag_1_rl_packed*)dst_ptr;

    packed_ptr->diag_number_rl = (uint32_t)((src_ptr->diag_number_rl - 0) / 1);
    packed_ptr->error_info_1_rl = (uint32_t)((src_ptr->error_info_1_rl - 0) / 1);

    return 0;
}

/**
 * @brief Unpacks amk_diag_1_rl signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_AMK_DIAG_1_RL_LENGTH (8U)
 */
int can_3_amk_diag_1_rl_unpack(struct can_3_amk_diag_1_rl* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_AMK_DIAG_1_RL_LENGTH) {
        return EINVAL;
    }

    struct can_3_amk_diag_1_rl_packed* packed_ptr = (struct can_3_amk_diag_1_rl_packed*)src_ptr;

    dst_ptr->diag_number_rl = ((uint32_t)packed_ptr->diag_number_rl * 1) + 0;
    dst_ptr->error_info_1_rl = ((uint32_t)packed_ptr->error_info_1_rl * 1) + 0;

    return 0;
}

/**
 * @brief Packs amk_diag_1_fl signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_AMK_DIAG_1_FL_LENGTH (8U)
 */
int can_3_amk_diag_1_fl_pack(uint8_t* dst_ptr, const struct can_3_amk_diag_1_fl* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_AMK_DIAG_1_FL_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_3_AMK_DIAG_1_FL_LENGTH);
    struct can_3_amk_diag_1_fl_packed* packed_ptr = (struct can_3_amk_diag_1_fl_packed*)dst_ptr;

    packed_ptr->diag_number_fl = (uint32_t)((src_ptr->diag_number_fl - 0) / 1);
    packed_ptr->error_info_1_fl = (uint32_t)((src_ptr->error_info_1_fl - 0) / 1);

    return 0;
}

/**
 * @brief Unpacks amk_diag_1_fl signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_AMK_DIAG_1_FL_LENGTH (8U)
 */
int can_3_amk_diag_1_fl_unpack(struct can_3_amk_diag_1_fl* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_AMK_DIAG_1_FL_LENGTH) {
        return EINVAL;
    }

    struct can_3_amk_diag_1_fl_packed* packed_ptr = (struct can_3_amk_diag_1_fl_packed*)src_ptr;

    dst_ptr->diag_number_fl = ((uint32_t)packed_ptr->diag_number_fl * 1) + 0;
    dst_ptr->error_info_1_fl = ((uint32_t)packed_ptr->error_info_1_fl * 1) + 0;

    return 0;
}

/**
 * @brief Packs amk_diag_1_fr signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_AMK_DIAG_1_FR_LENGTH (8U)
 */
int can_3_amk_diag_1_fr_pack(uint8_t* dst_ptr, const struct can_3_amk_diag_1_fr* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_AMK_DIAG_1_FR_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_3_AMK_DIAG_1_FR_LENGTH);
    struct can_3_amk_diag_1_fr_packed* packed_ptr = (struct can_3_amk_diag_1_fr_packed*)dst_ptr;

    packed_ptr->diag_number_fr = (uint32_t)((src_ptr->diag_number_fr - 0) / 1);
    packed_ptr->error_info_1_fr = (uint32_t)((src_ptr->error_info_1_fr - 0) / 1);

    return 0;
}

/**
 * @brief Unpacks amk_diag_1_fr signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_AMK_DIAG_1_FR_LENGTH (8U)
 */
int can_3_amk_diag_1_fr_unpack(struct can_3_amk_diag_1_fr* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_AMK_DIAG_1_FR_LENGTH) {
        return EINVAL;
    }

    struct can_3_amk_diag_1_fr_packed* packed_ptr = (struct can_3_amk_diag_1_fr_packed*)src_ptr;

    dst_ptr->diag_number_fr = ((uint32_t)packed_ptr->diag_number_fr * 1) + 0;
    dst_ptr->error_info_1_fr = ((uint32_t)packed_ptr->error_info_1_fr * 1) + 0;

    return 0;
}

/**
 * @brief Packs amk_diag_1_rr signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_AMK_DIAG_1_RR_LENGTH (8U)
 */
int can_3_amk_diag_1_rr_pack(uint8_t* dst_ptr, const struct can_3_amk_diag_1_rr* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_AMK_DIAG_1_RR_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_3_AMK_DIAG_1_RR_LENGTH);
    struct can_3_amk_diag_1_rr_packed* packed_ptr = (struct can_3_amk_diag_1_rr_packed*)dst_ptr;

    packed_ptr->diag_number_rr = (uint32_t)((src_ptr->diag_number_rr - 0) / 1);
    packed_ptr->error_info_1_rr = (uint32_t)((src_ptr->error_info_1_rr - 0) / 1);

    return 0;
}

/**
 * @brief Unpacks amk_diag_1_rr signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_AMK_DIAG_1_RR_LENGTH (8U)
 */
int can_3_amk_diag_1_rr_unpack(struct can_3_amk_diag_1_rr* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_AMK_DIAG_1_RR_LENGTH) {
        return EINVAL;
    }

    struct can_3_amk_diag_1_rr_packed* packed_ptr = (struct can_3_amk_diag_1_rr_packed*)src_ptr;

    dst_ptr->diag_number_rr = ((uint32_t)packed_ptr->diag_number_rr * 1) + 0;
    dst_ptr->error_info_1_rr = ((uint32_t)packed_ptr->error_info_1_rr * 1) + 0;

    return 0;
}

/**
 * @brief Packs amk_diag_2_rl signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_AMK_DIAG_2_RL_LENGTH (8U)
 */
int can_3_amk_diag_2_rl_pack(uint8_t* dst_ptr, const struct can_3_amk_diag_2_rl* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_AMK_DIAG_2_RL_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_3_AMK_DIAG_2_RL_LENGTH);
    struct can_3_amk_diag_2_rl_packed* packed_ptr = (struct can_3_amk_diag_2_rl_packed*)dst_ptr;

    packed_ptr->error_info_2_rl = (uint32_t)((src_ptr->error_info_2_rl - 0) / 1);
    packed_ptr->error_info_3_rl = (uint32_t)((src_ptr->error_info_3_rl - 0) / 1);

    return 0;
}

/**
 * @brief Unpacks amk_diag_2_rl signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_AMK_DIAG_2_RL_LENGTH (8U)
 */
int can_3_amk_diag_2_rl_unpack(struct can_3_amk_diag_2_rl* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_AMK_DIAG_2_RL_LENGTH) {
        return EINVAL;
    }

    struct can_3_amk_diag_2_rl_packed* packed_ptr = (struct can_3_amk_diag_2_rl_packed*)src_ptr;

    dst_ptr->error_info_2_rl = ((uint32_t)packed_ptr->error_info_2_rl * 1) + 0;
    dst_ptr->error_info_3_rl = ((uint32_t)packed_ptr->error_info_3_rl * 1) + 0;

    return 0;
}

/**
 * @brief Packs amk_diag_2_fl signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_AMK_DIAG_2_FL_LENGTH (8U)
 */
int can_3_amk_diag_2_fl_pack(uint8_t* dst_ptr, const struct can_3_amk_diag_2_fl* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_AMK_DIAG_2_FL_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_3_AMK_DIAG_2_FL_LENGTH);
    struct can_3_amk_diag_2_fl_packed* packed_ptr = (struct can_3_amk_diag_2_fl_packed*)dst_ptr;

    packed_ptr->error_info_2_fl = (uint32_t)((src_ptr->error_info_2_fl - 0) / 1);
    packed_ptr->error_info_3_fl = (uint32_t)((src_ptr->error_info_3_fl - 0) / 1);

    return 0;
}

/**
 * @brief Unpacks amk_diag_2_fl signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_AMK_DIAG_2_FL_LENGTH (8U)
 */
int can_3_amk_diag_2_fl_unpack(struct can_3_amk_diag_2_fl* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_AMK_DIAG_2_FL_LENGTH) {
        return EINVAL;
    }

    struct can_3_amk_diag_2_fl_packed* packed_ptr = (struct can_3_amk_diag_2_fl_packed*)src_ptr;

    dst_ptr->error_info_2_fl = ((uint32_t)packed_ptr->error_info_2_fl * 1) + 0;
    dst_ptr->error_info_3_fl = ((uint32_t)packed_ptr->error_info_3_fl * 1) + 0;

    return 0;
}

/**
 * @brief Packs amk_diag_2_fr signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_AMK_DIAG_2_FR_LENGTH (8U)
 */
int can_3_amk_diag_2_fr_pack(uint8_t* dst_ptr, const struct can_3_amk_diag_2_fr* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_AMK_DIAG_2_FR_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_3_AMK_DIAG_2_FR_LENGTH);
    struct can_3_amk_diag_2_fr_packed* packed_ptr = (struct can_3_amk_diag_2_fr_packed*)dst_ptr;

    packed_ptr->error_info_2_fr = (uint32_t)((src_ptr->error_info_2_fr - 0) / 1);
    packed_ptr->error_info_3_fr = (uint32_t)((src_ptr->error_info_3_fr - 0) / 1);

    return 0;
}

/**
 * @brief Unpacks amk_diag_2_fr signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_AMK_DIAG_2_FR_LENGTH (8U)
 */
int can_3_amk_diag_2_fr_unpack(struct can_3_amk_diag_2_fr* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_AMK_DIAG_2_FR_LENGTH) {
        return EINVAL;
    }

    struct can_3_amk_diag_2_fr_packed* packed_ptr = (struct can_3_amk_diag_2_fr_packed*)src_ptr;

    dst_ptr->error_info_2_fr = ((uint32_t)packed_ptr->error_info_2_fr * 1) + 0;
    dst_ptr->error_info_3_fr = ((uint32_t)packed_ptr->error_info_3_fr * 1) + 0;

    return 0;
}

/**
 * @brief Packs amk_diag_2_rr signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_AMK_DIAG_2_RR_LENGTH (8U)
 */
int can_3_amk_diag_2_rr_pack(uint8_t* dst_ptr, const struct can_3_amk_diag_2_rr* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_AMK_DIAG_2_RR_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_3_AMK_DIAG_2_RR_LENGTH);
    struct can_3_amk_diag_2_rr_packed* packed_ptr = (struct can_3_amk_diag_2_rr_packed*)dst_ptr;

    packed_ptr->error_info_2_rr = (uint32_t)((src_ptr->error_info_2_rr - 0) / 1);
    packed_ptr->error_info_3_rr = (uint32_t)((src_ptr->error_info_3_rr - 0) / 1);

    return 0;
}

/**
 * @brief Unpacks amk_diag_2_rr signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_AMK_DIAG_2_RR_LENGTH (8U)
 */
int can_3_amk_diag_2_rr_unpack(struct can_3_amk_diag_2_rr* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_AMK_DIAG_2_RR_LENGTH) {
        return EINVAL;
    }

    struct can_3_amk_diag_2_rr_packed* packed_ptr = (struct can_3_amk_diag_2_rr_packed*)src_ptr;

    dst_ptr->error_info_2_rr = ((uint32_t)packed_ptr->error_info_2_rr * 1) + 0;
    dst_ptr->error_info_3_rr = ((uint32_t)packed_ptr->error_info_3_rr * 1) + 0;

    return 0;
}

/**
 * @brief Packs amk_power_rl signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_AMK_POWER_RL_LENGTH (8U)
 */
int can_3_amk_power_rl_pack(uint8_t* dst_ptr, const struct can_3_amk_power_rl* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_AMK_POWER_RL_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_3_AMK_POWER_RL_LENGTH);
    struct can_3_amk_power_rl_packed* packed_ptr = (struct can_3_amk_power_rl_packed*)dst_ptr;

    packed_ptr->pwr_real_rl = (int32_t)((src_ptr->pwr_real_rl - 0) / 1);
    packed_ptr->pwr_reactive_rl = (int32_t)((src_ptr->pwr_reactive_rl - 0) / 1);

    return 0;
}

/**
 * @brief Unpacks amk_power_rl signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_AMK_POWER_RL_LENGTH (8U)
 */
int can_3_amk_power_rl_unpack(struct can_3_amk_power_rl* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_AMK_POWER_RL_LENGTH) {
        return EINVAL;
    }

    struct can_3_amk_power_rl_packed* packed_ptr = (struct can_3_amk_power_rl_packed*)src_ptr;

    dst_ptr->pwr_real_rl = ((int32_t)packed_ptr->pwr_real_rl * 1) + 0;
    dst_ptr->pwr_reactive_rl = ((int32_t)packed_ptr->pwr_reactive_rl * 1) + 0;

    return 0;
}

/**
 * @brief Packs amk_power_fl signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_AMK_POWER_FL_LENGTH (8U)
 */
int can_3_amk_power_fl_pack(uint8_t* dst_ptr, const struct can_3_amk_power_fl* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_AMK_POWER_FL_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_3_AMK_POWER_FL_LENGTH);
    struct can_3_amk_power_fl_packed* packed_ptr = (struct can_3_amk_power_fl_packed*)dst_ptr;

    packed_ptr->pwr_real_fl = (int32_t)((src_ptr->pwr_real_fl - 0) / 1);
    packed_ptr->pwr_reactive_fl = (int32_t)((src_ptr->pwr_reactive_fl - 0) / 1);

    return 0;
}

/**
 * @brief Unpacks amk_power_fl signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_AMK_POWER_FL_LENGTH (8U)
 */
int can_3_amk_power_fl_unpack(struct can_3_amk_power_fl* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_AMK_POWER_FL_LENGTH) {
        return EINVAL;
    }

    struct can_3_amk_power_fl_packed* packed_ptr = (struct can_3_amk_power_fl_packed*)src_ptr;

    dst_ptr->pwr_real_fl = ((int32_t)packed_ptr->pwr_real_fl * 1) + 0;
    dst_ptr->pwr_reactive_fl = ((int32_t)packed_ptr->pwr_reactive_fl * 1) + 0;

    return 0;
}

/**
 * @brief Packs amk_power_fr signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_AMK_POWER_FR_LENGTH (8U)
 */
int can_3_amk_power_fr_pack(uint8_t* dst_ptr, const struct can_3_amk_power_fr* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_AMK_POWER_FR_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_3_AMK_POWER_FR_LENGTH);
    struct can_3_amk_power_fr_packed* packed_ptr = (struct can_3_amk_power_fr_packed*)dst_ptr;

    packed_ptr->pwr_real_fr = (int32_t)((src_ptr->pwr_real_fr - 0) / 1);
    packed_ptr->pwr_reactive_fr = (int32_t)((src_ptr->pwr_reactive_fr - 0) / 1);

    return 0;
}

/**
 * @brief Unpacks amk_power_fr signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_AMK_POWER_FR_LENGTH (8U)
 */
int can_3_amk_power_fr_unpack(struct can_3_amk_power_fr* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_AMK_POWER_FR_LENGTH) {
        return EINVAL;
    }

    struct can_3_amk_power_fr_packed* packed_ptr = (struct can_3_amk_power_fr_packed*)src_ptr;

    dst_ptr->pwr_real_fr = ((int32_t)packed_ptr->pwr_real_fr * 1) + 0;
    dst_ptr->pwr_reactive_fr = ((int32_t)packed_ptr->pwr_reactive_fr * 1) + 0;

    return 0;
}

/**
 * @brief Packs amk_power_rr signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_AMK_POWER_RR_LENGTH (8U)
 */
int can_3_amk_power_rr_pack(uint8_t* dst_ptr, const struct can_3_amk_power_rr* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_AMK_POWER_RR_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_3_AMK_POWER_RR_LENGTH);
    struct can_3_amk_power_rr_packed* packed_ptr = (struct can_3_amk_power_rr_packed*)dst_ptr;

    packed_ptr->pwr_real_rr = (int32_t)((src_ptr->pwr_real_rr - 0) / 1);
    packed_ptr->pwr_reactive_rr = (int32_t)((src_ptr->pwr_reactive_rr - 0) / 1);

    return 0;
}

/**
 * @brief Unpacks amk_power_rr signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_AMK_POWER_RR_LENGTH (8U)
 */
int can_3_amk_power_rr_unpack(struct can_3_amk_power_rr* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_AMK_POWER_RR_LENGTH) {
        return EINVAL;
    }

    struct can_3_amk_power_rr_packed* packed_ptr = (struct can_3_amk_power_rr_packed*)src_ptr;

    dst_ptr->pwr_real_rr = ((int32_t)packed_ptr->pwr_real_rr * 1) + 0;
    dst_ptr->pwr_reactive_rr = ((int32_t)packed_ptr->pwr_reactive_rr * 1) + 0;

    return 0;
}

/**
 * @brief Packs amk_hv_vlt_overload_rl signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_AMK_HV_VLT_OVERLOAD_RL_LENGTH (8U)
 */
int can_3_amk_hv_vlt_overload_rl_pack(uint8_t* dst_ptr, const struct can_3_amk_hv_vlt_overload_rl* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_AMK_HV_VLT_OVERLOAD_RL_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_3_AMK_HV_VLT_OVERLOAD_RL_LENGTH);
    struct can_3_amk_hv_vlt_overload_rl_packed* packed_ptr = (struct can_3_amk_hv_vlt_overload_rl_packed*)dst_ptr;

    packed_ptr->overload_inverter_rl = (uint16_t)((src_ptr->overload_inverter_rl - 0.0F) / 0.1F);
    packed_ptr->overload_motor_rl = (uint16_t)((src_ptr->overload_motor_rl - 0.0F) / 0.1F);
    packed_ptr->overload_time_motor_rl = (uint16_t)((src_ptr->overload_time_motor_rl - 0.0F) / 0.1F);
    packed_ptr->vlt_amk_hv_bus_rl = (uint16_t)((src_ptr->vlt_amk_hv_bus_rl - 0) / 1);

    return 0;
}

/**
 * @brief Unpacks amk_hv_vlt_overload_rl signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_AMK_HV_VLT_OVERLOAD_RL_LENGTH (8U)
 */
int can_3_amk_hv_vlt_overload_rl_unpack(struct can_3_amk_hv_vlt_overload_rl* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_AMK_HV_VLT_OVERLOAD_RL_LENGTH) {
        return EINVAL;
    }

    struct can_3_amk_hv_vlt_overload_rl_packed* packed_ptr = (struct can_3_amk_hv_vlt_overload_rl_packed*)src_ptr;

    dst_ptr->overload_inverter_rl = ((float)packed_ptr->overload_inverter_rl * 0.1F) + 0.0F;
    dst_ptr->overload_motor_rl = ((float)packed_ptr->overload_motor_rl * 0.1F) + 0.0F;
    dst_ptr->overload_time_motor_rl = ((float)packed_ptr->overload_time_motor_rl * 0.1F) + 0.0F;
    dst_ptr->vlt_amk_hv_bus_rl = ((uint32_t)packed_ptr->vlt_amk_hv_bus_rl * 1) + 0;

    return 0;
}

/**
 * @brief Packs amk_hv_vlt_overload_fl signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_AMK_HV_VLT_OVERLOAD_FL_LENGTH (8U)
 */
int can_3_amk_hv_vlt_overload_fl_pack(uint8_t* dst_ptr, const struct can_3_amk_hv_vlt_overload_fl* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_AMK_HV_VLT_OVERLOAD_FL_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_3_AMK_HV_VLT_OVERLOAD_FL_LENGTH);
    struct can_3_amk_hv_vlt_overload_fl_packed* packed_ptr = (struct can_3_amk_hv_vlt_overload_fl_packed*)dst_ptr;

    packed_ptr->overload_inverter_fl = (uint16_t)((src_ptr->overload_inverter_fl - 0.0F) / 0.1F);
    packed_ptr->overload_motor_fl = (uint16_t)((src_ptr->overload_motor_fl - 0.0F) / 0.1F);
    packed_ptr->overload_time_motor_fl = (uint16_t)((src_ptr->overload_time_motor_fl - 0.0F) / 0.1F);
    packed_ptr->vlt_amk_hv_bus_fl = (uint16_t)((src_ptr->vlt_amk_hv_bus_fl - 0) / 1);

    return 0;
}

/**
 * @brief Unpacks amk_hv_vlt_overload_fl signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_AMK_HV_VLT_OVERLOAD_FL_LENGTH (8U)
 */
int can_3_amk_hv_vlt_overload_fl_unpack(struct can_3_amk_hv_vlt_overload_fl* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_AMK_HV_VLT_OVERLOAD_FL_LENGTH) {
        return EINVAL;
    }

    struct can_3_amk_hv_vlt_overload_fl_packed* packed_ptr = (struct can_3_amk_hv_vlt_overload_fl_packed*)src_ptr;

    dst_ptr->overload_inverter_fl = ((float)packed_ptr->overload_inverter_fl * 0.1F) + 0.0F;
    dst_ptr->overload_motor_fl = ((float)packed_ptr->overload_motor_fl * 0.1F) + 0.0F;
    dst_ptr->overload_time_motor_fl = ((float)packed_ptr->overload_time_motor_fl * 0.1F) + 0.0F;
    dst_ptr->vlt_amk_hv_bus_fl = ((uint32_t)packed_ptr->vlt_amk_hv_bus_fl * 1) + 0;

    return 0;
}

/**
 * @brief Packs amk_hv_vlt_overload_fr signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_AMK_HV_VLT_OVERLOAD_FR_LENGTH (8U)
 */
int can_3_amk_hv_vlt_overload_fr_pack(uint8_t* dst_ptr, const struct can_3_amk_hv_vlt_overload_fr* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_AMK_HV_VLT_OVERLOAD_FR_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_3_AMK_HV_VLT_OVERLOAD_FR_LENGTH);
    struct can_3_amk_hv_vlt_overload_fr_packed* packed_ptr = (struct can_3_amk_hv_vlt_overload_fr_packed*)dst_ptr;

    packed_ptr->overload_inverter_fr = (uint16_t)((src_ptr->overload_inverter_fr - 0.0F) / 0.1F);
    packed_ptr->overload_motor_fr = (uint16_t)((src_ptr->overload_motor_fr - 0.0F) / 0.1F);
    packed_ptr->overload_time_motor_fr = (uint16_t)((src_ptr->overload_time_motor_fr - 0.0F) / 0.1F);
    packed_ptr->vlt_amk_hv_bus_fr = (uint16_t)((src_ptr->vlt_amk_hv_bus_fr - 0) / 1);

    return 0;
}

/**
 * @brief Unpacks amk_hv_vlt_overload_fr signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_AMK_HV_VLT_OVERLOAD_FR_LENGTH (8U)
 */
int can_3_amk_hv_vlt_overload_fr_unpack(struct can_3_amk_hv_vlt_overload_fr* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_AMK_HV_VLT_OVERLOAD_FR_LENGTH) {
        return EINVAL;
    }

    struct can_3_amk_hv_vlt_overload_fr_packed* packed_ptr = (struct can_3_amk_hv_vlt_overload_fr_packed*)src_ptr;

    dst_ptr->overload_inverter_fr = ((float)packed_ptr->overload_inverter_fr * 0.1F) + 0.0F;
    dst_ptr->overload_motor_fr = ((float)packed_ptr->overload_motor_fr * 0.1F) + 0.0F;
    dst_ptr->overload_time_motor_fr = ((float)packed_ptr->overload_time_motor_fr * 0.1F) + 0.0F;
    dst_ptr->vlt_amk_hv_bus_fr = ((uint32_t)packed_ptr->vlt_amk_hv_bus_fr * 1) + 0;

    return 0;
}

/**
 * @brief Packs amk_hv_vlt_overload_rr signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_AMK_HV_VLT_OVERLOAD_RR_LENGTH (8U)
 */
int can_3_amk_hv_vlt_overload_rr_pack(uint8_t* dst_ptr, const struct can_3_amk_hv_vlt_overload_rr* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_AMK_HV_VLT_OVERLOAD_RR_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_3_AMK_HV_VLT_OVERLOAD_RR_LENGTH);
    struct can_3_amk_hv_vlt_overload_rr_packed* packed_ptr = (struct can_3_amk_hv_vlt_overload_rr_packed*)dst_ptr;

    packed_ptr->overload_inverter_rr = (uint16_t)((src_ptr->overload_inverter_rr - 0.0F) / 0.1F);
    packed_ptr->overload_motor_rr = (uint16_t)((src_ptr->overload_motor_rr - 0.0F) / 0.1F);
    packed_ptr->overload_time_motor_rr = (uint16_t)((src_ptr->overload_time_motor_rr - 0.0F) / 0.1F);
    packed_ptr->vlt_amk_hv_bus_rr = (uint16_t)((src_ptr->vlt_amk_hv_bus_rr - 0) / 1);

    return 0;
}

/**
 * @brief Unpacks amk_hv_vlt_overload_rr signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_AMK_HV_VLT_OVERLOAD_RR_LENGTH (8U)
 */
int can_3_amk_hv_vlt_overload_rr_unpack(struct can_3_amk_hv_vlt_overload_rr* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_AMK_HV_VLT_OVERLOAD_RR_LENGTH) {
        return EINVAL;
    }

    struct can_3_amk_hv_vlt_overload_rr_packed* packed_ptr = (struct can_3_amk_hv_vlt_overload_rr_packed*)src_ptr;

    dst_ptr->overload_inverter_rr = ((float)packed_ptr->overload_inverter_rr * 0.1F) + 0.0F;
    dst_ptr->overload_motor_rr = ((float)packed_ptr->overload_motor_rr * 0.1F) + 0.0F;
    dst_ptr->overload_time_motor_rr = ((float)packed_ptr->overload_time_motor_rr * 0.1F) + 0.0F;
    dst_ptr->vlt_amk_hv_bus_rr = ((uint32_t)packed_ptr->vlt_amk_hv_bus_rr * 1) + 0;

    return 0;
}

/**
 * @brief Packs amk_status_generic signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_AMK_STATUS_GENERIC_LENGTH (8U)
 */
int can_3_amk_status_generic_pack(uint8_t* dst_ptr, const struct can_3_amk_status_generic* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_AMK_STATUS_GENERIC_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_3_AMK_STATUS_GENERIC_LENGTH);
    struct can_3_amk_status_generic_packed* packed_ptr = (struct can_3_amk_status_generic_packed*)dst_ptr;

    packed_ptr->stat_system_ready = src_ptr->stat_system_ready;
    packed_ptr->stat_error = src_ptr->stat_error;
    packed_ptr->stat_warning = src_ptr->stat_warning;
    packed_ptr->stat_hv_enable = src_ptr->stat_hv_enable;
    packed_ptr->stat_hv_enable_cplt = src_ptr->stat_hv_enable_cplt;
    packed_ptr->stat_inv_enable = src_ptr->stat_inv_enable;
    packed_ptr->stat_inv_enable_cplt = src_ptr->stat_inv_enable_cplt;
    packed_ptr->stat_derating = src_ptr->stat_derating;
    packed_ptr->spd_actual = (int16_t)((src_ptr->spd_actual - 0) / 1);
    packed_ptr->tq_actual = (int16_t)((src_ptr->tq_actual - 0.0F) / 0.0098F);
    packed_ptr->cur_iq = (int16_t)((src_ptr->cur_iq - 0.0F) / 0.006530761719F);

    return 0;
}

/**
 * @brief Unpacks amk_status_generic signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_AMK_STATUS_GENERIC_LENGTH (8U)
 */
int can_3_amk_status_generic_unpack(struct can_3_amk_status_generic* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_AMK_STATUS_GENERIC_LENGTH) {
        return EINVAL;
    }

    struct can_3_amk_status_generic_packed* packed_ptr = (struct can_3_amk_status_generic_packed*)src_ptr;

    dst_ptr->stat_system_ready = (bool)packed_ptr->stat_system_ready;
    dst_ptr->stat_error = (bool)packed_ptr->stat_error;
    dst_ptr->stat_warning = (bool)packed_ptr->stat_warning;
    dst_ptr->stat_hv_enable = (bool)packed_ptr->stat_hv_enable;
    dst_ptr->stat_hv_enable_cplt = (bool)packed_ptr->stat_hv_enable_cplt;
    dst_ptr->stat_inv_enable = (bool)packed_ptr->stat_inv_enable;
    dst_ptr->stat_inv_enable_cplt = (bool)packed_ptr->stat_inv_enable_cplt;
    dst_ptr->stat_derating = (bool)packed_ptr->stat_derating;
    dst_ptr->spd_actual = ((int32_t)packed_ptr->spd_actual * 1) + 0;
    dst_ptr->tq_actual = ((float)packed_ptr->tq_actual * 0.0098F) + 0.0F;
    dst_ptr->cur_iq = ((float)packed_ptr->cur_iq * 0.006530761719F) + 0.0F;

    return 0;
}

/**
 * @brief Packs safety_amk_cmd_generic signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_SAFETY_AMK_CMD_GENERIC_LENGTH (8U)
 */
int can_3_safety_amk_cmd_generic_pack(uint8_t* dst_ptr, const struct can_3_safety_amk_cmd_generic* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_SAFETY_AMK_CMD_GENERIC_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_3_SAFETY_AMK_CMD_GENERIC_LENGTH);
    struct can_3_safety_amk_cmd_generic_packed* packed_ptr = (struct can_3_safety_amk_cmd_generic_packed*)dst_ptr;

    packed_ptr->cmd_inv_enable = src_ptr->cmd_inv_enable;
    packed_ptr->cmd_hv_enable = src_ptr->cmd_hv_enable;
    packed_ptr->cmd_driver_enable = src_ptr->cmd_driver_enable;
    packed_ptr->cmd_error_remove = src_ptr->cmd_error_remove;
    packed_ptr->tq_setpoint = (int16_t)((src_ptr->tq_setpoint - 0.0F) / 0.0098F);
    packed_ptr->tq_limit_pos = (int16_t)((src_ptr->tq_limit_pos - 0.0F) / 0.0098F);
    packed_ptr->tq_limit_neg = (int16_t)((src_ptr->tq_limit_neg - 0.0F) / 0.0098F);

    return 0;
}

/**
 * @brief Unpacks safety_amk_cmd_generic signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_3_SAFETY_AMK_CMD_GENERIC_LENGTH (8U)
 */
int can_3_safety_amk_cmd_generic_unpack(struct can_3_safety_amk_cmd_generic* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_3_SAFETY_AMK_CMD_GENERIC_LENGTH) {
        return EINVAL;
    }

    struct can_3_safety_amk_cmd_generic_packed* packed_ptr = (struct can_3_safety_amk_cmd_generic_packed*)src_ptr;

    dst_ptr->cmd_inv_enable = (bool)packed_ptr->cmd_inv_enable;
    dst_ptr->cmd_hv_enable = (bool)packed_ptr->cmd_hv_enable;
    dst_ptr->cmd_driver_enable = (bool)packed_ptr->cmd_driver_enable;
    dst_ptr->cmd_error_remove = (bool)packed_ptr->cmd_error_remove;
    dst_ptr->tq_setpoint = ((float)packed_ptr->tq_setpoint * 0.0098F) + 0.0F;
    dst_ptr->tq_limit_pos = ((float)packed_ptr->tq_limit_pos * 0.0098F) + 0.0F;
    dst_ptr->tq_limit_neg = ((float)packed_ptr->tq_limit_neg * 0.0098F) + 0.0F;

    return 0;
}
