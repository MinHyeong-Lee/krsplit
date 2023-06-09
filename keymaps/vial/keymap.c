/* Copyright 2023 MinHyeong-Lee
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

// #include "features/autocorrection.h"

// bool process_record_user(uint16_t keycode, keyrecord_t* record) {
//   if (!process_autocorrection(keycode, record)) { return false; }
//   // Your macros...

//   return true;
// }

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =  { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN) },
    [1] =  { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN) },
};
#endif

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 1) { /* First encoder */
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
    return true;
}

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _WBASE,
    _WMFN1,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_WBASE] = LAYOUT(
        KC_ESC,     KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,                                          KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12,     KC_PSCR,    KC_MUTE,
        KC_GRV,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_6,                   KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS,    KC_EQL,                 KC_BSPC,    KC_INS,     KC_DEL,
        KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,                               KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_LBRC,    KC_RBRC,    KC_BSLS,    KC_HOME,    KC_END,
        KC_CAPS,    KC_A,       KC_S,       KC_D,       KC_F,       KC_G,                               KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT,                KC_ENT,     KC_PGUP,    KC_PGDN,
        KC_LSFT,                KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,                   KC_B,       KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,                KC_RSFT,    KC_UP,
        MO(1),      KC_LCTL,    KC_LGUI,    KC_LALT,                KC_SPACE,                                       KC_SPACE,   KC_RALT,    KC_RGUI,    KC_APP,     KC_RCTL,    KC_MUTE,    KC_LEFT,    KC_DOWN,    KC_RGHT
        ),
    /* Volume */
    [_WMFN1] = LAYOUT(
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                                        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                            KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                            KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,                KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                KC_TRNS,    KC_TRNS,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                KC_TRNS,                                        KC_SPACE,   KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS
        ),
};

