// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_Q, KC_A, KC_LSFT, KC_SPC, KC_E, KC_D, KC_S, KC_W
    )
};

/* Colemak
* ,---------------------------.   
* |   Q  |   A  |   w  |   D  |   
* |------+------+------+------|   
* |  SFT |      |   S  |   E  |   
* |------+------+------+------|   
* |      |      |      | SPC  |   
* `---------------------------'   
* 
*/