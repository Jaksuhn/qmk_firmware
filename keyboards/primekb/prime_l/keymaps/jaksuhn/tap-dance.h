#pragma once

#include "quantum.h"

enum tap_dance {
    TD_RESET = 0,
    TD_SHIFT_CAPS,
    TD_COMMA_SCOLON,
    TD_DOT_COLON,
    TD_LEFT_BRACE,
    TD_RIGHT_BRACE,
    TD_SLASHES,
    TD_DASH,
    TD_LBRACE,
    TD_RBRACE,
    TD_UNI_GR
};

typedef struct {
    bool is_press_action;
    uint8_t state;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP, // Send two single taps
    TRIPLE_TAP,
    TRIPLE_HOLD
};

uint8_t cur_dance(qk_tap_dance_state_t *state);

void dash_finished(qk_tap_dance_state_t *state, void *user_data);
void dash_reset(qk_tap_dance_state_t *state, void *user_data);
void lbrace_finished(qk_tap_dance_state_t *state, void *user_data);
void lbrace_reset(qk_tap_dance_state_t *state, void *user_data);
void rbrace_finished(qk_tap_dance_state_t *state, void *user_data);
void rbrace_reset(qk_tap_dance_state_t *state, void *user_data);
void uni_gr_finished(qk_tap_dance_state_t *state, void *user_data);
void uni_gr_reset(qk_tap_dance_state_t *state, void *user_data);