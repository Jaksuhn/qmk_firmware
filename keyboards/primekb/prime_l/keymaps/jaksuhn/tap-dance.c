#include "tap-dance.h"

void safe_reset(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count >= 4) {
        // Reset the keyboard if you tap the key more than four times
        reset_keyboard();
        reset_tap_dance(state);
    }
}

uint8_t cur_dance(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        // Key has not been interrupted, but the key is still held. Means you want to send a 'HOLD'.
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        // DOUBLE_SINGLE_TAP is to distinguish between typing "pepper", and actually wanting a double tap
        // action when hitting 'pp'. Suggested use case for this return value is when you want to send two
        // keystrokes of the key, and not the 'double tap' action/macro.
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }

    // Assumes no one is trying to type the same letter three times (at least not quickly).
    // If your tap dance key is 'KC_W', and you want to type "www." quickly - then you will need to add
    // an exception here to return a 'TRIPLE_SINGLE_TAP', and define that enum just like 'DOUBLE_SINGLE_TAP'
    if (state->count == 3) {
        if (state->interrupted || !state->pressed) return TRIPLE_TAP;
        else return TRIPLE_HOLD;
    } else return 8; // Magic number. At some point this method will expand to work for more presses
}

// Create an instance of 'tap' for the tap dance.
static tap xtap_state = {
    .is_press_action = true,
    .state = 0
};

void dash_finished(qk_tap_dance_state_t *state, void *user_data) {
    xtap_state.state = cur_dance(state);
    switch (xtap_state.state) {
        case SINGLE_TAP: register_code(KC_MINUS); break;
        // shifted characters require register_code16. Fuck if I know why, it's not documented anywhere
        case SINGLE_HOLD: register_code16(KC_UNDERSCORE); break;
        case DOUBLE_TAP:
            register_mods(MOD_BIT(KC_LALT));
            tap_code(KC_KP_0);
            tap_code(KC_KP_1);
            tap_code(KC_KP_5);
            tap_code(KC_KP_1);
            unregister_mods(MOD_BIT(KC_LALT));
            break;
        case TRIPLE_TAP: register_code16(KC_TILDE); break;
        // Last case is for fast typing. Assuming your key is `f`:
        // For example, when typing the word `buffer`, and you want to make sure that you send `ff` and not `Esc`.
        // In order to type `ff` when typing fast, the next character will have to be hit within the `TAPPING_TERM`, which by default is 200ms.
        case DOUBLE_SINGLE_TAP: tap_code(KC_MINUS); register_code(KC_MINUS);
    }
}

void dash_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (xtap_state.state) {
        case SINGLE_TAP: unregister_code(KC_MINUS); break;
        case SINGLE_HOLD: unregister_code16(KC_UNDERSCORE); break;
        case TRIPLE_TAP: unregister_code16(KC_TILDE); break;
        case DOUBLE_SINGLE_TAP: unregister_code(KC_MINUS); break;
    }
    xtap_state.state = 0;
}

void lbrace_finished(qk_tap_dance_state_t *state, void *user_data) {
    xtap_state.state = cur_dance(state);
    switch (xtap_state.state) {
        case SINGLE_TAP: register_code(KC_LSFT); register_code(KC_9); break;
        case DOUBLE_TAP: register_code16(KC_LEFT_CURLY_BRACE); break;
        case TRIPLE_TAP: register_code(KC_LBRACKET); break;
    }
}

void lbrace_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (xtap_state.state) {
        case SINGLE_TAP: unregister_code(KC_LSFT); unregister_code(KC_9); break;
        case DOUBLE_TAP: unregister_code16(KC_LEFT_CURLY_BRACE); break;
        case TRIPLE_TAP: unregister_code16(KC_LBRACKET); break;
    }
    xtap_state.state = 0;
}

void rbrace_finished(qk_tap_dance_state_t *state, void *user_data) {
    xtap_state.state = cur_dance(state);
    switch (xtap_state.state) {
        case SINGLE_TAP: register_code(KC_LSFT); register_code(KC_0); break;
        case DOUBLE_TAP: register_code16(KC_RIGHT_CURLY_BRACE); break;
        case TRIPLE_TAP: register_code(KC_RBRACKET); break;
    }
}

void rbrace_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (xtap_state.state) {
        case SINGLE_TAP: unregister_code(KC_LSFT); unregister_code(KC_0); break;
        case DOUBLE_TAP: unregister_code16(KC_RIGHT_CURLY_BRACE); break;
        case TRIPLE_TAP: unregister_code16(KC_RBRACKET); break;
    }
    xtap_state.state = 0;
}

void uni_gr_finished(qk_tap_dance_state_t *state, void *user_data) {
    xtap_state.state = cur_dance(state);
    switch (xtap_state.state) {
        case SINGLE_HOLD: layer_on(1); break;
        case DOUBLE_HOLD: layer_on(2); break;
    }
}

void uni_gr_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (xtap_state.state) {
        case SINGLE_HOLD: layer_off(1); break;
        case DOUBLE_HOLD: layer_off(2); break;
    }
    xtap_state.state = 0;
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
    [TD_SLASHES] = ACTION_TAP_DANCE_DOUBLE(KC_SLASH, KC_BSLASH),
    /* Tap once for dash, twice for emdash, thrice for tilde */
    [TD_DASH] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dash_finished, dash_reset),
    /* Tap once for (, twice for {, thrice for [ */
    [TD_LBRACE] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, lbrace_finished, lbrace_reset),
    /* Tap once for ), twice for }, thrice for ] */
    [TD_RBRACE] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, rbrace_finished, rbrace_reset),
    /* Tap and hold once for unicode layer, tap and hold twice for greek layer */
    [TD_UNI_GR] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, uni_gr_finished, uni_gr_reset)
};