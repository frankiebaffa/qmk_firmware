#include "util/base.c"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[L1] = LAYOUT_planck_mit( /* BASE QWERTY LAYER */
  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
  LT3_MIN, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  KC_EQL,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, LT4_GRV,
  RGB_TGL, KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT,     KC_ENT,       LT2_SPC, KC_RGUI, KC_RALT, KC_RCTL, KC_NO
),

[L2] = LAYOUT_planck_mit( /* VIM KEYS AND MOUSE KEYS */
  KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_CAPS, KC_F5,   FB_BBAK, KC_BSPC, KC_NO,   KC_LBRC, KC_RBRC, KC_DEL,
  KC_TRNS, CTL_TAB, KC_MS_L, KC_MS_U, KC_MS_D, KC_MS_R, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_BTN1, KC_BTN2,
  KC_TRNS, WKSPC_L, WKSPC_U, WKSPC_D, WKSPC_R, KC_NO,   KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_BSLS, KC_TRNS,
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_F5,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO
),

[L3] = LAYOUT_planck_mit( /* NUM PAD AND F KEYS */
  KC_TRNS, KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_VOLD, KC_VOLU, KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  KC_TRNS, KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_NO,   KC_LBRC, KC_4,    KC_5,    KC_6,    KC_RBRC, KC_NO,
  KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_B,    KC_NO,   KC_1,    KC_2,    KC_3,    KC_NO,   KC_TRNS,
  KC_TRNS, TO_L5,   KC_TRNS, KC_TRNS, KC_TRNS,     KC_ENT,       KC_0,    KC_TRNS, KC_TRNS, KC_TRNS, RESET
),

[L4] = LAYOUT_planck_mit( /* MAGNET FOR MACOSX SHORTCUTS */
  KC_TRNS, KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_VOLD, KC_VOLU, KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  KC_TRNS, WIN_TL,  WIN_BL,  WIN_BR,  WIN_TR,  KC_NO,   KC_LBRC, KC_4,    KC_5,    KC_6,    KC_RBRC, KC_NO,
  KC_TRNS, WIN_LH,  KC_F2,   KC_F3,   WIN_RH,  KC_B,    KC_NO,   KC_1,    KC_2,    KC_3,    WIN_MX,  KC_TRNS,
  KC_TRNS, TO_L5,   KC_TRNS, KC_TRNS, KC_TRNS,     KC_ENT,       KC_0,    KC_TRNS, KC_TRNS, KC_TRNS, KC_NO
),

[L5] = LAYOUT_planck_mit( /* GAMING LAYER */
  KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,    KC_Y,     KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
  KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,   KC_G,    KC_H,     KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,   KC_B,    KC_N,     KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
  KC_NO,   KC_LCTL, KC_LALT, KC_LGUI, KC_SPC,    KC_BSPC,        KC_SPC,  KC_RGUI, KC_RALT, KC_RCTL, TO_L1
),
};
