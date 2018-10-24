#define SFT_CAP TD(TD_CAPS)

enum exoctorok_td {
  TD_CAPS = 0,
};

qk_tap_dance_action_t tap_dance_actions[] = {
  [TD_CAPS]  = ACTION_TAP_DANCE_DOUBLE(KC_LSFT, KC_CAPS),
};

