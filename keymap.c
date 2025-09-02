// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_names {
    _0,
    _1
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // clang-format off
        /*
            QWERTY
            ┌───┬───┬───┬───┬───┬───┐                    ┌───┬───┬───┬───┬───┬───┬───┐
            │esc│ 1 │ 2 │ 3 │ 4 │ 5 │                    │ 6 │ 7 │ 8 │ 9 │ 0 │ - │del│
            ├───┼───┼───┼───┼───┼───┤                    ├───┼───┼───┼───┼───┼───┼───┤
            │Tab│ Q │ W │ E │ R │ T │                    │ Y │ U │ I │ O │ P │ [ │ ] │
            ├───┼───┼───┼───┼───┼───┤                    ├───┼───┼───┼───┼───┼───┼───┤
            │SFT│ A │ S │ D │ F │ G │                    │ H │ J │ K │ L │ ; │up │etr│
            ├───┼───┼───┼───┼───┼───┼───┼───┼    ┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
            │CTL│ Z │ X │ C │ V │ B │SPC│M1 │    │M2 │SPC│ N │ M │ , │ . │lft│dwn│rgt│
            ├───┼───┼───┼───┼───┼───┼───┼───┼    ┼───┼───┼───┼───┼───┼───┼───┼───┼───┤

        */
        [_0] = LAYOUT(
            KC_ESC,  KC_1,KC_2, KC_3, KC_4, KC_5, 
            KC_TAB,  KC_Q,KC_W, KC_E, KC_R, KC_T,
            KC_LSFT, KC_A,KC_S, KC_D, KC_F, KC_G,
            KC_LCTL, KC_Z,KC_X, KC_C, KC_V, KC_B, KC_SPC, MO(_1),
            KC_6, KC_7, KC_8, KC_9, KC_0,    KC_MINS, KC_DEL,
            KC_Y, KC_U, KC_I, KC_O, KC_P,    KC_LBRC, KC_RBRC,
            KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_UP, KC_ENT,
            KC_TRNS, KC_SPC, KC_N, KC_M, KC_COMM, KC_DOT, KC_LEFT, KC_DOWN, KC_RGHT
        ),
    // clang-format off
        /*
            QWERTY
            ┌───┬───┬───┬───┬───┬───┐                    ┌───┬───┬───┬───┬───┬───┬───┐
            │esc│ 1 │ 2 │ 3 │ 4 │ 5 │                    │ 6 │ 7 │ 8 │ 9 │ 0 │ - │del│
            ├───┼───┼───┼───┼───┼───┤                    ├───┼───┼───┼───┼───┼───┼───┤
            │Tab│ Q │ W │ E │ R │ T │                    │ Y │ U │ I │ O │ P │ [ │ ] │
            ├───┼───┼───┼───┼───┼───┤                    ├───┼───┼───┼───┼───┼───┼───┤
            │SFT│ A │ S │ D │ F │ G │                    │ H │ J │ K │ L │ ; │up │etr│
            ├───┼───┼───┼───┼───┼───┼───┼───┼    ┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
            │CTL│ Z │ X │ C │ V │ B │SPC│M1 │    │M2 │SPC│ N │ M │ , │ . │lft│dwn│rgt│
            ├───┼───┼───┼───┼───┼───┼───┼───┼    ┼───┼───┼───┼───┼───┼───┼───┼───┼───┤

        */
        [_1] = LAYOUT(
            KC_ESC,  KC_1,KC_2, KC_3, KC_4, KC_5, 
            KC_TAB,  KC_Q,KC_W, KC_E, KC_R, KC_T,
            KC_LSFT, KC_A,KC_S, KC_D, KC_F, KC_G,
            KC_LCTL, KC_Z,KC_X, KC_C, KC_V, KC_B, KC_SPC, KC_TRNS,
            KC_6, KC_7, KC_8, KC_9, KC_0,    KC_MINS, KC_DEL,
            KC_Y, KC_U, KC_I, KC_O, KC_P,    KC_LBRC, KC_RBRC,
            KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_UP, KC_ENT,
            KC_TRNS, KC_SPC, KC_N, KC_M, KC_COMM, KC_DOT, KC_LEFT, KC_DOWN, KC_RGHT
        )
};
