#include "tap-dance.h"

void safe_reset(qk_tap_dance_state_t *state, void *user_data) {
  if (state->count >= 4) {
    // Reset the keyboard if you tap the key more than four times
    reset_keyboard();
    reset_tap_dance(state);
  }
}

qk_tap_dance_action_t tap_dance_actions[] = {
    /* Tap four times to enter DFU mode */
    [TD_RESET] = ACTION_TAP_DANCE_FN(safe_reset),
    /* Tap once/hold for Shift, tap twice for Caps Lock */
    [TD_SHIFT_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_LSHIFT, KC_CAPS),
    /* Tap once for comma, twice for semi colon */
    [TD_COMMA_SCOLON] = ACTION_TAP_DANCE_DOUBLE(KC_COMMA, KC_SCOLON),
    /* Tap once for dot, twice for colon */
    [TD_DOT_COLON] = ACTION_TAP_DANCE_DOUBLE(KC_DOT, KC_COLON),
    /* Tap once for left curly brace, twice for left square brace */
    [TD_LEFT_BRACE] = ACTION_TAP_DANCE_DOUBLE(RSFT(KC_LBRACKET), KC_LBRACKET),
    /* Tap once for right curly brace, twice for right square brace */
    [TD_RIGHT_BRACE] = ACTION_TAP_DANCE_DOUBLE(RSFT(KC_RBRACKET), KC_RBRACKET),
    /* Tap once for forward slash, twice for backslash */
    [TD_SLASHES] = ACTION_TAP_DANCE_DOUBLE(KC_SLASH, KC_BSLASH)
};