#include "tap-dance.h"

qk_tap_dance_action_t tap_dance_actions[] = {
  /* Tap once/hold for Shift, tap twice for Caps Lock */
  [TD_SHIFT_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_LSHIFT, KC_CAPS),
  [TD_COMMA_SCOLON] = ACTION_TAP_DANCE_DOUBLE(KC_DOT, KC_SCOLON)
};