/* Copyright 2021 @ Keychron (https://www.keychron.com)
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

// clang-format off

enum layers {
    MAC_BASE,
    WIN_BASE,
    MAC_FN1,
    WIN_FN1,
    FN,
};

#define MO_MFN1 MO(MAC_FN1)
#define MO_WFN1 MO(WIN_FN1)

#define MK_CL LCTL(KC_LEFT)
#define MK_CR LCTL(KC_RIGHT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // Fuck Mac, I want a second Windows/PC layout
    [MAC_BASE] = LAYOUT_60_ansi(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT,
        MO_MFN1, KC_LWIN, KC_LALT,                            KC_SPC,                             KC_RALT, MO(FN),  KC_APP,  KC_RCTL),

    [WIN_BASE] = LAYOUT_60_ansi(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT,
        MO_WFN1, KC_LWIN, KC_LALT,                            KC_SPC,                             KC_RALT, MO(FN),  KC_APP,  KC_RCTL),

    [MAC_FN1] = LAYOUT_60_ansi(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______,
        XXXXXXX, XXXXXXX, MK_CR,   XXXXXXX, KC_INS,  XXXXXXX, XXXXXXX, XXXXXXX, KC_HOME, XXXXXXX, XXXXXXX, KC_PGUP, KC_PGDN, XXXXXXX,
        _______, KC_END,  XXXXXXX, KC_PGDN, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX, XXXXXXX,          _______,
        _______, XXXXXXX, KC_DEL,  XXXXXXX, XXXXXXX, MK_CL,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          _______,
        _______, _______, _______,                            _______,                            _______, _______, _______, _______),

    [WIN_FN1] = LAYOUT_60_ansi(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_INS,  XXXXXXX, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  XXXXXXX, KC_PGUP, KC_PGDN, XXXXXXX,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX, XXXXXXX,          _______,
        _______, XXXXXXX, KC_DEL,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          _______,
        _______, _______, _______,                            _______,                            _______, _______, _______, _______),

    [FN] = LAYOUT_60_ansi(
        QK_BOOT, KC_WBAK, KC_WFWD, KC_WREF, XXXXXXX, KC_MPRV, KC_MNXT, KC_MPLY, KC_MSTP, KC_MUTE, KC_VOLD, KC_VOLU, KC_PSCR, _______,
        RM_TOGG, RM_NEXT, RM_VALU, RM_HUEU, RM_SATU, RM_SPDU, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        KC_LCTL, RM_PREV, RM_VALD, RM_HUED, RM_SATD, RM_SPDD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          _______,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          _______,
        _______, _______, _______,                            _______,                            _______, _______, _______, _______),

};
