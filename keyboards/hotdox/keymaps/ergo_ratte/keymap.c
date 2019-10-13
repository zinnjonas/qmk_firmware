#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_ergodox(TG(2), KC_1, KC_2, KC_3, KC_4, KC_5, KC_SLCK, KC_INS, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_EQL, LT(1,KC_CAPS), KC_A, KC_S, KC_D, KC_F, KC_G, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_LGUI, LCTL_T(KC_GRV), LALT_T(KC_QUOT), OSL(1), KC_LEFT, KC_RGHT, KC_DEL, KC_APP, KC_HOME, KC_SPC, KC_BSPC, KC_END, KC_PAUS, KC_6, KC_7, KC_8, KC_9, KC_0, TG(1), KC_MINS, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS, KC_H, KC_J, KC_K, KC_L, KC_SCLN, LT(2,KC_QUOT), KC_RGUI, KC_N, KC_M, KC_COMM, KC_DOT, LCTL_T(KC_SLSH), KC_RSFT, KC_UP, KC_DOWN, KC_LBRC, KC_RBRC, MO(1), KC_PSCR, KC_ESC, KC_PGUP, KC_PGDN, RALT_T(KC_TAB), RCTL_T(KC_ENT)),
	[1] = LAYOUT_ergodox(KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_TRNS, KC_EXLM, KC_AT, KC_LCBR, KC_RCBR, KC_PIPE, KC_TRNS, KC_TRNS, KC_HASH, KC_DLR, KC_LPRN, KC_RPRN, KC_GRV, KC_TRNS, KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_TILD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, BL_TOGG, BL_OFF, BL_BRTG, KC_TRNS, KC_TRNS, BL_STEP, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, KC_TRNS, KC_UP, KC_7, KC_8, KC_9, KC_ASTR, KC_TRNS, KC_DOWN, KC_4, KC_5, KC_6, KC_PLUS, KC_TRNS, KC_TRNS, KC_AMPR, KC_1, KC_2, KC_3, KC_BSLS, KC_TRNS, KC_TRNS, KC_DOT, KC_0, KC_EQL, KC_TRNS, BL_ON, KC_TRNS, BL_INC, BL_DEC, KC_TRNS, KC_TRNS),
	[2] = LAYOUT_ergodox(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MS_U, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN1, KC_BTN2, KC_TRNS, KC_TRNS, EEP_RST, KC_TRNS, KC_TRNS, RESET, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MNXT, KC_MPRV, KC_MPLY, KC_TRNS, KC_TRNS, KC_VOLU, KC_VOLD, KC_MUTE, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_WBAK)
};
