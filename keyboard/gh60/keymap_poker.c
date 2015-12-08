#include "keymap_common.h"


const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    KEYMAP( ESC,      F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,       PSCR,SLCK,BRK,  \
            GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,      INS, HOME,PGUP, \
            TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS,      DEL, END, PGDN, \
            CAPS, A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,                      \
            LSFT,     Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,     RSFT,           UP,        \
            LCTL,LGUI,LALT,               SPC,                RALT,RGUI,FN0, RCTL,      LEFT,DOWN,RGHT  ),

    /* 1: FN 1 */
    KEYMAP(TRNS,       TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,    TRNS, TRNS, TRNS,\
           TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,    MPRV, MPLY, MNXT,\
           TRNS, BTN1, MS_U, BTN2, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,    MUTE, VOLD, VOLU,\
           TRNS, MS_L, MS_D, MS_R, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,       TRNS,                     \
           TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,       TRNS,                TRNS,      \
           TRNS, TRNS,             TRNS,             TRNS,       TRNS, TRNS, TRNS,       TRNS,    TRNS, TRNS, TRNS ),
};
const uint16_t PROGMEM fn_actions[] = {
  [0] = ACTION_LAYER_MOMENTARY(1),
};
