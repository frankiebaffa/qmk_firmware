//  ============================================
//      AUTHOR:      EXOCTOROK
//      DATE:        20181021
//      DESCRIPTION: KEYMAP FOR PLANCK LIGHT
//                   WITH CUSTOM MACROS AND
//                   LED FUNCTIONALITY
//  ===========================================

// INCLUDE FOREACH LOOP DEFINITION
#include "util/foreach.c"

//  STANDARD INCLUSIONS
#include QMK_KEYBOARD_H

#include "action_layer.h"
#include "eeconfig.h"
#include "mousekey.h"
#include "backlight.h"

extern keymap_config_t keymap_config;

enum planck_layers {
    L1,
    L2,
    L3,
    L4,
    L5,
    L6
};

enum planck_keycodes {
    _L1,
    _L2,
    _L3,
    _L4,
    _L5,
    _L6,
};

#include "util/definition.c"
#include "util/tapdance.c"
#include "util/macro.c"
#include "util/led.c"


