#pragma once

#include "config_common.h"

/* Key matrix configuration. */

#define MATRIX_ROWS 12 // Rows are doubled-up.
#define MATRIX_COLS 10

#define DIODE_DIRECTION COL2ROW

/* Left side matrix */
#define MATRIX_ROW_PINS { GP9, GP8, GP7, GP6, GP5, GP4 }
#define MATRIX_COL_PINS { NO_PIN, NO_PIN, NO_PIN, GP16, GP17, GP18, GP19, GP20, GP21, GP22 }
/* Right side matrix */
#define MATRIX_ROW_PINS_RIGHT { GP19, GP20, GP21, GP22, GP23, GP24 }
#define MATRIX_COL_PINS_RIGHT { GP4, GP5, GP6, GP7, GP8, GP9, GP10, GP11, GP12, GP13 }

#define ENCODERS_PAD_A { NO_PIN }
#define ENCODERS_PAD_B { NO_PIN }
#define ENCODERS_PAD_A_RIGHT { GP16 }
#define ENCODERS_PAD_B_RIGHT { GP17 }
#define ENCODER_RESOLUTION 4

#define LED_CAPS_LOCK_PIN GP29
#define LED_PIN_ON_STATE 1

/* Handedness. */
// #define MASTER_RIGHT

#define SPLIT_HAND_PIN GP3
#define SPLIT_USB_DETECT
#define SPLIT_LED_STATE_ENABLE

// Set 0 if debouncing isn't needed.
#define DEBOUNCE 5

// 임시주석
// /* LED Pin Set of Lock Keys' Indicator */
// // #define LED_NUM_LOCK_PIN D4
// #define LED_CAPS_LOCK_PIN D6
// // #define LED_SCROLL_LOCK_PIN D7
// #define LED_PIN_ON_STATE 1

// #define BACKLIGHT_PIN GP28
// #define BACKLIGHT_LEVELS 7
// #define BACKLIGHT_DEFAULT_LEVEL 3
// 임시주석

#define BACKLIGHT_PWM_DRIVER PWMD6
#define BACKLIGHT_PWM_CHANNEL RP2040_PWM_CHANNEL_A
// #define BACKLIGHT_PWM_CHANNEL 3
// #define BACKLIGHT_PAL_MODE 2

#define RGB_DI_PIN GP29

#ifdef RGBLIGHT_ENABLE
    #define RGBLED_NUM 4    // Number of LEDs
#endif

/* serial.c configuration (for split keyboard). */
#define SOFT_SERIAL_PIN GP1

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define SPLIT_USB_TIMEOUT 2000

#define SPLIT_USB_TIMEOUT_POLL 10

/* Reset. */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U