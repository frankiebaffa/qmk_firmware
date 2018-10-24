//  ===========================================
//      AUTHOR:      EXOCTOROK
//      DATE:        20181021
//      DESCRIPTION: MACROS TO SET BOOLEANS
//                   FOR LED MODIFICATION
//  ==========================================

enum planck_macros {
  RGB_TGL = SAFE_RANGE
};

int row;
int col;
int loc = 255;
bool sft_on;
bool gui_on;
bool ctl_on;
bool alt_on;
bool any_on;
int rgb_toggle = 1;

//  Macros
bool process_record_user(uint16_t keycode, keyrecord_t *record) {

  // ASSIGN ROW AND COL VARIABLES BASED ON THE
  // LAST KEY PRESSED
  row = record->event.key.row;
  col = record->event.key.col;
  loc = (row*12)+col;

  if ((loc > 41) && (loc != 255)) {
    loc = loc+1;
  }

  if (!(record->event.pressed)) {
    any_on = false;
    loc = 255;
    rgb_matrix_indicators_user();
  }

  if (record->event.pressed) {
    switch(keycode) {
      case RGB_TGL:
        if (rgb_toggle == 0) {
          rgb_toggle = 1;
          rgb_matrix_indicators_user();
        } else if (rgb_toggle == 1) {
          rgb_toggle = 2;
          rgb_matrix_indicators_user();
        } else if (rgb_toggle == 2) {
          rgb_toggle = 0;
          rgb_matrix_indicators_user();
        }
        return false;
    }
  }

  // ASSIGN LOC AS THE SUM OF THE PRODUCT OF ROW AND 12
  // AND COL
  switch(keycode) {

    case KC_LSFT:
        sft_on = record->event.pressed;
        return true; // allow qmk to process the rest

    case KC_RSFT:
        sft_on = record->event.pressed;
        return true;

    case KC_LGUI:
        gui_on = record->event.pressed;
        return true;

    case KC_RGUI:
        gui_on = record->event.pressed;
        return true;

    case KC_LALT:
        alt_on = record->event.pressed;
        return true;

    case KC_RALT:
        alt_on = record->event.pressed;
        return true;

    case KC_LCTL:
        ctl_on = record->event.pressed;
        return true;

    case KC_RCTL:
        ctl_on = record->event.pressed;
        return true; 

    default:
        return true; // Process all other keycodes normally
  }
};

