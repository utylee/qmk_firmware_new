#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [0] = LAYOUT_numpad_6x4(
        KC_ESC,  KC_TAB,  KC_PEQL, MO(1),
        KC_LNUM, KC_PSLS, KC_PAST, KC_PMNS,
        KC_P7,   KC_P8,   KC_P9,
        KC_P4,   KC_P5,   KC_P6,   KC_PPLS,
        KC_P1,   KC_P2,   KC_P3,
            KC_P0,        KC_PDOT, KC_PENT
    ),

    /* RGB */
    [1] = LAYOUT_numpad_6x4(
        RM_SATU, RM_VALU, RM_HUEU, _______,
        RM_SATD, RM_VALD, RM_HUED, _______,
        RGB_M_X, RGB_M_G, RM_NEXT,
        RGB_M_SW,RGB_M_SN,RGB_M_K, RM_PREV,
        RGB_M_P, RGB_M_B, RGB_M_R,
            XXXXXXX,      XXXXXXX, RM_TOGG
    )
};
