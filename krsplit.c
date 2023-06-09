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

#include "krsplit.h"
#include "split_util.h"

void matrix_init_kb(void) {
    setPinOutput(LED_CAPS_LOCK_PIN);
    matrix_init_user();
}

bool led_update_kb(led_t led_state) {
    writePin(LED_CAPS_LOCK_PIN, !led_state.caps_lock);
    return true;
}

void eeconfig_init_kb(void) {
#ifdef BACKLIGHT_ENABLE
    backlight_enable();
    backlight_level(3);
#endif

    eeconfig_update_kb(0);
    eeconfig_init_user();
}