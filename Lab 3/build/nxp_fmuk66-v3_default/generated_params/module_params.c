
/**
 * Empty cell voltage (5C load)
 *
 * Defines the voltage where a single cell of battery 1 is considered empty.
 * The voltage should be chosen before the steep dropoff to 2.8V. A typical
 * lithium battery can only be discharged down to 10% before it drops off
 * to a voltage level damaging the cells.
 * 
 *
 * @group Battery Calibration
 * @decimal 2
 * @increment 0.01
 * @unit V
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(BAT1_V_EMPTY, 3.5);

/**
 * Empty cell voltage (5C load)
 *
 * Defines the voltage where a single cell of battery 1 is considered empty.
 * The voltage should be chosen before the steep dropoff to 2.8V. A typical
 * lithium battery can only be discharged down to 10% before it drops off
 * to a voltage level damaging the cells.
 * 
 *
 * @group Battery Calibration
 * @decimal 2
 * @increment 0.01
 * @unit V
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(BAT2_V_EMPTY, 3.5);

/**
 * Full cell voltage (5C load)
 *
 * Defines the voltage where a single cell of battery 1 is considered full
 * under a mild load. This will never be the nominal voltage of 4.2V
 * 
 *
 * @group Battery Calibration
 * @decimal 2
 * @increment 0.01
 * @unit V
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(BAT1_V_CHARGED, 4.05);

/**
 * Full cell voltage (5C load)
 *
 * Defines the voltage where a single cell of battery 1 is considered full
 * under a mild load. This will never be the nominal voltage of 4.2V
 * 
 *
 * @group Battery Calibration
 * @decimal 2
 * @increment 0.01
 * @unit V
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(BAT2_V_CHARGED, 4.05);

/**
 * Voltage drop per cell on full throttle
 *
 * This implicitely defines the internal resistance
 * to maximum current ratio for battery 1 and assumes linearity.
 * A good value to use is the difference between the
 * 5C and 20-25C load. Not used if BAT1_R_INTERNAL is
 * set.
 * 
 *
 * @group Battery Calibration
 * @decimal 2
 * @increment 0.01
 * @min 0.07
 * @max 0.5
 * @unit V
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(BAT1_V_LOAD_DROP, 0.3);

/**
 * Voltage drop per cell on full throttle
 *
 * This implicitely defines the internal resistance
 * to maximum current ratio for battery 1 and assumes linearity.
 * A good value to use is the difference between the
 * 5C and 20-25C load. Not used if BAT2_R_INTERNAL is
 * set.
 * 
 *
 * @group Battery Calibration
 * @decimal 2
 * @increment 0.01
 * @min 0.07
 * @max 0.5
 * @unit V
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(BAT2_V_LOAD_DROP, 0.3);

/**
 * Explicitly defines the per cell internal resistance for battery 1
 *
 * If non-negative, then this will be used in place of
 * BAT1_V_LOAD_DROP for all calculations.
 * 
 *
 * @group Battery Calibration
 * @decimal 2
 * @increment 0.01
 * @min -1.0
 * @max 0.2
 * @unit Ohm
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(BAT1_R_INTERNAL, -1.0);

/**
 * Explicitly defines the per cell internal resistance for battery 2
 *
 * If non-negative, then this will be used in place of
 * BAT2_V_LOAD_DROP for all calculations.
 * 
 *
 * @group Battery Calibration
 * @decimal 2
 * @increment 0.01
 * @min -1.0
 * @max 0.2
 * @unit Ohm
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(BAT2_R_INTERNAL, -1.0);

/**
 * Number of cells for battery 1.
 *
 * Defines the number of cells the attached battery consists of.
 * 
 *
 * @group Battery Calibration
 * @value 1 1S Battery
 * @value 2 2S Battery
 * @value 3 3S Battery
 * @value 4 4S Battery
 * @value 5 5S Battery
 * @value 6 6S Battery
 * @value 7 7S Battery
 * @value 8 8S Battery
 * @value 9 9S Battery
 * @value 10 10S Battery
 * @value 11 11S Battery
 * @value 12 12S Battery
 * @value 13 13S Battery
 * @value 14 14S Battery
 * @value 15 15S Battery
 * @value 16 16S Battery
 * @reboot_required True
 */
PARAM_DEFINE_INT32(BAT1_N_CELLS, 0);

/**
 * Number of cells for battery 2.
 *
 * Defines the number of cells the attached battery consists of.
 * 
 *
 * @group Battery Calibration
 * @value 1 1S Battery
 * @value 2 2S Battery
 * @value 3 3S Battery
 * @value 4 4S Battery
 * @value 5 5S Battery
 * @value 6 6S Battery
 * @value 7 7S Battery
 * @value 8 8S Battery
 * @value 9 9S Battery
 * @value 10 10S Battery
 * @value 11 11S Battery
 * @value 12 12S Battery
 * @value 13 13S Battery
 * @value 14 14S Battery
 * @value 15 15S Battery
 * @value 16 16S Battery
 * @reboot_required True
 */
PARAM_DEFINE_INT32(BAT2_N_CELLS, 0);

/**
 * Battery 1 capacity.
 *
 * Defines the capacity of battery 1 in mAh.
 * 
 *
 * @group Battery Calibration
 * @decimal 0
 * @increment 50
 * @min -1.0
 * @max 100000
 * @unit mAh
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(BAT1_CAPACITY, -1.0);

/**
 * Battery 2 capacity.
 *
 * Defines the capacity of battery 2 in mAh.
 * 
 *
 * @group Battery Calibration
 * @decimal 0
 * @increment 50
 * @min -1.0
 * @max 100000
 * @unit mAh
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(BAT2_CAPACITY, -1.0);

/**
 * Battery 1 monitoring source.
 *
 * This parameter controls the source of battery data. The value 'Power Module'
 * means that measurements are expected to come from a power module. If the value is set to
 * 'External' then the system expects to receive mavlink battery status messages.
 * If the value is set to 'ESCs', the battery information are taken from the esc_status message.
 * This requires the ESC to provide both voltage as well as current.
 * 
 *
 * @group Battery Calibration
 * @value -1 Disabled
 * @value 0 Power Module
 * @value 1 External
 * @value 2 ESCs
 * @reboot_required True
 */
PARAM_DEFINE_INT32(BAT1_SOURCE, 0);

/**
 * Battery 2 monitoring source.
 *
 * This parameter controls the source of battery data. The value 'Power Module'
 * means that measurements are expected to come from a power module. If the value is set to
 * 'External' then the system expects to receive mavlink battery status messages.
 * If the value is set to 'ESCs', the battery information are taken from the esc_status message.
 * This requires the ESC to provide both voltage as well as current.
 * 
 *
 * @group Battery Calibration
 * @value -1 Disabled
 * @value 0 Power Module
 * @value 1 External
 * @value 2 ESCs
 * @reboot_required True
 */
PARAM_DEFINE_INT32(BAT2_SOURCE, -1);

/**
 * PWM channels used as ESC outputs
 *
 * Number representing the channels e.g. 134 - Channel 1, 3 and 4.
 * Global e.g. PWM_MAIN_MIN/MAX/DISARM limits only apply to these channels.
 * 
 *
 * @group PWM Outputs
 * @min 0
 * @max 123456789
 */
PARAM_DEFINE_INT32(PWM_MAIN_OUT, 0);

/**
 * PWM main output frequency
 *
 * Set to 400 for industry default or 1000 for high frequency ESCs.
 * Set to 0 for Oneshot125.
 * 
 *
 * @group PWM Outputs
 * @min -1
 * @max 2000
 * @unit Hz
 */
PARAM_DEFINE_INT32(PWM_MAIN_RATE, 400);

/**
 * PWM main minimum value
 *
 * Set to 1000 for industry default or 900 to increase servo travel.
 * 
 *
 * @group PWM Outputs
 * @min 800
 * @max 1400
 * @unit us
 */
PARAM_DEFINE_INT32(PWM_MAIN_MIN, 1000);

/**
 * PWM main maximum value
 *
 * Set to 2000 for industry default or 2100 to increase servo travel.
 * 
 *
 * @group PWM Outputs
 * @min 1600
 * @max 2200
 * @unit us
 */
PARAM_DEFINE_INT32(PWM_MAIN_MAX, 2000);

/**
 * PWM main disarmed value
 *
 * This is the PWM pulse the autopilot is outputting if not armed.
 * The main use of this parameter is to silence ESCs when they are disarmed.
 * 
 *
 * @group PWM Outputs
 * @min 0
 * @max 2200
 * @unit us
 */
PARAM_DEFINE_INT32(PWM_MAIN_DISARM, 900);

/**
 * PWM main 1 trim value
 *
 * Set to normalized offset
 * 
 *
 * @group PWM Outputs
 * @decimal 2
 * @min -0.2
 * @max 0.2
 */
PARAM_DEFINE_FLOAT(PWM_MAIN_TRIM1, 0);

/**
 * PWM main 2 trim value
 *
 * Set to normalized offset
 * 
 *
 * @group PWM Outputs
 * @decimal 2
 * @min -0.2
 * @max 0.2
 */
PARAM_DEFINE_FLOAT(PWM_MAIN_TRIM2, 0);

/**
 * PWM main 3 trim value
 *
 * Set to normalized offset
 * 
 *
 * @group PWM Outputs
 * @decimal 2
 * @min -0.2
 * @max 0.2
 */
PARAM_DEFINE_FLOAT(PWM_MAIN_TRIM3, 0);

/**
 * PWM main 4 trim value
 *
 * Set to normalized offset
 * 
 *
 * @group PWM Outputs
 * @decimal 2
 * @min -0.2
 * @max 0.2
 */
PARAM_DEFINE_FLOAT(PWM_MAIN_TRIM4, 0);

/**
 * PWM main 5 trim value
 *
 * Set to normalized offset
 * 
 *
 * @group PWM Outputs
 * @decimal 2
 * @min -0.2
 * @max 0.2
 */
PARAM_DEFINE_FLOAT(PWM_MAIN_TRIM5, 0);

/**
 * PWM main 6 trim value
 *
 * Set to normalized offset
 * 
 *
 * @group PWM Outputs
 * @decimal 2
 * @min -0.2
 * @max 0.2
 */
PARAM_DEFINE_FLOAT(PWM_MAIN_TRIM6, 0);

/**
 * PWM main 7 trim value
 *
 * Set to normalized offset
 * 
 *
 * @group PWM Outputs
 * @decimal 2
 * @min -0.2
 * @max 0.2
 */
PARAM_DEFINE_FLOAT(PWM_MAIN_TRIM7, 0);

/**
 * PWM main 8 trim value
 *
 * Set to normalized offset
 * 
 *
 * @group PWM Outputs
 * @decimal 2
 * @min -0.2
 * @max 0.2
 */
PARAM_DEFINE_FLOAT(PWM_MAIN_TRIM8, 0);

/**
 * PWM main 9 trim value
 *
 * Set to normalized offset
 * 
 *
 * @group PWM Outputs
 * @decimal 2
 * @min -0.2
 * @max 0.2
 */
PARAM_DEFINE_FLOAT(PWM_MAIN_TRIM9, 0);

/**
 * PWM main 10 trim value
 *
 * Set to normalized offset
 * 
 *
 * @group PWM Outputs
 * @decimal 2
 * @min -0.2
 * @max 0.2
 */
PARAM_DEFINE_FLOAT(PWM_MAIN_TRIM10, 0);

/**
 * PWM main 11 trim value
 *
 * Set to normalized offset
 * 
 *
 * @group PWM Outputs
 * @decimal 2
 * @min -0.2
 * @max 0.2
 */
PARAM_DEFINE_FLOAT(PWM_MAIN_TRIM11, 0);

/**
 * PWM main 12 trim value
 *
 * Set to normalized offset
 * 
 *
 * @group PWM Outputs
 * @decimal 2
 * @min -0.2
 * @max 0.2
 */
PARAM_DEFINE_FLOAT(PWM_MAIN_TRIM12, 0);

/**
 * PWM main 13 trim value
 *
 * Set to normalized offset
 * 
 *
 * @group PWM Outputs
 * @decimal 2
 * @min -0.2
 * @max 0.2
 */
PARAM_DEFINE_FLOAT(PWM_MAIN_TRIM13, 0);

/**
 * PWM main 14 trim value
 *
 * Set to normalized offset
 * 
 *
 * @group PWM Outputs
 * @decimal 2
 * @min -0.2
 * @max 0.2
 */
PARAM_DEFINE_FLOAT(PWM_MAIN_TRIM14, 0);

/**
 * PWM main 1 reverse value
 *
 * Enable to invert the channel.
 * Warning: Use this parameter when connected to a servo only.
 * For a brushless motor, invert manually two phases to reverse the direction.
 * 
 *
 * @group PWM Outputs
 * @boolean
 */
PARAM_DEFINE_INT32(PWM_MAIN_REV1, 0);

/**
 * PWM main 2 reverse value
 *
 * Enable to invert the channel.
 * Warning: Use this parameter when connected to a servo only.
 * For a brushless motor, invert manually two phases to reverse the direction.
 * 
 *
 * @group PWM Outputs
 * @boolean
 */
PARAM_DEFINE_INT32(PWM_MAIN_REV2, 0);

/**
 * PWM main 3 reverse value
 *
 * Enable to invert the channel.
 * Warning: Use this parameter when connected to a servo only.
 * For a brushless motor, invert manually two phases to reverse the direction.
 * 
 *
 * @group PWM Outputs
 * @boolean
 */
PARAM_DEFINE_INT32(PWM_MAIN_REV3, 0);

/**
 * PWM main 4 reverse value
 *
 * Enable to invert the channel.
 * Warning: Use this parameter when connected to a servo only.
 * For a brushless motor, invert manually two phases to reverse the direction.
 * 
 *
 * @group PWM Outputs
 * @boolean
 */
PARAM_DEFINE_INT32(PWM_MAIN_REV4, 0);

/**
 * PWM main 5 reverse value
 *
 * Enable to invert the channel.
 * Warning: Use this parameter when connected to a servo only.
 * For a brushless motor, invert manually two phases to reverse the direction.
 * 
 *
 * @group PWM Outputs
 * @boolean
 */
PARAM_DEFINE_INT32(PWM_MAIN_REV5, 0);

/**
 * PWM main 6 reverse value
 *
 * Enable to invert the channel.
 * Warning: Use this parameter when connected to a servo only.
 * For a brushless motor, invert manually two phases to reverse the direction.
 * 
 *
 * @group PWM Outputs
 * @boolean
 */
PARAM_DEFINE_INT32(PWM_MAIN_REV6, 0);

/**
 * PWM main 7 reverse value
 *
 * Enable to invert the channel.
 * Warning: Use this parameter when connected to a servo only.
 * For a brushless motor, invert manually two phases to reverse the direction.
 * 
 *
 * @group PWM Outputs
 * @boolean
 */
PARAM_DEFINE_INT32(PWM_MAIN_REV7, 0);

/**
 * PWM main 8 reverse value
 *
 * Enable to invert the channel.
 * Warning: Use this parameter when connected to a servo only.
 * For a brushless motor, invert manually two phases to reverse the direction.
 * 
 *
 * @group PWM Outputs
 * @boolean
 */
PARAM_DEFINE_INT32(PWM_MAIN_REV8, 0);

/**
 * PWM main 9 reverse value
 *
 * Enable to invert the channel.
 * Warning: Use this parameter when connected to a servo only.
 * For a brushless motor, invert manually two phases to reverse the direction.
 * 
 *
 * @group PWM Outputs
 * @boolean
 */
PARAM_DEFINE_INT32(PWM_MAIN_REV9, 0);

/**
 * PWM main 10 reverse value
 *
 * Enable to invert the channel.
 * Warning: Use this parameter when connected to a servo only.
 * For a brushless motor, invert manually two phases to reverse the direction.
 * 
 *
 * @group PWM Outputs
 * @boolean
 */
PARAM_DEFINE_INT32(PWM_MAIN_REV10, 0);

/**
 * PWM main 11 reverse value
 *
 * Enable to invert the channel.
 * Warning: Use this parameter when connected to a servo only.
 * For a brushless motor, invert manually two phases to reverse the direction.
 * 
 *
 * @group PWM Outputs
 * @boolean
 */
PARAM_DEFINE_INT32(PWM_MAIN_REV11, 0);

/**
 * PWM main 12 reverse value
 *
 * Enable to invert the channel.
 * Warning: Use this parameter when connected to a servo only.
 * For a brushless motor, invert manually two phases to reverse the direction.
 * 
 *
 * @group PWM Outputs
 * @boolean
 */
PARAM_DEFINE_INT32(PWM_MAIN_REV12, 0);

/**
 * PWM main 13 reverse value
 *
 * Enable to invert the channel.
 * Warning: Use this parameter when connected to a servo only.
 * For a brushless motor, invert manually two phases to reverse the direction.
 * 
 *
 * @group PWM Outputs
 * @boolean
 */
PARAM_DEFINE_INT32(PWM_MAIN_REV13, 0);

/**
 * PWM main 14 reverse value
 *
 * Enable to invert the channel.
 * Warning: Use this parameter when connected to a servo only.
 * For a brushless motor, invert manually two phases to reverse the direction.
 * 
 *
 * @group PWM Outputs
 * @boolean
 */
PARAM_DEFINE_INT32(PWM_MAIN_REV14, 0);

/**
 * PWM main 1 rate
 *
 * Set the default PWM output frequency for the main outputs
 * 
 *
 * @group PWM Outputs
 * @min 0
 * @max 400
 * @unit Hz
 */
PARAM_DEFINE_INT32(PWM_MAIN_RATE1, 50);

/**
 * PWM channels used as ESC outputs
 *
 * Number representing the channels e.g. 134 - Channel 1, 3 and 4.
 * Global e.g. PWM_AUX_MIN/MAX/DISARM limits only apply to these channels.
 * 
 *
 * @group PWM Outputs
 * @min 0
 * @max 123456789
 */
PARAM_DEFINE_INT32(PWM_AUX_OUT, 0);

/**
 * PWM aux output frequency
 *
 * Set to 400 for industry default or 1000 for high frequency ESCs.
 * Set to 0 for Oneshot125.
 * 
 *
 * @group PWM Outputs
 * @min -1
 * @max 2000
 * @unit Hz
 */
PARAM_DEFINE_INT32(PWM_AUX_RATE, 50);

/**
 * PWM aux minimum value
 *
 * Set to 1000 for industry default or 900 to increase servo travel.
 * 
 *
 * @group PWM Outputs
 * @min 800
 * @max 1400
 * @unit us
 */
PARAM_DEFINE_INT32(PWM_AUX_MIN, 1000);

/**
 * PWM aux maximum value
 *
 * Set to 2000 for industry default or 2100 to increase servo travel.
 * 
 *
 * @group PWM Outputs
 * @min 1600
 * @max 2200
 * @unit us
 */
PARAM_DEFINE_INT32(PWM_AUX_MAX, 2000);

/**
 * PWM aux disarmed value
 *
 * This is the PWM pulse the autopilot is outputting if not armed.
 * The main use of this parameter is to silence ESCs when they are disarmed.
 * 
 *
 * @group PWM Outputs
 * @min 0
 * @max 2200
 * @unit us
 */
PARAM_DEFINE_INT32(PWM_AUX_DISARM, 1500);

/**
 * PWM aux 1 trim value
 *
 * Set to normalized offset
 * 
 *
 * @group PWM Outputs
 * @decimal 2
 * @min -0.2
 * @max 0.2
 */
PARAM_DEFINE_FLOAT(PWM_AUX_TRIM1, 0);

/**
 * PWM aux 2 trim value
 *
 * Set to normalized offset
 * 
 *
 * @group PWM Outputs
 * @decimal 2
 * @min -0.2
 * @max 0.2
 */
PARAM_DEFINE_FLOAT(PWM_AUX_TRIM2, 0);

/**
 * PWM aux 3 trim value
 *
 * Set to normalized offset
 * 
 *
 * @group PWM Outputs
 * @decimal 2
 * @min -0.2
 * @max 0.2
 */
PARAM_DEFINE_FLOAT(PWM_AUX_TRIM3, 0);

/**
 * PWM aux 4 trim value
 *
 * Set to normalized offset
 * 
 *
 * @group PWM Outputs
 * @decimal 2
 * @min -0.2
 * @max 0.2
 */
PARAM_DEFINE_FLOAT(PWM_AUX_TRIM4, 0);

/**
 * PWM aux 5 trim value
 *
 * Set to normalized offset
 * 
 *
 * @group PWM Outputs
 * @decimal 2
 * @min -0.2
 * @max 0.2
 */
PARAM_DEFINE_FLOAT(PWM_AUX_TRIM5, 0);

/**
 * PWM aux 6 trim value
 *
 * Set to normalized offset
 * 
 *
 * @group PWM Outputs
 * @decimal 2
 * @min -0.2
 * @max 0.2
 */
PARAM_DEFINE_FLOAT(PWM_AUX_TRIM6, 0);

/**
 * PWM aux 7 trim value
 *
 * Set to normalized offset
 * 
 *
 * @group PWM Outputs
 * @decimal 2
 * @min -0.2
 * @max 0.2
 */
PARAM_DEFINE_FLOAT(PWM_AUX_TRIM7, 0);

/**
 * PWM aux 8 trim value
 *
 * Set to normalized offset
 * 
 *
 * @group PWM Outputs
 * @decimal 2
 * @min -0.2
 * @max 0.2
 */
PARAM_DEFINE_FLOAT(PWM_AUX_TRIM8, 0);

/**
 * PWM aux 1 reverse value
 *
 * Enable to invert the channel.
 * Warning: Use this parameter when connected to a servo only.
 * For a brushless motor, invert manually two phases to reverse the direction.
 * 
 *
 * @group PWM Outputs
 * @boolean
 */
PARAM_DEFINE_INT32(PWM_AUX_REV1, 0);

/**
 * PWM aux 2 reverse value
 *
 * Enable to invert the channel.
 * Warning: Use this parameter when connected to a servo only.
 * For a brushless motor, invert manually two phases to reverse the direction.
 * 
 *
 * @group PWM Outputs
 * @boolean
 */
PARAM_DEFINE_INT32(PWM_AUX_REV2, 0);

/**
 * PWM aux 3 reverse value
 *
 * Enable to invert the channel.
 * Warning: Use this parameter when connected to a servo only.
 * For a brushless motor, invert manually two phases to reverse the direction.
 * 
 *
 * @group PWM Outputs
 * @boolean
 */
PARAM_DEFINE_INT32(PWM_AUX_REV3, 0);

/**
 * PWM aux 4 reverse value
 *
 * Enable to invert the channel.
 * Warning: Use this parameter when connected to a servo only.
 * For a brushless motor, invert manually two phases to reverse the direction.
 * 
 *
 * @group PWM Outputs
 * @boolean
 */
PARAM_DEFINE_INT32(PWM_AUX_REV4, 0);

/**
 * PWM aux 5 reverse value
 *
 * Enable to invert the channel.
 * Warning: Use this parameter when connected to a servo only.
 * For a brushless motor, invert manually two phases to reverse the direction.
 * 
 *
 * @group PWM Outputs
 * @boolean
 */
PARAM_DEFINE_INT32(PWM_AUX_REV5, 0);

/**
 * PWM aux 6 reverse value
 *
 * Enable to invert the channel.
 * Warning: Use this parameter when connected to a servo only.
 * For a brushless motor, invert manually two phases to reverse the direction.
 * 
 *
 * @group PWM Outputs
 * @boolean
 */
PARAM_DEFINE_INT32(PWM_AUX_REV6, 0);

/**
 * PWM aux 7 reverse value
 *
 * Enable to invert the channel.
 * Warning: Use this parameter when connected to a servo only.
 * For a brushless motor, invert manually two phases to reverse the direction.
 * 
 *
 * @group PWM Outputs
 * @boolean
 */
PARAM_DEFINE_INT32(PWM_AUX_REV7, 0);

/**
 * PWM aux 8 reverse value
 *
 * Enable to invert the channel.
 * Warning: Use this parameter when connected to a servo only.
 * For a brushless motor, invert manually two phases to reverse the direction.
 * 
 *
 * @group PWM Outputs
 * @boolean
 */
PARAM_DEFINE_INT32(PWM_AUX_REV8, 0);

/**
 * PWM aux 1 rate
 *
 * Set the default PWM output frequency for the aux outputs
 * 
 *
 * @group PWM Outputs
 * @min 0
 * @max 400
 * @unit Hz
 */
PARAM_DEFINE_INT32(PWM_AUX_RATE1, 50);

/**
 * PWM extra output frequency
 *
 * Set to 400 for industry default or 1000 for high frequency ESCs.
 * Set to 0 for Oneshot125.
 * 
 *
 * @group PWM Outputs
 * @min -1
 * @max 2000
 * @unit Hz
 */
PARAM_DEFINE_INT32(PWM_EXTRA_RATE, 50);

/**
 * PWM extra minimum value
 *
 * Set to 1000 for industry default or 900 to increase servo travel.
 * 
 *
 * @group PWM Outputs
 * @min 800
 * @max 1400
 * @unit us
 */
PARAM_DEFINE_INT32(PWM_EXTRA_MIN, 1000);

/**
 * PWM extra maximum value
 *
 * Set to 2000 for industry default or 2100 to increase servo travel.
 * 
 *
 * @group PWM Outputs
 * @min 1600
 * @max 2200
 * @unit us
 */
PARAM_DEFINE_INT32(PWM_EXTRA_MAX, 2000);

/**
 * PWM extra disarmed value
 *
 * This is the PWM pulse the autopilot is outputting if not armed.
 * The main use of this parameter is to silence ESCs when they are disarmed.
 * 
 *
 * @group PWM Outputs
 * @min 0
 * @max 2200
 * @unit us
 */
PARAM_DEFINE_INT32(PWM_EXTRA_DISARM, 1500);

/**
 * PWM extra 1 minimum value
 *
 * This is the minimum PWM pulse the autopilot is allowed to output.
 * When set to -1 the value for PWM_EXTRA_MIN will be used
 * 
 *
 * @group PWM Outputs
 * @min -1
 * @max 1600
 * @unit us
 */
PARAM_DEFINE_INT32(PWM_EXTRA_MIN1, -1);

/**
 * PWM extra 2 minimum value
 *
 * This is the minimum PWM pulse the autopilot is allowed to output.
 * When set to -1 the value for PWM_EXTRA_MIN will be used
 * 
 *
 * @group PWM Outputs
 * @min -1
 * @max 1600
 * @unit us
 */
PARAM_DEFINE_INT32(PWM_EXTRA_MIN2, -1);

/**
 * PWM extra 3 minimum value
 *
 * This is the minimum PWM pulse the autopilot is allowed to output.
 * When set to -1 the value for PWM_EXTRA_MIN will be used
 * 
 *
 * @group PWM Outputs
 * @min -1
 * @max 1600
 * @unit us
 */
PARAM_DEFINE_INT32(PWM_EXTRA_MIN3, -1);

/**
 * PWM extra 4 minimum value
 *
 * This is the minimum PWM pulse the autopilot is allowed to output.
 * When set to -1 the value for PWM_EXTRA_MIN will be used
 * 
 *
 * @group PWM Outputs
 * @min -1
 * @max 1600
 * @unit us
 */
PARAM_DEFINE_INT32(PWM_EXTRA_MIN4, -1);

/**
 * PWM extra 5 minimum value
 *
 * This is the minimum PWM pulse the autopilot is allowed to output.
 * When set to -1 the value for PWM_EXTRA_MIN will be used
 * 
 *
 * @group PWM Outputs
 * @min -1
 * @max 1600
 * @unit us
 */
PARAM_DEFINE_INT32(PWM_EXTRA_MIN5, -1);

/**
 * PWM extra 6 minimum value
 *
 * This is the minimum PWM pulse the autopilot is allowed to output.
 * When set to -1 the value for PWM_EXTRA_MIN will be used
 * 
 *
 * @group PWM Outputs
 * @min -1
 * @max 1600
 * @unit us
 */
PARAM_DEFINE_INT32(PWM_EXTRA_MIN6, -1);

/**
 * PWM extra 7 minimum value
 *
 * This is the minimum PWM pulse the autopilot is allowed to output.
 * When set to -1 the value for PWM_EXTRA_MIN will be used
 * 
 *
 * @group PWM Outputs
 * @min -1
 * @max 1600
 * @unit us
 */
PARAM_DEFINE_INT32(PWM_EXTRA_MIN7, -1);

/**
 * PWM extra 8 minimum value
 *
 * This is the minimum PWM pulse the autopilot is allowed to output.
 * When set to -1 the value for PWM_EXTRA_MIN will be used
 * 
 *
 * @group PWM Outputs
 * @min -1
 * @max 1600
 * @unit us
 */
PARAM_DEFINE_INT32(PWM_EXTRA_MIN8, -1);

/**
 * PWM extra 1 maximum value
 *
 * This is the maximum PWM pulse the autopilot is allowed to output.
 * When set to -1 the value for PWM_EXTRA_MAX will be used
 * 
 *
 * @group PWM Outputs
 * @min -1
 * @max 2150
 * @unit us
 */
PARAM_DEFINE_INT32(PWM_EXTRA_MAX1, -1);

/**
 * PWM extra 2 maximum value
 *
 * This is the maximum PWM pulse the autopilot is allowed to output.
 * When set to -1 the value for PWM_EXTRA_MAX will be used
 * 
 *
 * @group PWM Outputs
 * @min -1
 * @max 2150
 * @unit us
 */
PARAM_DEFINE_INT32(PWM_EXTRA_MAX2, -1);

/**
 * PWM extra 3 maximum value
 *
 * This is the maximum PWM pulse the autopilot is allowed to output.
 * When set to -1 the value for PWM_EXTRA_MAX will be used
 * 
 *
 * @group PWM Outputs
 * @min -1
 * @max 2150
 * @unit us
 */
PARAM_DEFINE_INT32(PWM_EXTRA_MAX3, -1);

/**
 * PWM extra 4 maximum value
 *
 * This is the maximum PWM pulse the autopilot is allowed to output.
 * When set to -1 the value for PWM_EXTRA_MAX will be used
 * 
 *
 * @group PWM Outputs
 * @min -1
 * @max 2150
 * @unit us
 */
PARAM_DEFINE_INT32(PWM_EXTRA_MAX4, -1);

/**
 * PWM extra 5 maximum value
 *
 * This is the maximum PWM pulse the autopilot is allowed to output.
 * When set to -1 the value for PWM_EXTRA_MAX will be used
 * 
 *
 * @group PWM Outputs
 * @min -1
 * @max 2150
 * @unit us
 */
PARAM_DEFINE_INT32(PWM_EXTRA_MAX5, -1);

/**
 * PWM extra 6 maximum value
 *
 * This is the maximum PWM pulse the autopilot is allowed to output.
 * When set to -1 the value for PWM_EXTRA_MAX will be used
 * 
 *
 * @group PWM Outputs
 * @min -1
 * @max 2150
 * @unit us
 */
PARAM_DEFINE_INT32(PWM_EXTRA_MAX6, -1);

/**
 * PWM extra 7 maximum value
 *
 * This is the maximum PWM pulse the autopilot is allowed to output.
 * When set to -1 the value for PWM_EXTRA_MAX will be used
 * 
 *
 * @group PWM Outputs
 * @min -1
 * @max 2150
 * @unit us
 */
PARAM_DEFINE_INT32(PWM_EXTRA_MAX7, -1);

/**
 * PWM extra 8 maximum value
 *
 * This is the maximum PWM pulse the autopilot is allowed to output.
 * When set to -1 the value for PWM_EXTRA_MAX will be used
 * 
 *
 * @group PWM Outputs
 * @min -1
 * @max 2150
 * @unit us
 */
PARAM_DEFINE_INT32(PWM_EXTRA_MAX8, -1);

/**
 * PWM extra 1 failsafe value
 *
 * This is the PWM pulse the autopilot is outputting if in failsafe mode.
 * When set to -1 the value is set automatically depending if the actuator
 * is a motor (900us) or a servo (1500us)
 * 
 *
 * @group PWM Outputs
 * @min 0
 * @max 2150
 * @unit us
 */
PARAM_DEFINE_INT32(PWM_EXTRA_FAIL1, 0);

/**
 * PWM extra 2 failsafe value
 *
 * This is the PWM pulse the autopilot is outputting if in failsafe mode.
 * When set to -1 the value is set automatically depending if the actuator
 * is a motor (900us) or a servo (1500us)
 * 
 *
 * @group PWM Outputs
 * @min 0
 * @max 2150
 * @unit us
 */
PARAM_DEFINE_INT32(PWM_EXTRA_FAIL2, 0);

/**
 * PWM extra 3 failsafe value
 *
 * This is the PWM pulse the autopilot is outputting if in failsafe mode.
 * When set to -1 the value is set automatically depending if the actuator
 * is a motor (900us) or a servo (1500us)
 * 
 *
 * @group PWM Outputs
 * @min 0
 * @max 2150
 * @unit us
 */
PARAM_DEFINE_INT32(PWM_EXTRA_FAIL3, 0);

/**
 * PWM extra 4 failsafe value
 *
 * This is the PWM pulse the autopilot is outputting if in failsafe mode.
 * When set to -1 the value is set automatically depending if the actuator
 * is a motor (900us) or a servo (1500us)
 * 
 *
 * @group PWM Outputs
 * @min 0
 * @max 2150
 * @unit us
 */
PARAM_DEFINE_INT32(PWM_EXTRA_FAIL4, 0);

/**
 * PWM extra 5 failsafe value
 *
 * This is the PWM pulse the autopilot is outputting if in failsafe mode.
 * When set to -1 the value is set automatically depending if the actuator
 * is a motor (900us) or a servo (1500us)
 * 
 *
 * @group PWM Outputs
 * @min 0
 * @max 2150
 * @unit us
 */
PARAM_DEFINE_INT32(PWM_EXTRA_FAIL5, 0);

/**
 * PWM extra 6 failsafe value
 *
 * This is the PWM pulse the autopilot is outputting if in failsafe mode.
 * When set to -1 the value is set automatically depending if the actuator
 * is a motor (900us) or a servo (1500us)
 * 
 *
 * @group PWM Outputs
 * @min 0
 * @max 2150
 * @unit us
 */
PARAM_DEFINE_INT32(PWM_EXTRA_FAIL6, 0);

/**
 * PWM extra 7 failsafe value
 *
 * This is the PWM pulse the autopilot is outputting if in failsafe mode.
 * When set to -1 the value is set automatically depending if the actuator
 * is a motor (900us) or a servo (1500us)
 * 
 *
 * @group PWM Outputs
 * @min 0
 * @max 2150
 * @unit us
 */
PARAM_DEFINE_INT32(PWM_EXTRA_FAIL7, 0);

/**
 * PWM extra 8 failsafe value
 *
 * This is the PWM pulse the autopilot is outputting if in failsafe mode.
 * When set to -1 the value is set automatically depending if the actuator
 * is a motor (900us) or a servo (1500us)
 * 
 *
 * @group PWM Outputs
 * @min 0
 * @max 2150
 * @unit us
 */
PARAM_DEFINE_INT32(PWM_EXTRA_FAIL8, 0);

/**
 * PWM extra 1 disarmed value
 *
 * This is the PWM pulse the autopilot is outputting if not armed.
 * When set to -1 the value for PWM_EXTRA_DISARM will be used
 * 
 *
 * @group PWM Outputs
 * @min -1
 * @max 2150
 * @unit us
 */
PARAM_DEFINE_INT32(PWM_EXTRA_DIS1, -1);

/**
 * PWM extra 2 disarmed value
 *
 * This is the PWM pulse the autopilot is outputting if not armed.
 * When set to -1 the value for PWM_EXTRA_DISARM will be used
 * 
 *
 * @group PWM Outputs
 * @min -1
 * @max 2150
 * @unit us
 */
PARAM_DEFINE_INT32(PWM_EXTRA_DIS2, -1);

/**
 * PWM extra 3 disarmed value
 *
 * This is the PWM pulse the autopilot is outputting if not armed.
 * When set to -1 the value for PWM_EXTRA_DISARM will be used
 * 
 *
 * @group PWM Outputs
 * @min -1
 * @max 2150
 * @unit us
 */
PARAM_DEFINE_INT32(PWM_EXTRA_DIS3, -1);

/**
 * PWM extra 4 disarmed value
 *
 * This is the PWM pulse the autopilot is outputting if not armed.
 * When set to -1 the value for PWM_EXTRA_DISARM will be used
 * 
 *
 * @group PWM Outputs
 * @min -1
 * @max 2150
 * @unit us
 */
PARAM_DEFINE_INT32(PWM_EXTRA_DIS4, -1);

/**
 * PWM extra 5 disarmed value
 *
 * This is the PWM pulse the autopilot is outputting if not armed.
 * When set to -1 the value for PWM_EXTRA_DISARM will be used
 * 
 *
 * @group PWM Outputs
 * @min -1
 * @max 2150
 * @unit us
 */
PARAM_DEFINE_INT32(PWM_EXTRA_DIS5, -1);

/**
 * PWM extra 6 disarmed value
 *
 * This is the PWM pulse the autopilot is outputting if not armed.
 * When set to -1 the value for PWM_EXTRA_DISARM will be used
 * 
 *
 * @group PWM Outputs
 * @min -1
 * @max 2150
 * @unit us
 */
PARAM_DEFINE_INT32(PWM_EXTRA_DIS6, -1);

/**
 * PWM extra 7 disarmed value
 *
 * This is the PWM pulse the autopilot is outputting if not armed.
 * When set to -1 the value for PWM_EXTRA_DISARM will be used
 * 
 *
 * @group PWM Outputs
 * @min -1
 * @max 2150
 * @unit us
 */
PARAM_DEFINE_INT32(PWM_EXTRA_DIS7, -1);

/**
 * PWM extra 8 disarmed value
 *
 * This is the PWM pulse the autopilot is outputting if not armed.
 * When set to -1 the value for PWM_EXTRA_DISARM will be used
 * 
 *
 * @group PWM Outputs
 * @min -1
 * @max 2150
 * @unit us
 */
PARAM_DEFINE_INT32(PWM_EXTRA_DIS8, -1);

/**
 * PWM extra 1 trim value
 *
 * Set to normalized offset
 * 
 *
 * @group PWM Outputs
 * @decimal 2
 * @min -0.2
 * @max 0.2
 */
PARAM_DEFINE_FLOAT(PWM_EXTRA_TRIM1, 0);

/**
 * PWM extra 2 trim value
 *
 * Set to normalized offset
 * 
 *
 * @group PWM Outputs
 * @decimal 2
 * @min -0.2
 * @max 0.2
 */
PARAM_DEFINE_FLOAT(PWM_EXTRA_TRIM2, 0);

/**
 * PWM extra 3 trim value
 *
 * Set to normalized offset
 * 
 *
 * @group PWM Outputs
 * @decimal 2
 * @min -0.2
 * @max 0.2
 */
PARAM_DEFINE_FLOAT(PWM_EXTRA_TRIM3, 0);

/**
 * PWM extra 4 trim value
 *
 * Set to normalized offset
 * 
 *
 * @group PWM Outputs
 * @decimal 2
 * @min -0.2
 * @max 0.2
 */
PARAM_DEFINE_FLOAT(PWM_EXTRA_TRIM4, 0);

/**
 * PWM extra 5 trim value
 *
 * Set to normalized offset
 * 
 *
 * @group PWM Outputs
 * @decimal 2
 * @min -0.2
 * @max 0.2
 */
PARAM_DEFINE_FLOAT(PWM_EXTRA_TRIM5, 0);

/**
 * PWM extra 6 trim value
 *
 * Set to normalized offset
 * 
 *
 * @group PWM Outputs
 * @decimal 2
 * @min -0.2
 * @max 0.2
 */
PARAM_DEFINE_FLOAT(PWM_EXTRA_TRIM6, 0);

/**
 * PWM extra 7 trim value
 *
 * Set to normalized offset
 * 
 *
 * @group PWM Outputs
 * @decimal 2
 * @min -0.2
 * @max 0.2
 */
PARAM_DEFINE_FLOAT(PWM_EXTRA_TRIM7, 0);

/**
 * PWM extra 8 trim value
 *
 * Set to normalized offset
 * 
 *
 * @group PWM Outputs
 * @decimal 2
 * @min -0.2
 * @max 0.2
 */
PARAM_DEFINE_FLOAT(PWM_EXTRA_TRIM8, 0);

/**
 * PWM extra 1 reverse value
 *
 * Enable to invert the channel.
 * Warning: Use this parameter when connected to a servo only.
 * For a brushless motor, invert manually two phases to reverse the direction.
 * 
 *
 * @group PWM Outputs
 * @boolean
 */
PARAM_DEFINE_INT32(PWM_EXTRA_REV1, 0);

/**
 * PWM extra 2 reverse value
 *
 * Enable to invert the channel.
 * Warning: Use this parameter when connected to a servo only.
 * For a brushless motor, invert manually two phases to reverse the direction.
 * 
 *
 * @group PWM Outputs
 * @boolean
 */
PARAM_DEFINE_INT32(PWM_EXTRA_REV2, 0);

/**
 * PWM extra 3 reverse value
 *
 * Enable to invert the channel.
 * Warning: Use this parameter when connected to a servo only.
 * For a brushless motor, invert manually two phases to reverse the direction.
 * 
 *
 * @group PWM Outputs
 * @boolean
 */
PARAM_DEFINE_INT32(PWM_EXTRA_REV3, 0);

/**
 * PWM extra 4 reverse value
 *
 * Enable to invert the channel.
 * Warning: Use this parameter when connected to a servo only.
 * For a brushless motor, invert manually two phases to reverse the direction.
 * 
 *
 * @group PWM Outputs
 * @boolean
 */
PARAM_DEFINE_INT32(PWM_EXTRA_REV4, 0);

/**
 * PWM extra 5 reverse value
 *
 * Enable to invert the channel.
 * Warning: Use this parameter when connected to a servo only.
 * For a brushless motor, invert manually two phases to reverse the direction.
 * 
 *
 * @group PWM Outputs
 * @boolean
 */
PARAM_DEFINE_INT32(PWM_EXTRA_REV5, 0);

/**
 * PWM extra 6 reverse value
 *
 * Enable to invert the channel.
 * Warning: Use this parameter when connected to a servo only.
 * For a brushless motor, invert manually two phases to reverse the direction.
 * 
 *
 * @group PWM Outputs
 * @boolean
 */
PARAM_DEFINE_INT32(PWM_EXTRA_REV6, 0);

/**
 * PWM extra 7 reverse value
 *
 * Enable to invert the channel.
 * Warning: Use this parameter when connected to a servo only.
 * For a brushless motor, invert manually two phases to reverse the direction.
 * 
 *
 * @group PWM Outputs
 * @boolean
 */
PARAM_DEFINE_INT32(PWM_EXTRA_REV7, 0);

/**
 * PWM extra 8 reverse value
 *
 * Enable to invert the channel.
 * Warning: Use this parameter when connected to a servo only.
 * For a brushless motor, invert manually two phases to reverse the direction.
 * 
 *
 * @group PWM Outputs
 * @boolean
 */
PARAM_DEFINE_INT32(PWM_EXTRA_REV8, 0);

/**
 * PWM extra 1 rate
 *
 * Set the default PWM output frequency for the main outputs
 * 
 *
 * @group PWM Outputs
 * @min 0
 * @max 400
 * @unit Hz
 */
PARAM_DEFINE_INT32(PWM_EXTRA_RATE1, 50);

/**
 * Distance Sensor Rotation
 *
 * Distance Sensor Rotation as MAV_SENSOR_ORIENTATION enum
 * 
 *
 * @group Sensors
 * @value 25 ROTATION_DOWNWARD_FACING
 * @value 24 ROTATION_UPWARD_FACING
 * @value 12 ROTATION_BACKWARD_FACING
 * @value 0 ROTATION_FORWARD_FACING
 * @value 6 ROTATION_LEFT_FACING
 * @value 2 ROTATION_RIGHT_FACING
 * @reboot_required True
 */
PARAM_DEFINE_INT32(SENS_CM8JL65_R_0, 25);

/**
 * PCA9685 Output Channel 1 Output Function
 *
 * Select what should be output on PCA9685 Output Channel 1.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 */
PARAM_DEFINE_INT32(PCA9685_FUNC1, 0);

/**
 * PCA9685 Output Channel 2 Output Function
 *
 * Select what should be output on PCA9685 Output Channel 2.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 */
PARAM_DEFINE_INT32(PCA9685_FUNC2, 0);

/**
 * PCA9685 Output Channel 3 Output Function
 *
 * Select what should be output on PCA9685 Output Channel 3.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 */
PARAM_DEFINE_INT32(PCA9685_FUNC3, 0);

/**
 * PCA9685 Output Channel 4 Output Function
 *
 * Select what should be output on PCA9685 Output Channel 4.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 */
PARAM_DEFINE_INT32(PCA9685_FUNC4, 0);

/**
 * PCA9685 Output Channel 5 Output Function
 *
 * Select what should be output on PCA9685 Output Channel 5.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 */
PARAM_DEFINE_INT32(PCA9685_FUNC5, 0);

/**
 * PCA9685 Output Channel 6 Output Function
 *
 * Select what should be output on PCA9685 Output Channel 6.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 */
PARAM_DEFINE_INT32(PCA9685_FUNC6, 0);

/**
 * PCA9685 Output Channel 7 Output Function
 *
 * Select what should be output on PCA9685 Output Channel 7.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 */
PARAM_DEFINE_INT32(PCA9685_FUNC7, 0);

/**
 * PCA9685 Output Channel 8 Output Function
 *
 * Select what should be output on PCA9685 Output Channel 8.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 */
PARAM_DEFINE_INT32(PCA9685_FUNC8, 0);

/**
 * PCA9685 Output Channel 9 Output Function
 *
 * Select what should be output on PCA9685 Output Channel 9.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 */
PARAM_DEFINE_INT32(PCA9685_FUNC9, 0);

/**
 * PCA9685 Output Channel 10 Output Function
 *
 * Select what should be output on PCA9685 Output Channel 10.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 */
PARAM_DEFINE_INT32(PCA9685_FUNC10, 0);

/**
 * PCA9685 Output Channel 11 Output Function
 *
 * Select what should be output on PCA9685 Output Channel 11.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 */
PARAM_DEFINE_INT32(PCA9685_FUNC11, 0);

/**
 * PCA9685 Output Channel 12 Output Function
 *
 * Select what should be output on PCA9685 Output Channel 12.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 */
PARAM_DEFINE_INT32(PCA9685_FUNC12, 0);

/**
 * PCA9685 Output Channel 13 Output Function
 *
 * Select what should be output on PCA9685 Output Channel 13.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 */
PARAM_DEFINE_INT32(PCA9685_FUNC13, 0);

/**
 * PCA9685 Output Channel 14 Output Function
 *
 * Select what should be output on PCA9685 Output Channel 14.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 */
PARAM_DEFINE_INT32(PCA9685_FUNC14, 0);

/**
 * PCA9685 Output Channel 15 Output Function
 *
 * Select what should be output on PCA9685 Output Channel 15.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 */
PARAM_DEFINE_INT32(PCA9685_FUNC15, 0);

/**
 * PCA9685 Output Channel 16 Output Function
 *
 * Select what should be output on PCA9685 Output Channel 16.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 */
PARAM_DEFINE_INT32(PCA9685_FUNC16, 0);

/**
 * PCA9685 Output Channel 1 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 800
 * @max 2200
 */
PARAM_DEFINE_INT32(PCA9685_DIS1, 900);

/**
 * PCA9685 Output Channel 2 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 800
 * @max 2200
 */
PARAM_DEFINE_INT32(PCA9685_DIS2, 900);

/**
 * PCA9685 Output Channel 3 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 800
 * @max 2200
 */
PARAM_DEFINE_INT32(PCA9685_DIS3, 900);

/**
 * PCA9685 Output Channel 4 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 800
 * @max 2200
 */
PARAM_DEFINE_INT32(PCA9685_DIS4, 900);

/**
 * PCA9685 Output Channel 5 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 800
 * @max 2200
 */
PARAM_DEFINE_INT32(PCA9685_DIS5, 900);

/**
 * PCA9685 Output Channel 6 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 800
 * @max 2200
 */
PARAM_DEFINE_INT32(PCA9685_DIS6, 900);

/**
 * PCA9685 Output Channel 7 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 800
 * @max 2200
 */
PARAM_DEFINE_INT32(PCA9685_DIS7, 900);

/**
 * PCA9685 Output Channel 8 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 800
 * @max 2200
 */
PARAM_DEFINE_INT32(PCA9685_DIS8, 900);

/**
 * PCA9685 Output Channel 9 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 800
 * @max 2200
 */
PARAM_DEFINE_INT32(PCA9685_DIS9, 900);

/**
 * PCA9685 Output Channel 10 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 800
 * @max 2200
 */
PARAM_DEFINE_INT32(PCA9685_DIS10, 900);

/**
 * PCA9685 Output Channel 11 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 800
 * @max 2200
 */
PARAM_DEFINE_INT32(PCA9685_DIS11, 900);

/**
 * PCA9685 Output Channel 12 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 800
 * @max 2200
 */
PARAM_DEFINE_INT32(PCA9685_DIS12, 900);

/**
 * PCA9685 Output Channel 13 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 800
 * @max 2200
 */
PARAM_DEFINE_INT32(PCA9685_DIS13, 900);

/**
 * PCA9685 Output Channel 14 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 800
 * @max 2200
 */
PARAM_DEFINE_INT32(PCA9685_DIS14, 900);

/**
 * PCA9685 Output Channel 15 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 800
 * @max 2200
 */
PARAM_DEFINE_INT32(PCA9685_DIS15, 900);

/**
 * PCA9685 Output Channel 16 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 800
 * @max 2200
 */
PARAM_DEFINE_INT32(PCA9685_DIS16, 900);

/**
 * PCA9685 Output Channel 1 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 800
 * @max 1400
 */
PARAM_DEFINE_INT32(PCA9685_MIN1, 1000);

/**
 * PCA9685 Output Channel 2 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 800
 * @max 1400
 */
PARAM_DEFINE_INT32(PCA9685_MIN2, 1000);

/**
 * PCA9685 Output Channel 3 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 800
 * @max 1400
 */
PARAM_DEFINE_INT32(PCA9685_MIN3, 1000);

/**
 * PCA9685 Output Channel 4 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 800
 * @max 1400
 */
PARAM_DEFINE_INT32(PCA9685_MIN4, 1000);

/**
 * PCA9685 Output Channel 5 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 800
 * @max 1400
 */
PARAM_DEFINE_INT32(PCA9685_MIN5, 1000);

/**
 * PCA9685 Output Channel 6 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 800
 * @max 1400
 */
PARAM_DEFINE_INT32(PCA9685_MIN6, 1000);

/**
 * PCA9685 Output Channel 7 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 800
 * @max 1400
 */
PARAM_DEFINE_INT32(PCA9685_MIN7, 1000);

/**
 * PCA9685 Output Channel 8 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 800
 * @max 1400
 */
PARAM_DEFINE_INT32(PCA9685_MIN8, 1000);

/**
 * PCA9685 Output Channel 9 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 800
 * @max 1400
 */
PARAM_DEFINE_INT32(PCA9685_MIN9, 1000);

/**
 * PCA9685 Output Channel 10 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 800
 * @max 1400
 */
PARAM_DEFINE_INT32(PCA9685_MIN10, 1000);

/**
 * PCA9685 Output Channel 11 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 800
 * @max 1400
 */
PARAM_DEFINE_INT32(PCA9685_MIN11, 1000);

/**
 * PCA9685 Output Channel 12 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 800
 * @max 1400
 */
PARAM_DEFINE_INT32(PCA9685_MIN12, 1000);

/**
 * PCA9685 Output Channel 13 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 800
 * @max 1400
 */
PARAM_DEFINE_INT32(PCA9685_MIN13, 1000);

/**
 * PCA9685 Output Channel 14 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 800
 * @max 1400
 */
PARAM_DEFINE_INT32(PCA9685_MIN14, 1000);

/**
 * PCA9685 Output Channel 15 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 800
 * @max 1400
 */
PARAM_DEFINE_INT32(PCA9685_MIN15, 1000);

/**
 * PCA9685 Output Channel 16 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 800
 * @max 1400
 */
PARAM_DEFINE_INT32(PCA9685_MIN16, 1000);

/**
 * PCA9685 Output Channel 1 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 1600
 * @max 2200
 */
PARAM_DEFINE_INT32(PCA9685_MAX1, 2000);

/**
 * PCA9685 Output Channel 2 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 1600
 * @max 2200
 */
PARAM_DEFINE_INT32(PCA9685_MAX2, 2000);

/**
 * PCA9685 Output Channel 3 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 1600
 * @max 2200
 */
PARAM_DEFINE_INT32(PCA9685_MAX3, 2000);

/**
 * PCA9685 Output Channel 4 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 1600
 * @max 2200
 */
PARAM_DEFINE_INT32(PCA9685_MAX4, 2000);

/**
 * PCA9685 Output Channel 5 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 1600
 * @max 2200
 */
PARAM_DEFINE_INT32(PCA9685_MAX5, 2000);

/**
 * PCA9685 Output Channel 6 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 1600
 * @max 2200
 */
PARAM_DEFINE_INT32(PCA9685_MAX6, 2000);

/**
 * PCA9685 Output Channel 7 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 1600
 * @max 2200
 */
PARAM_DEFINE_INT32(PCA9685_MAX7, 2000);

/**
 * PCA9685 Output Channel 8 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 1600
 * @max 2200
 */
PARAM_DEFINE_INT32(PCA9685_MAX8, 2000);

/**
 * PCA9685 Output Channel 9 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 1600
 * @max 2200
 */
PARAM_DEFINE_INT32(PCA9685_MAX9, 2000);

/**
 * PCA9685 Output Channel 10 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 1600
 * @max 2200
 */
PARAM_DEFINE_INT32(PCA9685_MAX10, 2000);

/**
 * PCA9685 Output Channel 11 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 1600
 * @max 2200
 */
PARAM_DEFINE_INT32(PCA9685_MAX11, 2000);

/**
 * PCA9685 Output Channel 12 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 1600
 * @max 2200
 */
PARAM_DEFINE_INT32(PCA9685_MAX12, 2000);

/**
 * PCA9685 Output Channel 13 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 1600
 * @max 2200
 */
PARAM_DEFINE_INT32(PCA9685_MAX13, 2000);

/**
 * PCA9685 Output Channel 14 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 1600
 * @max 2200
 */
PARAM_DEFINE_INT32(PCA9685_MAX14, 2000);

/**
 * PCA9685 Output Channel 15 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 1600
 * @max 2200
 */
PARAM_DEFINE_INT32(PCA9685_MAX15, 2000);

/**
 * PCA9685 Output Channel 16 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 1600
 * @max 2200
 */
PARAM_DEFINE_INT32(PCA9685_MAX16, 2000);

/**
 * PCA9685 Output Channel 1 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see PCA9685_FUNC1).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 2200
 */
PARAM_DEFINE_INT32(PCA9685_FAIL1, -1);

/**
 * PCA9685 Output Channel 2 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see PCA9685_FUNC2).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 2200
 */
PARAM_DEFINE_INT32(PCA9685_FAIL2, -1);

/**
 * PCA9685 Output Channel 3 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see PCA9685_FUNC3).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 2200
 */
PARAM_DEFINE_INT32(PCA9685_FAIL3, -1);

/**
 * PCA9685 Output Channel 4 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see PCA9685_FUNC4).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 2200
 */
PARAM_DEFINE_INT32(PCA9685_FAIL4, -1);

/**
 * PCA9685 Output Channel 5 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see PCA9685_FUNC5).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 2200
 */
PARAM_DEFINE_INT32(PCA9685_FAIL5, -1);

/**
 * PCA9685 Output Channel 6 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see PCA9685_FUNC6).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 2200
 */
PARAM_DEFINE_INT32(PCA9685_FAIL6, -1);

/**
 * PCA9685 Output Channel 7 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see PCA9685_FUNC7).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 2200
 */
PARAM_DEFINE_INT32(PCA9685_FAIL7, -1);

/**
 * PCA9685 Output Channel 8 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see PCA9685_FUNC8).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 2200
 */
PARAM_DEFINE_INT32(PCA9685_FAIL8, -1);

/**
 * PCA9685 Output Channel 9 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see PCA9685_FUNC9).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 2200
 */
PARAM_DEFINE_INT32(PCA9685_FAIL9, -1);

/**
 * PCA9685 Output Channel 10 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see PCA9685_FUNC10).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 2200
 */
PARAM_DEFINE_INT32(PCA9685_FAIL10, -1);

/**
 * PCA9685 Output Channel 11 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see PCA9685_FUNC11).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 2200
 */
PARAM_DEFINE_INT32(PCA9685_FAIL11, -1);

/**
 * PCA9685 Output Channel 12 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see PCA9685_FUNC12).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 2200
 */
PARAM_DEFINE_INT32(PCA9685_FAIL12, -1);

/**
 * PCA9685 Output Channel 13 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see PCA9685_FUNC13).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 2200
 */
PARAM_DEFINE_INT32(PCA9685_FAIL13, -1);

/**
 * PCA9685 Output Channel 14 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see PCA9685_FUNC14).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 2200
 */
PARAM_DEFINE_INT32(PCA9685_FAIL14, -1);

/**
 * PCA9685 Output Channel 15 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see PCA9685_FUNC15).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 2200
 */
PARAM_DEFINE_INT32(PCA9685_FAIL15, -1);

/**
 * PCA9685 Output Channel 16 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see PCA9685_FUNC16).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 2200
 */
PARAM_DEFINE_INT32(PCA9685_FAIL16, -1);

/**
 * Reverse Output Range for PCA9685 Output
 *
 * Allows to reverse the output range for each channel.
 * Note: this is only useful for servos.
 * 
 *
 * @group Actuator Outputs
 * @bit 0 PCA9685 Output Channel 1
 * @bit 1 PCA9685 Output Channel 2
 * @bit 2 PCA9685 Output Channel 3
 * @bit 3 PCA9685 Output Channel 4
 * @bit 4 PCA9685 Output Channel 5
 * @bit 5 PCA9685 Output Channel 6
 * @bit 6 PCA9685 Output Channel 7
 * @bit 7 PCA9685 Output Channel 8
 * @bit 8 PCA9685 Output Channel 9
 * @bit 9 PCA9685 Output Channel 10
 * @bit 10 PCA9685 Output Channel 11
 * @bit 11 PCA9685 Output Channel 12
 * @bit 12 PCA9685 Output Channel 13
 * @bit 13 PCA9685 Output Channel 14
 * @bit 14 PCA9685 Output Channel 15
 * @bit 15 PCA9685 Output Channel 16
 * @min 0
 * @max 65535
 */
PARAM_DEFINE_INT32(PCA9685_REV, 0);

/**
 * Output Protocol Configuration for PWM Main 1-4
 *
 * Select which Output Protocol to use for outputs PWM Main 1-4.
 * 
 * Custom PWM rates can be used by directly setting any value >0.
 * 
 *
 * @group Actuator Outputs
 * @value -1 OneShot
 * @value 50 PWM50
 * @value 100 PWM100
 * @value 200 PWM200
 * @value 400 PWM400
 * @reboot_required True
 */
PARAM_DEFINE_INT32(PWM_MAIN_TIM0, 400);

/**
 * Output Protocol Configuration for PWM Main 5-6
 *
 * Select which Output Protocol to use for outputs PWM Main 5-6.
 * 
 * Custom PWM rates can be used by directly setting any value >0.
 * 
 *
 * @group Actuator Outputs
 * @value -1 OneShot
 * @value 50 PWM50
 * @value 100 PWM100
 * @value 200 PWM200
 * @value 400 PWM400
 * @reboot_required True
 */
PARAM_DEFINE_INT32(PWM_MAIN_TIM1, 400);

/**
 * PWM Main 1 Output Function
 *
 * Select what should be output on PWM Main 1.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 * @value 2000 Camera Trigger
 * @value 2032 Camera Capture
 * @value 2064 PPS Input
 */
PARAM_DEFINE_INT32(PWM_MAIN_FUNC1, 0);

/**
 * PWM Main 2 Output Function
 *
 * Select what should be output on PWM Main 2.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 * @value 2000 Camera Trigger
 * @value 2032 Camera Capture
 * @value 2064 PPS Input
 */
PARAM_DEFINE_INT32(PWM_MAIN_FUNC2, 0);

/**
 * PWM Main 3 Output Function
 *
 * Select what should be output on PWM Main 3.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 * @value 2000 Camera Trigger
 * @value 2032 Camera Capture
 * @value 2064 PPS Input
 */
PARAM_DEFINE_INT32(PWM_MAIN_FUNC3, 0);

/**
 * PWM Main 4 Output Function
 *
 * Select what should be output on PWM Main 4.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 * @value 2000 Camera Trigger
 * @value 2032 Camera Capture
 * @value 2064 PPS Input
 */
PARAM_DEFINE_INT32(PWM_MAIN_FUNC4, 0);

/**
 * PWM Main 5 Output Function
 *
 * Select what should be output on PWM Main 5.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 * @value 2000 Camera Trigger
 * @value 2032 Camera Capture
 * @value 2064 PPS Input
 */
PARAM_DEFINE_INT32(PWM_MAIN_FUNC5, 0);

/**
 * PWM Main 6 Output Function
 *
 * Select what should be output on PWM Main 6.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 * @value 2000 Camera Trigger
 * @value 2032 Camera Capture
 * @value 2064 PPS Input
 */
PARAM_DEFINE_INT32(PWM_MAIN_FUNC6, 0);

/**
 * PWM Main 1 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 800
 * @max 2200
 */
PARAM_DEFINE_INT32(PWM_MAIN_DIS1, 900);

/**
 * PWM Main 2 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 800
 * @max 2200
 */
PARAM_DEFINE_INT32(PWM_MAIN_DIS2, 900);

/**
 * PWM Main 3 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 800
 * @max 2200
 */
PARAM_DEFINE_INT32(PWM_MAIN_DIS3, 900);

/**
 * PWM Main 4 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 800
 * @max 2200
 */
PARAM_DEFINE_INT32(PWM_MAIN_DIS4, 900);

/**
 * PWM Main 5 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 800
 * @max 2200
 */
PARAM_DEFINE_INT32(PWM_MAIN_DIS5, 900);

/**
 * PWM Main 6 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 800
 * @max 2200
 */
PARAM_DEFINE_INT32(PWM_MAIN_DIS6, 900);

/**
 * PWM Main 1 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 800
 * @max 1400
 */
PARAM_DEFINE_INT32(PWM_MAIN_MIN1, 1000);

/**
 * PWM Main 2 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 800
 * @max 1400
 */
PARAM_DEFINE_INT32(PWM_MAIN_MIN2, 1000);

/**
 * PWM Main 3 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 800
 * @max 1400
 */
PARAM_DEFINE_INT32(PWM_MAIN_MIN3, 1000);

/**
 * PWM Main 4 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 800
 * @max 1400
 */
PARAM_DEFINE_INT32(PWM_MAIN_MIN4, 1000);

/**
 * PWM Main 5 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 800
 * @max 1400
 */
PARAM_DEFINE_INT32(PWM_MAIN_MIN5, 1000);

/**
 * PWM Main 6 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 800
 * @max 1400
 */
PARAM_DEFINE_INT32(PWM_MAIN_MIN6, 1000);

/**
 * PWM Main 1 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 1600
 * @max 2200
 */
PARAM_DEFINE_INT32(PWM_MAIN_MAX1, 2000);

/**
 * PWM Main 2 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 1600
 * @max 2200
 */
PARAM_DEFINE_INT32(PWM_MAIN_MAX2, 2000);

/**
 * PWM Main 3 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 1600
 * @max 2200
 */
PARAM_DEFINE_INT32(PWM_MAIN_MAX3, 2000);

/**
 * PWM Main 4 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 1600
 * @max 2200
 */
PARAM_DEFINE_INT32(PWM_MAIN_MAX4, 2000);

/**
 * PWM Main 5 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 1600
 * @max 2200
 */
PARAM_DEFINE_INT32(PWM_MAIN_MAX5, 2000);

/**
 * PWM Main 6 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 1600
 * @max 2200
 */
PARAM_DEFINE_INT32(PWM_MAIN_MAX6, 2000);

/**
 * PWM Main 1 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see PWM_MAIN_FUNC1).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 2200
 */
PARAM_DEFINE_INT32(PWM_MAIN_FAIL1, -1);

/**
 * PWM Main 2 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see PWM_MAIN_FUNC2).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 2200
 */
PARAM_DEFINE_INT32(PWM_MAIN_FAIL2, -1);

/**
 * PWM Main 3 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see PWM_MAIN_FUNC3).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 2200
 */
PARAM_DEFINE_INT32(PWM_MAIN_FAIL3, -1);

/**
 * PWM Main 4 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see PWM_MAIN_FUNC4).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 2200
 */
PARAM_DEFINE_INT32(PWM_MAIN_FAIL4, -1);

/**
 * PWM Main 5 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see PWM_MAIN_FUNC5).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 2200
 */
PARAM_DEFINE_INT32(PWM_MAIN_FAIL5, -1);

/**
 * PWM Main 6 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see PWM_MAIN_FUNC6).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 2200
 */
PARAM_DEFINE_INT32(PWM_MAIN_FAIL6, -1);

/**
 * Reverse Output Range for PWM MAIN
 *
 * Allows to reverse the output range for each channel.
 * Note: this is only useful for servos.
 * 
 *
 * @group Actuator Outputs
 * @bit 0 PWM Main 1
 * @bit 1 PWM Main 2
 * @bit 2 PWM Main 3
 * @bit 3 PWM Main 4
 * @bit 4 PWM Main 5
 * @bit 5 PWM Main 6
 * @min 0
 * @max 63
 */
PARAM_DEFINE_INT32(PWM_MAIN_REV, 0);

/**
 * HIL Channel 1 Output Function
 *
 * Select what should be output on HIL Channel 1.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 */
PARAM_DEFINE_INT32(HIL_ACT_FUNC1, 0);

/**
 * HIL Channel 2 Output Function
 *
 * Select what should be output on HIL Channel 2.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 */
PARAM_DEFINE_INT32(HIL_ACT_FUNC2, 0);

/**
 * HIL Channel 3 Output Function
 *
 * Select what should be output on HIL Channel 3.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 */
PARAM_DEFINE_INT32(HIL_ACT_FUNC3, 0);

/**
 * HIL Channel 4 Output Function
 *
 * Select what should be output on HIL Channel 4.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 */
PARAM_DEFINE_INT32(HIL_ACT_FUNC4, 0);

/**
 * HIL Channel 5 Output Function
 *
 * Select what should be output on HIL Channel 5.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 */
PARAM_DEFINE_INT32(HIL_ACT_FUNC5, 0);

/**
 * HIL Channel 6 Output Function
 *
 * Select what should be output on HIL Channel 6.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 */
PARAM_DEFINE_INT32(HIL_ACT_FUNC6, 0);

/**
 * HIL Channel 7 Output Function
 *
 * Select what should be output on HIL Channel 7.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 */
PARAM_DEFINE_INT32(HIL_ACT_FUNC7, 0);

/**
 * HIL Channel 8 Output Function
 *
 * Select what should be output on HIL Channel 8.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 */
PARAM_DEFINE_INT32(HIL_ACT_FUNC8, 0);

/**
 * HIL Channel 9 Output Function
 *
 * Select what should be output on HIL Channel 9.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 */
PARAM_DEFINE_INT32(HIL_ACT_FUNC9, 0);

/**
 * HIL Channel 10 Output Function
 *
 * Select what should be output on HIL Channel 10.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 */
PARAM_DEFINE_INT32(HIL_ACT_FUNC10, 0);

/**
 * HIL Channel 11 Output Function
 *
 * Select what should be output on HIL Channel 11.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 */
PARAM_DEFINE_INT32(HIL_ACT_FUNC11, 0);

/**
 * HIL Channel 12 Output Function
 *
 * Select what should be output on HIL Channel 12.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 */
PARAM_DEFINE_INT32(HIL_ACT_FUNC12, 0);

/**
 * HIL Channel 13 Output Function
 *
 * Select what should be output on HIL Channel 13.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 */
PARAM_DEFINE_INT32(HIL_ACT_FUNC13, 0);

/**
 * HIL Channel 14 Output Function
 *
 * Select what should be output on HIL Channel 14.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 */
PARAM_DEFINE_INT32(HIL_ACT_FUNC14, 0);

/**
 * HIL Channel 15 Output Function
 *
 * Select what should be output on HIL Channel 15.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 */
PARAM_DEFINE_INT32(HIL_ACT_FUNC15, 0);

/**
 * HIL Channel 16 Output Function
 *
 * Select what should be output on HIL Channel 16.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 */
PARAM_DEFINE_INT32(HIL_ACT_FUNC16, 0);

/**
 * Reverse Output Range for HIL
 *
 * Allows to reverse the output range for each channel.
 * Note: this is only useful for servos.
 * 
 *
 * @group Actuator Outputs
 * @bit 0 HIL Channel 1
 * @bit 1 HIL Channel 2
 * @bit 2 HIL Channel 3
 * @bit 3 HIL Channel 4
 * @bit 4 HIL Channel 5
 * @bit 5 HIL Channel 6
 * @bit 6 HIL Channel 7
 * @bit 7 HIL Channel 8
 * @bit 8 HIL Channel 9
 * @bit 9 HIL Channel 10
 * @bit 10 HIL Channel 11
 * @bit 11 HIL Channel 12
 * @bit 12 HIL Channel 13
 * @bit 13 HIL Channel 14
 * @bit 14 HIL Channel 15
 * @bit 15 HIL Channel 16
 * @min 0
 * @max 65535
 */
PARAM_DEFINE_INT32(HIL_ACT_REV, 0);

/**
 * UAVCAN ESC 1 Output Function
 *
 * Select what should be output on UAVCAN ESC 1.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 */
PARAM_DEFINE_INT32(UAVCAN_EC_FUNC1, 0);

/**
 * UAVCAN ESC 2 Output Function
 *
 * Select what should be output on UAVCAN ESC 2.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 */
PARAM_DEFINE_INT32(UAVCAN_EC_FUNC2, 0);

/**
 * UAVCAN ESC 3 Output Function
 *
 * Select what should be output on UAVCAN ESC 3.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 */
PARAM_DEFINE_INT32(UAVCAN_EC_FUNC3, 0);

/**
 * UAVCAN ESC 4 Output Function
 *
 * Select what should be output on UAVCAN ESC 4.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 */
PARAM_DEFINE_INT32(UAVCAN_EC_FUNC4, 0);

/**
 * UAVCAN ESC 5 Output Function
 *
 * Select what should be output on UAVCAN ESC 5.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 */
PARAM_DEFINE_INT32(UAVCAN_EC_FUNC5, 0);

/**
 * UAVCAN ESC 6 Output Function
 *
 * Select what should be output on UAVCAN ESC 6.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 */
PARAM_DEFINE_INT32(UAVCAN_EC_FUNC6, 0);

/**
 * UAVCAN ESC 7 Output Function
 *
 * Select what should be output on UAVCAN ESC 7.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 */
PARAM_DEFINE_INT32(UAVCAN_EC_FUNC7, 0);

/**
 * UAVCAN ESC 8 Output Function
 *
 * Select what should be output on UAVCAN ESC 8.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 */
PARAM_DEFINE_INT32(UAVCAN_EC_FUNC8, 0);

/**
 * UAVCAN ESC 1 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 8191
 */
PARAM_DEFINE_INT32(UAVCAN_EC_MIN1, 1);

/**
 * UAVCAN ESC 2 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 8191
 */
PARAM_DEFINE_INT32(UAVCAN_EC_MIN2, 1);

/**
 * UAVCAN ESC 3 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 8191
 */
PARAM_DEFINE_INT32(UAVCAN_EC_MIN3, 1);

/**
 * UAVCAN ESC 4 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 8191
 */
PARAM_DEFINE_INT32(UAVCAN_EC_MIN4, 1);

/**
 * UAVCAN ESC 5 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 8191
 */
PARAM_DEFINE_INT32(UAVCAN_EC_MIN5, 1);

/**
 * UAVCAN ESC 6 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 8191
 */
PARAM_DEFINE_INT32(UAVCAN_EC_MIN6, 1);

/**
 * UAVCAN ESC 7 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 8191
 */
PARAM_DEFINE_INT32(UAVCAN_EC_MIN7, 1);

/**
 * UAVCAN ESC 8 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 8191
 */
PARAM_DEFINE_INT32(UAVCAN_EC_MIN8, 1);

/**
 * UAVCAN ESC 1 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 8191
 */
PARAM_DEFINE_INT32(UAVCAN_EC_MAX1, 8191);

/**
 * UAVCAN ESC 2 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 8191
 */
PARAM_DEFINE_INT32(UAVCAN_EC_MAX2, 8191);

/**
 * UAVCAN ESC 3 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 8191
 */
PARAM_DEFINE_INT32(UAVCAN_EC_MAX3, 8191);

/**
 * UAVCAN ESC 4 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 8191
 */
PARAM_DEFINE_INT32(UAVCAN_EC_MAX4, 8191);

/**
 * UAVCAN ESC 5 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 8191
 */
PARAM_DEFINE_INT32(UAVCAN_EC_MAX5, 8191);

/**
 * UAVCAN ESC 6 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 8191
 */
PARAM_DEFINE_INT32(UAVCAN_EC_MAX6, 8191);

/**
 * UAVCAN ESC 7 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 8191
 */
PARAM_DEFINE_INT32(UAVCAN_EC_MAX7, 8191);

/**
 * UAVCAN ESC 8 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 8191
 */
PARAM_DEFINE_INT32(UAVCAN_EC_MAX8, 8191);

/**
 * UAVCAN ESC 1 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see UAVCAN_EC_FUNC1).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 8191
 */
PARAM_DEFINE_INT32(UAVCAN_EC_FAIL1, -1);

/**
 * UAVCAN ESC 2 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see UAVCAN_EC_FUNC2).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 8191
 */
PARAM_DEFINE_INT32(UAVCAN_EC_FAIL2, -1);

/**
 * UAVCAN ESC 3 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see UAVCAN_EC_FUNC3).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 8191
 */
PARAM_DEFINE_INT32(UAVCAN_EC_FAIL3, -1);

/**
 * UAVCAN ESC 4 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see UAVCAN_EC_FUNC4).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 8191
 */
PARAM_DEFINE_INT32(UAVCAN_EC_FAIL4, -1);

/**
 * UAVCAN ESC 5 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see UAVCAN_EC_FUNC5).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 8191
 */
PARAM_DEFINE_INT32(UAVCAN_EC_FAIL5, -1);

/**
 * UAVCAN ESC 6 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see UAVCAN_EC_FUNC6).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 8191
 */
PARAM_DEFINE_INT32(UAVCAN_EC_FAIL6, -1);

/**
 * UAVCAN ESC 7 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see UAVCAN_EC_FUNC7).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 8191
 */
PARAM_DEFINE_INT32(UAVCAN_EC_FAIL7, -1);

/**
 * UAVCAN ESC 8 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see UAVCAN_EC_FUNC8).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 8191
 */
PARAM_DEFINE_INT32(UAVCAN_EC_FAIL8, -1);

/**
 * UAVCAN Servo 1 Output Function
 *
 * Select what should be output on UAVCAN Servo 1.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 */
PARAM_DEFINE_INT32(UAVCAN_SV_FUNC1, 0);

/**
 * UAVCAN Servo 2 Output Function
 *
 * Select what should be output on UAVCAN Servo 2.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 */
PARAM_DEFINE_INT32(UAVCAN_SV_FUNC2, 0);

/**
 * UAVCAN Servo 3 Output Function
 *
 * Select what should be output on UAVCAN Servo 3.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 */
PARAM_DEFINE_INT32(UAVCAN_SV_FUNC3, 0);

/**
 * UAVCAN Servo 4 Output Function
 *
 * Select what should be output on UAVCAN Servo 4.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 */
PARAM_DEFINE_INT32(UAVCAN_SV_FUNC4, 0);

/**
 * UAVCAN Servo 5 Output Function
 *
 * Select what should be output on UAVCAN Servo 5.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 */
PARAM_DEFINE_INT32(UAVCAN_SV_FUNC5, 0);

/**
 * UAVCAN Servo 6 Output Function
 *
 * Select what should be output on UAVCAN Servo 6.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 */
PARAM_DEFINE_INT32(UAVCAN_SV_FUNC6, 0);

/**
 * UAVCAN Servo 7 Output Function
 *
 * Select what should be output on UAVCAN Servo 7.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 */
PARAM_DEFINE_INT32(UAVCAN_SV_FUNC7, 0);

/**
 * UAVCAN Servo 8 Output Function
 *
 * Select what should be output on UAVCAN Servo 8.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Offboard Actuator Set 1
 * @value 302 Offboard Actuator Set 2
 * @value 303 Offboard Actuator Set 3
 * @value 304 Offboard Actuator Set 4
 * @value 305 Offboard Actuator Set 5
 * @value 306 Offboard Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 */
PARAM_DEFINE_INT32(UAVCAN_SV_FUNC8, 0);

/**
 * UAVCAN Servo 1 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(UAVCAN_SV_DIS1, 500);

/**
 * UAVCAN Servo 2 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(UAVCAN_SV_DIS2, 500);

/**
 * UAVCAN Servo 3 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(UAVCAN_SV_DIS3, 500);

/**
 * UAVCAN Servo 4 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(UAVCAN_SV_DIS4, 500);

/**
 * UAVCAN Servo 5 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(UAVCAN_SV_DIS5, 500);

/**
 * UAVCAN Servo 6 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(UAVCAN_SV_DIS6, 500);

/**
 * UAVCAN Servo 7 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(UAVCAN_SV_DIS7, 500);

/**
 * UAVCAN Servo 8 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(UAVCAN_SV_DIS8, 500);

/**
 * UAVCAN Servo 1 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(UAVCAN_SV_MIN1, 0);

/**
 * UAVCAN Servo 2 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(UAVCAN_SV_MIN2, 0);

/**
 * UAVCAN Servo 3 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(UAVCAN_SV_MIN3, 0);

/**
 * UAVCAN Servo 4 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(UAVCAN_SV_MIN4, 0);

/**
 * UAVCAN Servo 5 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(UAVCAN_SV_MIN5, 0);

/**
 * UAVCAN Servo 6 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(UAVCAN_SV_MIN6, 0);

/**
 * UAVCAN Servo 7 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(UAVCAN_SV_MIN7, 0);

/**
 * UAVCAN Servo 8 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(UAVCAN_SV_MIN8, 0);

/**
 * UAVCAN Servo 1 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(UAVCAN_SV_MAX1, 1000);

/**
 * UAVCAN Servo 2 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(UAVCAN_SV_MAX2, 1000);

/**
 * UAVCAN Servo 3 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(UAVCAN_SV_MAX3, 1000);

/**
 * UAVCAN Servo 4 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(UAVCAN_SV_MAX4, 1000);

/**
 * UAVCAN Servo 5 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(UAVCAN_SV_MAX5, 1000);

/**
 * UAVCAN Servo 6 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(UAVCAN_SV_MAX6, 1000);

/**
 * UAVCAN Servo 7 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(UAVCAN_SV_MAX7, 1000);

/**
 * UAVCAN Servo 8 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(UAVCAN_SV_MAX8, 1000);

/**
 * UAVCAN Servo 1 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see UAVCAN_SV_FUNC1).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 1000
 */
PARAM_DEFINE_INT32(UAVCAN_SV_FAIL1, -1);

/**
 * UAVCAN Servo 2 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see UAVCAN_SV_FUNC2).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 1000
 */
PARAM_DEFINE_INT32(UAVCAN_SV_FAIL2, -1);

/**
 * UAVCAN Servo 3 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see UAVCAN_SV_FUNC3).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 1000
 */
PARAM_DEFINE_INT32(UAVCAN_SV_FAIL3, -1);

/**
 * UAVCAN Servo 4 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see UAVCAN_SV_FUNC4).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 1000
 */
PARAM_DEFINE_INT32(UAVCAN_SV_FAIL4, -1);

/**
 * UAVCAN Servo 5 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see UAVCAN_SV_FUNC5).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 1000
 */
PARAM_DEFINE_INT32(UAVCAN_SV_FAIL5, -1);

/**
 * UAVCAN Servo 6 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see UAVCAN_SV_FUNC6).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 1000
 */
PARAM_DEFINE_INT32(UAVCAN_SV_FAIL6, -1);

/**
 * UAVCAN Servo 7 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see UAVCAN_SV_FUNC7).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 1000
 */
PARAM_DEFINE_INT32(UAVCAN_SV_FAIL7, -1);

/**
 * UAVCAN Servo 8 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see UAVCAN_SV_FUNC8).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 1000
 */
PARAM_DEFINE_INT32(UAVCAN_SV_FAIL8, -1);

/**
 * Reverse Output Range for UAVCAN
 *
 * Allows to reverse the output range for each channel.
 * Note: this is only useful for servos.
 * 
 *
 * @group Actuator Outputs
 * @bit 0 UAVCAN ESC 1
 * @bit 1 UAVCAN ESC 2
 * @bit 2 UAVCAN ESC 3
 * @bit 3 UAVCAN ESC 4
 * @bit 4 UAVCAN ESC 5
 * @bit 5 UAVCAN ESC 6
 * @bit 6 UAVCAN ESC 7
 * @bit 7 UAVCAN ESC 8
 * @min 0
 * @max 255
 */
PARAM_DEFINE_INT32(UAVCAN_EC_REV, 0);

/**
 * Reverse Output Range for UAVCAN
 *
 * Allows to reverse the output range for each channel.
 * Note: this is only useful for servos.
 * 
 *
 * @group Actuator Outputs
 * @bit 0 UAVCAN Servo 1
 * @bit 1 UAVCAN Servo 2
 * @bit 2 UAVCAN Servo 3
 * @bit 3 UAVCAN Servo 4
 * @bit 4 UAVCAN Servo 5
 * @bit 5 UAVCAN Servo 6
 * @bit 6 UAVCAN Servo 7
 * @bit 7 UAVCAN Servo 8
 * @min 0
 * @max 255
 */
PARAM_DEFINE_INT32(UAVCAN_SV_REV, 0);

/**
 * Battery 1 voltage divider (V divider)
 *
 * This is the divider from battery 1 voltage to ADC voltage.
 * If using e.g. Mauch power modules the value from the datasheet
 * can be applied straight here. A value of -1 means to use
 * the board default.
 * 
 *
 * @group Battery Calibration
 * @decimal 8
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(BAT1_V_DIV, -1.0);

/**
 * Battery 2 voltage divider (V divider)
 *
 * This is the divider from battery 2 voltage to ADC voltage.
 * If using e.g. Mauch power modules the value from the datasheet
 * can be applied straight here. A value of -1 means to use
 * the board default.
 * 
 *
 * @group Battery Calibration
 * @decimal 8
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(BAT2_V_DIV, -1.0);

/**
 * Battery 1 current per volt (A/V)
 *
 * The voltage seen by the ADC multiplied by this factor
 * will determine the battery current. A value of -1 means to use
 * the board default.
 * 
 *
 * @group Battery Calibration
 * @decimal 8
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(BAT1_A_PER_V, -1.0);

/**
 * Battery 2 current per volt (A/V)
 *
 * The voltage seen by the ADC multiplied by this factor
 * will determine the battery current. A value of -1 means to use
 * the board default.
 * 
 *
 * @group Battery Calibration
 * @decimal 8
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(BAT2_A_PER_V, -1.0);

/**
 * Battery 1 Voltage ADC Channel
 *
 * This parameter specifies the ADC channel used to monitor voltage of main power battery.
 * A value of -1 means to use the board default.
 * 
 *
 * @group Battery Calibration
 * @reboot_required True
 */
PARAM_DEFINE_INT32(BAT1_V_CHANNEL, -1);

/**
 * Battery 2 Voltage ADC Channel
 *
 * This parameter specifies the ADC channel used to monitor voltage of main power battery.
 * A value of -1 means to use the board default.
 * 
 *
 * @group Battery Calibration
 * @reboot_required True
 */
PARAM_DEFINE_INT32(BAT2_V_CHANNEL, -1);

/**
 * Battery 1 Current ADC Channel
 *
 * This parameter specifies the ADC channel used to monitor current of main power battery.
 * A value of -1 means to use the board default.
 * 
 *
 * @group Battery Calibration
 * @reboot_required True
 */
PARAM_DEFINE_INT32(BAT1_I_CHANNEL, -1);

/**
 * Battery 2 Current ADC Channel
 *
 * This parameter specifies the ADC channel used to monitor current of main power battery.
 * A value of -1 means to use the board default.
 * 
 *
 * @group Battery Calibration
 * @reboot_required True
 */
PARAM_DEFINE_INT32(BAT2_I_CHANNEL, -1);

/**
 * Airframe selection
 *
 * Defines which mixer implementation to use.
 * Some are generic, while others are specifically fit to a certain vehicle with a fixed set of actuators.
 * 
 * 'Custom' should only be used if noting else can be used.
 * 
 *
 * @group Geometry
 * @value 0 Multirotor
 * @value 1 Fixed-wing
 * @value 2 Standard VTOL
 * @value 3 Tiltrotor VTOL
 * @value 4 Tailsitter VTOL
 * @value 5 Rover (Ackermann)
 * @value 6 Rover (Differential)
 * @value 7 Motors (6DOF)
 * @value 8 Multirotor with Tilt
 * @value 9 Custom
 */
PARAM_DEFINE_INT32(CA_AIRFRAME, 0);

/**
 * Control allocation method
 *
 * Selects the algorithm and desaturation method.
 * If set to Automtic, the selection is based on the airframe (CA_AIRFRAME).
 * 
 *
 * @group Geometry
 * @value 0 Pseudo-inverse with output clipping
 * @value 1 Pseudo-inverse with sequential desaturation technique
 * @value 2 Automatic
 */
PARAM_DEFINE_INT32(CA_METHOD, 2);

/**
 * Bidirectional/Reversible motors
 *
 * Configure motors to be bidirectional/reversible. Note that the output driver needs to support this as well.
 * 
 *
 * @group Geometry
 * @bit 0 Motor 1
 * @bit 1 Motor 2
 * @bit 2 Motor 3
 * @bit 3 Motor 4
 * @bit 4 Motor 5
 * @bit 5 Motor 6
 * @bit 6 Motor 7
 * @bit 7 Motor 8
 * @min 0
 * @max 255
 */
PARAM_DEFINE_INT32(CA_R_REV, 0);

/**
 * Motor 0 slew rate limit
 *
 * Minimum time allowed for the motor input signal to pass through
 * the full output range. A value x means that the motor signal
 * can only go from 0 to 1 in minimum x seconds (in case of
 * reversible motors, the range is -1 to 1).
 * 
 * Zero means that slew rate limiting is disabled.
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.01
 * @min 0
 * @max 10
 */
PARAM_DEFINE_FLOAT(CA_R0_SLEW, 0.0);

/**
 * Motor 1 slew rate limit
 *
 * Minimum time allowed for the motor input signal to pass through
 * the full output range. A value x means that the motor signal
 * can only go from 0 to 1 in minimum x seconds (in case of
 * reversible motors, the range is -1 to 1).
 * 
 * Zero means that slew rate limiting is disabled.
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.01
 * @min 0
 * @max 10
 */
PARAM_DEFINE_FLOAT(CA_R1_SLEW, 0.0);

/**
 * Motor 2 slew rate limit
 *
 * Minimum time allowed for the motor input signal to pass through
 * the full output range. A value x means that the motor signal
 * can only go from 0 to 1 in minimum x seconds (in case of
 * reversible motors, the range is -1 to 1).
 * 
 * Zero means that slew rate limiting is disabled.
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.01
 * @min 0
 * @max 10
 */
PARAM_DEFINE_FLOAT(CA_R2_SLEW, 0.0);

/**
 * Motor 3 slew rate limit
 *
 * Minimum time allowed for the motor input signal to pass through
 * the full output range. A value x means that the motor signal
 * can only go from 0 to 1 in minimum x seconds (in case of
 * reversible motors, the range is -1 to 1).
 * 
 * Zero means that slew rate limiting is disabled.
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.01
 * @min 0
 * @max 10
 */
PARAM_DEFINE_FLOAT(CA_R3_SLEW, 0.0);

/**
 * Motor 4 slew rate limit
 *
 * Minimum time allowed for the motor input signal to pass through
 * the full output range. A value x means that the motor signal
 * can only go from 0 to 1 in minimum x seconds (in case of
 * reversible motors, the range is -1 to 1).
 * 
 * Zero means that slew rate limiting is disabled.
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.01
 * @min 0
 * @max 10
 */
PARAM_DEFINE_FLOAT(CA_R4_SLEW, 0.0);

/**
 * Motor 5 slew rate limit
 *
 * Minimum time allowed for the motor input signal to pass through
 * the full output range. A value x means that the motor signal
 * can only go from 0 to 1 in minimum x seconds (in case of
 * reversible motors, the range is -1 to 1).
 * 
 * Zero means that slew rate limiting is disabled.
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.01
 * @min 0
 * @max 10
 */
PARAM_DEFINE_FLOAT(CA_R5_SLEW, 0.0);

/**
 * Motor 6 slew rate limit
 *
 * Minimum time allowed for the motor input signal to pass through
 * the full output range. A value x means that the motor signal
 * can only go from 0 to 1 in minimum x seconds (in case of
 * reversible motors, the range is -1 to 1).
 * 
 * Zero means that slew rate limiting is disabled.
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.01
 * @min 0
 * @max 10
 */
PARAM_DEFINE_FLOAT(CA_R6_SLEW, 0.0);

/**
 * Motor 7 slew rate limit
 *
 * Minimum time allowed for the motor input signal to pass through
 * the full output range. A value x means that the motor signal
 * can only go from 0 to 1 in minimum x seconds (in case of
 * reversible motors, the range is -1 to 1).
 * 
 * Zero means that slew rate limiting is disabled.
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.01
 * @min 0
 * @max 10
 */
PARAM_DEFINE_FLOAT(CA_R7_SLEW, 0.0);

/**
 * Servo 0 slew rate limit
 *
 * Minimum time allowed for the servo input signal to pass through
 * the full output range. A value x means that the servo signal
 * can only go from -1 to 1 in minimum x seconds.
 * 
 * Zero means that slew rate limiting is disabled.
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.05
 * @min 0
 * @max 10
 */
PARAM_DEFINE_FLOAT(CA_SV0_SLEW, 0.0);

/**
 * Servo 1 slew rate limit
 *
 * Minimum time allowed for the servo input signal to pass through
 * the full output range. A value x means that the servo signal
 * can only go from -1 to 1 in minimum x seconds.
 * 
 * Zero means that slew rate limiting is disabled.
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.05
 * @min 0
 * @max 10
 */
PARAM_DEFINE_FLOAT(CA_SV1_SLEW, 0.0);

/**
 * Servo 2 slew rate limit
 *
 * Minimum time allowed for the servo input signal to pass through
 * the full output range. A value x means that the servo signal
 * can only go from -1 to 1 in minimum x seconds.
 * 
 * Zero means that slew rate limiting is disabled.
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.05
 * @min 0
 * @max 10
 */
PARAM_DEFINE_FLOAT(CA_SV2_SLEW, 0.0);

/**
 * Servo 3 slew rate limit
 *
 * Minimum time allowed for the servo input signal to pass through
 * the full output range. A value x means that the servo signal
 * can only go from -1 to 1 in minimum x seconds.
 * 
 * Zero means that slew rate limiting is disabled.
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.05
 * @min 0
 * @max 10
 */
PARAM_DEFINE_FLOAT(CA_SV3_SLEW, 0.0);

/**
 * Servo 4 slew rate limit
 *
 * Minimum time allowed for the servo input signal to pass through
 * the full output range. A value x means that the servo signal
 * can only go from -1 to 1 in minimum x seconds.
 * 
 * Zero means that slew rate limiting is disabled.
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.05
 * @min 0
 * @max 10
 */
PARAM_DEFINE_FLOAT(CA_SV4_SLEW, 0.0);

/**
 * Servo 5 slew rate limit
 *
 * Minimum time allowed for the servo input signal to pass through
 * the full output range. A value x means that the servo signal
 * can only go from -1 to 1 in minimum x seconds.
 * 
 * Zero means that slew rate limiting is disabled.
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.05
 * @min 0
 * @max 10
 */
PARAM_DEFINE_FLOAT(CA_SV5_SLEW, 0.0);

/**
 * Servo 6 slew rate limit
 *
 * Minimum time allowed for the servo input signal to pass through
 * the full output range. A value x means that the servo signal
 * can only go from -1 to 1 in minimum x seconds.
 * 
 * Zero means that slew rate limiting is disabled.
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.05
 * @min 0
 * @max 10
 */
PARAM_DEFINE_FLOAT(CA_SV6_SLEW, 0.0);

/**
 * Servo 7 slew rate limit
 *
 * Minimum time allowed for the servo input signal to pass through
 * the full output range. A value x means that the servo signal
 * can only go from -1 to 1 in minimum x seconds.
 * 
 * Zero means that slew rate limiting is disabled.
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.05
 * @min 0
 * @max 10
 */
PARAM_DEFINE_FLOAT(CA_SV7_SLEW, 0.0);

/**
 * Total number of rotors
 *
 * 
 *
 * @group Geometry
 * @value 0 0
 * @value 1 1
 * @value 2 2
 * @value 3 3
 * @value 4 4
 * @value 5 5
 * @value 6 6
 * @value 7 7
 * @value 8 8
 */
PARAM_DEFINE_INT32(CA_ROTOR_COUNT, 0);

/**
 * Position of rotor 0 along X body axis
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR0_PX, 0.0);

/**
 * Position of rotor 1 along X body axis
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR1_PX, 0.0);

/**
 * Position of rotor 2 along X body axis
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR2_PX, 0.0);

/**
 * Position of rotor 3 along X body axis
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR3_PX, 0.0);

/**
 * Position of rotor 4 along X body axis
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR4_PX, 0.0);

/**
 * Position of rotor 5 along X body axis
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR5_PX, 0.0);

/**
 * Position of rotor 6 along X body axis
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR6_PX, 0.0);

/**
 * Position of rotor 7 along X body axis
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR7_PX, 0.0);

/**
 * Position of rotor 0 along Y body axis
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR0_PY, 0.0);

/**
 * Position of rotor 1 along Y body axis
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR1_PY, 0.0);

/**
 * Position of rotor 2 along Y body axis
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR2_PY, 0.0);

/**
 * Position of rotor 3 along Y body axis
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR3_PY, 0.0);

/**
 * Position of rotor 4 along Y body axis
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR4_PY, 0.0);

/**
 * Position of rotor 5 along Y body axis
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR5_PY, 0.0);

/**
 * Position of rotor 6 along Y body axis
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR6_PY, 0.0);

/**
 * Position of rotor 7 along Y body axis
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR7_PY, 0.0);

/**
 * Position of rotor 0 along Z body axis
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR0_PZ, 0.0);

/**
 * Position of rotor 1 along Z body axis
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR1_PZ, 0.0);

/**
 * Position of rotor 2 along Z body axis
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR2_PZ, 0.0);

/**
 * Position of rotor 3 along Z body axis
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR3_PZ, 0.0);

/**
 * Position of rotor 4 along Z body axis
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR4_PZ, 0.0);

/**
 * Position of rotor 5 along Z body axis
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR5_PZ, 0.0);

/**
 * Position of rotor 6 along Z body axis
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR6_PZ, 0.0);

/**
 * Position of rotor 7 along Z body axis
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR7_PZ, 0.0);

/**
 * Axis of rotor 0 thrust vector, X body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR0_AX, 0.0);

/**
 * Axis of rotor 1 thrust vector, X body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR1_AX, 0.0);

/**
 * Axis of rotor 2 thrust vector, X body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR2_AX, 0.0);

/**
 * Axis of rotor 3 thrust vector, X body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR3_AX, 0.0);

/**
 * Axis of rotor 4 thrust vector, X body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR4_AX, 0.0);

/**
 * Axis of rotor 5 thrust vector, X body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR5_AX, 0.0);

/**
 * Axis of rotor 6 thrust vector, X body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR6_AX, 0.0);

/**
 * Axis of rotor 7 thrust vector, X body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR7_AX, 0.0);

/**
 * Axis of rotor 0 thrust vector, Y body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR0_AY, 0.0);

/**
 * Axis of rotor 1 thrust vector, Y body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR1_AY, 0.0);

/**
 * Axis of rotor 2 thrust vector, Y body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR2_AY, 0.0);

/**
 * Axis of rotor 3 thrust vector, Y body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR3_AY, 0.0);

/**
 * Axis of rotor 4 thrust vector, Y body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR4_AY, 0.0);

/**
 * Axis of rotor 5 thrust vector, Y body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR5_AY, 0.0);

/**
 * Axis of rotor 6 thrust vector, Y body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR6_AY, 0.0);

/**
 * Axis of rotor 7 thrust vector, Y body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR7_AY, 0.0);

/**
 * Axis of rotor 0 thrust vector, Z body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR0_AZ, -1.0);

/**
 * Axis of rotor 1 thrust vector, Z body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR1_AZ, -1.0);

/**
 * Axis of rotor 2 thrust vector, Z body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR2_AZ, -1.0);

/**
 * Axis of rotor 3 thrust vector, Z body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR3_AZ, -1.0);

/**
 * Axis of rotor 4 thrust vector, Z body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR4_AZ, -1.0);

/**
 * Axis of rotor 5 thrust vector, Z body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR5_AZ, -1.0);

/**
 * Axis of rotor 6 thrust vector, Z body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR6_AZ, -1.0);

/**
 * Axis of rotor 7 thrust vector, Z body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR7_AZ, -1.0);

/**
 * Thrust coefficient of rotor 0
 *
 * The thrust coefficient if defined as Thrust = CT * u^2,
 * where u (with value between actuator minimum and maximum)
 * is the output signal sent to the motor controller.
 * 
 *
 * @group Geometry
 * @decimal 1
 * @increment 1
 * @min 0
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR0_CT, 6.5);

/**
 * Thrust coefficient of rotor 1
 *
 * The thrust coefficient if defined as Thrust = CT * u^2,
 * where u (with value between actuator minimum and maximum)
 * is the output signal sent to the motor controller.
 * 
 *
 * @group Geometry
 * @decimal 1
 * @increment 1
 * @min 0
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR1_CT, 6.5);

/**
 * Thrust coefficient of rotor 2
 *
 * The thrust coefficient if defined as Thrust = CT * u^2,
 * where u (with value between actuator minimum and maximum)
 * is the output signal sent to the motor controller.
 * 
 *
 * @group Geometry
 * @decimal 1
 * @increment 1
 * @min 0
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR2_CT, 6.5);

/**
 * Thrust coefficient of rotor 3
 *
 * The thrust coefficient if defined as Thrust = CT * u^2,
 * where u (with value between actuator minimum and maximum)
 * is the output signal sent to the motor controller.
 * 
 *
 * @group Geometry
 * @decimal 1
 * @increment 1
 * @min 0
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR3_CT, 6.5);

/**
 * Thrust coefficient of rotor 4
 *
 * The thrust coefficient if defined as Thrust = CT * u^2,
 * where u (with value between actuator minimum and maximum)
 * is the output signal sent to the motor controller.
 * 
 *
 * @group Geometry
 * @decimal 1
 * @increment 1
 * @min 0
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR4_CT, 6.5);

/**
 * Thrust coefficient of rotor 5
 *
 * The thrust coefficient if defined as Thrust = CT * u^2,
 * where u (with value between actuator minimum and maximum)
 * is the output signal sent to the motor controller.
 * 
 *
 * @group Geometry
 * @decimal 1
 * @increment 1
 * @min 0
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR5_CT, 6.5);

/**
 * Thrust coefficient of rotor 6
 *
 * The thrust coefficient if defined as Thrust = CT * u^2,
 * where u (with value between actuator minimum and maximum)
 * is the output signal sent to the motor controller.
 * 
 *
 * @group Geometry
 * @decimal 1
 * @increment 1
 * @min 0
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR6_CT, 6.5);

/**
 * Thrust coefficient of rotor 7
 *
 * The thrust coefficient if defined as Thrust = CT * u^2,
 * where u (with value between actuator minimum and maximum)
 * is the output signal sent to the motor controller.
 * 
 *
 * @group Geometry
 * @decimal 1
 * @increment 1
 * @min 0
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR7_CT, 6.5);

/**
 * Moment coefficient of rotor 0
 *
 * The moment coefficient if defined as Torque = KM * Thrust.
 * 
 * Use a positive value for a rotor with CCW rotation.
 * Use a negative value for a rotor with CW rotation.
 * 
 *
 * @group Geometry
 * @decimal 3
 * @increment 0.01
 * @min -1
 * @max 1
 */
PARAM_DEFINE_FLOAT(CA_ROTOR0_KM, 0.05);

/**
 * Moment coefficient of rotor 1
 *
 * The moment coefficient if defined as Torque = KM * Thrust.
 * 
 * Use a positive value for a rotor with CCW rotation.
 * Use a negative value for a rotor with CW rotation.
 * 
 *
 * @group Geometry
 * @decimal 3
 * @increment 0.01
 * @min -1
 * @max 1
 */
PARAM_DEFINE_FLOAT(CA_ROTOR1_KM, 0.05);

/**
 * Moment coefficient of rotor 2
 *
 * The moment coefficient if defined as Torque = KM * Thrust.
 * 
 * Use a positive value for a rotor with CCW rotation.
 * Use a negative value for a rotor with CW rotation.
 * 
 *
 * @group Geometry
 * @decimal 3
 * @increment 0.01
 * @min -1
 * @max 1
 */
PARAM_DEFINE_FLOAT(CA_ROTOR2_KM, 0.05);

/**
 * Moment coefficient of rotor 3
 *
 * The moment coefficient if defined as Torque = KM * Thrust.
 * 
 * Use a positive value for a rotor with CCW rotation.
 * Use a negative value for a rotor with CW rotation.
 * 
 *
 * @group Geometry
 * @decimal 3
 * @increment 0.01
 * @min -1
 * @max 1
 */
PARAM_DEFINE_FLOAT(CA_ROTOR3_KM, 0.05);

/**
 * Moment coefficient of rotor 4
 *
 * The moment coefficient if defined as Torque = KM * Thrust.
 * 
 * Use a positive value for a rotor with CCW rotation.
 * Use a negative value for a rotor with CW rotation.
 * 
 *
 * @group Geometry
 * @decimal 3
 * @increment 0.01
 * @min -1
 * @max 1
 */
PARAM_DEFINE_FLOAT(CA_ROTOR4_KM, 0.05);

/**
 * Moment coefficient of rotor 5
 *
 * The moment coefficient if defined as Torque = KM * Thrust.
 * 
 * Use a positive value for a rotor with CCW rotation.
 * Use a negative value for a rotor with CW rotation.
 * 
 *
 * @group Geometry
 * @decimal 3
 * @increment 0.01
 * @min -1
 * @max 1
 */
PARAM_DEFINE_FLOAT(CA_ROTOR5_KM, 0.05);

/**
 * Moment coefficient of rotor 6
 *
 * The moment coefficient if defined as Torque = KM * Thrust.
 * 
 * Use a positive value for a rotor with CCW rotation.
 * Use a negative value for a rotor with CW rotation.
 * 
 *
 * @group Geometry
 * @decimal 3
 * @increment 0.01
 * @min -1
 * @max 1
 */
PARAM_DEFINE_FLOAT(CA_ROTOR6_KM, 0.05);

/**
 * Moment coefficient of rotor 7
 *
 * The moment coefficient if defined as Torque = KM * Thrust.
 * 
 * Use a positive value for a rotor with CCW rotation.
 * Use a negative value for a rotor with CW rotation.
 * 
 *
 * @group Geometry
 * @decimal 3
 * @increment 0.01
 * @min -1
 * @max 1
 */
PARAM_DEFINE_FLOAT(CA_ROTOR7_KM, 0.05);

/**
 * Rotor 0 tilt assignment
 *
 * If not set to None, this motor is tilted by the configured tilt servo.
 *
 * @group Geometry
 * @value 0 None
 * @value 1 Tilt 1
 * @value 2 Tilt 2
 * @value 3 Tilt 3
 * @value 4 Tilt 4
 */
PARAM_DEFINE_INT32(CA_ROTOR0_TILT, 0);

/**
 * Rotor 1 tilt assignment
 *
 * If not set to None, this motor is tilted by the configured tilt servo.
 *
 * @group Geometry
 * @value 0 None
 * @value 1 Tilt 1
 * @value 2 Tilt 2
 * @value 3 Tilt 3
 * @value 4 Tilt 4
 */
PARAM_DEFINE_INT32(CA_ROTOR1_TILT, 0);

/**
 * Rotor 2 tilt assignment
 *
 * If not set to None, this motor is tilted by the configured tilt servo.
 *
 * @group Geometry
 * @value 0 None
 * @value 1 Tilt 1
 * @value 2 Tilt 2
 * @value 3 Tilt 3
 * @value 4 Tilt 4
 */
PARAM_DEFINE_INT32(CA_ROTOR2_TILT, 0);

/**
 * Rotor 3 tilt assignment
 *
 * If not set to None, this motor is tilted by the configured tilt servo.
 *
 * @group Geometry
 * @value 0 None
 * @value 1 Tilt 1
 * @value 2 Tilt 2
 * @value 3 Tilt 3
 * @value 4 Tilt 4
 */
PARAM_DEFINE_INT32(CA_ROTOR3_TILT, 0);

/**
 * Rotor 4 tilt assignment
 *
 * If not set to None, this motor is tilted by the configured tilt servo.
 *
 * @group Geometry
 * @value 0 None
 * @value 1 Tilt 1
 * @value 2 Tilt 2
 * @value 3 Tilt 3
 * @value 4 Tilt 4
 */
PARAM_DEFINE_INT32(CA_ROTOR4_TILT, 0);

/**
 * Rotor 5 tilt assignment
 *
 * If not set to None, this motor is tilted by the configured tilt servo.
 *
 * @group Geometry
 * @value 0 None
 * @value 1 Tilt 1
 * @value 2 Tilt 2
 * @value 3 Tilt 3
 * @value 4 Tilt 4
 */
PARAM_DEFINE_INT32(CA_ROTOR5_TILT, 0);

/**
 * Rotor 6 tilt assignment
 *
 * If not set to None, this motor is tilted by the configured tilt servo.
 *
 * @group Geometry
 * @value 0 None
 * @value 1 Tilt 1
 * @value 2 Tilt 2
 * @value 3 Tilt 3
 * @value 4 Tilt 4
 */
PARAM_DEFINE_INT32(CA_ROTOR6_TILT, 0);

/**
 * Rotor 7 tilt assignment
 *
 * If not set to None, this motor is tilted by the configured tilt servo.
 *
 * @group Geometry
 * @value 0 None
 * @value 1 Tilt 1
 * @value 2 Tilt 2
 * @value 3 Tilt 3
 * @value 4 Tilt 4
 */
PARAM_DEFINE_INT32(CA_ROTOR7_TILT, 0);

/**
 * Total number of Control Surfaces
 *
 * 
 *
 * @group Geometry
 * @value 0 0
 * @value 1 1
 * @value 2 2
 * @value 3 3
 * @value 4 4
 * @value 5 5
 * @value 6 6
 * @value 7 7
 * @value 8 8
 */
PARAM_DEFINE_INT32(CA_SV_CS_COUNT, 0);

/**
 * Control Surface 0 type
 *
 * 
 *
 * @group Geometry
 * @value 1 Left Aileron
 * @value 2 Right Aileron
 * @value 3 Elevator
 * @value 4 Rudder
 * @value 5 Left Elevon
 * @value 6 Right Elevon
 * @value 7 Left V-Tail
 * @value 8 Right V-Tail
 * @value 9 Left Flap
 * @value 10 Right Flap
 * @value 11 Airbrakes
 * @value 12 Custom
 */
PARAM_DEFINE_INT32(CA_SV_CS0_TYPE, 1);

/**
 * Control Surface 1 type
 *
 * 
 *
 * @group Geometry
 * @value 1 Left Aileron
 * @value 2 Right Aileron
 * @value 3 Elevator
 * @value 4 Rudder
 * @value 5 Left Elevon
 * @value 6 Right Elevon
 * @value 7 Left V-Tail
 * @value 8 Right V-Tail
 * @value 9 Left Flap
 * @value 10 Right Flap
 * @value 11 Airbrakes
 * @value 12 Custom
 */
PARAM_DEFINE_INT32(CA_SV_CS1_TYPE, 1);

/**
 * Control Surface 2 type
 *
 * 
 *
 * @group Geometry
 * @value 1 Left Aileron
 * @value 2 Right Aileron
 * @value 3 Elevator
 * @value 4 Rudder
 * @value 5 Left Elevon
 * @value 6 Right Elevon
 * @value 7 Left V-Tail
 * @value 8 Right V-Tail
 * @value 9 Left Flap
 * @value 10 Right Flap
 * @value 11 Airbrakes
 * @value 12 Custom
 */
PARAM_DEFINE_INT32(CA_SV_CS2_TYPE, 1);

/**
 * Control Surface 3 type
 *
 * 
 *
 * @group Geometry
 * @value 1 Left Aileron
 * @value 2 Right Aileron
 * @value 3 Elevator
 * @value 4 Rudder
 * @value 5 Left Elevon
 * @value 6 Right Elevon
 * @value 7 Left V-Tail
 * @value 8 Right V-Tail
 * @value 9 Left Flap
 * @value 10 Right Flap
 * @value 11 Airbrakes
 * @value 12 Custom
 */
PARAM_DEFINE_INT32(CA_SV_CS3_TYPE, 1);

/**
 * Control Surface 4 type
 *
 * 
 *
 * @group Geometry
 * @value 1 Left Aileron
 * @value 2 Right Aileron
 * @value 3 Elevator
 * @value 4 Rudder
 * @value 5 Left Elevon
 * @value 6 Right Elevon
 * @value 7 Left V-Tail
 * @value 8 Right V-Tail
 * @value 9 Left Flap
 * @value 10 Right Flap
 * @value 11 Airbrakes
 * @value 12 Custom
 */
PARAM_DEFINE_INT32(CA_SV_CS4_TYPE, 1);

/**
 * Control Surface 5 type
 *
 * 
 *
 * @group Geometry
 * @value 1 Left Aileron
 * @value 2 Right Aileron
 * @value 3 Elevator
 * @value 4 Rudder
 * @value 5 Left Elevon
 * @value 6 Right Elevon
 * @value 7 Left V-Tail
 * @value 8 Right V-Tail
 * @value 9 Left Flap
 * @value 10 Right Flap
 * @value 11 Airbrakes
 * @value 12 Custom
 */
PARAM_DEFINE_INT32(CA_SV_CS5_TYPE, 1);

/**
 * Control Surface 6 type
 *
 * 
 *
 * @group Geometry
 * @value 1 Left Aileron
 * @value 2 Right Aileron
 * @value 3 Elevator
 * @value 4 Rudder
 * @value 5 Left Elevon
 * @value 6 Right Elevon
 * @value 7 Left V-Tail
 * @value 8 Right V-Tail
 * @value 9 Left Flap
 * @value 10 Right Flap
 * @value 11 Airbrakes
 * @value 12 Custom
 */
PARAM_DEFINE_INT32(CA_SV_CS6_TYPE, 1);

/**
 * Control Surface 7 type
 *
 * 
 *
 * @group Geometry
 * @value 1 Left Aileron
 * @value 2 Right Aileron
 * @value 3 Elevator
 * @value 4 Rudder
 * @value 5 Left Elevon
 * @value 6 Right Elevon
 * @value 7 Left V-Tail
 * @value 8 Right V-Tail
 * @value 9 Left Flap
 * @value 10 Right Flap
 * @value 11 Airbrakes
 * @value 12 Custom
 */
PARAM_DEFINE_INT32(CA_SV_CS7_TYPE, 1);

/**
 * Control Surface 0 roll torque scaling
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(CA_SV_CS0_TRQ_R, 0.0);

/**
 * Control Surface 1 roll torque scaling
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(CA_SV_CS1_TRQ_R, 0.0);

/**
 * Control Surface 2 roll torque scaling
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(CA_SV_CS2_TRQ_R, 0.0);

/**
 * Control Surface 3 roll torque scaling
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(CA_SV_CS3_TRQ_R, 0.0);

/**
 * Control Surface 4 roll torque scaling
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(CA_SV_CS4_TRQ_R, 0.0);

/**
 * Control Surface 5 roll torque scaling
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(CA_SV_CS5_TRQ_R, 0.0);

/**
 * Control Surface 6 roll torque scaling
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(CA_SV_CS6_TRQ_R, 0.0);

/**
 * Control Surface 7 roll torque scaling
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(CA_SV_CS7_TRQ_R, 0.0);

/**
 * Control Surface 0 pitch torque scaling
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(CA_SV_CS0_TRQ_P, 0.0);

/**
 * Control Surface 1 pitch torque scaling
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(CA_SV_CS1_TRQ_P, 0.0);

/**
 * Control Surface 2 pitch torque scaling
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(CA_SV_CS2_TRQ_P, 0.0);

/**
 * Control Surface 3 pitch torque scaling
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(CA_SV_CS3_TRQ_P, 0.0);

/**
 * Control Surface 4 pitch torque scaling
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(CA_SV_CS4_TRQ_P, 0.0);

/**
 * Control Surface 5 pitch torque scaling
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(CA_SV_CS5_TRQ_P, 0.0);

/**
 * Control Surface 6 pitch torque scaling
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(CA_SV_CS6_TRQ_P, 0.0);

/**
 * Control Surface 7 pitch torque scaling
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(CA_SV_CS7_TRQ_P, 0.0);

/**
 * Control Surface 0 yaw torque scaling
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(CA_SV_CS0_TRQ_Y, 0.0);

/**
 * Control Surface 1 yaw torque scaling
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(CA_SV_CS1_TRQ_Y, 0.0);

/**
 * Control Surface 2 yaw torque scaling
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(CA_SV_CS2_TRQ_Y, 0.0);

/**
 * Control Surface 3 yaw torque scaling
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(CA_SV_CS3_TRQ_Y, 0.0);

/**
 * Control Surface 4 yaw torque scaling
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(CA_SV_CS4_TRQ_Y, 0.0);

/**
 * Control Surface 5 yaw torque scaling
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(CA_SV_CS5_TRQ_Y, 0.0);

/**
 * Control Surface 6 yaw torque scaling
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(CA_SV_CS6_TRQ_Y, 0.0);

/**
 * Control Surface 7 yaw torque scaling
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(CA_SV_CS7_TRQ_Y, 0.0);

/**
 * Control Surface 0 trim
 *
 * Can be used to add an offset to the servo control.
 *
 * @group Geometry
 * @decimal 2
 * @min -1.0
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(CA_SV_CS0_TRIM, 0.0);

/**
 * Control Surface 1 trim
 *
 * Can be used to add an offset to the servo control.
 *
 * @group Geometry
 * @decimal 2
 * @min -1.0
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(CA_SV_CS1_TRIM, 0.0);

/**
 * Control Surface 2 trim
 *
 * Can be used to add an offset to the servo control.
 *
 * @group Geometry
 * @decimal 2
 * @min -1.0
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(CA_SV_CS2_TRIM, 0.0);

/**
 * Control Surface 3 trim
 *
 * Can be used to add an offset to the servo control.
 *
 * @group Geometry
 * @decimal 2
 * @min -1.0
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(CA_SV_CS3_TRIM, 0.0);

/**
 * Control Surface 4 trim
 *
 * Can be used to add an offset to the servo control.
 *
 * @group Geometry
 * @decimal 2
 * @min -1.0
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(CA_SV_CS4_TRIM, 0.0);

/**
 * Control Surface 5 trim
 *
 * Can be used to add an offset to the servo control.
 *
 * @group Geometry
 * @decimal 2
 * @min -1.0
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(CA_SV_CS5_TRIM, 0.0);

/**
 * Control Surface 6 trim
 *
 * Can be used to add an offset to the servo control.
 *
 * @group Geometry
 * @decimal 2
 * @min -1.0
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(CA_SV_CS6_TRIM, 0.0);

/**
 * Control Surface 7 trim
 *
 * Can be used to add an offset to the servo control.
 *
 * @group Geometry
 * @decimal 2
 * @min -1.0
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(CA_SV_CS7_TRIM, 0.0);

/**
 * Total number of Tilt Servos
 *
 * 
 *
 * @group Geometry
 * @value 0 0
 * @value 1 1
 * @value 2 2
 * @value 3 3
 * @value 4 4
 */
PARAM_DEFINE_INT32(CA_SV_TL_COUNT, 0);

/**
 * Tilt 0 is used for control
 *
 * Define if this servo is used for additional control.
 *
 * @group Geometry
 * @value 0 None
 * @value 1 Yaw
 * @value 2 Pitch
 * @value 3 Yaw and Pitch
 */
PARAM_DEFINE_INT32(CA_SV_TL0_CT, 1);

/**
 * Tilt 1 is used for control
 *
 * Define if this servo is used for additional control.
 *
 * @group Geometry
 * @value 0 None
 * @value 1 Yaw
 * @value 2 Pitch
 * @value 3 Yaw and Pitch
 */
PARAM_DEFINE_INT32(CA_SV_TL1_CT, 1);

/**
 * Tilt 2 is used for control
 *
 * Define if this servo is used for additional control.
 *
 * @group Geometry
 * @value 0 None
 * @value 1 Yaw
 * @value 2 Pitch
 * @value 3 Yaw and Pitch
 */
PARAM_DEFINE_INT32(CA_SV_TL2_CT, 1);

/**
 * Tilt 3 is used for control
 *
 * Define if this servo is used for additional control.
 *
 * @group Geometry
 * @value 0 None
 * @value 1 Yaw
 * @value 2 Pitch
 * @value 3 Yaw and Pitch
 */
PARAM_DEFINE_INT32(CA_SV_TL3_CT, 1);

/**
 * Tilt Servo 0 Tilt Angle at Minimum
 *
 * Defines the tilt angle when the servo is at the minimum.
 * An angle of zero means upwards.
 * 
 *
 * @group Geometry
 * @decimal 0
 * @min -90.0
 * @max 90.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(CA_SV_TL0_MINA, 0.0);

/**
 * Tilt Servo 1 Tilt Angle at Minimum
 *
 * Defines the tilt angle when the servo is at the minimum.
 * An angle of zero means upwards.
 * 
 *
 * @group Geometry
 * @decimal 0
 * @min -90.0
 * @max 90.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(CA_SV_TL1_MINA, 0.0);

/**
 * Tilt Servo 2 Tilt Angle at Minimum
 *
 * Defines the tilt angle when the servo is at the minimum.
 * An angle of zero means upwards.
 * 
 *
 * @group Geometry
 * @decimal 0
 * @min -90.0
 * @max 90.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(CA_SV_TL2_MINA, 0.0);

/**
 * Tilt Servo 3 Tilt Angle at Minimum
 *
 * Defines the tilt angle when the servo is at the minimum.
 * An angle of zero means upwards.
 * 
 *
 * @group Geometry
 * @decimal 0
 * @min -90.0
 * @max 90.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(CA_SV_TL3_MINA, 0.0);

/**
 * Tilt Servo 0 Tilt Angle at Maximum
 *
 * Defines the tilt angle when the servo is at the maximum.
 * An angle of zero means upwards.
 * 
 *
 * @group Geometry
 * @decimal 0
 * @min -90.0
 * @max 90.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(CA_SV_TL0_MAXA, 90.0);

/**
 * Tilt Servo 1 Tilt Angle at Maximum
 *
 * Defines the tilt angle when the servo is at the maximum.
 * An angle of zero means upwards.
 * 
 *
 * @group Geometry
 * @decimal 0
 * @min -90.0
 * @max 90.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(CA_SV_TL1_MAXA, 90.0);

/**
 * Tilt Servo 2 Tilt Angle at Maximum
 *
 * Defines the tilt angle when the servo is at the maximum.
 * An angle of zero means upwards.
 * 
 *
 * @group Geometry
 * @decimal 0
 * @min -90.0
 * @max 90.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(CA_SV_TL2_MAXA, 90.0);

/**
 * Tilt Servo 3 Tilt Angle at Maximum
 *
 * Defines the tilt angle when the servo is at the maximum.
 * An angle of zero means upwards.
 * 
 *
 * @group Geometry
 * @decimal 0
 * @min -90.0
 * @max 90.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(CA_SV_TL3_MAXA, 90.0);

/**
 * Tilt Servo 0 Tilt Direction
 *
 * Defines the direction the servo tilts towards when moving towards the maximum tilt angle.
 * For example if the minimum tilt angle is -90, the maximum 90, and the direction 'Towards Front',
 * the motor axis aligns with the XZ-plane, points towards -X at the minimum and +X at the maximum tilt.
 * 
 *
 * @group Geometry
 * @value 0 Towards Front
 * @value 90 Towards Right
 * @min 0
 * @max 359
 */
PARAM_DEFINE_INT32(CA_SV_TL0_TD, 0);

/**
 * Tilt Servo 1 Tilt Direction
 *
 * Defines the direction the servo tilts towards when moving towards the maximum tilt angle.
 * For example if the minimum tilt angle is -90, the maximum 90, and the direction 'Towards Front',
 * the motor axis aligns with the XZ-plane, points towards -X at the minimum and +X at the maximum tilt.
 * 
 *
 * @group Geometry
 * @value 0 Towards Front
 * @value 90 Towards Right
 * @min 0
 * @max 359
 */
PARAM_DEFINE_INT32(CA_SV_TL1_TD, 0);

/**
 * Tilt Servo 2 Tilt Direction
 *
 * Defines the direction the servo tilts towards when moving towards the maximum tilt angle.
 * For example if the minimum tilt angle is -90, the maximum 90, and the direction 'Towards Front',
 * the motor axis aligns with the XZ-plane, points towards -X at the minimum and +X at the maximum tilt.
 * 
 *
 * @group Geometry
 * @value 0 Towards Front
 * @value 90 Towards Right
 * @min 0
 * @max 359
 */
PARAM_DEFINE_INT32(CA_SV_TL2_TD, 0);

/**
 * Tilt Servo 3 Tilt Direction
 *
 * Defines the direction the servo tilts towards when moving towards the maximum tilt angle.
 * For example if the minimum tilt angle is -90, the maximum 90, and the direction 'Towards Front',
 * the motor axis aligns with the XZ-plane, points towards -X at the minimum and +X at the maximum tilt.
 * 
 *
 * @group Geometry
 * @value 0 Towards Front
 * @value 90 Towards Right
 * @min 0
 * @max 359
 */
PARAM_DEFINE_INT32(CA_SV_TL3_TD, 0);

/**
 * MAVLink Mode for instance 0
 *
 * The MAVLink Mode defines the set of streamed messages (for example the
 * vehicle's attitude) and their sending rates.
 * 
 *
 * @group MAVLink
 * @value 0 Normal
 * @value 1 Custom
 * @value 2 Onboard
 * @value 3 OSD
 * @value 4 Magic
 * @value 5 Config
 * @value 7 Minimal
 * @value 8 External Vision
 * @value 10 Gimbal
 * @value 11 Onboard Low Bandwidth
 * @reboot_required True
 */
PARAM_DEFINE_INT32(MAV_0_MODE, 0);

/**
 * MAVLink Mode for instance 1
 *
 * The MAVLink Mode defines the set of streamed messages (for example the
 * vehicle's attitude) and their sending rates.
 * 
 *
 * @group MAVLink
 * @value 0 Normal
 * @value 1 Custom
 * @value 2 Onboard
 * @value 3 OSD
 * @value 4 Magic
 * @value 5 Config
 * @value 7 Minimal
 * @value 8 External Vision
 * @value 10 Gimbal
 * @value 11 Onboard Low Bandwidth
 * @reboot_required True
 */
PARAM_DEFINE_INT32(MAV_1_MODE, 2);

/**
 * MAVLink Mode for instance 2
 *
 * The MAVLink Mode defines the set of streamed messages (for example the
 * vehicle's attitude) and their sending rates.
 * 
 *
 * @group MAVLink
 * @value 0 Normal
 * @value 1 Custom
 * @value 2 Onboard
 * @value 3 OSD
 * @value 4 Magic
 * @value 5 Config
 * @value 7 Minimal
 * @value 8 External Vision
 * @value 10 Gimbal
 * @value 11 Onboard Low Bandwidth
 * @reboot_required True
 */
PARAM_DEFINE_INT32(MAV_2_MODE, 0);

/**
 * Maximum MAVLink sending rate for instance 0
 *
 * Configure the maximum sending rate for the MAVLink streams in Bytes/sec.
 * If the configured streams exceed the maximum rate, the sending rate of
 * each stream is automatically decreased.
 * 
 * If this is set to 0 a value of half of the theoretical maximum bandwidth is used.
 * This corresponds to baudrate/20 Bytes/s (baudrate/10 = maximum data rate on
 * 8N1-configured links).
 * 
 *
 * @group MAVLink
 * @min 0
 * @unit B/s
 * @reboot_required True
 */
PARAM_DEFINE_INT32(MAV_0_RATE, 1200);

/**
 * Maximum MAVLink sending rate for instance 1
 *
 * Configure the maximum sending rate for the MAVLink streams in Bytes/sec.
 * If the configured streams exceed the maximum rate, the sending rate of
 * each stream is automatically decreased.
 * 
 * If this is set to 0 a value of half of the theoretical maximum bandwidth is used.
 * This corresponds to baudrate/20 Bytes/s (baudrate/10 = maximum data rate on
 * 8N1-configured links).
 * 
 *
 * @group MAVLink
 * @min 0
 * @unit B/s
 * @reboot_required True
 */
PARAM_DEFINE_INT32(MAV_1_RATE, 0);

/**
 * Maximum MAVLink sending rate for instance 2
 *
 * Configure the maximum sending rate for the MAVLink streams in Bytes/sec.
 * If the configured streams exceed the maximum rate, the sending rate of
 * each stream is automatically decreased.
 * 
 * If this is set to 0 a value of half of the theoretical maximum bandwidth is used.
 * This corresponds to baudrate/20 Bytes/s (baudrate/10 = maximum data rate on
 * 8N1-configured links).
 * 
 *
 * @group MAVLink
 * @min 0
 * @unit B/s
 * @reboot_required True
 */
PARAM_DEFINE_INT32(MAV_2_RATE, 0);

/**
 * Enable MAVLink Message forwarding for instance 0
 *
 * If enabled, forward incoming MAVLink messages to other MAVLink ports if the
 * message is either broadcast or the target is not the autopilot.
 * 
 * This allows for example a GCS to talk to a camera that is connected to the
 * autopilot via MAVLink (on a different link than the GCS).
 * 
 *
 * @group MAVLink
 * @boolean
 * @reboot_required True
 */
PARAM_DEFINE_INT32(MAV_0_FORWARD, 1);

/**
 * Enable MAVLink Message forwarding for instance 1
 *
 * If enabled, forward incoming MAVLink messages to other MAVLink ports if the
 * message is either broadcast or the target is not the autopilot.
 * 
 * This allows for example a GCS to talk to a camera that is connected to the
 * autopilot via MAVLink (on a different link than the GCS).
 * 
 *
 * @group MAVLink
 * @boolean
 * @reboot_required True
 */
PARAM_DEFINE_INT32(MAV_1_FORWARD, 0);

/**
 * Enable MAVLink Message forwarding for instance 2
 *
 * If enabled, forward incoming MAVLink messages to other MAVLink ports if the
 * message is either broadcast or the target is not the autopilot.
 * 
 * This allows for example a GCS to talk to a camera that is connected to the
 * autopilot via MAVLink (on a different link than the GCS).
 * 
 *
 * @group MAVLink
 * @boolean
 * @reboot_required True
 */
PARAM_DEFINE_INT32(MAV_2_FORWARD, 0);

/**
 * Enable software throttling of mavlink on instance 0
 *
 * If enabled, MAVLink messages will be throttled according to
 * `txbuf` field reported by radio_status.
 * 
 * Requires a radio to send the mavlink message RADIO_STATUS.
 * 
 *
 * @group MAVLink
 * @boolean
 * @reboot_required True
 */
PARAM_DEFINE_INT32(MAV_0_RADIO_CTL, 1);

/**
 * Enable software throttling of mavlink on instance 1
 *
 * If enabled, MAVLink messages will be throttled according to
 * `txbuf` field reported by radio_status.
 * 
 * Requires a radio to send the mavlink message RADIO_STATUS.
 * 
 *
 * @group MAVLink
 * @boolean
 * @reboot_required True
 */
PARAM_DEFINE_INT32(MAV_1_RADIO_CTL, 1);

/**
 * Enable software throttling of mavlink on instance 2
 *
 * If enabled, MAVLink messages will be throttled according to
 * `txbuf` field reported by radio_status.
 * 
 * Requires a radio to send the mavlink message RADIO_STATUS.
 * 
 *
 * @group MAVLink
 * @boolean
 * @reboot_required True
 */
PARAM_DEFINE_INT32(MAV_2_RADIO_CTL, 1);

/**
 * Enable serial flow control for instance 0
 *
 * This is used to force flow control on or off for the the mavlink
 * instance. By default it is auto detected. Use when auto detction fails.
 * 
 *
 * @group MAVLink
 * @value 0 Force off
 * @value 1 Force on
 * @value 2 Auto-detected
 */
PARAM_DEFINE_INT32(MAV_0_FLOW_CTRL, 2);

/**
 * Enable serial flow control for instance 1
 *
 * This is used to force flow control on or off for the the mavlink
 * instance. By default it is auto detected. Use when auto detction fails.
 * 
 *
 * @group MAVLink
 * @value 0 Force off
 * @value 1 Force on
 * @value 2 Auto-detected
 */
PARAM_DEFINE_INT32(MAV_1_FLOW_CTRL, 2);

/**
 * Enable serial flow control for instance 2
 *
 * This is used to force flow control on or off for the the mavlink
 * instance. By default it is auto detected. Use when auto detction fails.
 * 
 *
 * @group MAVLink
 * @value 0 Force off
 * @value 1 Force on
 * @value 2 Auto-detected
 */
PARAM_DEFINE_INT32(MAV_2_FLOW_CTRL, 2);

/**
 * Accelerometer 0 calibration device ID
 *
 * Device ID of the accelerometer this calibration applies to.
 *
 * @group Sensor Calibration
 * @category System
 */
PARAM_DEFINE_INT32(CAL_ACC0_ID, 0);

/**
 * Accelerometer 1 calibration device ID
 *
 * Device ID of the accelerometer this calibration applies to.
 *
 * @group Sensor Calibration
 * @category System
 */
PARAM_DEFINE_INT32(CAL_ACC1_ID, 0);

/**
 * Accelerometer 2 calibration device ID
 *
 * Device ID of the accelerometer this calibration applies to.
 *
 * @group Sensor Calibration
 * @category System
 */
PARAM_DEFINE_INT32(CAL_ACC2_ID, 0);

/**
 * Accelerometer 3 calibration device ID
 *
 * Device ID of the accelerometer this calibration applies to.
 *
 * @group Sensor Calibration
 * @category System
 */
PARAM_DEFINE_INT32(CAL_ACC3_ID, 0);

/**
 * Accelerometer 0 priority
 *
 * 
 *
 * @group Sensor Calibration
 * @value -1 Uninitialized
 * @value 0 Disabled
 * @value 1 Min
 * @value 25 Low
 * @value 50 Medium (Default)
 * @value 75 High
 * @value 100 Max
 * @category System
 */
PARAM_DEFINE_INT32(CAL_ACC0_PRIO, -1);

/**
 * Accelerometer 1 priority
 *
 * 
 *
 * @group Sensor Calibration
 * @value -1 Uninitialized
 * @value 0 Disabled
 * @value 1 Min
 * @value 25 Low
 * @value 50 Medium (Default)
 * @value 75 High
 * @value 100 Max
 * @category System
 */
PARAM_DEFINE_INT32(CAL_ACC1_PRIO, -1);

/**
 * Accelerometer 2 priority
 *
 * 
 *
 * @group Sensor Calibration
 * @value -1 Uninitialized
 * @value 0 Disabled
 * @value 1 Min
 * @value 25 Low
 * @value 50 Medium (Default)
 * @value 75 High
 * @value 100 Max
 * @category System
 */
PARAM_DEFINE_INT32(CAL_ACC2_PRIO, -1);

/**
 * Accelerometer 3 priority
 *
 * 
 *
 * @group Sensor Calibration
 * @value -1 Uninitialized
 * @value 0 Disabled
 * @value 1 Min
 * @value 25 Low
 * @value 50 Medium (Default)
 * @value 75 High
 * @value 100 Max
 * @category System
 */
PARAM_DEFINE_INT32(CAL_ACC3_PRIO, -1);

/**
 * Accelerometer 0 rotation relative to airframe
 *
 * An internal sensor will force a value of -1, so a GCS should only attempt to configure the rotation if the value is greater than or equal to zero.
 * 
 *
 * @group Sensor Calibration
 * @value -1 Internal
 * @value 0 No rotation
 * @value 1 Yaw 45°
 * @value 2 Yaw 90°
 * @value 3 Yaw 135°
 * @value 4 Yaw 180°
 * @value 5 Yaw 225°
 * @value 6 Yaw 270°
 * @value 7 Yaw 315°
 * @value 8 Roll 180°
 * @value 9 Roll 180°, Yaw 45°
 * @value 10 Roll 180°, Yaw 90°
 * @value 11 Roll 180°, Yaw 135°
 * @value 12 Pitch 180°
 * @value 13 Roll 180°, Yaw 225°
 * @value 14 Roll 180°, Yaw 270°
 * @value 15 Roll 180°, Yaw 315°
 * @value 16 Roll 90°
 * @value 17 Roll 90°, Yaw 45°
 * @value 18 Roll 90°, Yaw 90°
 * @value 19 Roll 90°, Yaw 135°
 * @value 20 Roll 270°
 * @value 21 Roll 270°, Yaw 45°
 * @value 22 Roll 270°, Yaw 90°
 * @value 23 Roll 270°, Yaw 135°
 * @value 24 Pitch 90°
 * @value 25 Pitch 270°
 * @value 26 Pitch 180°, Yaw 90°
 * @value 27 Pitch 180°, Yaw 270°
 * @value 28 Roll 90°, Pitch 90°
 * @value 29 Roll 180°, Pitch 90°
 * @value 30 Roll 270°, Pitch 90°
 * @value 31 Roll 90°, Pitch 180°
 * @value 32 Roll 270°, Pitch 180°
 * @value 33 Roll 90°, Pitch 270°
 * @value 34 Roll 180°, Pitch 270°
 * @value 35 Roll 270°, Pitch 270°
 * @value 36 Roll 90°, Pitch 180°, Yaw 90°
 * @value 37 Roll 90°, Yaw 270°
 * @value 38 Roll 90°, Pitch 68°, Yaw 293°
 * @value 39 Pitch 315°
 * @value 40 Roll 90°, Pitch 315°
 * @category System
 * @min -1
 * @max 40
 */
PARAM_DEFINE_INT32(CAL_ACC0_ROT, -1);

/**
 * Accelerometer 1 rotation relative to airframe
 *
 * An internal sensor will force a value of -1, so a GCS should only attempt to configure the rotation if the value is greater than or equal to zero.
 * 
 *
 * @group Sensor Calibration
 * @value -1 Internal
 * @value 0 No rotation
 * @value 1 Yaw 45°
 * @value 2 Yaw 90°
 * @value 3 Yaw 135°
 * @value 4 Yaw 180°
 * @value 5 Yaw 225°
 * @value 6 Yaw 270°
 * @value 7 Yaw 315°
 * @value 8 Roll 180°
 * @value 9 Roll 180°, Yaw 45°
 * @value 10 Roll 180°, Yaw 90°
 * @value 11 Roll 180°, Yaw 135°
 * @value 12 Pitch 180°
 * @value 13 Roll 180°, Yaw 225°
 * @value 14 Roll 180°, Yaw 270°
 * @value 15 Roll 180°, Yaw 315°
 * @value 16 Roll 90°
 * @value 17 Roll 90°, Yaw 45°
 * @value 18 Roll 90°, Yaw 90°
 * @value 19 Roll 90°, Yaw 135°
 * @value 20 Roll 270°
 * @value 21 Roll 270°, Yaw 45°
 * @value 22 Roll 270°, Yaw 90°
 * @value 23 Roll 270°, Yaw 135°
 * @value 24 Pitch 90°
 * @value 25 Pitch 270°
 * @value 26 Pitch 180°, Yaw 90°
 * @value 27 Pitch 180°, Yaw 270°
 * @value 28 Roll 90°, Pitch 90°
 * @value 29 Roll 180°, Pitch 90°
 * @value 30 Roll 270°, Pitch 90°
 * @value 31 Roll 90°, Pitch 180°
 * @value 32 Roll 270°, Pitch 180°
 * @value 33 Roll 90°, Pitch 270°
 * @value 34 Roll 180°, Pitch 270°
 * @value 35 Roll 270°, Pitch 270°
 * @value 36 Roll 90°, Pitch 180°, Yaw 90°
 * @value 37 Roll 90°, Yaw 270°
 * @value 38 Roll 90°, Pitch 68°, Yaw 293°
 * @value 39 Pitch 315°
 * @value 40 Roll 90°, Pitch 315°
 * @category System
 * @min -1
 * @max 40
 */
PARAM_DEFINE_INT32(CAL_ACC1_ROT, -1);

/**
 * Accelerometer 2 rotation relative to airframe
 *
 * An internal sensor will force a value of -1, so a GCS should only attempt to configure the rotation if the value is greater than or equal to zero.
 * 
 *
 * @group Sensor Calibration
 * @value -1 Internal
 * @value 0 No rotation
 * @value 1 Yaw 45°
 * @value 2 Yaw 90°
 * @value 3 Yaw 135°
 * @value 4 Yaw 180°
 * @value 5 Yaw 225°
 * @value 6 Yaw 270°
 * @value 7 Yaw 315°
 * @value 8 Roll 180°
 * @value 9 Roll 180°, Yaw 45°
 * @value 10 Roll 180°, Yaw 90°
 * @value 11 Roll 180°, Yaw 135°
 * @value 12 Pitch 180°
 * @value 13 Roll 180°, Yaw 225°
 * @value 14 Roll 180°, Yaw 270°
 * @value 15 Roll 180°, Yaw 315°
 * @value 16 Roll 90°
 * @value 17 Roll 90°, Yaw 45°
 * @value 18 Roll 90°, Yaw 90°
 * @value 19 Roll 90°, Yaw 135°
 * @value 20 Roll 270°
 * @value 21 Roll 270°, Yaw 45°
 * @value 22 Roll 270°, Yaw 90°
 * @value 23 Roll 270°, Yaw 135°
 * @value 24 Pitch 90°
 * @value 25 Pitch 270°
 * @value 26 Pitch 180°, Yaw 90°
 * @value 27 Pitch 180°, Yaw 270°
 * @value 28 Roll 90°, Pitch 90°
 * @value 29 Roll 180°, Pitch 90°
 * @value 30 Roll 270°, Pitch 90°
 * @value 31 Roll 90°, Pitch 180°
 * @value 32 Roll 270°, Pitch 180°
 * @value 33 Roll 90°, Pitch 270°
 * @value 34 Roll 180°, Pitch 270°
 * @value 35 Roll 270°, Pitch 270°
 * @value 36 Roll 90°, Pitch 180°, Yaw 90°
 * @value 37 Roll 90°, Yaw 270°
 * @value 38 Roll 90°, Pitch 68°, Yaw 293°
 * @value 39 Pitch 315°
 * @value 40 Roll 90°, Pitch 315°
 * @category System
 * @min -1
 * @max 40
 */
PARAM_DEFINE_INT32(CAL_ACC2_ROT, -1);

/**
 * Accelerometer 3 rotation relative to airframe
 *
 * An internal sensor will force a value of -1, so a GCS should only attempt to configure the rotation if the value is greater than or equal to zero.
 * 
 *
 * @group Sensor Calibration
 * @value -1 Internal
 * @value 0 No rotation
 * @value 1 Yaw 45°
 * @value 2 Yaw 90°
 * @value 3 Yaw 135°
 * @value 4 Yaw 180°
 * @value 5 Yaw 225°
 * @value 6 Yaw 270°
 * @value 7 Yaw 315°
 * @value 8 Roll 180°
 * @value 9 Roll 180°, Yaw 45°
 * @value 10 Roll 180°, Yaw 90°
 * @value 11 Roll 180°, Yaw 135°
 * @value 12 Pitch 180°
 * @value 13 Roll 180°, Yaw 225°
 * @value 14 Roll 180°, Yaw 270°
 * @value 15 Roll 180°, Yaw 315°
 * @value 16 Roll 90°
 * @value 17 Roll 90°, Yaw 45°
 * @value 18 Roll 90°, Yaw 90°
 * @value 19 Roll 90°, Yaw 135°
 * @value 20 Roll 270°
 * @value 21 Roll 270°, Yaw 45°
 * @value 22 Roll 270°, Yaw 90°
 * @value 23 Roll 270°, Yaw 135°
 * @value 24 Pitch 90°
 * @value 25 Pitch 270°
 * @value 26 Pitch 180°, Yaw 90°
 * @value 27 Pitch 180°, Yaw 270°
 * @value 28 Roll 90°, Pitch 90°
 * @value 29 Roll 180°, Pitch 90°
 * @value 30 Roll 270°, Pitch 90°
 * @value 31 Roll 90°, Pitch 180°
 * @value 32 Roll 270°, Pitch 180°
 * @value 33 Roll 90°, Pitch 270°
 * @value 34 Roll 180°, Pitch 270°
 * @value 35 Roll 270°, Pitch 270°
 * @value 36 Roll 90°, Pitch 180°, Yaw 90°
 * @value 37 Roll 90°, Yaw 270°
 * @value 38 Roll 90°, Pitch 68°, Yaw 293°
 * @value 39 Pitch 315°
 * @value 40 Roll 90°, Pitch 315°
 * @category System
 * @min -1
 * @max 40
 */
PARAM_DEFINE_INT32(CAL_ACC3_ROT, -1);

/**
 * Accelerometer 0 X-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @unit m
 */
PARAM_DEFINE_FLOAT(CAL_ACC0_XOFF, 0.0);

/**
 * Accelerometer 1 X-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @unit m
 */
PARAM_DEFINE_FLOAT(CAL_ACC1_XOFF, 0.0);

/**
 * Accelerometer 2 X-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @unit m
 */
PARAM_DEFINE_FLOAT(CAL_ACC2_XOFF, 0.0);

/**
 * Accelerometer 3 X-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @unit m
 */
PARAM_DEFINE_FLOAT(CAL_ACC3_XOFF, 0.0);

/**
 * Accelerometer 0 Y-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @unit m
 */
PARAM_DEFINE_FLOAT(CAL_ACC0_YOFF, 0.0);

/**
 * Accelerometer 1 Y-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @unit m
 */
PARAM_DEFINE_FLOAT(CAL_ACC1_YOFF, 0.0);

/**
 * Accelerometer 2 Y-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @unit m
 */
PARAM_DEFINE_FLOAT(CAL_ACC2_YOFF, 0.0);

/**
 * Accelerometer 3 Y-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @unit m
 */
PARAM_DEFINE_FLOAT(CAL_ACC3_YOFF, 0.0);

/**
 * Accelerometer 0 Z-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @unit m
 */
PARAM_DEFINE_FLOAT(CAL_ACC0_ZOFF, 0.0);

/**
 * Accelerometer 1 Z-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @unit m
 */
PARAM_DEFINE_FLOAT(CAL_ACC1_ZOFF, 0.0);

/**
 * Accelerometer 2 Z-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @unit m
 */
PARAM_DEFINE_FLOAT(CAL_ACC2_ZOFF, 0.0);

/**
 * Accelerometer 3 Z-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @unit m
 */
PARAM_DEFINE_FLOAT(CAL_ACC3_ZOFF, 0.0);

/**
 * Accelerometer 0 X-axis scaling factor
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @min 0.1
 * @max 3.0
 */
PARAM_DEFINE_FLOAT(CAL_ACC0_XSCALE, 1.0);

/**
 * Accelerometer 1 X-axis scaling factor
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @min 0.1
 * @max 3.0
 */
PARAM_DEFINE_FLOAT(CAL_ACC1_XSCALE, 1.0);

/**
 * Accelerometer 2 X-axis scaling factor
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @min 0.1
 * @max 3.0
 */
PARAM_DEFINE_FLOAT(CAL_ACC2_XSCALE, 1.0);

/**
 * Accelerometer 3 X-axis scaling factor
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @min 0.1
 * @max 3.0
 */
PARAM_DEFINE_FLOAT(CAL_ACC3_XSCALE, 1.0);

/**
 * Accelerometer 0 Y-axis scaling factor
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @min 0.1
 * @max 3.0
 */
PARAM_DEFINE_FLOAT(CAL_ACC0_YSCALE, 1.0);

/**
 * Accelerometer 1 Y-axis scaling factor
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @min 0.1
 * @max 3.0
 */
PARAM_DEFINE_FLOAT(CAL_ACC1_YSCALE, 1.0);

/**
 * Accelerometer 2 Y-axis scaling factor
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @min 0.1
 * @max 3.0
 */
PARAM_DEFINE_FLOAT(CAL_ACC2_YSCALE, 1.0);

/**
 * Accelerometer 3 Y-axis scaling factor
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @min 0.1
 * @max 3.0
 */
PARAM_DEFINE_FLOAT(CAL_ACC3_YSCALE, 1.0);

/**
 * Accelerometer 0 Z-axis scaling factor
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @min 0.1
 * @max 3.0
 */
PARAM_DEFINE_FLOAT(CAL_ACC0_ZSCALE, 1.0);

/**
 * Accelerometer 1 Z-axis scaling factor
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @min 0.1
 * @max 3.0
 */
PARAM_DEFINE_FLOAT(CAL_ACC1_ZSCALE, 1.0);

/**
 * Accelerometer 2 Z-axis scaling factor
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @min 0.1
 * @max 3.0
 */
PARAM_DEFINE_FLOAT(CAL_ACC2_ZSCALE, 1.0);

/**
 * Accelerometer 3 Z-axis scaling factor
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @min 0.1
 * @max 3.0
 */
PARAM_DEFINE_FLOAT(CAL_ACC3_ZSCALE, 1.0);

/**
 * Gyroscope 0 calibration device ID
 *
 * Device ID of the gyroscope this calibration applies to.
 *
 * @group Sensor Calibration
 * @category System
 */
PARAM_DEFINE_INT32(CAL_GYRO0_ID, 0);

/**
 * Gyroscope 1 calibration device ID
 *
 * Device ID of the gyroscope this calibration applies to.
 *
 * @group Sensor Calibration
 * @category System
 */
PARAM_DEFINE_INT32(CAL_GYRO1_ID, 0);

/**
 * Gyroscope 2 calibration device ID
 *
 * Device ID of the gyroscope this calibration applies to.
 *
 * @group Sensor Calibration
 * @category System
 */
PARAM_DEFINE_INT32(CAL_GYRO2_ID, 0);

/**
 * Gyroscope 3 calibration device ID
 *
 * Device ID of the gyroscope this calibration applies to.
 *
 * @group Sensor Calibration
 * @category System
 */
PARAM_DEFINE_INT32(CAL_GYRO3_ID, 0);

/**
 * Gyroscope 0 priority
 *
 * 
 *
 * @group Sensor Calibration
 * @value -1 Uninitialized
 * @value 0 Disabled
 * @value 1 Min
 * @value 25 Low
 * @value 50 Medium (Default)
 * @value 75 High
 * @value 100 Max
 * @category System
 */
PARAM_DEFINE_INT32(CAL_GYRO0_PRIO, -1);

/**
 * Gyroscope 1 priority
 *
 * 
 *
 * @group Sensor Calibration
 * @value -1 Uninitialized
 * @value 0 Disabled
 * @value 1 Min
 * @value 25 Low
 * @value 50 Medium (Default)
 * @value 75 High
 * @value 100 Max
 * @category System
 */
PARAM_DEFINE_INT32(CAL_GYRO1_PRIO, -1);

/**
 * Gyroscope 2 priority
 *
 * 
 *
 * @group Sensor Calibration
 * @value -1 Uninitialized
 * @value 0 Disabled
 * @value 1 Min
 * @value 25 Low
 * @value 50 Medium (Default)
 * @value 75 High
 * @value 100 Max
 * @category System
 */
PARAM_DEFINE_INT32(CAL_GYRO2_PRIO, -1);

/**
 * Gyroscope 3 priority
 *
 * 
 *
 * @group Sensor Calibration
 * @value -1 Uninitialized
 * @value 0 Disabled
 * @value 1 Min
 * @value 25 Low
 * @value 50 Medium (Default)
 * @value 75 High
 * @value 100 Max
 * @category System
 */
PARAM_DEFINE_INT32(CAL_GYRO3_PRIO, -1);

/**
 * Gyroscope 0 rotation relative to airframe
 *
 * An internal sensor will force a value of -1, so a GCS should only attempt to configure the rotation if the value is greater than or equal to zero.
 * 
 *
 * @group Sensor Calibration
 * @value -1 Internal
 * @value 0 No rotation
 * @value 1 Yaw 45°
 * @value 2 Yaw 90°
 * @value 3 Yaw 135°
 * @value 4 Yaw 180°
 * @value 5 Yaw 225°
 * @value 6 Yaw 270°
 * @value 7 Yaw 315°
 * @value 8 Roll 180°
 * @value 9 Roll 180°, Yaw 45°
 * @value 10 Roll 180°, Yaw 90°
 * @value 11 Roll 180°, Yaw 135°
 * @value 12 Pitch 180°
 * @value 13 Roll 180°, Yaw 225°
 * @value 14 Roll 180°, Yaw 270°
 * @value 15 Roll 180°, Yaw 315°
 * @value 16 Roll 90°
 * @value 17 Roll 90°, Yaw 45°
 * @value 18 Roll 90°, Yaw 90°
 * @value 19 Roll 90°, Yaw 135°
 * @value 20 Roll 270°
 * @value 21 Roll 270°, Yaw 45°
 * @value 22 Roll 270°, Yaw 90°
 * @value 23 Roll 270°, Yaw 135°
 * @value 24 Pitch 90°
 * @value 25 Pitch 270°
 * @value 26 Pitch 180°, Yaw 90°
 * @value 27 Pitch 180°, Yaw 270°
 * @value 28 Roll 90°, Pitch 90°
 * @value 29 Roll 180°, Pitch 90°
 * @value 30 Roll 270°, Pitch 90°
 * @value 31 Roll 90°, Pitch 180°
 * @value 32 Roll 270°, Pitch 180°
 * @value 33 Roll 90°, Pitch 270°
 * @value 34 Roll 180°, Pitch 270°
 * @value 35 Roll 270°, Pitch 270°
 * @value 36 Roll 90°, Pitch 180°, Yaw 90°
 * @value 37 Roll 90°, Yaw 270°
 * @value 38 Roll 90°, Pitch 68°, Yaw 293°
 * @value 39 Pitch 315°
 * @value 40 Roll 90°, Pitch 315°
 * @category System
 * @min -1
 * @max 40
 */
PARAM_DEFINE_INT32(CAL_GYRO0_ROT, -1);

/**
 * Gyroscope 1 rotation relative to airframe
 *
 * An internal sensor will force a value of -1, so a GCS should only attempt to configure the rotation if the value is greater than or equal to zero.
 * 
 *
 * @group Sensor Calibration
 * @value -1 Internal
 * @value 0 No rotation
 * @value 1 Yaw 45°
 * @value 2 Yaw 90°
 * @value 3 Yaw 135°
 * @value 4 Yaw 180°
 * @value 5 Yaw 225°
 * @value 6 Yaw 270°
 * @value 7 Yaw 315°
 * @value 8 Roll 180°
 * @value 9 Roll 180°, Yaw 45°
 * @value 10 Roll 180°, Yaw 90°
 * @value 11 Roll 180°, Yaw 135°
 * @value 12 Pitch 180°
 * @value 13 Roll 180°, Yaw 225°
 * @value 14 Roll 180°, Yaw 270°
 * @value 15 Roll 180°, Yaw 315°
 * @value 16 Roll 90°
 * @value 17 Roll 90°, Yaw 45°
 * @value 18 Roll 90°, Yaw 90°
 * @value 19 Roll 90°, Yaw 135°
 * @value 20 Roll 270°
 * @value 21 Roll 270°, Yaw 45°
 * @value 22 Roll 270°, Yaw 90°
 * @value 23 Roll 270°, Yaw 135°
 * @value 24 Pitch 90°
 * @value 25 Pitch 270°
 * @value 26 Pitch 180°, Yaw 90°
 * @value 27 Pitch 180°, Yaw 270°
 * @value 28 Roll 90°, Pitch 90°
 * @value 29 Roll 180°, Pitch 90°
 * @value 30 Roll 270°, Pitch 90°
 * @value 31 Roll 90°, Pitch 180°
 * @value 32 Roll 270°, Pitch 180°
 * @value 33 Roll 90°, Pitch 270°
 * @value 34 Roll 180°, Pitch 270°
 * @value 35 Roll 270°, Pitch 270°
 * @value 36 Roll 90°, Pitch 180°, Yaw 90°
 * @value 37 Roll 90°, Yaw 270°
 * @value 38 Roll 90°, Pitch 68°, Yaw 293°
 * @value 39 Pitch 315°
 * @value 40 Roll 90°, Pitch 315°
 * @category System
 * @min -1
 * @max 40
 */
PARAM_DEFINE_INT32(CAL_GYRO1_ROT, -1);

/**
 * Gyroscope 2 rotation relative to airframe
 *
 * An internal sensor will force a value of -1, so a GCS should only attempt to configure the rotation if the value is greater than or equal to zero.
 * 
 *
 * @group Sensor Calibration
 * @value -1 Internal
 * @value 0 No rotation
 * @value 1 Yaw 45°
 * @value 2 Yaw 90°
 * @value 3 Yaw 135°
 * @value 4 Yaw 180°
 * @value 5 Yaw 225°
 * @value 6 Yaw 270°
 * @value 7 Yaw 315°
 * @value 8 Roll 180°
 * @value 9 Roll 180°, Yaw 45°
 * @value 10 Roll 180°, Yaw 90°
 * @value 11 Roll 180°, Yaw 135°
 * @value 12 Pitch 180°
 * @value 13 Roll 180°, Yaw 225°
 * @value 14 Roll 180°, Yaw 270°
 * @value 15 Roll 180°, Yaw 315°
 * @value 16 Roll 90°
 * @value 17 Roll 90°, Yaw 45°
 * @value 18 Roll 90°, Yaw 90°
 * @value 19 Roll 90°, Yaw 135°
 * @value 20 Roll 270°
 * @value 21 Roll 270°, Yaw 45°
 * @value 22 Roll 270°, Yaw 90°
 * @value 23 Roll 270°, Yaw 135°
 * @value 24 Pitch 90°
 * @value 25 Pitch 270°
 * @value 26 Pitch 180°, Yaw 90°
 * @value 27 Pitch 180°, Yaw 270°
 * @value 28 Roll 90°, Pitch 90°
 * @value 29 Roll 180°, Pitch 90°
 * @value 30 Roll 270°, Pitch 90°
 * @value 31 Roll 90°, Pitch 180°
 * @value 32 Roll 270°, Pitch 180°
 * @value 33 Roll 90°, Pitch 270°
 * @value 34 Roll 180°, Pitch 270°
 * @value 35 Roll 270°, Pitch 270°
 * @value 36 Roll 90°, Pitch 180°, Yaw 90°
 * @value 37 Roll 90°, Yaw 270°
 * @value 38 Roll 90°, Pitch 68°, Yaw 293°
 * @value 39 Pitch 315°
 * @value 40 Roll 90°, Pitch 315°
 * @category System
 * @min -1
 * @max 40
 */
PARAM_DEFINE_INT32(CAL_GYRO2_ROT, -1);

/**
 * Gyroscope 3 rotation relative to airframe
 *
 * An internal sensor will force a value of -1, so a GCS should only attempt to configure the rotation if the value is greater than or equal to zero.
 * 
 *
 * @group Sensor Calibration
 * @value -1 Internal
 * @value 0 No rotation
 * @value 1 Yaw 45°
 * @value 2 Yaw 90°
 * @value 3 Yaw 135°
 * @value 4 Yaw 180°
 * @value 5 Yaw 225°
 * @value 6 Yaw 270°
 * @value 7 Yaw 315°
 * @value 8 Roll 180°
 * @value 9 Roll 180°, Yaw 45°
 * @value 10 Roll 180°, Yaw 90°
 * @value 11 Roll 180°, Yaw 135°
 * @value 12 Pitch 180°
 * @value 13 Roll 180°, Yaw 225°
 * @value 14 Roll 180°, Yaw 270°
 * @value 15 Roll 180°, Yaw 315°
 * @value 16 Roll 90°
 * @value 17 Roll 90°, Yaw 45°
 * @value 18 Roll 90°, Yaw 90°
 * @value 19 Roll 90°, Yaw 135°
 * @value 20 Roll 270°
 * @value 21 Roll 270°, Yaw 45°
 * @value 22 Roll 270°, Yaw 90°
 * @value 23 Roll 270°, Yaw 135°
 * @value 24 Pitch 90°
 * @value 25 Pitch 270°
 * @value 26 Pitch 180°, Yaw 90°
 * @value 27 Pitch 180°, Yaw 270°
 * @value 28 Roll 90°, Pitch 90°
 * @value 29 Roll 180°, Pitch 90°
 * @value 30 Roll 270°, Pitch 90°
 * @value 31 Roll 90°, Pitch 180°
 * @value 32 Roll 270°, Pitch 180°
 * @value 33 Roll 90°, Pitch 270°
 * @value 34 Roll 180°, Pitch 270°
 * @value 35 Roll 270°, Pitch 270°
 * @value 36 Roll 90°, Pitch 180°, Yaw 90°
 * @value 37 Roll 90°, Yaw 270°
 * @value 38 Roll 90°, Pitch 68°, Yaw 293°
 * @value 39 Pitch 315°
 * @value 40 Roll 90°, Pitch 315°
 * @category System
 * @min -1
 * @max 40
 */
PARAM_DEFINE_INT32(CAL_GYRO3_ROT, -1);

/**
 * Gyroscope 0 X-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @unit m
 */
PARAM_DEFINE_FLOAT(CAL_GYRO0_XOFF, 0.0);

/**
 * Gyroscope 1 X-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @unit m
 */
PARAM_DEFINE_FLOAT(CAL_GYRO1_XOFF, 0.0);

/**
 * Gyroscope 2 X-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @unit m
 */
PARAM_DEFINE_FLOAT(CAL_GYRO2_XOFF, 0.0);

/**
 * Gyroscope 3 X-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @unit m
 */
PARAM_DEFINE_FLOAT(CAL_GYRO3_XOFF, 0.0);

/**
 * Gyroscope 0 Y-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @unit m
 */
PARAM_DEFINE_FLOAT(CAL_GYRO0_YOFF, 0.0);

/**
 * Gyroscope 1 Y-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @unit m
 */
PARAM_DEFINE_FLOAT(CAL_GYRO1_YOFF, 0.0);

/**
 * Gyroscope 2 Y-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @unit m
 */
PARAM_DEFINE_FLOAT(CAL_GYRO2_YOFF, 0.0);

/**
 * Gyroscope 3 Y-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @unit m
 */
PARAM_DEFINE_FLOAT(CAL_GYRO3_YOFF, 0.0);

/**
 * Gyroscope 0 Z-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @unit m
 */
PARAM_DEFINE_FLOAT(CAL_GYRO0_ZOFF, 0.0);

/**
 * Gyroscope 1 Z-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @unit m
 */
PARAM_DEFINE_FLOAT(CAL_GYRO1_ZOFF, 0.0);

/**
 * Gyroscope 2 Z-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @unit m
 */
PARAM_DEFINE_FLOAT(CAL_GYRO2_ZOFF, 0.0);

/**
 * Gyroscope 3 Z-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @unit m
 */
PARAM_DEFINE_FLOAT(CAL_GYRO3_ZOFF, 0.0);

/**
 * Magnetometer 0 calibration device ID
 *
 * Device ID of the magnetometer this calibration applies to.
 *
 * @group Sensor Calibration
 * @category System
 */
PARAM_DEFINE_INT32(CAL_MAG0_ID, 0);

/**
 * Magnetometer 1 calibration device ID
 *
 * Device ID of the magnetometer this calibration applies to.
 *
 * @group Sensor Calibration
 * @category System
 */
PARAM_DEFINE_INT32(CAL_MAG1_ID, 0);

/**
 * Magnetometer 2 calibration device ID
 *
 * Device ID of the magnetometer this calibration applies to.
 *
 * @group Sensor Calibration
 * @category System
 */
PARAM_DEFINE_INT32(CAL_MAG2_ID, 0);

/**
 * Magnetometer 3 calibration device ID
 *
 * Device ID of the magnetometer this calibration applies to.
 *
 * @group Sensor Calibration
 * @category System
 */
PARAM_DEFINE_INT32(CAL_MAG3_ID, 0);

/**
 * Magnetometer 0 priority
 *
 * 
 *
 * @group Sensor Calibration
 * @value -1 Uninitialized
 * @value 0 Disabled
 * @value 1 Min
 * @value 25 Low
 * @value 50 Medium (Default)
 * @value 75 High
 * @value 100 Max
 * @category System
 */
PARAM_DEFINE_INT32(CAL_MAG0_PRIO, -1);

/**
 * Magnetometer 1 priority
 *
 * 
 *
 * @group Sensor Calibration
 * @value -1 Uninitialized
 * @value 0 Disabled
 * @value 1 Min
 * @value 25 Low
 * @value 50 Medium (Default)
 * @value 75 High
 * @value 100 Max
 * @category System
 */
PARAM_DEFINE_INT32(CAL_MAG1_PRIO, -1);

/**
 * Magnetometer 2 priority
 *
 * 
 *
 * @group Sensor Calibration
 * @value -1 Uninitialized
 * @value 0 Disabled
 * @value 1 Min
 * @value 25 Low
 * @value 50 Medium (Default)
 * @value 75 High
 * @value 100 Max
 * @category System
 */
PARAM_DEFINE_INT32(CAL_MAG2_PRIO, -1);

/**
 * Magnetometer 3 priority
 *
 * 
 *
 * @group Sensor Calibration
 * @value -1 Uninitialized
 * @value 0 Disabled
 * @value 1 Min
 * @value 25 Low
 * @value 50 Medium (Default)
 * @value 75 High
 * @value 100 Max
 * @category System
 */
PARAM_DEFINE_INT32(CAL_MAG3_PRIO, -1);

/**
 * Magnetometer 0 rotation relative to airframe
 *
 * An internal sensor will force a value of -1, so a GCS should only attempt to configure the rotation if the value is greater than or equal to zero.
 * 
 *
 * @group Sensor Calibration
 * @value -1 Internal
 * @value 0 No rotation
 * @value 1 Yaw 45°
 * @value 2 Yaw 90°
 * @value 3 Yaw 135°
 * @value 4 Yaw 180°
 * @value 5 Yaw 225°
 * @value 6 Yaw 270°
 * @value 7 Yaw 315°
 * @value 8 Roll 180°
 * @value 9 Roll 180°, Yaw 45°
 * @value 10 Roll 180°, Yaw 90°
 * @value 11 Roll 180°, Yaw 135°
 * @value 12 Pitch 180°
 * @value 13 Roll 180°, Yaw 225°
 * @value 14 Roll 180°, Yaw 270°
 * @value 15 Roll 180°, Yaw 315°
 * @value 16 Roll 90°
 * @value 17 Roll 90°, Yaw 45°
 * @value 18 Roll 90°, Yaw 90°
 * @value 19 Roll 90°, Yaw 135°
 * @value 20 Roll 270°
 * @value 21 Roll 270°, Yaw 45°
 * @value 22 Roll 270°, Yaw 90°
 * @value 23 Roll 270°, Yaw 135°
 * @value 24 Pitch 90°
 * @value 25 Pitch 270°
 * @value 26 Pitch 180°, Yaw 90°
 * @value 27 Pitch 180°, Yaw 270°
 * @value 28 Roll 90°, Pitch 90°
 * @value 29 Roll 180°, Pitch 90°
 * @value 30 Roll 270°, Pitch 90°
 * @value 31 Roll 90°, Pitch 180°
 * @value 32 Roll 270°, Pitch 180°
 * @value 33 Roll 90°, Pitch 270°
 * @value 34 Roll 180°, Pitch 270°
 * @value 35 Roll 270°, Pitch 270°
 * @value 36 Roll 90°, Pitch 180°, Yaw 90°
 * @value 37 Roll 90°, Yaw 270°
 * @value 38 Roll 90°, Pitch 68°, Yaw 293°
 * @value 39 Pitch 315°
 * @value 40 Roll 90°, Pitch 315°
 * @category System
 * @min -1
 * @max 40
 */
PARAM_DEFINE_INT32(CAL_MAG0_ROT, -1);

/**
 * Magnetometer 1 rotation relative to airframe
 *
 * An internal sensor will force a value of -1, so a GCS should only attempt to configure the rotation if the value is greater than or equal to zero.
 * 
 *
 * @group Sensor Calibration
 * @value -1 Internal
 * @value 0 No rotation
 * @value 1 Yaw 45°
 * @value 2 Yaw 90°
 * @value 3 Yaw 135°
 * @value 4 Yaw 180°
 * @value 5 Yaw 225°
 * @value 6 Yaw 270°
 * @value 7 Yaw 315°
 * @value 8 Roll 180°
 * @value 9 Roll 180°, Yaw 45°
 * @value 10 Roll 180°, Yaw 90°
 * @value 11 Roll 180°, Yaw 135°
 * @value 12 Pitch 180°
 * @value 13 Roll 180°, Yaw 225°
 * @value 14 Roll 180°, Yaw 270°
 * @value 15 Roll 180°, Yaw 315°
 * @value 16 Roll 90°
 * @value 17 Roll 90°, Yaw 45°
 * @value 18 Roll 90°, Yaw 90°
 * @value 19 Roll 90°, Yaw 135°
 * @value 20 Roll 270°
 * @value 21 Roll 270°, Yaw 45°
 * @value 22 Roll 270°, Yaw 90°
 * @value 23 Roll 270°, Yaw 135°
 * @value 24 Pitch 90°
 * @value 25 Pitch 270°
 * @value 26 Pitch 180°, Yaw 90°
 * @value 27 Pitch 180°, Yaw 270°
 * @value 28 Roll 90°, Pitch 90°
 * @value 29 Roll 180°, Pitch 90°
 * @value 30 Roll 270°, Pitch 90°
 * @value 31 Roll 90°, Pitch 180°
 * @value 32 Roll 270°, Pitch 180°
 * @value 33 Roll 90°, Pitch 270°
 * @value 34 Roll 180°, Pitch 270°
 * @value 35 Roll 270°, Pitch 270°
 * @value 36 Roll 90°, Pitch 180°, Yaw 90°
 * @value 37 Roll 90°, Yaw 270°
 * @value 38 Roll 90°, Pitch 68°, Yaw 293°
 * @value 39 Pitch 315°
 * @value 40 Roll 90°, Pitch 315°
 * @category System
 * @min -1
 * @max 40
 */
PARAM_DEFINE_INT32(CAL_MAG1_ROT, -1);

/**
 * Magnetometer 2 rotation relative to airframe
 *
 * An internal sensor will force a value of -1, so a GCS should only attempt to configure the rotation if the value is greater than or equal to zero.
 * 
 *
 * @group Sensor Calibration
 * @value -1 Internal
 * @value 0 No rotation
 * @value 1 Yaw 45°
 * @value 2 Yaw 90°
 * @value 3 Yaw 135°
 * @value 4 Yaw 180°
 * @value 5 Yaw 225°
 * @value 6 Yaw 270°
 * @value 7 Yaw 315°
 * @value 8 Roll 180°
 * @value 9 Roll 180°, Yaw 45°
 * @value 10 Roll 180°, Yaw 90°
 * @value 11 Roll 180°, Yaw 135°
 * @value 12 Pitch 180°
 * @value 13 Roll 180°, Yaw 225°
 * @value 14 Roll 180°, Yaw 270°
 * @value 15 Roll 180°, Yaw 315°
 * @value 16 Roll 90°
 * @value 17 Roll 90°, Yaw 45°
 * @value 18 Roll 90°, Yaw 90°
 * @value 19 Roll 90°, Yaw 135°
 * @value 20 Roll 270°
 * @value 21 Roll 270°, Yaw 45°
 * @value 22 Roll 270°, Yaw 90°
 * @value 23 Roll 270°, Yaw 135°
 * @value 24 Pitch 90°
 * @value 25 Pitch 270°
 * @value 26 Pitch 180°, Yaw 90°
 * @value 27 Pitch 180°, Yaw 270°
 * @value 28 Roll 90°, Pitch 90°
 * @value 29 Roll 180°, Pitch 90°
 * @value 30 Roll 270°, Pitch 90°
 * @value 31 Roll 90°, Pitch 180°
 * @value 32 Roll 270°, Pitch 180°
 * @value 33 Roll 90°, Pitch 270°
 * @value 34 Roll 180°, Pitch 270°
 * @value 35 Roll 270°, Pitch 270°
 * @value 36 Roll 90°, Pitch 180°, Yaw 90°
 * @value 37 Roll 90°, Yaw 270°
 * @value 38 Roll 90°, Pitch 68°, Yaw 293°
 * @value 39 Pitch 315°
 * @value 40 Roll 90°, Pitch 315°
 * @category System
 * @min -1
 * @max 40
 */
PARAM_DEFINE_INT32(CAL_MAG2_ROT, -1);

/**
 * Magnetometer 3 rotation relative to airframe
 *
 * An internal sensor will force a value of -1, so a GCS should only attempt to configure the rotation if the value is greater than or equal to zero.
 * 
 *
 * @group Sensor Calibration
 * @value -1 Internal
 * @value 0 No rotation
 * @value 1 Yaw 45°
 * @value 2 Yaw 90°
 * @value 3 Yaw 135°
 * @value 4 Yaw 180°
 * @value 5 Yaw 225°
 * @value 6 Yaw 270°
 * @value 7 Yaw 315°
 * @value 8 Roll 180°
 * @value 9 Roll 180°, Yaw 45°
 * @value 10 Roll 180°, Yaw 90°
 * @value 11 Roll 180°, Yaw 135°
 * @value 12 Pitch 180°
 * @value 13 Roll 180°, Yaw 225°
 * @value 14 Roll 180°, Yaw 270°
 * @value 15 Roll 180°, Yaw 315°
 * @value 16 Roll 90°
 * @value 17 Roll 90°, Yaw 45°
 * @value 18 Roll 90°, Yaw 90°
 * @value 19 Roll 90°, Yaw 135°
 * @value 20 Roll 270°
 * @value 21 Roll 270°, Yaw 45°
 * @value 22 Roll 270°, Yaw 90°
 * @value 23 Roll 270°, Yaw 135°
 * @value 24 Pitch 90°
 * @value 25 Pitch 270°
 * @value 26 Pitch 180°, Yaw 90°
 * @value 27 Pitch 180°, Yaw 270°
 * @value 28 Roll 90°, Pitch 90°
 * @value 29 Roll 180°, Pitch 90°
 * @value 30 Roll 270°, Pitch 90°
 * @value 31 Roll 90°, Pitch 180°
 * @value 32 Roll 270°, Pitch 180°
 * @value 33 Roll 90°, Pitch 270°
 * @value 34 Roll 180°, Pitch 270°
 * @value 35 Roll 270°, Pitch 270°
 * @value 36 Roll 90°, Pitch 180°, Yaw 90°
 * @value 37 Roll 90°, Yaw 270°
 * @value 38 Roll 90°, Pitch 68°, Yaw 293°
 * @value 39 Pitch 315°
 * @value 40 Roll 90°, Pitch 315°
 * @category System
 * @min -1
 * @max 40
 */
PARAM_DEFINE_INT32(CAL_MAG3_ROT, -1);

/**
 * Magnetometer 0 X-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @unit m
 */
PARAM_DEFINE_FLOAT(CAL_MAG0_XOFF, 0.0);

/**
 * Magnetometer 1 X-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @unit m
 */
PARAM_DEFINE_FLOAT(CAL_MAG1_XOFF, 0.0);

/**
 * Magnetometer 2 X-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @unit m
 */
PARAM_DEFINE_FLOAT(CAL_MAG2_XOFF, 0.0);

/**
 * Magnetometer 3 X-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @unit m
 */
PARAM_DEFINE_FLOAT(CAL_MAG3_XOFF, 0.0);

/**
 * Magnetometer 0 Y-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @unit m
 */
PARAM_DEFINE_FLOAT(CAL_MAG0_YOFF, 0.0);

/**
 * Magnetometer 1 Y-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @unit m
 */
PARAM_DEFINE_FLOAT(CAL_MAG1_YOFF, 0.0);

/**
 * Magnetometer 2 Y-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @unit m
 */
PARAM_DEFINE_FLOAT(CAL_MAG2_YOFF, 0.0);

/**
 * Magnetometer 3 Y-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @unit m
 */
PARAM_DEFINE_FLOAT(CAL_MAG3_YOFF, 0.0);

/**
 * Magnetometer 0 Z-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @unit m
 */
PARAM_DEFINE_FLOAT(CAL_MAG0_ZOFF, 0.0);

/**
 * Magnetometer 1 Z-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @unit m
 */
PARAM_DEFINE_FLOAT(CAL_MAG1_ZOFF, 0.0);

/**
 * Magnetometer 2 Z-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @unit m
 */
PARAM_DEFINE_FLOAT(CAL_MAG2_ZOFF, 0.0);

/**
 * Magnetometer 3 Z-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @unit m
 */
PARAM_DEFINE_FLOAT(CAL_MAG3_ZOFF, 0.0);

/**
 * Magnetometer 0 X-axis scaling factor
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @min 0.1
 * @max 3.0
 */
PARAM_DEFINE_FLOAT(CAL_MAG0_XSCALE, 1.0);

/**
 * Magnetometer 1 X-axis scaling factor
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @min 0.1
 * @max 3.0
 */
PARAM_DEFINE_FLOAT(CAL_MAG1_XSCALE, 1.0);

/**
 * Magnetometer 2 X-axis scaling factor
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @min 0.1
 * @max 3.0
 */
PARAM_DEFINE_FLOAT(CAL_MAG2_XSCALE, 1.0);

/**
 * Magnetometer 3 X-axis scaling factor
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @min 0.1
 * @max 3.0
 */
PARAM_DEFINE_FLOAT(CAL_MAG3_XSCALE, 1.0);

/**
 * Magnetometer 0 Y-axis scaling factor
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @min 0.1
 * @max 3.0
 */
PARAM_DEFINE_FLOAT(CAL_MAG0_YSCALE, 1.0);

/**
 * Magnetometer 1 Y-axis scaling factor
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @min 0.1
 * @max 3.0
 */
PARAM_DEFINE_FLOAT(CAL_MAG1_YSCALE, 1.0);

/**
 * Magnetometer 2 Y-axis scaling factor
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @min 0.1
 * @max 3.0
 */
PARAM_DEFINE_FLOAT(CAL_MAG2_YSCALE, 1.0);

/**
 * Magnetometer 3 Y-axis scaling factor
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @min 0.1
 * @max 3.0
 */
PARAM_DEFINE_FLOAT(CAL_MAG3_YSCALE, 1.0);

/**
 * Magnetometer 0 Z-axis scaling factor
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @min 0.1
 * @max 3.0
 */
PARAM_DEFINE_FLOAT(CAL_MAG0_ZSCALE, 1.0);

/**
 * Magnetometer 1 Z-axis scaling factor
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @min 0.1
 * @max 3.0
 */
PARAM_DEFINE_FLOAT(CAL_MAG1_ZSCALE, 1.0);

/**
 * Magnetometer 2 Z-axis scaling factor
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @min 0.1
 * @max 3.0
 */
PARAM_DEFINE_FLOAT(CAL_MAG2_ZSCALE, 1.0);

/**
 * Magnetometer 3 Z-axis scaling factor
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 * @min 0.1
 * @max 3.0
 */
PARAM_DEFINE_FLOAT(CAL_MAG3_ZSCALE, 1.0);

/**
 * Magnetometer 0 X-axis off diagonal scale factor
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_MAG0_XODIAG, 0.0);

/**
 * Magnetometer 1 X-axis off diagonal scale factor
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_MAG1_XODIAG, 0.0);

/**
 * Magnetometer 2 X-axis off diagonal scale factor
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_MAG2_XODIAG, 0.0);

/**
 * Magnetometer 3 X-axis off diagonal scale factor
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_MAG3_XODIAG, 0.0);

/**
 * Magnetometer 0 Y-axis off diagonal scale factor
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_MAG0_YODIAG, 0.0);

/**
 * Magnetometer 1 Y-axis off diagonal scale factor
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_MAG1_YODIAG, 0.0);

/**
 * Magnetometer 2 Y-axis off diagonal scale factor
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_MAG2_YODIAG, 0.0);

/**
 * Magnetometer 3 Y-axis off diagonal scale factor
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_MAG3_YODIAG, 0.0);

/**
 * Magnetometer 0 Z-axis off diagonal scale factor
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_MAG0_ZODIAG, 0.0);

/**
 * Magnetometer 1 Z-axis off diagonal scale factor
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_MAG1_ZODIAG, 0.0);

/**
 * Magnetometer 2 Z-axis off diagonal scale factor
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_MAG2_ZODIAG, 0.0);

/**
 * Magnetometer 3 Z-axis off diagonal scale factor
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_MAG3_ZODIAG, 0.0);

/**
 * Magnetometer 0 X Axis throttle compensation
 *
 * Coefficient describing linear relationship between
 * X component of magnetometer in body frame axis
 * and either current or throttle depending on value of CAL_MAG_COMP_TYP.
 * Unit for throttle-based compensation is [G] and
 * for current-based compensation [G/kA]
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_MAG0_XCOMP, 0.0);

/**
 * Magnetometer 1 X Axis throttle compensation
 *
 * Coefficient describing linear relationship between
 * X component of magnetometer in body frame axis
 * and either current or throttle depending on value of CAL_MAG_COMP_TYP.
 * Unit for throttle-based compensation is [G] and
 * for current-based compensation [G/kA]
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_MAG1_XCOMP, 0.0);

/**
 * Magnetometer 2 X Axis throttle compensation
 *
 * Coefficient describing linear relationship between
 * X component of magnetometer in body frame axis
 * and either current or throttle depending on value of CAL_MAG_COMP_TYP.
 * Unit for throttle-based compensation is [G] and
 * for current-based compensation [G/kA]
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_MAG2_XCOMP, 0.0);

/**
 * Magnetometer 3 X Axis throttle compensation
 *
 * Coefficient describing linear relationship between
 * X component of magnetometer in body frame axis
 * and either current or throttle depending on value of CAL_MAG_COMP_TYP.
 * Unit for throttle-based compensation is [G] and
 * for current-based compensation [G/kA]
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_MAG3_XCOMP, 0.0);

/**
 * Magnetometer 0 Y Axis throttle compensation
 *
 * Coefficient describing linear relationship between
 * Y component of magnetometer in body frame axis
 * and either current or throttle depending on value of CAL_MAG_COMP_TYP.
 * Unit for throttle-based compensation is [G] and
 * for current-based compensation [G/kA]
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_MAG0_YCOMP, 0.0);

/**
 * Magnetometer 1 Y Axis throttle compensation
 *
 * Coefficient describing linear relationship between
 * Y component of magnetometer in body frame axis
 * and either current or throttle depending on value of CAL_MAG_COMP_TYP.
 * Unit for throttle-based compensation is [G] and
 * for current-based compensation [G/kA]
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_MAG1_YCOMP, 0.0);

/**
 * Magnetometer 2 Y Axis throttle compensation
 *
 * Coefficient describing linear relationship between
 * Y component of magnetometer in body frame axis
 * and either current or throttle depending on value of CAL_MAG_COMP_TYP.
 * Unit for throttle-based compensation is [G] and
 * for current-based compensation [G/kA]
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_MAG2_YCOMP, 0.0);

/**
 * Magnetometer 3 Y Axis throttle compensation
 *
 * Coefficient describing linear relationship between
 * Y component of magnetometer in body frame axis
 * and either current or throttle depending on value of CAL_MAG_COMP_TYP.
 * Unit for throttle-based compensation is [G] and
 * for current-based compensation [G/kA]
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_MAG3_YCOMP, 0.0);

/**
 * Magnetometer 0 Z Axis throttle compensation
 *
 * Coefficient describing linear relationship between
 * Z component of magnetometer in body frame axis
 * and either current or throttle depending on value of CAL_MAG_COMP_TYP.
 * Unit for throttle-based compensation is [G] and
 * for current-based compensation [G/kA]
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_MAG0_ZCOMP, 0.0);

/**
 * Magnetometer 1 Z Axis throttle compensation
 *
 * Coefficient describing linear relationship between
 * Z component of magnetometer in body frame axis
 * and either current or throttle depending on value of CAL_MAG_COMP_TYP.
 * Unit for throttle-based compensation is [G] and
 * for current-based compensation [G/kA]
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_MAG1_ZCOMP, 0.0);

/**
 * Magnetometer 2 Z Axis throttle compensation
 *
 * Coefficient describing linear relationship between
 * Z component of magnetometer in body frame axis
 * and either current or throttle depending on value of CAL_MAG_COMP_TYP.
 * Unit for throttle-based compensation is [G] and
 * for current-based compensation [G/kA]
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_MAG2_ZCOMP, 0.0);

/**
 * Magnetometer 3 Z Axis throttle compensation
 *
 * Coefficient describing linear relationship between
 * Z component of magnetometer in body frame axis
 * and either current or throttle depending on value of CAL_MAG_COMP_TYP.
 * Unit for throttle-based compensation is [G] and
 * for current-based compensation [G/kA]
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_MAG3_ZCOMP, 0.0);
