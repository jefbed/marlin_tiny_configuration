#ifndef CONFIGURATION_H
#define CONFIGURATION_H
#define CONFIGURATION_H_VERSION 010109
#define BAUDRATE 57600
// Work around blown MOSFET, use D9 to switch an external MOSFET
#define RAMPS_D8_PIN 9
#define RAMPS_D9_PIN 8
#define MOTHERBOARD BOARD_RAMPS_14_EFB
#define EXTRUDERS 1
#define DEFAULT_NOMINAL_FILAMENT_DIA 1.75
#define TEMP_SENSOR_0 5
#define TEMP_SENSOR_BED 1
// no fan at 210, e3d clone
#define DEFAULT_Kp 26.16
#define DEFAULT_Ki 3.07
#define DEFAULT_Kd 55.71
#define THERMAL_PROTECTION_HOTENDS
#define THERMAL_PROTECTION_BED
#define USE_ZMIN_PLUG
#define USE_XMAX_PLUG
#define USE_YMAX_PLUG
#define X_DRIVER_TYPE  A4988
#define Y_DRIVER_TYPE  A4988
#define Z_DRIVER_TYPE  A4988
#define E0_DRIVER_TYPE A4988
#define E1_DRIVER_TYPE A4988
#define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 2267.72, 728.2 }
#define DEFAULT_MAX_FEEDRATE          { 200, 200, 5.5, 40 }
#define DEFAULT_MAX_ACCELERATION      { 3000, 3000, 9000, 1000}
#define DEFAULT_ACCELERATION          1000
#define DEFAULT_RETRACT_ACCELERATION  400
#define DEFAULT_TRAVEL_ACCELERATION   9000
#define S_CURVE_ACCELERATION
#define INVERT_X_DIR true
#define INVERT_Y_DIR true
#define INVERT_Z_DIR false
#define INVERT_E0_DIR true
#define X_HOME_DIR 1
#define Y_HOME_DIR 1
#define Z_HOME_DIR -1
#define X_BED_SIZE 190
#define Y_BED_SIZE 190
#define X_MIN_POS 0
#define Y_MIN_POS 0
#define Z_MIN_POS 0
#define X_MAX_POS X_BED_SIZE
#define Y_MAX_POS Y_BED_SIZE
#define Z_MAX_POS 50
#define HOMING_FEEDRATE_XY 6000
#define HOMING_FEEDRATE_Z 700
#define EEPROM_SETTINGS
#define PRINTJOB_TIMER_AUTOSTART
#define PRINTCOUNTER
#endif//!CONFIGURATION_H
