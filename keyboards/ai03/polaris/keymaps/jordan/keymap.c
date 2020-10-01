/* Copyright 2019 Ryota Goto
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

enum layer_names {
    _BASE,
    _FN,
    _FN2,
    _FN3,
    _FN4,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_all( /* Base */
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_GRV,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,          KC_BSPC,
    KC_LCTL,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,                   KC_ENT,
    KC_LSFT, KC_BSLS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, MO(2),
    MO(3), KC_LGUI, KC_LALT,          KC_SPC,           KC_SPC,           KC_SPC,                    KC_RALT, KC_RGUI, KC_APP,  TG(1)
  ),
  [_FN] = LAYOUT_all( /* FN */
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_GRV,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,          KC_BSPC,
    KC_LGUI,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,                   KC_ENT,
    KC_LSFT, KC_BSLS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, MO(2),
    MO(3), KC_LGUI, KC_LALT,          KC_SPC,           KC_SPC,           KC_SPC,                    KC_RALT, KC_LCTL, KC_APP,  TG(1)
  ),

  [_FN2] = LAYOUT_all( /* FN */RESET,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  KC_BSPC,
    _______, _______, KC_PGUP, _______, _______, _______, _______, _______, KC_UP,   _______, KC_MPRV, KC_MPLY, KC_MNXT,          RESET,
    _______, KC_HOME, KC_PGDN, KC_END,  _______, KC_VOLD, KC_VOLU, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______,                   LSFT(KC_INS),
    _______, _______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, _______,          TG(4), _______,
    _______, _______, _______,          _______,          _______,          _______,                   _______, _______, _______, _______
  ),

  [_FN3] = LAYOUT_all( /* Base */
    KC_ESC,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  KC_HOME,
    _______, _______, KC_UP, _______, _______, _______, _______, _______, KC_UP,   _______, KC_MPRV, KC_MPLY, KC_MNXT,          KC_END,
    _______, KC_LEFT, KC_DOWN, KC_RIGHT,  _______, LALT(KC_F4), KC_VOLU, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______,                   KC_PGUP,
    _______, _______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, _______,          KC_PSCR, KC_PGDN,
    _______, _______, _______,          _______,          _______,          _______,                   _______, _______, _______, _______
  ),
  [_FN4] = LAYOUT_all( /* Base */
    KC_ESC,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  KC_HOME,
    _______, _______, KC_UP, _______, _______, _______, _______, _______, KC_UP,   _______, KC_MPRV, KC_MPLY, KC_MNXT,          KC_END,
    _______, KC_LEFT, KC_DOWN, KC_RIGHT,  _______, _______, KC_VOLU, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______,                   KC_PGUP,
    _______, _______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, _______,          TG(4), KC_PGDN,
    _______, _______, _______,          _______,          _______,          _______,                   _______, _______, _______, _______
  ),
};

