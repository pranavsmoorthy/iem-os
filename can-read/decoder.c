#include "can_read/decoder.h"

#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

#include "can_1.h"
#include "can_2.h"
#include "can_3.h"

/**
 * Define the color codes for the printing
 */
#define ANSI_RESET   "\033[0m"
#define ANSI_GREEN   "\033[1;32m"
#define ANSI_RED     "\033[1;31m"
#define ANSI_YELLOW  "\033[1;33m"
#define ANSI_BG_RED  "\033[41;1;37m"

/**
 * Define a mapping for the state numbers to the state 
 * strings.
 */
static const char *car_state_to_str(uint32_t state) {
    switch (state) {
        case 0: return "IDLE";
        case 1: return "PRECHARGE";
        case 2: return "READY_TO_DRIVE";
        case 3: return "DRIVE";
        case 4: return "FAULT";
        default: return "UNKNOWN";
    }
}

/**
 * Define a function for the CAN 1 decoder. The vehicle's 
 * nervous system. It handles driver inputs, high-voltage 
 * safety interlocks, and Formula SAE / Formula Student 
 * rule-mandated shutdown systems.
 */
static DecoderResult_t decode_can_1(const CANMsg_t *msg) {
    // Define a decoder result object
    DecoderResult_t result = {
        .is_recognized = false,
        .has_fault = false
    };

    // Make switch statement based on the message ID for 
    // each of the possible IDs
    switch (msg->id) {
        // Contains Vehicle state, LV battery voltage, 
        // front/rear brake pressures, tractive current, 
        // brake pedal pressed flag, and safety latch fault
        case CAN_1_SAFETY_STATUS_ID: {
            // Mark as recognized
            result.is_recognized = true;

            // Allocate the can_1_safety_status object and 
            // populate it with the unpacked frame
            struct can_1_safety_status status;
            if (can_1_safety_status_unpack(&status, msg->data, msg->length) != 0) {
                return result;
            }

            // Check and mark if the frame has a fault
            bool fault = status.fault_bms || status.fault_imd || status.fault_bspd ||
                         (status.fault_apps != 0) || (status.fault_btsf != 0);
            result.has_fault = fault;

            // Print the information accordingly
            if (fault) {
                printf(ANSI_BG_RED " [! SAFETY FAULT !] " ANSI_RESET " "
                       ANSI_RED "[CAN_1 SAFETY_STATUS 0x%03X]" ANSI_RESET
                       " State: %-14s | Batt: %5.2f V | Cur: %6.2f A | BP(F/R): %3u / %3u psi | "
                       ANSI_RED "BMS:%d IMD:%d BSPD:%d APPS:%u BTSF:%u" ANSI_RESET "\n",
                       msg->id, car_state_to_str(status.car_state), status.vlt_lv_batt,
                       status.cur_bspd, status.bp_front, status.bp_rear,
                       status.fault_bms, status.fault_imd, status.fault_bspd,
                       status.fault_apps, status.fault_btsf);
            } else {
                printf("[CAN_1 SAFETY_STATUS 0x%03X] State: %-14s | Batt: %5.2f V | Cur: %6.2f A | BP(F/R): %3u / %3u psi | "
                       ANSI_GREEN "FAULTS: NONE" ANSI_RESET "\n",
                       msg->id, car_state_to_str(status.car_state), status.vlt_lv_batt,
                       status.cur_bspd, status.bp_front, status.bp_rear);
            }
            break;
        }

        // Contains State of Charge, Accumulator pack 
        // voltage, Pack current draw, and Cell protection 
        // faults: Overvoltage, Undervoltage, 
        // Overtemperature, Undertemperature, and Precharge 
        // failure.
        case CAN_1_BMS_STATUS_ID: {
            // Mark as recognized
            result.is_recognized = true;

            // Allocate the can_1_bms_status object and 
            // populate it with the unpacked frame
            struct can_1_bms_status bms;
            if (can_1_bms_status_unpack(&bms, msg->data, msg->length) != 0) {
                return result;
            }

            // Check and mark if the frame has a fault
            bool fault = bms.bms_fault_ovp || bms.bms_fault_uvp || bms.bms_fault_otp ||
                         bms.bms_fault_utp || bms.bms_fault_pcharge;
            result.has_fault = fault;

            // Print information accordingly
            if (fault) {
                printf(ANSI_BG_RED " [! BMS FAULT !] " ANSI_RESET " "
                       ANSI_RED "[CAN_1 BMS_STATUS 0x220]" ANSI_RESET
                       " SOC: %5.1f%% | Vlt: %5.1f V | Cur: %6.2f A | "
                       ANSI_RED "OVP:%d UVP:%d OTP:%d UTP:%d PCHARGE:%d" ANSI_RESET "\n",
                       bms.soc_accum, bms.vlt_accum_6811, bms.cur_accum,
                       bms.bms_fault_ovp, bms.bms_fault_uvp, bms.bms_fault_otp,
                       bms.bms_fault_utp, bms.bms_fault_pcharge);
            } else {
                printf("[CAN_1 BMS_STATUS 0x220] SOC: %5.1f%% | Vlt: %5.1f V | Cur: %6.2f A | "
                       ANSI_GREEN "OK" ANSI_RESET "\n",
                       bms.soc_accum, bms.vlt_accum_6811, bms.cur_accum);
            }
            break;
        }

        // Has Throttle command demand, Regenerative 
        // braking status, Torque Vectoring state, Missing 
        // message timeout indicators: BMS comms loss, 
        // VectorNav comms loss, Steering Angle Sensor 
        // comms loss, Steering Wheel Board comms loss, and 
        // Aux comms loss
        case CAN_1_SAFETY_TRACTIVE_STATUS_ID: {
            // Mark as recognized
            result.is_recognized = true;

            // Allocate the can_1_safety_tractive_status 
            // object and populate it with the unpacked 
            // frame
            struct can_1_safety_tractive_status tractive;
            if (can_1_safety_tractive_status_unpack(&tractive, msg->data, msg->length) != 0) {
                return result;
            }

            // Check and mark if the frame has a fault
            bool fault = tractive.err_bms_msg || tractive.err_vnav_msg ||
                         tractive.err_sas_msg || tractive.err_swb_msg || tractive.err_aux_msg;
            result.has_fault = fault;

            // Print information accordingly
            printf("[CAN_1 TRACTIVE_STATUS 0x701] Throttle: %5.1f%% | Regen:%d | TV:%d | "
                   "MsgErrs(BMS:%d VNAV:%d SAS:%d)\n",
                   tractive.throttle_cmd, tractive.regen_active, tractive.tv_on,
                   tractive.err_bms_msg, tractive.err_vnav_msg, tractive.err_sas_msg);
            break;
        }

        // Accelerator Pedal Position Sensors
        case CAN_1_APPS_RIGHT_ID:
        case CAN_1_APPS_LEFT_ID:

        // Steering Angle Sensor
        case CAN_1_SAS_DATA_ID:

        // Front and read Sensor Board
        case CAN_1_FSB_STATUS_ID:
        case CAN_1_RSB_STATUS_ID:
            // Mark as unrecognized
            result.is_recognized = true;

            // Print the frame
            printf("[CAN_1 FRAME 0x%03X] Length: %u\n", msg->id, msg->length);
            break;

        default:
            // Mark as unrecognized
            result.is_recognized = false;
            break;
    }

    return result;
}

/**
 * Define a function for the CAN 2 decoder. It carries 
 * high-volume data from the navigation unit, torque 
 * vectoring algorithm, and chassis logging sensors.
 */
static DecoderResult_t decode_can_2(const CANMsg_t *msg) {
    // Define a decoder result object
    DecoderResult_t result = {
        .is_recognized = false,
        .has_fault = false
    };

    // Make switch statement based on the message ID for 
    // each of the possible IDs
    switch (msg->id) {
        // Contains Longitudinal acceleration, Lateral 
        // acceleration, Yaw angular velocity, Longitudinal 
        // vehicle speed, VectorNav health status flag
        case CAN_2_VNAV_TV_INPUTS_ID: {
            // Mark recognized
            result.is_recognized = true;

            // Allocate a can_2_vnav_tv_inputs struct and 
            // populate it with the unpacked frame
            struct can_2_vnav_tv_inputs vnav;
            if (can_2_vnav_tv_inputs_unpack(&vnav, msg->data, msg->length) != 0) {
                return result;
            }

            // Print the information accordingly
            printf("[CAN_2 VNAV_INPUTS 0x100] Ax: %6.2f m/s² | Ay: %6.2f m/s² | Gz: %6.2f rad/s | Vx: %5.2f m/s | Stat: %u\n",
                   vnav.ax, vnav.ay, vnav.gz, vnav.vx, vnav.vnav_status);
            break;
        }

        // Contains GNSS fix type, Tracked satellite count, 
        // Device uptime, Communication error bits: UART 
        // parity error, line noise, framing error, buffer 
        // overrun, DMA error, and receiver timeout
        case CAN_2_VNAV_STATUS_ID: {
            // Mark as recognized
            result.is_recognized = true;

            // Allocate a can_2_vnav_status struct and 
            // populate it with the unpacked frame
            struct can_2_vnav_status stat;
            if (can_2_vnav_status_unpack(&stat, msg->data, msg->length) != 0) {
                return result;
            }

            // Mark fault if present
            bool fault = stat.vnav_uart_err_parity || stat.vnav_uart_err_noise ||
                         stat.vnav_uart_err_frame || stat.vnav_uart_err_overrun ||
                         stat.vnav_uart_err_dma || stat.vnav_uart_err_rcvr_timeout;
            result.has_fault = fault;

            // Print information accordingly
            if (fault) {
                printf(ANSI_BG_RED " [! VNAV UART FAULT !] " ANSI_RESET " "
                       ANSI_RED "[CAN_2 VNAV_STATUS 0x103] Fix: %u | Sats: %u | UART Error Detected" ANSI_RESET "\n",
                       stat.vnav_gnss_fix_type, stat.vnav_gnss_sat_cnt);
            } else {
                printf("[CAN_2 VNAV_STATUS 0x103] Fix: %u | Sats: %u | Time: %u ms\n",
                       stat.vnav_gnss_fix_type, stat.vnav_gnss_sat_cnt, stat.time_since_start);
            }
            break;
        }

        // Contains Raw calculated yaw moment demand, 
        // Saturated/scaled yaw moment demand, Estimated 
        // vehicle body slip angle
        case CAN_2_SAFETY_TV_MZ_ID: {
            // Mark recognized
            result.is_recognized = true;

            // Allocate a can_2_safety_tv_mz struct and 
            // populate it with the unpacked frame
            struct can_2_safety_tv_mz tv_mz;
            if (can_2_safety_tv_mz_unpack(&tv_mz, msg->data, msg->length) != 0) {
                return result;
            }

            // Print information as needed
            printf("[CAN_2 TV_MZ 0x106] Mz Raw: %6.2f | Mz Scaled: %6.2f N.m | Beta Est: %5.2f\n",
                   tv_mz.mz_raw, tv_mz.mz_scaled, tv_mz.beta_est);
            break;
        }

        // Contains Target yaw rate setpoint from the 
        // reference model, Total driver requested torque 
        // from accelerator pedals, Rules/accumulator 
        // power-limit torque derating scale factor, 
        // Left-to-right differential torque split ratio
        case CAN_2_SAFETY_TV_CTRL_FEEDBACK_ID: {
            // Mark recognized
            result.is_recognized = true;

            // Allocate can_2_safety_tv_ctrl_feedback 
            // struct, and populate it with the unpacked frame
            struct can_2_safety_tv_ctrl_feedback fb;
            if (can_2_safety_tv_ctrl_feedback_unpack(&fb, msg->data, msg->length) != 0) {
                return result;
            }

            // Print information accordingly
            printf("[CAN_2 TV_FEEDBACK 0x10E] Gz Target: %6.2f rad/s | Tq Req: %5.2f N.m | Pwr Scale: %4.2f | Split: %5.2f\n",
                   fb.gz_target, fb.tq_req_driver, fb.pwr_limit_tq_scale, fb.tq_split_tv);
            break;
        }

        // Total estimated electric tractive power 
        // consumption, Pre-limit individual wheel torques: 
        // Front-Left, Front-Right, Rear-Left, and Rear-Right
        case CAN_2_SAFETY_TV_PWR_ID: {
            // Mark recognized
            result.is_recognized = true;

            // Allocate a can_2_safety_tv_pwr struct and
            // populate it with the unpacked struct
            struct can_2_safety_tv_pwr pwr;
            if (can_2_safety_tv_pwr_unpack(&pwr, msg->data, msg->length) != 0) {
                return result;
            }

            // Print information accordingly
            printf("[CAN_2 TV_PWR 0x110] Est Pwr: %5.1f kW | Tq(FL/FR/RL/RR): %5.1f / %5.1f / %5.1f / %5.1f N.m\n",
                   pwr.pwr_tv_estimate, pwr.tq_fl_pre_pwr_limit, pwr.tq_fr_pre_pwr_limit,
                   pwr.tq_rl_pre_pwr_limit, pwr.tq_rr_pre_pwr_limit);
            break;
        }

        default:
            // Check if signal is from front or rear sensor
            // board
            //  Front sensor board                        Rear Sensor board
            if ((msg->id >= 0x681 && msg->id <= 0x691) || (msg->id >= 0x781 && msg->id <= 0x791)) {
                result.is_recognized = true;
                printf("[CAN_2 ANALOG_CH 0x%03X] Length: %u\n", msg->id, msg->length);
            } else {
                // Mark unrecognized
                result.is_recognized = false;
            }
            break;
    }

    return result;
}

/**
 * Define a function for the CAN 3 decoder. Connected to 
 * vehicle's four independent wheel motors.
 */
static DecoderResult_t decode_can_3(const CANMsg_t *msg) {
    // Define a decoder result object
    DecoderResult_t result = {
        .is_recognized = false,
        .has_fault = false
    };

    // Make switch statement based on the message ID for 
    // each of the possible IDs
    switch (msg->id) {
        // Contains Actual motor speed, Actual motor shaft 
        // torque, Active torque-producing phase current, 
        // Inverter state bits: System Ready, High-Voltage 
        // Enabled, Inverter Enabled, and Thermal Derating 
        // active. Fault flags: Inverter Error and Warning.
        // For rear left 
        case CAN_3_AMK_STATUS_RL_ID: {
            // Mark recognized
            result.is_recognized = true;

            // Allocate a can_3_amk_status_rl and populate 
            // with the unpacked frame
            struct can_3_amk_status_rl st;
            if (can_3_amk_status_rl_unpack(&st, msg->data, msg->length) != 0) {
                return result;
            }

            // Check for faults
            result.has_fault = st.stat_error_rl;

            // Print accordingly
            if (st.stat_error_rl) {
                printf(ANSI_BG_RED " [! AMK RL ERROR !] " ANSI_RESET " "
                       ANSI_RED "[CAN_3 AMK_STATUS_RL 0x211] Spd: %6d rpm | Tq: %5.2f N.m | Iq: %5.2f A | Ready:%d HV:%d Inv:%d" ANSI_RESET "\n",
                       st.spd_actual_rl, st.tq_actual_rl, st.cur_iq_rl,
                       st.stat_system_ready_rl, st.stat_hv_enable_rl, st.stat_inv_enable_rl);
            } else {
                printf("[CAN_3 AMK_STATUS_RL 0x211] Spd: %6d rpm | Tq: %5.2f N.m | Iq: %5.2f A | Ready:%d HV:%d Inv:%d\n",
                       st.spd_actual_rl, st.tq_actual_rl, st.cur_iq_rl,
                       st.stat_system_ready_rl, st.stat_hv_enable_rl, st.stat_inv_enable_rl);
            }
            break;
        }

        // Contains Front-Left motor speed, Shaft torque, 
        // Phase current, System Ready, HV Enable, Inverter 
        // Enable, and Inverter Error/Warning flags
        case CAN_3_AMK_STATUS_FL_ID: {
            // Mark recognized
            result.is_recognized = true;

            // Allocate can_3_amk_status_fl and populate it
            // with the unpacked frame
            struct can_3_amk_status_fl st;
            if (can_3_amk_status_fl_unpack(&st, msg->data, msg->length) != 0) {
                return result;
            }

            // Check for faults
            result.has_fault = st.stat_error_fl;

            // Print accordingly
            if (st.stat_error_fl) {
                printf(ANSI_BG_RED " [! AMK FL ERROR !] " ANSI_RESET " "
                       ANSI_RED "[CAN_3 AMK_STATUS_FL 0x212] Spd: %6d rpm | Tq: %5.2f N.m | Iq: %5.2f A | Ready:%d HV:%d Inv:%d" ANSI_RESET "\n",
                       st.spd_actual_fl, st.tq_actual_fl, st.cur_iq_fl,
                       st.stat_system_ready_fl, st.stat_hv_enable_fl, st.stat_inv_enable_fl);
            } else {
                printf("[CAN_3 AMK_STATUS_FL 0x212] Spd: %6d rpm | Tq: %5.2f N.m | Iq: %5.2f A | Ready:%d HV:%d Inv:%d\n",
                       st.spd_actual_fl, st.tq_actual_fl, st.cur_iq_fl,
                       st.stat_system_ready_fl, st.stat_hv_enable_fl, st.stat_inv_enable_fl);
            }
            break;
        }

        // Same as above for front right
        case CAN_3_AMK_STATUS_FR_ID: {
            result.is_recognized = true;
            struct can_3_amk_status_fr st;
            if (can_3_amk_status_fr_unpack(&st, msg->data, msg->length) != 0) {
                return result;
            }
            result.has_fault = st.stat_error_fr;
            if (st.stat_error_fr) {
                printf(ANSI_BG_RED " [! AMK FR ERROR !] " ANSI_RESET " "
                       ANSI_RED "[CAN_3 AMK_STATUS_FR 0x213] Spd: %6d rpm | Tq: %5.2f N.m | Iq: %5.2f A | Ready:%d HV:%d Inv:%d" ANSI_RESET "\n",
                       st.spd_actual_fr, st.tq_actual_fr, st.cur_iq_fr,
                       st.stat_system_ready_fr, st.stat_hv_enable_fr, st.stat_inv_enable_fr);
            } else {
                printf("[CAN_3 AMK_STATUS_FR 0x213] Spd: %6d rpm | Tq: %5.2f N.m | Iq: %5.2f A | Ready:%d HV:%d Inv:%d\n",
                       st.spd_actual_fr, st.tq_actual_fr, st.cur_iq_fr,
                       st.stat_system_ready_fr, st.stat_hv_enable_fr, st.stat_inv_enable_fr);
            }
            break;
        }

        // Same as above for rear right
        case CAN_3_AMK_STATUS_RR_ID: {
            result.is_recognized = true;
            struct can_3_amk_status_rr st;
            if (can_3_amk_status_rr_unpack(&st, msg->data, msg->length) != 0) {
                return result;
            }
            result.has_fault = st.stat_error_rr;
            if (st.stat_error_rr) {
                printf(ANSI_BG_RED " [! AMK RR ERROR !] " ANSI_RESET " "
                       ANSI_RED "[CAN_3 AMK_STATUS_RR 0x214] Spd: %6d rpm | Tq: %5.2f N.m | Iq: %5.2f A | Ready:%d HV:%d Inv:%d" ANSI_RESET "\n",
                       st.spd_actual_rr, st.tq_actual_rr, st.cur_iq_rr,
                       st.stat_system_ready_rr, st.stat_hv_enable_rr, st.stat_inv_enable_rr);
            } else {
                printf("[CAN_3 AMK_STATUS_RR 0x214] Spd: %6d rpm | Tq: %5.2f N.m | Iq: %5.2f A | Ready:%d HV:%d Inv:%d\n",
                       st.spd_actual_rr, st.tq_actual_rr, st.cur_iq_rr,
                       st.stat_system_ready_rr, st.stat_hv_enable_rr, st.stat_inv_enable_rr);
            }
            break;
        }

        // High-frequency setpoint commands transmitted 
        // from the vehicle control/safety unit to each 
        // inverter.
        case CAN_3_SAFETY_AMK_CMD_RL_ID:
        case CAN_3_SAFETY_AMK_CMD_FL_ID:
        case CAN_3_SAFETY_AMK_CMD_FR_ID:
        case CAN_3_SAFETY_AMK_CMD_RR_ID:
            // Mark recognized and print accordingly
            result.is_recognized = true;
            printf("[CAN_3 AMK_CMD 0x%03X] Length: %u\n", msg->id, msg->length);
            break;

        // Thermal management telemetry for each 
        // motor/inverter corner.
        case CAN_3_AMK_TEMPS_ID_RL_ID:
        case CAN_3_AMK_TEMPS_ID_FL_ID:
        case CAN_3_AMK_TEMPS_ID_FR_ID:
        case CAN_3_AMK_TEMPS_ID_RR_ID:
            // Mark recognized and print accordingly
            result.is_recognized = true;
            printf("[CAN_3 AMK_TEMPS 0x%03X] Length: %u\n", msg->id, msg->length);
            break;

        // Critical high-voltage bus overvoltage protection 
        // alarms broadcast by individual AMK inverters
        case CAN_3_AMK_HV_VLT_OVERLOAD_RL_ID:
        case CAN_3_AMK_HV_VLT_OVERLOAD_FL_ID:
        case CAN_3_AMK_HV_VLT_OVERLOAD_FR_ID:
        case CAN_3_AMK_HV_VLT_OVERLOAD_RR_ID:
            // Mark recognized and fault and print 
            // accordingly
            result.is_recognized = true;
            result.has_fault = true;
            printf(ANSI_BG_RED " [! AMK HV VOLTAGE OVERLOAD !] " ANSI_RESET " "
                   ANSI_RED "[CAN_3 OVERLOAD 0x%03X]" ANSI_RESET "\n", msg->id);
            break;

        default:
            // Mark unrecognized
            result.is_recognized = false;
            break;
    }

    return result;
}

/**
 * Main decoder function for processing the frame
 */
DecoderResult_t decoder_process_frame(const CANMsg_t *msg) {
    DecoderResult_t result = {
        .is_recognized = false,
        .has_fault = false
    };

    if (msg == NULL) {
        return result;
    }

    // Switch based on the bus
    switch (msg->bus) {
        // Decode for CAN1
        case CAN_1:
            return decode_can_1(msg);

        // Decode for CAN2
        case CAN_2:
            return decode_can_2(msg);

        // Decode for CAN3
        case CAN_3:
            return decode_can_3(msg);

        // Iterate thru each of the CANs if no hits found
        // the first time 
        case CAN_BUS_MAX:
        default: {
            result = decode_can_1(msg);
            if (result.is_recognized) return result;

            result = decode_can_2(msg);
            if (result.is_recognized) return result;

            result = decode_can_3(msg);
            if (result.is_recognized) return result;
            break;
        }
    }

    return result;
}
