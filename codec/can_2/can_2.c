/**
 * @file can_2.c
 * @author IEM can_codec library
 * @brief CAN message packing/unpacking code generated from can_2.dbc
 * @version 0.1
 * @date 2025-06-17
 */

#include "can_2.h"

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <string.h>
#include <errno.h>

/**
 * @brief Packs vnav_tv_inputs signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_VNAV_TV_INPUTS_LENGTH (8U)
 */
int can_2_vnav_tv_inputs_pack(uint8_t* dst_ptr, const struct can_2_vnav_tv_inputs* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_VNAV_TV_INPUTS_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_VNAV_TV_INPUTS_LENGTH);
    struct can_2_vnav_tv_inputs_packed* packed_ptr = (struct can_2_vnav_tv_inputs_packed*)dst_ptr;

    packed_ptr->ax = (uint16_t)((src_ptr->ax - -30.0F) / 0.0009155413138F);
    packed_ptr->ay = (uint16_t)((src_ptr->ay - -30.0F) / 0.0009155413138F);
    packed_ptr->gz = (uint16_t)((src_ptr->gz - -3.5F) / 0.0001068131533F);
    packed_ptr->vx = (uint16_t)((src_ptr->vx - -5.0F) / 0.00274674968F);
    packed_ptr->vnav_status = (uint8_t)((src_ptr->vnav_status - 0) / 1);

    return 0;
}

/**
 * @brief Unpacks vnav_tv_inputs signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_VNAV_TV_INPUTS_LENGTH (8U)
 */
int can_2_vnav_tv_inputs_unpack(struct can_2_vnav_tv_inputs* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_VNAV_TV_INPUTS_LENGTH) {
        return EINVAL;
    }

    struct can_2_vnav_tv_inputs_packed* packed_ptr = (struct can_2_vnav_tv_inputs_packed*)src_ptr;

    dst_ptr->ax = ((float)packed_ptr->ax * 0.0009155413138F) + -30.0F;
    dst_ptr->ay = ((float)packed_ptr->ay * 0.0009155413138F) + -30.0F;
    dst_ptr->gz = ((float)packed_ptr->gz * 0.0001068131533F) + -3.5F;
    dst_ptr->vx = ((float)packed_ptr->vx * 0.00274674968F) + -5.0F;
    dst_ptr->vnav_status = ((uint32_t)packed_ptr->vnav_status * 1) + 0;

    return 0;
}

/**
 * @brief Packs vnav_vel_accel signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_VNAV_VEL_ACCEL_LENGTH (7U)
 */
int can_2_vnav_vel_accel_pack(uint8_t* dst_ptr, const struct can_2_vnav_vel_accel* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_VNAV_VEL_ACCEL_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_VNAV_VEL_ACCEL_LENGTH);
    struct can_2_vnav_vel_accel_packed* packed_ptr = (struct can_2_vnav_vel_accel_packed*)dst_ptr;

    packed_ptr->gx = (uint8_t)((src_ptr->gx - -1.5F) / 0.01176470588F);
    packed_ptr->gy = (uint8_t)((src_ptr->gy - -1.5F) / 0.01176470588F);
    packed_ptr->vy = (uint8_t)((src_ptr->vy - -15.0F) / 0.1176470588F);
    packed_ptr->vz = (uint8_t)((src_ptr->vz - -2.0F) / 0.01568627451F);
    packed_ptr->az = (uint16_t)((src_ptr->az - -30.0F) / 0.008547008547F);
    packed_ptr->ins_mode = (uint8_t)((src_ptr->ins_mode - 0) / 1);
    packed_ptr->gnss_heading_ins = src_ptr->gnss_heading_ins;
    packed_ptr->gnss_err = src_ptr->gnss_err;
    packed_ptr->gnss_fix = src_ptr->gnss_fix;
    packed_ptr->imu_err = src_ptr->imu_err;
    packed_ptr->mag_pres_err = src_ptr->mag_pres_err;
    packed_ptr->vnav_active = src_ptr->vnav_active;

    return 0;
}

/**
 * @brief Unpacks vnav_vel_accel signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_VNAV_VEL_ACCEL_LENGTH (7U)
 */
int can_2_vnav_vel_accel_unpack(struct can_2_vnav_vel_accel* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_VNAV_VEL_ACCEL_LENGTH) {
        return EINVAL;
    }

    struct can_2_vnav_vel_accel_packed* packed_ptr = (struct can_2_vnav_vel_accel_packed*)src_ptr;

    dst_ptr->gx = ((float)packed_ptr->gx * 0.01176470588F) + -1.5F;
    dst_ptr->gy = ((float)packed_ptr->gy * 0.01176470588F) + -1.5F;
    dst_ptr->vy = ((float)packed_ptr->vy * 0.1176470588F) + -15.0F;
    dst_ptr->vz = ((float)packed_ptr->vz * 0.01568627451F) + -2.0F;
    dst_ptr->az = ((float)packed_ptr->az * 0.008547008547F) + -30.0F;
    dst_ptr->ins_mode = ((uint32_t)packed_ptr->ins_mode * 1) + 0;
    dst_ptr->gnss_heading_ins = (bool)packed_ptr->gnss_heading_ins;
    dst_ptr->gnss_err = (bool)packed_ptr->gnss_err;
    dst_ptr->gnss_fix = (bool)packed_ptr->gnss_fix;
    dst_ptr->imu_err = (bool)packed_ptr->imu_err;
    dst_ptr->mag_pres_err = (bool)packed_ptr->mag_pres_err;
    dst_ptr->vnav_active = (bool)packed_ptr->vnav_active;

    return 0;
}

/**
 * @brief Packs vnav_pos_stat signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_VNAV_POS_STAT_LENGTH (8U)
 */
int can_2_vnav_pos_stat_pack(uint8_t* dst_ptr, const struct can_2_vnav_pos_stat* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_VNAV_POS_STAT_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_VNAV_POS_STAT_LENGTH);
    struct can_2_vnav_pos_stat_packed* packed_ptr = (struct can_2_vnav_pos_stat_packed*)dst_ptr;

    packed_ptr->pos_latitude = (uint16_t)((src_ptr->pos_latitude - -0.01F) / 3.0518044e-07F);
    packed_ptr->pos_longitude = (uint16_t)((src_ptr->pos_longitude - -0.01F) / 3.0518044e-07F);
    packed_ptr->pos_altitude = (uint8_t)((src_ptr->pos_altitude - -50.0F) / 0.3921568627F);
    packed_ptr->v_east = (uint16_t)((src_ptr->v_east - -40.0F) / 0.01953601954F);
    packed_ptr->v_north = (uint16_t)((src_ptr->v_north - -40.0F) / 0.01953601954F);

    return 0;
}

/**
 * @brief Unpacks vnav_pos_stat signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_VNAV_POS_STAT_LENGTH (8U)
 */
int can_2_vnav_pos_stat_unpack(struct can_2_vnav_pos_stat* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_VNAV_POS_STAT_LENGTH) {
        return EINVAL;
    }

    struct can_2_vnav_pos_stat_packed* packed_ptr = (struct can_2_vnav_pos_stat_packed*)src_ptr;

    dst_ptr->pos_latitude = ((float)packed_ptr->pos_latitude * 3.0518044e-07F) + -0.01F;
    dst_ptr->pos_longitude = ((float)packed_ptr->pos_longitude * 3.0518044e-07F) + -0.01F;
    dst_ptr->pos_altitude = ((float)packed_ptr->pos_altitude * 0.3921568627F) + -50.0F;
    dst_ptr->v_east = ((float)packed_ptr->v_east * 0.01953601954F) + -40.0F;
    dst_ptr->v_north = ((float)packed_ptr->v_north * 0.01953601954F) + -40.0F;

    return 0;
}

/**
 * @brief Packs vnav_status signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_VNAV_STATUS_LENGTH (6U)
 */
int can_2_vnav_status_pack(uint8_t* dst_ptr, const struct can_2_vnav_status* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_VNAV_STATUS_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_VNAV_STATUS_LENGTH);
    struct can_2_vnav_status_packed* packed_ptr = (struct can_2_vnav_status_packed*)dst_ptr;

    packed_ptr->time_since_start = (uint32_t)((src_ptr->time_since_start - 0) / 1);
    packed_ptr->vnav_gnss_fix_type = (uint8_t)((src_ptr->vnav_gnss_fix_type - 0) / 1);
    packed_ptr->vnav_uart_err_parity = src_ptr->vnav_uart_err_parity;
    packed_ptr->vnav_uart_err_noise = src_ptr->vnav_uart_err_noise;
    packed_ptr->vnav_uart_err_frame = src_ptr->vnav_uart_err_frame;
    packed_ptr->vnav_uart_err_overrun = src_ptr->vnav_uart_err_overrun;
    packed_ptr->vnav_uart_err_dma = src_ptr->vnav_uart_err_dma;
    packed_ptr->vnav_uart_err_rcvr_timeout = src_ptr->vnav_uart_err_rcvr_timeout;
    packed_ptr->sensor_sat_ax = src_ptr->sensor_sat_ax;
    packed_ptr->sensor_sat_ay = src_ptr->sensor_sat_ay;
    packed_ptr->sensor_sat_az = src_ptr->sensor_sat_az;
    packed_ptr->sensor_sat_gx = src_ptr->sensor_sat_gx;
    packed_ptr->sensor_sat_gy = src_ptr->sensor_sat_gy;
    packed_ptr->sensor_sat_gz = src_ptr->sensor_sat_gz;
    packed_ptr->vnav_sync_out_timeout = src_ptr->vnav_sync_out_timeout;
    packed_ptr->vnav_gnss_sat_cnt = (uint8_t)((src_ptr->vnav_gnss_sat_cnt - 0) / 1);

    return 0;
}

/**
 * @brief Unpacks vnav_status signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_VNAV_STATUS_LENGTH (6U)
 */
int can_2_vnav_status_unpack(struct can_2_vnav_status* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_VNAV_STATUS_LENGTH) {
        return EINVAL;
    }

    struct can_2_vnav_status_packed* packed_ptr = (struct can_2_vnav_status_packed*)src_ptr;

    dst_ptr->time_since_start = ((uint32_t)packed_ptr->time_since_start * 1) + 0;
    dst_ptr->vnav_gnss_fix_type = ((uint32_t)packed_ptr->vnav_gnss_fix_type * 1) + 0;
    dst_ptr->vnav_uart_err_parity = (bool)packed_ptr->vnav_uart_err_parity;
    dst_ptr->vnav_uart_err_noise = (bool)packed_ptr->vnav_uart_err_noise;
    dst_ptr->vnav_uart_err_frame = (bool)packed_ptr->vnav_uart_err_frame;
    dst_ptr->vnav_uart_err_overrun = (bool)packed_ptr->vnav_uart_err_overrun;
    dst_ptr->vnav_uart_err_dma = (bool)packed_ptr->vnav_uart_err_dma;
    dst_ptr->vnav_uart_err_rcvr_timeout = (bool)packed_ptr->vnav_uart_err_rcvr_timeout;
    dst_ptr->sensor_sat_ax = (bool)packed_ptr->sensor_sat_ax;
    dst_ptr->sensor_sat_ay = (bool)packed_ptr->sensor_sat_ay;
    dst_ptr->sensor_sat_az = (bool)packed_ptr->sensor_sat_az;
    dst_ptr->sensor_sat_gx = (bool)packed_ptr->sensor_sat_gx;
    dst_ptr->sensor_sat_gy = (bool)packed_ptr->sensor_sat_gy;
    dst_ptr->sensor_sat_gz = (bool)packed_ptr->sensor_sat_gz;
    dst_ptr->vnav_sync_out_timeout = (bool)packed_ptr->vnav_sync_out_timeout;
    dst_ptr->vnav_gnss_sat_cnt = ((uint32_t)packed_ptr->vnav_gnss_sat_cnt * 1) + 0;

    return 0;
}

/**
 * @brief Packs safety_tv_mz signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_SAFETY_TV_MZ_LENGTH (6U)
 */
int can_2_safety_tv_mz_pack(uint8_t* dst_ptr, const struct can_2_safety_tv_mz* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_SAFETY_TV_MZ_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_SAFETY_TV_MZ_LENGTH);
    struct can_2_safety_tv_mz_packed* packed_ptr = (struct can_2_safety_tv_mz_packed*)dst_ptr;

    packed_ptr->mz_raw = (uint16_t)((src_ptr->mz_raw - -1500.0F) / 0.04577636719F);
    packed_ptr->mz_scaled = (uint16_t)((src_ptr->mz_scaled - -1500.0F) / 0.04577636719F);
    packed_ptr->beta_est = (uint16_t)((src_ptr->beta_est - -2.0F) / 6.103515625e-05F);

    return 0;
}

/**
 * @brief Unpacks safety_tv_mz signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_SAFETY_TV_MZ_LENGTH (6U)
 */
int can_2_safety_tv_mz_unpack(struct can_2_safety_tv_mz* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_SAFETY_TV_MZ_LENGTH) {
        return EINVAL;
    }

    struct can_2_safety_tv_mz_packed* packed_ptr = (struct can_2_safety_tv_mz_packed*)src_ptr;

    dst_ptr->mz_raw = ((float)packed_ptr->mz_raw * 0.04577636719F) + -1500.0F;
    dst_ptr->mz_scaled = ((float)packed_ptr->mz_scaled * 0.04577636719F) + -1500.0F;
    dst_ptr->beta_est = ((float)packed_ptr->beta_est * 6.103515625e-05F) + -2.0F;

    return 0;
}

/**
 * @brief Packs safety_tv_ctrl_feedback signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_SAFETY_TV_CTRL_FEEDBACK_LENGTH (7U)
 */
int can_2_safety_tv_ctrl_feedback_pack(uint8_t* dst_ptr, const struct can_2_safety_tv_ctrl_feedback* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_SAFETY_TV_CTRL_FEEDBACK_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_SAFETY_TV_CTRL_FEEDBACK_LENGTH);
    struct can_2_safety_tv_ctrl_feedback_packed* packed_ptr = (struct can_2_safety_tv_ctrl_feedback_packed*)dst_ptr;

    packed_ptr->gz_target = (uint16_t)((src_ptr->gz_target - -6.283185307F) / 0.000191747598F);
    packed_ptr->tq_req_driver = (uint16_t)((src_ptr->tq_req_driver - -40.0F) / 0.009765625F);
    packed_ptr->pwr_limit_tq_scale = (uint16_t)((src_ptr->pwr_limit_tq_scale - 0.0F) / 0.0009765625F);
    packed_ptr->tq_split_tv = (uint16_t)((src_ptr->tq_split_tv - -40.0F) / 0.009765625F);

    return 0;
}

/**
 * @brief Unpacks safety_tv_ctrl_feedback signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_SAFETY_TV_CTRL_FEEDBACK_LENGTH (7U)
 */
int can_2_safety_tv_ctrl_feedback_unpack(struct can_2_safety_tv_ctrl_feedback* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_SAFETY_TV_CTRL_FEEDBACK_LENGTH) {
        return EINVAL;
    }

    struct can_2_safety_tv_ctrl_feedback_packed* packed_ptr = (struct can_2_safety_tv_ctrl_feedback_packed*)src_ptr;

    dst_ptr->gz_target = ((float)packed_ptr->gz_target * 0.000191747598F) + -6.283185307F;
    dst_ptr->tq_req_driver = ((float)packed_ptr->tq_req_driver * 0.009765625F) + -40.0F;
    dst_ptr->pwr_limit_tq_scale = ((float)packed_ptr->pwr_limit_tq_scale * 0.0009765625F) + 0.0F;
    dst_ptr->tq_split_tv = ((float)packed_ptr->tq_split_tv * 0.009765625F) + -40.0F;

    return 0;
}

/**
 * @brief Packs safety_tv_inputs_filt signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_SAFETY_TV_INPUTS_FILT_LENGTH (8U)
 */
int can_2_safety_tv_inputs_filt_pack(uint8_t* dst_ptr, const struct can_2_safety_tv_inputs_filt* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_SAFETY_TV_INPUTS_FILT_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_SAFETY_TV_INPUTS_FILT_LENGTH);
    struct can_2_safety_tv_inputs_filt_packed* packed_ptr = (struct can_2_safety_tv_inputs_filt_packed*)dst_ptr;

    packed_ptr->ax_filt = (uint16_t)((src_ptr->ax_filt - -30.0F) / 0.0009155413138F);
    packed_ptr->ay_filt = (uint16_t)((src_ptr->ay_filt - -30.0F) / 0.0009155413138F);
    packed_ptr->vx_filt = (uint16_t)((src_ptr->vx_filt - -5.0F) / 0.00274674968F);
    packed_ptr->gz_filt = (uint16_t)((src_ptr->gz_filt - -3.5F) / 0.000106837607F);

    return 0;
}

/**
 * @brief Unpacks safety_tv_inputs_filt signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_SAFETY_TV_INPUTS_FILT_LENGTH (8U)
 */
int can_2_safety_tv_inputs_filt_unpack(struct can_2_safety_tv_inputs_filt* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_SAFETY_TV_INPUTS_FILT_LENGTH) {
        return EINVAL;
    }

    struct can_2_safety_tv_inputs_filt_packed* packed_ptr = (struct can_2_safety_tv_inputs_filt_packed*)src_ptr;

    dst_ptr->ax_filt = ((float)packed_ptr->ax_filt * 0.0009155413138F) + -30.0F;
    dst_ptr->ay_filt = ((float)packed_ptr->ay_filt * 0.0009155413138F) + -30.0F;
    dst_ptr->vx_filt = ((float)packed_ptr->vx_filt * 0.00274674968F) + -5.0F;
    dst_ptr->gz_filt = ((float)packed_ptr->gz_filt * 0.000106837607F) + -3.5F;

    return 0;
}

/**
 * @brief Packs safety_tv_pwr signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_SAFETY_TV_PWR_LENGTH (8U)
 */
int can_2_safety_tv_pwr_pack(uint8_t* dst_ptr, const struct can_2_safety_tv_pwr* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_SAFETY_TV_PWR_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_SAFETY_TV_PWR_LENGTH);
    struct can_2_safety_tv_pwr_packed* packed_ptr = (struct can_2_safety_tv_pwr_packed*)dst_ptr;

    packed_ptr->tq_rr_pre_pwr_limit = (uint16_t)((src_ptr->tq_rr_pre_pwr_limit - -23.0F) / 0.01123321123F);
    packed_ptr->tq_rl_pre_pwr_limit = (uint16_t)((src_ptr->tq_rl_pre_pwr_limit - -23.0F) / 0.01123321123F);
    packed_ptr->tq_fr_pre_pwr_limit = (uint16_t)((src_ptr->tq_fr_pre_pwr_limit - -23.0F) / 0.01123321123F);
    packed_ptr->tq_fl_pre_pwr_limit = (uint16_t)((src_ptr->tq_fl_pre_pwr_limit - -23.0F) / 0.01123321123F);
    packed_ptr->pwr_tv_estimate = (uint16_t)((src_ptr->pwr_tv_estimate - -140.0F) / 0.06837606838F);

    return 0;
}

/**
 * @brief Unpacks safety_tv_pwr signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_SAFETY_TV_PWR_LENGTH (8U)
 */
int can_2_safety_tv_pwr_unpack(struct can_2_safety_tv_pwr* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_SAFETY_TV_PWR_LENGTH) {
        return EINVAL;
    }

    struct can_2_safety_tv_pwr_packed* packed_ptr = (struct can_2_safety_tv_pwr_packed*)src_ptr;

    dst_ptr->tq_rr_pre_pwr_limit = ((float)packed_ptr->tq_rr_pre_pwr_limit * 0.01123321123F) + -23.0F;
    dst_ptr->tq_rl_pre_pwr_limit = ((float)packed_ptr->tq_rl_pre_pwr_limit * 0.01123321123F) + -23.0F;
    dst_ptr->tq_fr_pre_pwr_limit = ((float)packed_ptr->tq_fr_pre_pwr_limit * 0.01123321123F) + -23.0F;
    dst_ptr->tq_fl_pre_pwr_limit = ((float)packed_ptr->tq_fl_pre_pwr_limit * 0.01123321123F) + -23.0F;
    dst_ptr->pwr_tv_estimate = ((float)packed_ptr->pwr_tv_estimate * 0.06837606838F) + -140.0F;

    return 0;
}

/**
 * @brief Packs safety_tv_speed_filt signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_SAFETY_TV_SPEED_FILT_LENGTH (8U)
 */
int can_2_safety_tv_speed_filt_pack(uint8_t* dst_ptr, const struct can_2_safety_tv_speed_filt* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_SAFETY_TV_SPEED_FILT_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_SAFETY_TV_SPEED_FILT_LENGTH);
    struct can_2_safety_tv_speed_filt_packed* packed_ptr = (struct can_2_safety_tv_speed_filt_packed*)dst_ptr;

    packed_ptr->spd_rr_filt = (uint16_t)((src_ptr->spd_rr_filt - -500.0F) / 0.3433279927F);
    packed_ptr->spd_rl_filt = (uint16_t)((src_ptr->spd_rl_filt - -500.0F) / 0.3433279927F);
    packed_ptr->spd_fr_filt = (uint16_t)((src_ptr->spd_fr_filt - -500.0F) / 0.3433279927F);
    packed_ptr->spd_fl_filt = (uint16_t)((src_ptr->spd_fl_filt - -500.0F) / 0.3433279927F);

    return 0;
}

/**
 * @brief Unpacks safety_tv_speed_filt signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_SAFETY_TV_SPEED_FILT_LENGTH (8U)
 */
int can_2_safety_tv_speed_filt_unpack(struct can_2_safety_tv_speed_filt* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_SAFETY_TV_SPEED_FILT_LENGTH) {
        return EINVAL;
    }

    struct can_2_safety_tv_speed_filt_packed* packed_ptr = (struct can_2_safety_tv_speed_filt_packed*)src_ptr;

    dst_ptr->spd_rr_filt = ((float)packed_ptr->spd_rr_filt * 0.3433279927F) + -500.0F;
    dst_ptr->spd_rl_filt = ((float)packed_ptr->spd_rl_filt * 0.3433279927F) + -500.0F;
    dst_ptr->spd_fr_filt = ((float)packed_ptr->spd_fr_filt * 0.3433279927F) + -500.0F;
    dst_ptr->spd_fl_filt = ((float)packed_ptr->spd_fl_filt * 0.3433279927F) + -500.0F;

    return 0;
}

/**
 * @brief Packs safety_tv_gains signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_SAFETY_TV_GAINS_LENGTH (7U)
 */
int can_2_safety_tv_gains_pack(uint8_t* dst_ptr, const struct can_2_safety_tv_gains* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_SAFETY_TV_GAINS_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_SAFETY_TV_GAINS_LENGTH);
    struct can_2_safety_tv_gains_packed* packed_ptr = (struct can_2_safety_tv_gains_packed*)dst_ptr;

    packed_ptr->loss_scalar_tv = (uint16_t)((src_ptr->loss_scalar_tv - 0.0F) / 0.001953125F);
    packed_ptr->inverter_efficiency = (uint16_t)((src_ptr->inverter_efficiency - 0.0F) / 0.0009765625F);
    packed_ptr->vy_filt = (uint16_t)((src_ptr->vy_filt - -15.0F) / 0.007352941176F);
    packed_ptr->tv_ku = (uint16_t)((src_ptr->tv_ku - -10.0F) / 0.009765625F);

    return 0;
}

/**
 * @brief Unpacks safety_tv_gains signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_SAFETY_TV_GAINS_LENGTH (7U)
 */
int can_2_safety_tv_gains_unpack(struct can_2_safety_tv_gains* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_SAFETY_TV_GAINS_LENGTH) {
        return EINVAL;
    }

    struct can_2_safety_tv_gains_packed* packed_ptr = (struct can_2_safety_tv_gains_packed*)src_ptr;

    dst_ptr->loss_scalar_tv = ((float)packed_ptr->loss_scalar_tv * 0.001953125F) + 0.0F;
    dst_ptr->inverter_efficiency = ((float)packed_ptr->inverter_efficiency * 0.0009765625F) + 0.0F;
    dst_ptr->vy_filt = ((float)packed_ptr->vy_filt * 0.007352941176F) + -15.0F;
    dst_ptr->tv_ku = ((float)packed_ptr->tv_ku * 0.009765625F) + -10.0F;

    return 0;
}

/**
 * @brief Packs safety_tv_regen_tq signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_SAFETY_TV_REGEN_TQ_LENGTH (8U)
 */
int can_2_safety_tv_regen_tq_pack(uint8_t* dst_ptr, const struct can_2_safety_tv_regen_tq* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_SAFETY_TV_REGEN_TQ_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_SAFETY_TV_REGEN_TQ_LENGTH);
    struct can_2_safety_tv_regen_tq_packed* packed_ptr = (struct can_2_safety_tv_regen_tq_packed*)dst_ptr;

    packed_ptr->tq_regen_rr = (uint16_t)((src_ptr->tq_regen_rr - -23.0F) / 0.000701904297F);
    packed_ptr->tq_regen_rl = (uint16_t)((src_ptr->tq_regen_rl - -23.0F) / 0.000701904297F);
    packed_ptr->tq_regen_fr = (uint16_t)((src_ptr->tq_regen_fr - -23.0F) / 0.000701904297F);
    packed_ptr->tq_regen_fl = (uint16_t)((src_ptr->tq_regen_fl - -23.0F) / 0.000701904297F);

    return 0;
}

/**
 * @brief Unpacks safety_tv_regen_tq signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_SAFETY_TV_REGEN_TQ_LENGTH (8U)
 */
int can_2_safety_tv_regen_tq_unpack(struct can_2_safety_tv_regen_tq* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_SAFETY_TV_REGEN_TQ_LENGTH) {
        return EINVAL;
    }

    struct can_2_safety_tv_regen_tq_packed* packed_ptr = (struct can_2_safety_tv_regen_tq_packed*)src_ptr;

    dst_ptr->tq_regen_rr = ((float)packed_ptr->tq_regen_rr * 0.000701904297F) + -23.0F;
    dst_ptr->tq_regen_rl = ((float)packed_ptr->tq_regen_rl * 0.000701904297F) + -23.0F;
    dst_ptr->tq_regen_fr = ((float)packed_ptr->tq_regen_fr * 0.000701904297F) + -23.0F;
    dst_ptr->tq_regen_fl = ((float)packed_ptr->tq_regen_fl * 0.000701904297F) + -23.0F;

    return 0;
}

/**
 * @brief Packs fsb_analog_ch_1 signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_FSB_ANALOG_CH_1_LENGTH (2U)
 */
int can_2_fsb_analog_ch_1_pack(uint8_t* dst_ptr, const struct can_2_fsb_analog_ch_1* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_FSB_ANALOG_CH_1_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_FSB_ANALOG_CH_1_LENGTH);
    struct can_2_fsb_analog_ch_1_packed* packed_ptr = (struct can_2_fsb_analog_ch_1_packed*)dst_ptr;

    packed_ptr->v_fsb_analog_ch1 = (uint16_t)((src_ptr->v_fsb_analog_ch1 - 0.0F) / 8.01099e-05F);

    return 0;
}

/**
 * @brief Unpacks fsb_analog_ch_1 signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_FSB_ANALOG_CH_1_LENGTH (2U)
 */
int can_2_fsb_analog_ch_1_unpack(struct can_2_fsb_analog_ch_1* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_FSB_ANALOG_CH_1_LENGTH) {
        return EINVAL;
    }

    struct can_2_fsb_analog_ch_1_packed* packed_ptr = (struct can_2_fsb_analog_ch_1_packed*)src_ptr;

    dst_ptr->v_fsb_analog_ch1 = ((float)packed_ptr->v_fsb_analog_ch1 * 8.01099e-05F) + 0.0F;

    return 0;
}

/**
 * @brief Packs fsb_analog_ch_2 signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_FSB_ANALOG_CH_2_LENGTH (2U)
 */
int can_2_fsb_analog_ch_2_pack(uint8_t* dst_ptr, const struct can_2_fsb_analog_ch_2* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_FSB_ANALOG_CH_2_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_FSB_ANALOG_CH_2_LENGTH);
    struct can_2_fsb_analog_ch_2_packed* packed_ptr = (struct can_2_fsb_analog_ch_2_packed*)dst_ptr;

    packed_ptr->v_fsb_analog_ch2 = (uint16_t)((src_ptr->v_fsb_analog_ch2 - 0.0F) / 8.01099e-05F);

    return 0;
}

/**
 * @brief Unpacks fsb_analog_ch_2 signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_FSB_ANALOG_CH_2_LENGTH (2U)
 */
int can_2_fsb_analog_ch_2_unpack(struct can_2_fsb_analog_ch_2* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_FSB_ANALOG_CH_2_LENGTH) {
        return EINVAL;
    }

    struct can_2_fsb_analog_ch_2_packed* packed_ptr = (struct can_2_fsb_analog_ch_2_packed*)src_ptr;

    dst_ptr->v_fsb_analog_ch2 = ((float)packed_ptr->v_fsb_analog_ch2 * 8.01099e-05F) + 0.0F;

    return 0;
}

/**
 * @brief Packs fsb_analog_ch_3 signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_FSB_ANALOG_CH_3_LENGTH (2U)
 */
int can_2_fsb_analog_ch_3_pack(uint8_t* dst_ptr, const struct can_2_fsb_analog_ch_3* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_FSB_ANALOG_CH_3_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_FSB_ANALOG_CH_3_LENGTH);
    struct can_2_fsb_analog_ch_3_packed* packed_ptr = (struct can_2_fsb_analog_ch_3_packed*)dst_ptr;

    packed_ptr->v_fsb_analog_ch3 = (uint16_t)((src_ptr->v_fsb_analog_ch3 - 0.0F) / 8.01099e-05F);

    return 0;
}

/**
 * @brief Unpacks fsb_analog_ch_3 signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_FSB_ANALOG_CH_3_LENGTH (2U)
 */
int can_2_fsb_analog_ch_3_unpack(struct can_2_fsb_analog_ch_3* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_FSB_ANALOG_CH_3_LENGTH) {
        return EINVAL;
    }

    struct can_2_fsb_analog_ch_3_packed* packed_ptr = (struct can_2_fsb_analog_ch_3_packed*)src_ptr;

    dst_ptr->v_fsb_analog_ch3 = ((float)packed_ptr->v_fsb_analog_ch3 * 8.01099e-05F) + 0.0F;

    return 0;
}

/**
 * @brief Packs fsb_analog_ch_4 signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_FSB_ANALOG_CH_4_LENGTH (2U)
 */
int can_2_fsb_analog_ch_4_pack(uint8_t* dst_ptr, const struct can_2_fsb_analog_ch_4* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_FSB_ANALOG_CH_4_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_FSB_ANALOG_CH_4_LENGTH);
    struct can_2_fsb_analog_ch_4_packed* packed_ptr = (struct can_2_fsb_analog_ch_4_packed*)dst_ptr;

    packed_ptr->v_fsb_fl_ride_height = (uint16_t)((src_ptr->v_fsb_fl_ride_height - 0.0F) / 8.01099e-05F);

    return 0;
}

/**
 * @brief Unpacks fsb_analog_ch_4 signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_FSB_ANALOG_CH_4_LENGTH (2U)
 */
int can_2_fsb_analog_ch_4_unpack(struct can_2_fsb_analog_ch_4* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_FSB_ANALOG_CH_4_LENGTH) {
        return EINVAL;
    }

    struct can_2_fsb_analog_ch_4_packed* packed_ptr = (struct can_2_fsb_analog_ch_4_packed*)src_ptr;

    dst_ptr->v_fsb_fl_ride_height = ((float)packed_ptr->v_fsb_fl_ride_height * 8.01099e-05F) + 0.0F;

    return 0;
}

/**
 * @brief Packs fsb_analog_ch_5 signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_FSB_ANALOG_CH_5_LENGTH (2U)
 */
int can_2_fsb_analog_ch_5_pack(uint8_t* dst_ptr, const struct can_2_fsb_analog_ch_5* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_FSB_ANALOG_CH_5_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_FSB_ANALOG_CH_5_LENGTH);
    struct can_2_fsb_analog_ch_5_packed* packed_ptr = (struct can_2_fsb_analog_ch_5_packed*)dst_ptr;

    packed_ptr->v_fsb_analog_ch5 = (uint16_t)((src_ptr->v_fsb_analog_ch5 - 0.0F) / 8.01099e-05F);

    return 0;
}

/**
 * @brief Unpacks fsb_analog_ch_5 signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_FSB_ANALOG_CH_5_LENGTH (2U)
 */
int can_2_fsb_analog_ch_5_unpack(struct can_2_fsb_analog_ch_5* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_FSB_ANALOG_CH_5_LENGTH) {
        return EINVAL;
    }

    struct can_2_fsb_analog_ch_5_packed* packed_ptr = (struct can_2_fsb_analog_ch_5_packed*)src_ptr;

    dst_ptr->v_fsb_analog_ch5 = ((float)packed_ptr->v_fsb_analog_ch5 * 8.01099e-05F) + 0.0F;

    return 0;
}

/**
 * @brief Packs fsb_analog_ch_6 signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_FSB_ANALOG_CH_6_LENGTH (2U)
 */
int can_2_fsb_analog_ch_6_pack(uint8_t* dst_ptr, const struct can_2_fsb_analog_ch_6* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_FSB_ANALOG_CH_6_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_FSB_ANALOG_CH_6_LENGTH);
    struct can_2_fsb_analog_ch_6_packed* packed_ptr = (struct can_2_fsb_analog_ch_6_packed*)dst_ptr;

    packed_ptr->v_fsb_analog_ch6 = (uint16_t)((src_ptr->v_fsb_analog_ch6 - 0.0F) / 8.01099e-05F);

    return 0;
}

/**
 * @brief Unpacks fsb_analog_ch_6 signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_FSB_ANALOG_CH_6_LENGTH (2U)
 */
int can_2_fsb_analog_ch_6_unpack(struct can_2_fsb_analog_ch_6* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_FSB_ANALOG_CH_6_LENGTH) {
        return EINVAL;
    }

    struct can_2_fsb_analog_ch_6_packed* packed_ptr = (struct can_2_fsb_analog_ch_6_packed*)src_ptr;

    dst_ptr->v_fsb_analog_ch6 = ((float)packed_ptr->v_fsb_analog_ch6 * 8.01099e-05F) + 0.0F;

    return 0;
}

/**
 * @brief Packs fsb_analog_ch_7 signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_FSB_ANALOG_CH_7_LENGTH (2U)
 */
int can_2_fsb_analog_ch_7_pack(uint8_t* dst_ptr, const struct can_2_fsb_analog_ch_7* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_FSB_ANALOG_CH_7_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_FSB_ANALOG_CH_7_LENGTH);
    struct can_2_fsb_analog_ch_7_packed* packed_ptr = (struct can_2_fsb_analog_ch_7_packed*)dst_ptr;

    packed_ptr->v_fsb_f_heave_lpot = (uint16_t)((src_ptr->v_fsb_f_heave_lpot - 0.0F) / 8.01099e-05F);

    return 0;
}

/**
 * @brief Unpacks fsb_analog_ch_7 signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_FSB_ANALOG_CH_7_LENGTH (2U)
 */
int can_2_fsb_analog_ch_7_unpack(struct can_2_fsb_analog_ch_7* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_FSB_ANALOG_CH_7_LENGTH) {
        return EINVAL;
    }

    struct can_2_fsb_analog_ch_7_packed* packed_ptr = (struct can_2_fsb_analog_ch_7_packed*)src_ptr;

    dst_ptr->v_fsb_f_heave_lpot = ((float)packed_ptr->v_fsb_f_heave_lpot * 8.01099e-05F) + 0.0F;

    return 0;
}

/**
 * @brief Packs fsb_analog_ch_8 signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_FSB_ANALOG_CH_8_LENGTH (2U)
 */
int can_2_fsb_analog_ch_8_pack(uint8_t* dst_ptr, const struct can_2_fsb_analog_ch_8* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_FSB_ANALOG_CH_8_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_FSB_ANALOG_CH_8_LENGTH);
    struct can_2_fsb_analog_ch_8_packed* packed_ptr = (struct can_2_fsb_analog_ch_8_packed*)dst_ptr;

    packed_ptr->v_fsb_pitot_tube = (uint16_t)((src_ptr->v_fsb_pitot_tube - 0.0F) / 8.01099e-05F);

    return 0;
}

/**
 * @brief Unpacks fsb_analog_ch_8 signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_FSB_ANALOG_CH_8_LENGTH (2U)
 */
int can_2_fsb_analog_ch_8_unpack(struct can_2_fsb_analog_ch_8* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_FSB_ANALOG_CH_8_LENGTH) {
        return EINVAL;
    }

    struct can_2_fsb_analog_ch_8_packed* packed_ptr = (struct can_2_fsb_analog_ch_8_packed*)src_ptr;

    dst_ptr->v_fsb_pitot_tube = ((float)packed_ptr->v_fsb_pitot_tube * 8.01099e-05F) + 0.0F;

    return 0;
}

/**
 * @brief Packs fsb_analog_ch_9 signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_FSB_ANALOG_CH_9_LENGTH (2U)
 */
int can_2_fsb_analog_ch_9_pack(uint8_t* dst_ptr, const struct can_2_fsb_analog_ch_9* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_FSB_ANALOG_CH_9_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_FSB_ANALOG_CH_9_LENGTH);
    struct can_2_fsb_analog_ch_9_packed* packed_ptr = (struct can_2_fsb_analog_ch_9_packed*)dst_ptr;

    packed_ptr->v_fsb_analog_ch9 = (uint16_t)((src_ptr->v_fsb_analog_ch9 - 0.0F) / 8.01099e-05F);

    return 0;
}

/**
 * @brief Unpacks fsb_analog_ch_9 signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_FSB_ANALOG_CH_9_LENGTH (2U)
 */
int can_2_fsb_analog_ch_9_unpack(struct can_2_fsb_analog_ch_9* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_FSB_ANALOG_CH_9_LENGTH) {
        return EINVAL;
    }

    struct can_2_fsb_analog_ch_9_packed* packed_ptr = (struct can_2_fsb_analog_ch_9_packed*)src_ptr;

    dst_ptr->v_fsb_analog_ch9 = ((float)packed_ptr->v_fsb_analog_ch9 * 8.01099e-05F) + 0.0F;

    return 0;
}

/**
 * @brief Packs fsb_analog_ch_10 signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_FSB_ANALOG_CH_10_LENGTH (2U)
 */
int can_2_fsb_analog_ch_10_pack(uint8_t* dst_ptr, const struct can_2_fsb_analog_ch_10* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_FSB_ANALOG_CH_10_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_FSB_ANALOG_CH_10_LENGTH);
    struct can_2_fsb_analog_ch_10_packed* packed_ptr = (struct can_2_fsb_analog_ch_10_packed*)dst_ptr;

    packed_ptr->v_fsb_analog_ch10 = (uint16_t)((src_ptr->v_fsb_analog_ch10 - 0.0F) / 8.01099e-05F);

    return 0;
}

/**
 * @brief Unpacks fsb_analog_ch_10 signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_FSB_ANALOG_CH_10_LENGTH (2U)
 */
int can_2_fsb_analog_ch_10_unpack(struct can_2_fsb_analog_ch_10* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_FSB_ANALOG_CH_10_LENGTH) {
        return EINVAL;
    }

    struct can_2_fsb_analog_ch_10_packed* packed_ptr = (struct can_2_fsb_analog_ch_10_packed*)src_ptr;

    dst_ptr->v_fsb_analog_ch10 = ((float)packed_ptr->v_fsb_analog_ch10 * 8.01099e-05F) + 0.0F;

    return 0;
}

/**
 * @brief Packs fsb_analog_ch_11 signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_FSB_ANALOG_CH_11_LENGTH (2U)
 */
int can_2_fsb_analog_ch_11_pack(uint8_t* dst_ptr, const struct can_2_fsb_analog_ch_11* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_FSB_ANALOG_CH_11_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_FSB_ANALOG_CH_11_LENGTH);
    struct can_2_fsb_analog_ch_11_packed* packed_ptr = (struct can_2_fsb_analog_ch_11_packed*)dst_ptr;

    packed_ptr->v_fsb_fr_ride_height = (uint16_t)((src_ptr->v_fsb_fr_ride_height - 0.0F) / 8.01099e-05F);

    return 0;
}

/**
 * @brief Unpacks fsb_analog_ch_11 signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_FSB_ANALOG_CH_11_LENGTH (2U)
 */
int can_2_fsb_analog_ch_11_unpack(struct can_2_fsb_analog_ch_11* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_FSB_ANALOG_CH_11_LENGTH) {
        return EINVAL;
    }

    struct can_2_fsb_analog_ch_11_packed* packed_ptr = (struct can_2_fsb_analog_ch_11_packed*)src_ptr;

    dst_ptr->v_fsb_fr_ride_height = ((float)packed_ptr->v_fsb_fr_ride_height * 8.01099e-05F) + 0.0F;

    return 0;
}

/**
 * @brief Packs fsb_analog_ch_12 signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_FSB_ANALOG_CH_12_LENGTH (2U)
 */
int can_2_fsb_analog_ch_12_pack(uint8_t* dst_ptr, const struct can_2_fsb_analog_ch_12* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_FSB_ANALOG_CH_12_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_FSB_ANALOG_CH_12_LENGTH);
    struct can_2_fsb_analog_ch_12_packed* packed_ptr = (struct can_2_fsb_analog_ch_12_packed*)dst_ptr;

    packed_ptr->v_fsb_steering_lpot = (uint16_t)((src_ptr->v_fsb_steering_lpot - 0.0F) / 8.01099e-05F);

    return 0;
}

/**
 * @brief Unpacks fsb_analog_ch_12 signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_FSB_ANALOG_CH_12_LENGTH (2U)
 */
int can_2_fsb_analog_ch_12_unpack(struct can_2_fsb_analog_ch_12* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_FSB_ANALOG_CH_12_LENGTH) {
        return EINVAL;
    }

    struct can_2_fsb_analog_ch_12_packed* packed_ptr = (struct can_2_fsb_analog_ch_12_packed*)src_ptr;

    dst_ptr->v_fsb_steering_lpot = ((float)packed_ptr->v_fsb_steering_lpot * 8.01099e-05F) + 0.0F;

    return 0;
}

/**
 * @brief Packs fsb_analog_ch_13 signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_FSB_ANALOG_CH_13_LENGTH (2U)
 */
int can_2_fsb_analog_ch_13_pack(uint8_t* dst_ptr, const struct can_2_fsb_analog_ch_13* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_FSB_ANALOG_CH_13_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_FSB_ANALOG_CH_13_LENGTH);
    struct can_2_fsb_analog_ch_13_packed* packed_ptr = (struct can_2_fsb_analog_ch_13_packed*)dst_ptr;

    packed_ptr->v_fsb_f_roll_lpot = (uint16_t)((src_ptr->v_fsb_f_roll_lpot - 0.0F) / 8.01099e-05F);

    return 0;
}

/**
 * @brief Unpacks fsb_analog_ch_13 signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_FSB_ANALOG_CH_13_LENGTH (2U)
 */
int can_2_fsb_analog_ch_13_unpack(struct can_2_fsb_analog_ch_13* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_FSB_ANALOG_CH_13_LENGTH) {
        return EINVAL;
    }

    struct can_2_fsb_analog_ch_13_packed* packed_ptr = (struct can_2_fsb_analog_ch_13_packed*)src_ptr;

    dst_ptr->v_fsb_f_roll_lpot = ((float)packed_ptr->v_fsb_f_roll_lpot * 8.01099e-05F) + 0.0F;

    return 0;
}

/**
 * @brief Packs fsb_analog_ch_14 signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_FSB_ANALOG_CH_14_LENGTH (2U)
 */
int can_2_fsb_analog_ch_14_pack(uint8_t* dst_ptr, const struct can_2_fsb_analog_ch_14* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_FSB_ANALOG_CH_14_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_FSB_ANALOG_CH_14_LENGTH);
    struct can_2_fsb_analog_ch_14_packed* packed_ptr = (struct can_2_fsb_analog_ch_14_packed*)dst_ptr;

    packed_ptr->v_fsb_fr_oil_temp = (uint16_t)((src_ptr->v_fsb_fr_oil_temp - 0.0F) / 8.01099e-05F);

    return 0;
}

/**
 * @brief Unpacks fsb_analog_ch_14 signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_FSB_ANALOG_CH_14_LENGTH (2U)
 */
int can_2_fsb_analog_ch_14_unpack(struct can_2_fsb_analog_ch_14* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_FSB_ANALOG_CH_14_LENGTH) {
        return EINVAL;
    }

    struct can_2_fsb_analog_ch_14_packed* packed_ptr = (struct can_2_fsb_analog_ch_14_packed*)src_ptr;

    dst_ptr->v_fsb_fr_oil_temp = ((float)packed_ptr->v_fsb_fr_oil_temp * 8.01099e-05F) + 0.0F;

    return 0;
}

/**
 * @brief Packs fsb_analog_ch_15 signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_FSB_ANALOG_CH_15_LENGTH (2U)
 */
int can_2_fsb_analog_ch_15_pack(uint8_t* dst_ptr, const struct can_2_fsb_analog_ch_15* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_FSB_ANALOG_CH_15_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_FSB_ANALOG_CH_15_LENGTH);
    struct can_2_fsb_analog_ch_15_packed* packed_ptr = (struct can_2_fsb_analog_ch_15_packed*)dst_ptr;

    packed_ptr->v_fsb_motor_inlet_temp = (uint16_t)((src_ptr->v_fsb_motor_inlet_temp - 0.0F) / 8.01099e-05F);

    return 0;
}

/**
 * @brief Unpacks fsb_analog_ch_15 signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_FSB_ANALOG_CH_15_LENGTH (2U)
 */
int can_2_fsb_analog_ch_15_unpack(struct can_2_fsb_analog_ch_15* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_FSB_ANALOG_CH_15_LENGTH) {
        return EINVAL;
    }

    struct can_2_fsb_analog_ch_15_packed* packed_ptr = (struct can_2_fsb_analog_ch_15_packed*)src_ptr;

    dst_ptr->v_fsb_motor_inlet_temp = ((float)packed_ptr->v_fsb_motor_inlet_temp * 8.01099e-05F) + 0.0F;

    return 0;
}

/**
 * @brief Packs fsb_analog_ch_16 signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_FSB_ANALOG_CH_16_LENGTH (2U)
 */
int can_2_fsb_analog_ch_16_pack(uint8_t* dst_ptr, const struct can_2_fsb_analog_ch_16* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_FSB_ANALOG_CH_16_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_FSB_ANALOG_CH_16_LENGTH);
    struct can_2_fsb_analog_ch_16_packed* packed_ptr = (struct can_2_fsb_analog_ch_16_packed*)dst_ptr;

    packed_ptr->v_fsb_motor_outlet_temp = (uint16_t)((src_ptr->v_fsb_motor_outlet_temp - 0.0F) / 8.01099e-05F);

    return 0;
}

/**
 * @brief Unpacks fsb_analog_ch_16 signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_FSB_ANALOG_CH_16_LENGTH (2U)
 */
int can_2_fsb_analog_ch_16_unpack(struct can_2_fsb_analog_ch_16* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_FSB_ANALOG_CH_16_LENGTH) {
        return EINVAL;
    }

    struct can_2_fsb_analog_ch_16_packed* packed_ptr = (struct can_2_fsb_analog_ch_16_packed*)src_ptr;

    dst_ptr->v_fsb_motor_outlet_temp = ((float)packed_ptr->v_fsb_motor_outlet_temp * 8.01099e-05F) + 0.0F;

    return 0;
}

/**
 * @brief Packs fsb_analog_ch_17 signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_FSB_ANALOG_CH_17_LENGTH (2U)
 */
int can_2_fsb_analog_ch_17_pack(uint8_t* dst_ptr, const struct can_2_fsb_analog_ch_17* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_FSB_ANALOG_CH_17_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_FSB_ANALOG_CH_17_LENGTH);
    struct can_2_fsb_analog_ch_17_packed* packed_ptr = (struct can_2_fsb_analog_ch_17_packed*)dst_ptr;

    packed_ptr->v_fsb_fl_oil_temp = (uint16_t)((src_ptr->v_fsb_fl_oil_temp - 0.0F) / 8.01099e-05F);

    return 0;
}

/**
 * @brief Unpacks fsb_analog_ch_17 signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_FSB_ANALOG_CH_17_LENGTH (2U)
 */
int can_2_fsb_analog_ch_17_unpack(struct can_2_fsb_analog_ch_17* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_FSB_ANALOG_CH_17_LENGTH) {
        return EINVAL;
    }

    struct can_2_fsb_analog_ch_17_packed* packed_ptr = (struct can_2_fsb_analog_ch_17_packed*)src_ptr;

    dst_ptr->v_fsb_fl_oil_temp = ((float)packed_ptr->v_fsb_fl_oil_temp * 8.01099e-05F) + 0.0F;

    return 0;
}

/**
 * @brief Packs fsb_pwm_in_ch_1 signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_FSB_PWM_IN_CH_1_LENGTH (3U)
 */
int can_2_fsb_pwm_in_ch_1_pack(uint8_t* dst_ptr, const struct can_2_fsb_pwm_in_ch_1* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_FSB_PWM_IN_CH_1_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_FSB_PWM_IN_CH_1_LENGTH);
    struct can_2_fsb_pwm_in_ch_1_packed* packed_ptr = (struct can_2_fsb_pwm_in_ch_1_packed*)dst_ptr;

    packed_ptr->duty_pwm_in_fsb_ch1 = (uint8_t)((src_ptr->duty_pwm_in_fsb_ch1 - 0) / 1);
    packed_ptr->hz_pwm_in_fsb_ch1 = (uint16_t)((src_ptr->hz_pwm_in_fsb_ch1 - 0.0F) / 0.01F);

    return 0;
}

/**
 * @brief Unpacks fsb_pwm_in_ch_1 signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_FSB_PWM_IN_CH_1_LENGTH (3U)
 */
int can_2_fsb_pwm_in_ch_1_unpack(struct can_2_fsb_pwm_in_ch_1* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_FSB_PWM_IN_CH_1_LENGTH) {
        return EINVAL;
    }

    struct can_2_fsb_pwm_in_ch_1_packed* packed_ptr = (struct can_2_fsb_pwm_in_ch_1_packed*)src_ptr;

    dst_ptr->duty_pwm_in_fsb_ch1 = ((uint32_t)packed_ptr->duty_pwm_in_fsb_ch1 * 1) + 0;
    dst_ptr->hz_pwm_in_fsb_ch1 = ((float)packed_ptr->hz_pwm_in_fsb_ch1 * 0.01F) + 0.0F;

    return 0;
}

/**
 * @brief Packs fsb_pwm_in_ch_2 signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_FSB_PWM_IN_CH_2_LENGTH (3U)
 */
int can_2_fsb_pwm_in_ch_2_pack(uint8_t* dst_ptr, const struct can_2_fsb_pwm_in_ch_2* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_FSB_PWM_IN_CH_2_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_FSB_PWM_IN_CH_2_LENGTH);
    struct can_2_fsb_pwm_in_ch_2_packed* packed_ptr = (struct can_2_fsb_pwm_in_ch_2_packed*)dst_ptr;

    packed_ptr->duty_pwm_in_fsb_ch2 = (uint8_t)((src_ptr->duty_pwm_in_fsb_ch2 - 0) / 1);
    packed_ptr->hz_pwm_in_fsb_ch2 = (uint16_t)((src_ptr->hz_pwm_in_fsb_ch2 - 0.0F) / 0.01F);

    return 0;
}

/**
 * @brief Unpacks fsb_pwm_in_ch_2 signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_FSB_PWM_IN_CH_2_LENGTH (3U)
 */
int can_2_fsb_pwm_in_ch_2_unpack(struct can_2_fsb_pwm_in_ch_2* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_FSB_PWM_IN_CH_2_LENGTH) {
        return EINVAL;
    }

    struct can_2_fsb_pwm_in_ch_2_packed* packed_ptr = (struct can_2_fsb_pwm_in_ch_2_packed*)src_ptr;

    dst_ptr->duty_pwm_in_fsb_ch2 = ((uint32_t)packed_ptr->duty_pwm_in_fsb_ch2 * 1) + 0;
    dst_ptr->hz_pwm_in_fsb_ch2 = ((float)packed_ptr->hz_pwm_in_fsb_ch2 * 0.01F) + 0.0F;

    return 0;
}

/**
 * @brief Packs fsb_pwm_in_ch_3 signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_FSB_PWM_IN_CH_3_LENGTH (3U)
 */
int can_2_fsb_pwm_in_ch_3_pack(uint8_t* dst_ptr, const struct can_2_fsb_pwm_in_ch_3* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_FSB_PWM_IN_CH_3_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_FSB_PWM_IN_CH_3_LENGTH);
    struct can_2_fsb_pwm_in_ch_3_packed* packed_ptr = (struct can_2_fsb_pwm_in_ch_3_packed*)dst_ptr;

    packed_ptr->duty_pwm_in_fsb_ch3 = (uint8_t)((src_ptr->duty_pwm_in_fsb_ch3 - 0) / 1);
    packed_ptr->hz_pwm_in_fsb_ch3 = (uint16_t)((src_ptr->hz_pwm_in_fsb_ch3 - 0.0F) / 0.01F);

    return 0;
}

/**
 * @brief Unpacks fsb_pwm_in_ch_3 signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_FSB_PWM_IN_CH_3_LENGTH (3U)
 */
int can_2_fsb_pwm_in_ch_3_unpack(struct can_2_fsb_pwm_in_ch_3* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_FSB_PWM_IN_CH_3_LENGTH) {
        return EINVAL;
    }

    struct can_2_fsb_pwm_in_ch_3_packed* packed_ptr = (struct can_2_fsb_pwm_in_ch_3_packed*)src_ptr;

    dst_ptr->duty_pwm_in_fsb_ch3 = ((uint32_t)packed_ptr->duty_pwm_in_fsb_ch3 * 1) + 0;
    dst_ptr->hz_pwm_in_fsb_ch3 = ((float)packed_ptr->hz_pwm_in_fsb_ch3 * 0.01F) + 0.0F;

    return 0;
}

/**
 * @brief Packs fsb_pwm_out_ch_1 signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_FSB_PWM_OUT_CH_1_LENGTH (1U)
 */
int can_2_fsb_pwm_out_ch_1_pack(uint8_t* dst_ptr, const struct can_2_fsb_pwm_out_ch_1* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_FSB_PWM_OUT_CH_1_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_FSB_PWM_OUT_CH_1_LENGTH);
    struct can_2_fsb_pwm_out_ch_1_packed* packed_ptr = (struct can_2_fsb_pwm_out_ch_1_packed*)dst_ptr;

    packed_ptr->duty_pwm_out_fsb_ch1 = (uint8_t)((src_ptr->duty_pwm_out_fsb_ch1 - 0) / 1);

    return 0;
}

/**
 * @brief Unpacks fsb_pwm_out_ch_1 signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_FSB_PWM_OUT_CH_1_LENGTH (1U)
 */
int can_2_fsb_pwm_out_ch_1_unpack(struct can_2_fsb_pwm_out_ch_1* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_FSB_PWM_OUT_CH_1_LENGTH) {
        return EINVAL;
    }

    struct can_2_fsb_pwm_out_ch_1_packed* packed_ptr = (struct can_2_fsb_pwm_out_ch_1_packed*)src_ptr;

    dst_ptr->duty_pwm_out_fsb_ch1 = ((uint32_t)packed_ptr->duty_pwm_out_fsb_ch1 * 1) + 0;

    return 0;
}

/**
 * @brief Packs fsb_pwm_out_ch_2 signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_FSB_PWM_OUT_CH_2_LENGTH (1U)
 */
int can_2_fsb_pwm_out_ch_2_pack(uint8_t* dst_ptr, const struct can_2_fsb_pwm_out_ch_2* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_FSB_PWM_OUT_CH_2_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_FSB_PWM_OUT_CH_2_LENGTH);
    struct can_2_fsb_pwm_out_ch_2_packed* packed_ptr = (struct can_2_fsb_pwm_out_ch_2_packed*)dst_ptr;

    packed_ptr->duty_pwm_out_fsb_ch2 = (uint8_t)((src_ptr->duty_pwm_out_fsb_ch2 - 0) / 1);

    return 0;
}

/**
 * @brief Unpacks fsb_pwm_out_ch_2 signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_FSB_PWM_OUT_CH_2_LENGTH (1U)
 */
int can_2_fsb_pwm_out_ch_2_unpack(struct can_2_fsb_pwm_out_ch_2* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_FSB_PWM_OUT_CH_2_LENGTH) {
        return EINVAL;
    }

    struct can_2_fsb_pwm_out_ch_2_packed* packed_ptr = (struct can_2_fsb_pwm_out_ch_2_packed*)src_ptr;

    dst_ptr->duty_pwm_out_fsb_ch2 = ((uint32_t)packed_ptr->duty_pwm_out_fsb_ch2 * 1) + 0;

    return 0;
}

/**
 * @brief Packs fsb_pwm_out_ch_3 signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_FSB_PWM_OUT_CH_3_LENGTH (1U)
 */
int can_2_fsb_pwm_out_ch_3_pack(uint8_t* dst_ptr, const struct can_2_fsb_pwm_out_ch_3* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_FSB_PWM_OUT_CH_3_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_FSB_PWM_OUT_CH_3_LENGTH);
    struct can_2_fsb_pwm_out_ch_3_packed* packed_ptr = (struct can_2_fsb_pwm_out_ch_3_packed*)dst_ptr;

    packed_ptr->duty_pwm_out_fsb_ch3 = (uint8_t)((src_ptr->duty_pwm_out_fsb_ch3 - 0) / 1);

    return 0;
}

/**
 * @brief Unpacks fsb_pwm_out_ch_3 signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_FSB_PWM_OUT_CH_3_LENGTH (1U)
 */
int can_2_fsb_pwm_out_ch_3_unpack(struct can_2_fsb_pwm_out_ch_3* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_FSB_PWM_OUT_CH_3_LENGTH) {
        return EINVAL;
    }

    struct can_2_fsb_pwm_out_ch_3_packed* packed_ptr = (struct can_2_fsb_pwm_out_ch_3_packed*)src_ptr;

    dst_ptr->duty_pwm_out_fsb_ch3 = ((uint32_t)packed_ptr->duty_pwm_out_fsb_ch3 * 1) + 0;

    return 0;
}

/**
 * @brief Packs rsb_analog_ch_1 signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_RSB_ANALOG_CH_1_LENGTH (2U)
 */
int can_2_rsb_analog_ch_1_pack(uint8_t* dst_ptr, const struct can_2_rsb_analog_ch_1* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_RSB_ANALOG_CH_1_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_RSB_ANALOG_CH_1_LENGTH);
    struct can_2_rsb_analog_ch_1_packed* packed_ptr = (struct can_2_rsb_analog_ch_1_packed*)dst_ptr;

    packed_ptr->v_rsb_analog_ch1 = (uint16_t)((src_ptr->v_rsb_analog_ch1 - 0.0F) / 8.01099e-05F);

    return 0;
}

/**
 * @brief Unpacks rsb_analog_ch_1 signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_RSB_ANALOG_CH_1_LENGTH (2U)
 */
int can_2_rsb_analog_ch_1_unpack(struct can_2_rsb_analog_ch_1* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_RSB_ANALOG_CH_1_LENGTH) {
        return EINVAL;
    }

    struct can_2_rsb_analog_ch_1_packed* packed_ptr = (struct can_2_rsb_analog_ch_1_packed*)src_ptr;

    dst_ptr->v_rsb_analog_ch1 = ((float)packed_ptr->v_rsb_analog_ch1 * 8.01099e-05F) + 0.0F;

    return 0;
}

/**
 * @brief Packs rsb_analog_ch_2 signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_RSB_ANALOG_CH_2_LENGTH (2U)
 */
int can_2_rsb_analog_ch_2_pack(uint8_t* dst_ptr, const struct can_2_rsb_analog_ch_2* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_RSB_ANALOG_CH_2_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_RSB_ANALOG_CH_2_LENGTH);
    struct can_2_rsb_analog_ch_2_packed* packed_ptr = (struct can_2_rsb_analog_ch_2_packed*)dst_ptr;

    packed_ptr->v_rsb_analog_ch2 = (uint16_t)((src_ptr->v_rsb_analog_ch2 - 0.0F) / 8.01099e-05F);

    return 0;
}

/**
 * @brief Unpacks rsb_analog_ch_2 signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_RSB_ANALOG_CH_2_LENGTH (2U)
 */
int can_2_rsb_analog_ch_2_unpack(struct can_2_rsb_analog_ch_2* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_RSB_ANALOG_CH_2_LENGTH) {
        return EINVAL;
    }

    struct can_2_rsb_analog_ch_2_packed* packed_ptr = (struct can_2_rsb_analog_ch_2_packed*)src_ptr;

    dst_ptr->v_rsb_analog_ch2 = ((float)packed_ptr->v_rsb_analog_ch2 * 8.01099e-05F) + 0.0F;

    return 0;
}

/**
 * @brief Packs rsb_analog_ch_3 signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_RSB_ANALOG_CH_3_LENGTH (2U)
 */
int can_2_rsb_analog_ch_3_pack(uint8_t* dst_ptr, const struct can_2_rsb_analog_ch_3* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_RSB_ANALOG_CH_3_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_RSB_ANALOG_CH_3_LENGTH);
    struct can_2_rsb_analog_ch_3_packed* packed_ptr = (struct can_2_rsb_analog_ch_3_packed*)dst_ptr;

    packed_ptr->v_rsb_rl_motor_out_temp = (uint16_t)((src_ptr->v_rsb_rl_motor_out_temp - 0.0F) / 8.01099e-05F);

    return 0;
}

/**
 * @brief Unpacks rsb_analog_ch_3 signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_RSB_ANALOG_CH_3_LENGTH (2U)
 */
int can_2_rsb_analog_ch_3_unpack(struct can_2_rsb_analog_ch_3* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_RSB_ANALOG_CH_3_LENGTH) {
        return EINVAL;
    }

    struct can_2_rsb_analog_ch_3_packed* packed_ptr = (struct can_2_rsb_analog_ch_3_packed*)src_ptr;

    dst_ptr->v_rsb_rl_motor_out_temp = ((float)packed_ptr->v_rsb_rl_motor_out_temp * 8.01099e-05F) + 0.0F;

    return 0;
}

/**
 * @brief Packs rsb_analog_ch_4 signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_RSB_ANALOG_CH_4_LENGTH (2U)
 */
int can_2_rsb_analog_ch_4_pack(uint8_t* dst_ptr, const struct can_2_rsb_analog_ch_4* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_RSB_ANALOG_CH_4_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_RSB_ANALOG_CH_4_LENGTH);
    struct can_2_rsb_analog_ch_4_packed* packed_ptr = (struct can_2_rsb_analog_ch_4_packed*)dst_ptr;

    packed_ptr->v_rsb_rl_ride_height = (uint16_t)((src_ptr->v_rsb_rl_ride_height - 0.0F) / 8.01099e-05F);

    return 0;
}

/**
 * @brief Unpacks rsb_analog_ch_4 signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_RSB_ANALOG_CH_4_LENGTH (2U)
 */
int can_2_rsb_analog_ch_4_unpack(struct can_2_rsb_analog_ch_4* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_RSB_ANALOG_CH_4_LENGTH) {
        return EINVAL;
    }

    struct can_2_rsb_analog_ch_4_packed* packed_ptr = (struct can_2_rsb_analog_ch_4_packed*)src_ptr;

    dst_ptr->v_rsb_rl_ride_height = ((float)packed_ptr->v_rsb_rl_ride_height * 8.01099e-05F) + 0.0F;

    return 0;
}

/**
 * @brief Packs rsb_analog_ch_5 signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_RSB_ANALOG_CH_5_LENGTH (2U)
 */
int can_2_rsb_analog_ch_5_pack(uint8_t* dst_ptr, const struct can_2_rsb_analog_ch_5* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_RSB_ANALOG_CH_5_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_RSB_ANALOG_CH_5_LENGTH);
    struct can_2_rsb_analog_ch_5_packed* packed_ptr = (struct can_2_rsb_analog_ch_5_packed*)dst_ptr;

    packed_ptr->v_rsb_analog_ch5 = (uint16_t)((src_ptr->v_rsb_analog_ch5 - 0.0F) / 8.01099e-05F);

    return 0;
}

/**
 * @brief Unpacks rsb_analog_ch_5 signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_RSB_ANALOG_CH_5_LENGTH (2U)
 */
int can_2_rsb_analog_ch_5_unpack(struct can_2_rsb_analog_ch_5* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_RSB_ANALOG_CH_5_LENGTH) {
        return EINVAL;
    }

    struct can_2_rsb_analog_ch_5_packed* packed_ptr = (struct can_2_rsb_analog_ch_5_packed*)src_ptr;

    dst_ptr->v_rsb_analog_ch5 = ((float)packed_ptr->v_rsb_analog_ch5 * 8.01099e-05F) + 0.0F;

    return 0;
}

/**
 * @brief Packs rsb_analog_ch_6 signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_RSB_ANALOG_CH_6_LENGTH (2U)
 */
int can_2_rsb_analog_ch_6_pack(uint8_t* dst_ptr, const struct can_2_rsb_analog_ch_6* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_RSB_ANALOG_CH_6_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_RSB_ANALOG_CH_6_LENGTH);
    struct can_2_rsb_analog_ch_6_packed* packed_ptr = (struct can_2_rsb_analog_ch_6_packed*)dst_ptr;

    packed_ptr->v_rsb_analog_ch6 = (uint16_t)((src_ptr->v_rsb_analog_ch6 - 0.0F) / 8.01099e-05F);

    return 0;
}

/**
 * @brief Unpacks rsb_analog_ch_6 signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_RSB_ANALOG_CH_6_LENGTH (2U)
 */
int can_2_rsb_analog_ch_6_unpack(struct can_2_rsb_analog_ch_6* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_RSB_ANALOG_CH_6_LENGTH) {
        return EINVAL;
    }

    struct can_2_rsb_analog_ch_6_packed* packed_ptr = (struct can_2_rsb_analog_ch_6_packed*)src_ptr;

    dst_ptr->v_rsb_analog_ch6 = ((float)packed_ptr->v_rsb_analog_ch6 * 8.01099e-05F) + 0.0F;

    return 0;
}

/**
 * @brief Packs rsb_analog_ch_7 signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_RSB_ANALOG_CH_7_LENGTH (2U)
 */
int can_2_rsb_analog_ch_7_pack(uint8_t* dst_ptr, const struct can_2_rsb_analog_ch_7* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_RSB_ANALOG_CH_7_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_RSB_ANALOG_CH_7_LENGTH);
    struct can_2_rsb_analog_ch_7_packed* packed_ptr = (struct can_2_rsb_analog_ch_7_packed*)dst_ptr;

    packed_ptr->v_rsb_r_heave_lpot = (uint16_t)((src_ptr->v_rsb_r_heave_lpot - 0.0F) / 8.01099e-05F);

    return 0;
}

/**
 * @brief Unpacks rsb_analog_ch_7 signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_RSB_ANALOG_CH_7_LENGTH (2U)
 */
int can_2_rsb_analog_ch_7_unpack(struct can_2_rsb_analog_ch_7* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_RSB_ANALOG_CH_7_LENGTH) {
        return EINVAL;
    }

    struct can_2_rsb_analog_ch_7_packed* packed_ptr = (struct can_2_rsb_analog_ch_7_packed*)src_ptr;

    dst_ptr->v_rsb_r_heave_lpot = ((float)packed_ptr->v_rsb_r_heave_lpot * 8.01099e-05F) + 0.0F;

    return 0;
}

/**
 * @brief Packs rsb_analog_ch_8 signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_RSB_ANALOG_CH_8_LENGTH (2U)
 */
int can_2_rsb_analog_ch_8_pack(uint8_t* dst_ptr, const struct can_2_rsb_analog_ch_8* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_RSB_ANALOG_CH_8_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_RSB_ANALOG_CH_8_LENGTH);
    struct can_2_rsb_analog_ch_8_packed* packed_ptr = (struct can_2_rsb_analog_ch_8_packed*)dst_ptr;

    packed_ptr->v_rsb_analog_ch8 = (uint16_t)((src_ptr->v_rsb_analog_ch8 - 0.0F) / 8.01099e-05F);

    return 0;
}

/**
 * @brief Unpacks rsb_analog_ch_8 signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_RSB_ANALOG_CH_8_LENGTH (2U)
 */
int can_2_rsb_analog_ch_8_unpack(struct can_2_rsb_analog_ch_8* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_RSB_ANALOG_CH_8_LENGTH) {
        return EINVAL;
    }

    struct can_2_rsb_analog_ch_8_packed* packed_ptr = (struct can_2_rsb_analog_ch_8_packed*)src_ptr;

    dst_ptr->v_rsb_analog_ch8 = ((float)packed_ptr->v_rsb_analog_ch8 * 8.01099e-05F) + 0.0F;

    return 0;
}

/**
 * @brief Packs rsb_analog_ch_9 signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_RSB_ANALOG_CH_9_LENGTH (2U)
 */
int can_2_rsb_analog_ch_9_pack(uint8_t* dst_ptr, const struct can_2_rsb_analog_ch_9* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_RSB_ANALOG_CH_9_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_RSB_ANALOG_CH_9_LENGTH);
    struct can_2_rsb_analog_ch_9_packed* packed_ptr = (struct can_2_rsb_analog_ch_9_packed*)dst_ptr;

    packed_ptr->v_rsb_pump_temp = (uint16_t)((src_ptr->v_rsb_pump_temp - 0.0F) / 8.01099e-05F);

    return 0;
}

/**
 * @brief Unpacks rsb_analog_ch_9 signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_RSB_ANALOG_CH_9_LENGTH (2U)
 */
int can_2_rsb_analog_ch_9_unpack(struct can_2_rsb_analog_ch_9* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_RSB_ANALOG_CH_9_LENGTH) {
        return EINVAL;
    }

    struct can_2_rsb_analog_ch_9_packed* packed_ptr = (struct can_2_rsb_analog_ch_9_packed*)src_ptr;

    dst_ptr->v_rsb_pump_temp = ((float)packed_ptr->v_rsb_pump_temp * 8.01099e-05F) + 0.0F;

    return 0;
}

/**
 * @brief Packs rsb_analog_ch_10 signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_RSB_ANALOG_CH_10_LENGTH (2U)
 */
int can_2_rsb_analog_ch_10_pack(uint8_t* dst_ptr, const struct can_2_rsb_analog_ch_10* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_RSB_ANALOG_CH_10_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_RSB_ANALOG_CH_10_LENGTH);
    struct can_2_rsb_analog_ch_10_packed* packed_ptr = (struct can_2_rsb_analog_ch_10_packed*)dst_ptr;

    packed_ptr->v_rsb_rl_motor_in_temp = (uint16_t)((src_ptr->v_rsb_rl_motor_in_temp - 0.0F) / 8.01099e-05F);

    return 0;
}

/**
 * @brief Unpacks rsb_analog_ch_10 signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_RSB_ANALOG_CH_10_LENGTH (2U)
 */
int can_2_rsb_analog_ch_10_unpack(struct can_2_rsb_analog_ch_10* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_RSB_ANALOG_CH_10_LENGTH) {
        return EINVAL;
    }

    struct can_2_rsb_analog_ch_10_packed* packed_ptr = (struct can_2_rsb_analog_ch_10_packed*)src_ptr;

    dst_ptr->v_rsb_rl_motor_in_temp = ((float)packed_ptr->v_rsb_rl_motor_in_temp * 8.01099e-05F) + 0.0F;

    return 0;
}

/**
 * @brief Packs rsb_analog_ch_11 signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_RSB_ANALOG_CH_11_LENGTH (2U)
 */
int can_2_rsb_analog_ch_11_pack(uint8_t* dst_ptr, const struct can_2_rsb_analog_ch_11* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_RSB_ANALOG_CH_11_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_RSB_ANALOG_CH_11_LENGTH);
    struct can_2_rsb_analog_ch_11_packed* packed_ptr = (struct can_2_rsb_analog_ch_11_packed*)dst_ptr;

    packed_ptr->v_rsb_rr_ride_height = (uint16_t)((src_ptr->v_rsb_rr_ride_height - 0.0F) / 8.01099e-05F);

    return 0;
}

/**
 * @brief Unpacks rsb_analog_ch_11 signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_RSB_ANALOG_CH_11_LENGTH (2U)
 */
int can_2_rsb_analog_ch_11_unpack(struct can_2_rsb_analog_ch_11* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_RSB_ANALOG_CH_11_LENGTH) {
        return EINVAL;
    }

    struct can_2_rsb_analog_ch_11_packed* packed_ptr = (struct can_2_rsb_analog_ch_11_packed*)src_ptr;

    dst_ptr->v_rsb_rr_ride_height = ((float)packed_ptr->v_rsb_rr_ride_height * 8.01099e-05F) + 0.0F;

    return 0;
}

/**
 * @brief Packs rsb_analog_ch_12 signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_RSB_ANALOG_CH_12_LENGTH (2U)
 */
int can_2_rsb_analog_ch_12_pack(uint8_t* dst_ptr, const struct can_2_rsb_analog_ch_12* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_RSB_ANALOG_CH_12_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_RSB_ANALOG_CH_12_LENGTH);
    struct can_2_rsb_analog_ch_12_packed* packed_ptr = (struct can_2_rsb_analog_ch_12_packed*)dst_ptr;

    packed_ptr->v_rsb_analog_ch12 = (uint16_t)((src_ptr->v_rsb_analog_ch12 - 0.0F) / 8.01099e-05F);

    return 0;
}

/**
 * @brief Unpacks rsb_analog_ch_12 signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_RSB_ANALOG_CH_12_LENGTH (2U)
 */
int can_2_rsb_analog_ch_12_unpack(struct can_2_rsb_analog_ch_12* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_RSB_ANALOG_CH_12_LENGTH) {
        return EINVAL;
    }

    struct can_2_rsb_analog_ch_12_packed* packed_ptr = (struct can_2_rsb_analog_ch_12_packed*)src_ptr;

    dst_ptr->v_rsb_analog_ch12 = ((float)packed_ptr->v_rsb_analog_ch12 * 8.01099e-05F) + 0.0F;

    return 0;
}

/**
 * @brief Packs rsb_analog_ch_13 signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_RSB_ANALOG_CH_13_LENGTH (2U)
 */
int can_2_rsb_analog_ch_13_pack(uint8_t* dst_ptr, const struct can_2_rsb_analog_ch_13* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_RSB_ANALOG_CH_13_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_RSB_ANALOG_CH_13_LENGTH);
    struct can_2_rsb_analog_ch_13_packed* packed_ptr = (struct can_2_rsb_analog_ch_13_packed*)dst_ptr;

    packed_ptr->v_rsb_r_roll_lpot = (uint16_t)((src_ptr->v_rsb_r_roll_lpot - 0.0F) / 8.01099e-05F);

    return 0;
}

/**
 * @brief Unpacks rsb_analog_ch_13 signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_RSB_ANALOG_CH_13_LENGTH (2U)
 */
int can_2_rsb_analog_ch_13_unpack(struct can_2_rsb_analog_ch_13* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_RSB_ANALOG_CH_13_LENGTH) {
        return EINVAL;
    }

    struct can_2_rsb_analog_ch_13_packed* packed_ptr = (struct can_2_rsb_analog_ch_13_packed*)src_ptr;

    dst_ptr->v_rsb_r_roll_lpot = ((float)packed_ptr->v_rsb_r_roll_lpot * 8.01099e-05F) + 0.0F;

    return 0;
}

/**
 * @brief Packs rsb_analog_ch_14 signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_RSB_ANALOG_CH_14_LENGTH (2U)
 */
int can_2_rsb_analog_ch_14_pack(uint8_t* dst_ptr, const struct can_2_rsb_analog_ch_14* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_RSB_ANALOG_CH_14_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_RSB_ANALOG_CH_14_LENGTH);
    struct can_2_rsb_analog_ch_14_packed* packed_ptr = (struct can_2_rsb_analog_ch_14_packed*)dst_ptr;

    packed_ptr->v_rsb_rr_oil_temp = (uint16_t)((src_ptr->v_rsb_rr_oil_temp - 0.0F) / 8.01099e-05F);

    return 0;
}

/**
 * @brief Unpacks rsb_analog_ch_14 signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_RSB_ANALOG_CH_14_LENGTH (2U)
 */
int can_2_rsb_analog_ch_14_unpack(struct can_2_rsb_analog_ch_14* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_RSB_ANALOG_CH_14_LENGTH) {
        return EINVAL;
    }

    struct can_2_rsb_analog_ch_14_packed* packed_ptr = (struct can_2_rsb_analog_ch_14_packed*)src_ptr;

    dst_ptr->v_rsb_rr_oil_temp = ((float)packed_ptr->v_rsb_rr_oil_temp * 8.01099e-05F) + 0.0F;

    return 0;
}

/**
 * @brief Packs rsb_analog_ch_15 signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_RSB_ANALOG_CH_15_LENGTH (2U)
 */
int can_2_rsb_analog_ch_15_pack(uint8_t* dst_ptr, const struct can_2_rsb_analog_ch_15* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_RSB_ANALOG_CH_15_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_RSB_ANALOG_CH_15_LENGTH);
    struct can_2_rsb_analog_ch_15_packed* packed_ptr = (struct can_2_rsb_analog_ch_15_packed*)dst_ptr;

    packed_ptr->v_rsb_coldplate_in_temp = (uint16_t)((src_ptr->v_rsb_coldplate_in_temp - 0.0F) / 8.01099e-05F);

    return 0;
}

/**
 * @brief Unpacks rsb_analog_ch_15 signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_RSB_ANALOG_CH_15_LENGTH (2U)
 */
int can_2_rsb_analog_ch_15_unpack(struct can_2_rsb_analog_ch_15* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_RSB_ANALOG_CH_15_LENGTH) {
        return EINVAL;
    }

    struct can_2_rsb_analog_ch_15_packed* packed_ptr = (struct can_2_rsb_analog_ch_15_packed*)src_ptr;

    dst_ptr->v_rsb_coldplate_in_temp = ((float)packed_ptr->v_rsb_coldplate_in_temp * 8.01099e-05F) + 0.0F;

    return 0;
}

/**
 * @brief Packs rsb_analog_ch_16 signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_RSB_ANALOG_CH_16_LENGTH (2U)
 */
int can_2_rsb_analog_ch_16_pack(uint8_t* dst_ptr, const struct can_2_rsb_analog_ch_16* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_RSB_ANALOG_CH_16_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_RSB_ANALOG_CH_16_LENGTH);
    struct can_2_rsb_analog_ch_16_packed* packed_ptr = (struct can_2_rsb_analog_ch_16_packed*)dst_ptr;

    packed_ptr->v_rsb_coldplate_out_temp = (uint16_t)((src_ptr->v_rsb_coldplate_out_temp - 0.0F) / 8.01099e-05F);

    return 0;
}

/**
 * @brief Unpacks rsb_analog_ch_16 signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_RSB_ANALOG_CH_16_LENGTH (2U)
 */
int can_2_rsb_analog_ch_16_unpack(struct can_2_rsb_analog_ch_16* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_RSB_ANALOG_CH_16_LENGTH) {
        return EINVAL;
    }

    struct can_2_rsb_analog_ch_16_packed* packed_ptr = (struct can_2_rsb_analog_ch_16_packed*)src_ptr;

    dst_ptr->v_rsb_coldplate_out_temp = ((float)packed_ptr->v_rsb_coldplate_out_temp * 8.01099e-05F) + 0.0F;

    return 0;
}

/**
 * @brief Packs rsb_analog_ch_17 signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_RSB_ANALOG_CH_17_LENGTH (2U)
 */
int can_2_rsb_analog_ch_17_pack(uint8_t* dst_ptr, const struct can_2_rsb_analog_ch_17* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_RSB_ANALOG_CH_17_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_RSB_ANALOG_CH_17_LENGTH);
    struct can_2_rsb_analog_ch_17_packed* packed_ptr = (struct can_2_rsb_analog_ch_17_packed*)dst_ptr;

    packed_ptr->v_rsb_rr_oil_temp = (uint16_t)((src_ptr->v_rsb_rr_oil_temp - 0.0F) / 8.01099e-05F);

    return 0;
}

/**
 * @brief Unpacks rsb_analog_ch_17 signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_RSB_ANALOG_CH_17_LENGTH (2U)
 */
int can_2_rsb_analog_ch_17_unpack(struct can_2_rsb_analog_ch_17* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_RSB_ANALOG_CH_17_LENGTH) {
        return EINVAL;
    }

    struct can_2_rsb_analog_ch_17_packed* packed_ptr = (struct can_2_rsb_analog_ch_17_packed*)src_ptr;

    dst_ptr->v_rsb_rr_oil_temp = ((float)packed_ptr->v_rsb_rr_oil_temp * 8.01099e-05F) + 0.0F;

    return 0;
}

/**
 * @brief Packs rsb_pwm_in_ch_1 signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_RSB_PWM_IN_CH_1_LENGTH (3U)
 */
int can_2_rsb_pwm_in_ch_1_pack(uint8_t* dst_ptr, const struct can_2_rsb_pwm_in_ch_1* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_RSB_PWM_IN_CH_1_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_RSB_PWM_IN_CH_1_LENGTH);
    struct can_2_rsb_pwm_in_ch_1_packed* packed_ptr = (struct can_2_rsb_pwm_in_ch_1_packed*)dst_ptr;

    packed_ptr->duty_pwm_in_rsb_ch1 = (uint8_t)((src_ptr->duty_pwm_in_rsb_ch1 - 0) / 1);
    packed_ptr->hz_pwm_in_rsb_ch1 = (uint16_t)((src_ptr->hz_pwm_in_rsb_ch1 - 0.0F) / 0.01F);

    return 0;
}

/**
 * @brief Unpacks rsb_pwm_in_ch_1 signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_RSB_PWM_IN_CH_1_LENGTH (3U)
 */
int can_2_rsb_pwm_in_ch_1_unpack(struct can_2_rsb_pwm_in_ch_1* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_RSB_PWM_IN_CH_1_LENGTH) {
        return EINVAL;
    }

    struct can_2_rsb_pwm_in_ch_1_packed* packed_ptr = (struct can_2_rsb_pwm_in_ch_1_packed*)src_ptr;

    dst_ptr->duty_pwm_in_rsb_ch1 = ((uint32_t)packed_ptr->duty_pwm_in_rsb_ch1 * 1) + 0;
    dst_ptr->hz_pwm_in_rsb_ch1 = ((float)packed_ptr->hz_pwm_in_rsb_ch1 * 0.01F) + 0.0F;

    return 0;
}

/**
 * @brief Packs rsb_pwm_in_ch_2 signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_RSB_PWM_IN_CH_2_LENGTH (3U)
 */
int can_2_rsb_pwm_in_ch_2_pack(uint8_t* dst_ptr, const struct can_2_rsb_pwm_in_ch_2* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_RSB_PWM_IN_CH_2_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_RSB_PWM_IN_CH_2_LENGTH);
    struct can_2_rsb_pwm_in_ch_2_packed* packed_ptr = (struct can_2_rsb_pwm_in_ch_2_packed*)dst_ptr;

    packed_ptr->duty_pwm_in_rsb_ch2 = (uint8_t)((src_ptr->duty_pwm_in_rsb_ch2 - 0) / 1);
    packed_ptr->hz_pwm_in_rsb_ch2 = (uint16_t)((src_ptr->hz_pwm_in_rsb_ch2 - 0.0F) / 0.01F);

    return 0;
}

/**
 * @brief Unpacks rsb_pwm_in_ch_2 signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_RSB_PWM_IN_CH_2_LENGTH (3U)
 */
int can_2_rsb_pwm_in_ch_2_unpack(struct can_2_rsb_pwm_in_ch_2* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_RSB_PWM_IN_CH_2_LENGTH) {
        return EINVAL;
    }

    struct can_2_rsb_pwm_in_ch_2_packed* packed_ptr = (struct can_2_rsb_pwm_in_ch_2_packed*)src_ptr;

    dst_ptr->duty_pwm_in_rsb_ch2 = ((uint32_t)packed_ptr->duty_pwm_in_rsb_ch2 * 1) + 0;
    dst_ptr->hz_pwm_in_rsb_ch2 = ((float)packed_ptr->hz_pwm_in_rsb_ch2 * 0.01F) + 0.0F;

    return 0;
}

/**
 * @brief Packs rsb_pwm_in_ch_3 signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_RSB_PWM_IN_CH_3_LENGTH (3U)
 */
int can_2_rsb_pwm_in_ch_3_pack(uint8_t* dst_ptr, const struct can_2_rsb_pwm_in_ch_3* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_RSB_PWM_IN_CH_3_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_RSB_PWM_IN_CH_3_LENGTH);
    struct can_2_rsb_pwm_in_ch_3_packed* packed_ptr = (struct can_2_rsb_pwm_in_ch_3_packed*)dst_ptr;

    packed_ptr->duty_pwm_in_rsb_ch3 = (uint8_t)((src_ptr->duty_pwm_in_rsb_ch3 - 0) / 1);
    packed_ptr->hz_pwm_in_rsb_ch3 = (uint16_t)((src_ptr->hz_pwm_in_rsb_ch3 - 0.0F) / 0.01F);

    return 0;
}

/**
 * @brief Unpacks rsb_pwm_in_ch_3 signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_RSB_PWM_IN_CH_3_LENGTH (3U)
 */
int can_2_rsb_pwm_in_ch_3_unpack(struct can_2_rsb_pwm_in_ch_3* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_RSB_PWM_IN_CH_3_LENGTH) {
        return EINVAL;
    }

    struct can_2_rsb_pwm_in_ch_3_packed* packed_ptr = (struct can_2_rsb_pwm_in_ch_3_packed*)src_ptr;

    dst_ptr->duty_pwm_in_rsb_ch3 = ((uint32_t)packed_ptr->duty_pwm_in_rsb_ch3 * 1) + 0;
    dst_ptr->hz_pwm_in_rsb_ch3 = ((float)packed_ptr->hz_pwm_in_rsb_ch3 * 0.01F) + 0.0F;

    return 0;
}

/**
 * @brief Packs rsb_pwm_out_ch_1 signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_RSB_PWM_OUT_CH_1_LENGTH (1U)
 */
int can_2_rsb_pwm_out_ch_1_pack(uint8_t* dst_ptr, const struct can_2_rsb_pwm_out_ch_1* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_RSB_PWM_OUT_CH_1_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_RSB_PWM_OUT_CH_1_LENGTH);
    struct can_2_rsb_pwm_out_ch_1_packed* packed_ptr = (struct can_2_rsb_pwm_out_ch_1_packed*)dst_ptr;

    packed_ptr->duty_pwm_out_rsb_ch1 = (uint8_t)((src_ptr->duty_pwm_out_rsb_ch1 - 0) / 1);

    return 0;
}

/**
 * @brief Unpacks rsb_pwm_out_ch_1 signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_RSB_PWM_OUT_CH_1_LENGTH (1U)
 */
int can_2_rsb_pwm_out_ch_1_unpack(struct can_2_rsb_pwm_out_ch_1* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_RSB_PWM_OUT_CH_1_LENGTH) {
        return EINVAL;
    }

    struct can_2_rsb_pwm_out_ch_1_packed* packed_ptr = (struct can_2_rsb_pwm_out_ch_1_packed*)src_ptr;

    dst_ptr->duty_pwm_out_rsb_ch1 = ((uint32_t)packed_ptr->duty_pwm_out_rsb_ch1 * 1) + 0;

    return 0;
}

/**
 * @brief Packs rsb_pwm_out_ch_2 signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_RSB_PWM_OUT_CH_2_LENGTH (1U)
 */
int can_2_rsb_pwm_out_ch_2_pack(uint8_t* dst_ptr, const struct can_2_rsb_pwm_out_ch_2* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_RSB_PWM_OUT_CH_2_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_RSB_PWM_OUT_CH_2_LENGTH);
    struct can_2_rsb_pwm_out_ch_2_packed* packed_ptr = (struct can_2_rsb_pwm_out_ch_2_packed*)dst_ptr;

    packed_ptr->duty_pwm_out_rsb_ch2 = (uint8_t)((src_ptr->duty_pwm_out_rsb_ch2 - 0) / 1);

    return 0;
}

/**
 * @brief Unpacks rsb_pwm_out_ch_2 signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_RSB_PWM_OUT_CH_2_LENGTH (1U)
 */
int can_2_rsb_pwm_out_ch_2_unpack(struct can_2_rsb_pwm_out_ch_2* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_RSB_PWM_OUT_CH_2_LENGTH) {
        return EINVAL;
    }

    struct can_2_rsb_pwm_out_ch_2_packed* packed_ptr = (struct can_2_rsb_pwm_out_ch_2_packed*)src_ptr;

    dst_ptr->duty_pwm_out_rsb_ch2 = ((uint32_t)packed_ptr->duty_pwm_out_rsb_ch2 * 1) + 0;

    return 0;
}

/**
 * @brief Packs rsb_pwm_out_ch_3 signal values from a struct of unpacked values into a uint8_t array.
 *
 * @return 0 if the message was packed successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_RSB_PWM_OUT_CH_3_LENGTH (1U)
 */
int can_2_rsb_pwm_out_ch_3_pack(uint8_t* dst_ptr, const struct can_2_rsb_pwm_out_ch_3* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_RSB_PWM_OUT_CH_3_LENGTH) {
        return EINVAL;
    }

    memset(dst_ptr, 0, CAN_2_RSB_PWM_OUT_CH_3_LENGTH);
    struct can_2_rsb_pwm_out_ch_3_packed* packed_ptr = (struct can_2_rsb_pwm_out_ch_3_packed*)dst_ptr;

    packed_ptr->duty_pwm_out_rsb_ch3 = (uint8_t)((src_ptr->duty_pwm_out_rsb_ch3 - 0) / 1);

    return 0;
}

/**
 * @brief Unpacks rsb_pwm_out_ch_3 signal values from a uint8_t array into a struct of unpacked values.
 *
 * @return 0 if the message was unpacked successfully.
 * @retval EINVAL If dst_ptr or src_ptr are NULL, or if size is smaller than CAN_2_RSB_PWM_OUT_CH_3_LENGTH (1U)
 */
int can_2_rsb_pwm_out_ch_3_unpack(struct can_2_rsb_pwm_out_ch_3* dst_ptr, const uint8_t* src_ptr, size_t size) {
    if (!dst_ptr || !src_ptr || size < CAN_2_RSB_PWM_OUT_CH_3_LENGTH) {
        return EINVAL;
    }

    struct can_2_rsb_pwm_out_ch_3_packed* packed_ptr = (struct can_2_rsb_pwm_out_ch_3_packed*)src_ptr;

    dst_ptr->duty_pwm_out_rsb_ch3 = ((uint32_t)packed_ptr->duty_pwm_out_rsb_ch3 * 1) + 0;

    return 0;
}
