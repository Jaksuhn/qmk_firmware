/* Copyright 2018 Jumail Mundekkat
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H
#include "prime_uni.h"

enum layer_names {
    _BASE,
    _UNICODE,
    _MATH,
    _FN,
    _ADJUST
};

enum keymap_custom_keycodes {
    UNICODE = SAFE_RANGE,
    FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* QWERTY
     * ,---------------------------------------------------------------------------------------------------------------.
     * | +    | -    | *    | /(√) | 1    | 2    | 3    | 4    | 5    | 6    | 7    | 8    | 9    | 0    | Esc  | Bksp |
     * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
     * | 7    | 8    | 9    | =    | q    | w    | e    | r    | t    | y    | u    | i    | o    | p    |      | Del  |
     * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
     * | 4    | 4    | 6    | Tab    | a    | s    | d    | f    | g    | h    | j    | k    | l    | '    | Enter     |
     * |------+------+------+--------+------+------+------+------+------+------+------+------+------+------+-----------|
     * | 1    | 2    | 3    | Shift     | z    | x    | c    | v    | b    | n    | m    | ,(;) | .(:) | /    | Shift  |
     * |------+------+------+-----------+------+------+------+------+------+------+------+------+------+------+--------|
     * | Ent  | 0    | .    | Ctrl   | Win    | Fn   | Alt  | Space       | MO(UNICODE)  | Left | Up   | Down | Right  |
     * `---------------------------------------------------------------------------------------------------------------'
     */
    [_BASE] = LAYOUT(
		KC_KP_PLUS, KC_KP_MINUS, KC_KP_ASTERISK, SFT_DIVIDE, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_ESC, KC_BSPC,
		KC_P7, KC_P8, KC_P9, KC_EQUAL, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_MINUS, KC_DEL,
		KC_P4, KC_P5, KC_P6, KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_QUOT, KC_ENT,
		KC_P1, KC_P2, KC_P3, TD(TD_SHIFT_CAPS), KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, TD(TD_COMMA_SCOLON), TD(TD_DOT_COLON), KC_SLSH, KC_RSFT,
		TD(TD_RESET), KC_P0, KC_PDOT, KC_LCTL, KC_LGUI, MO(2), KC_LALT, KC_SPC, MO(1), KC_LEFT, KC_UP, KC_DOWN, KC_RIGHT
    ),

    /* UNICODE LAYER
     * ,---------------------------------------------------------------------------------------------------------------.
     * | ±    |      | ×    | ÷    | ¹    | ²(¼) | ³(π) | ¢(€) | |(½) | -(–) | ~(¾) | °(∞) |      |      |      |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |      | ≠    |      |      |      | ®    | ™    |      | μ    |      | å(Å) |      |      |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |      |        |      |      | Δ    |      |      | ☭    |      | ö(Ö) | ä(Ä) | `    |           |
     * |------+------+------+--------+------+------+------+------+------+------+------+------+------+------+-----------|
     * |      |      |      |           | ✓    | ✗    | ©    |      |      | {([) | }(]) | <(≤) | >(≥) | \(‽) |        |
     * |------+------+------+-----------+------+------+------+------+------+------+------+------+------+------+--------|
     * |      |      |      |        |        |      |      |             |              |      |      |      |        |
     * `---------------------------------------------------------------------------------------------------------------'
     */
	[_UNICODE] = LAYOUT(
		_______, _______, _______, _______, _______, _______, _______, SFT_CENTS, PIPE, SFT_HYPHEN, TILDE, DEGREE, SFT_LSQBR, SFT_RSQBR, _______, _______,
		TPUT, ZOOP, _______, _______, _______, _______, _______, REGTM, TM, _______, _______, _______, SFT_RING_A, _______, _______, _______,
		TFLIP, AMENO, MAGIC, _______, _______, _______, _______, _______, _______, HAMMER, _______, SFT_UML_O, SFT_UML_A, GRAVE, _______,
		LENNY, SHRUG, DISFACE, _______, CORRECTCHECK, WRONGX, CPYRT, _______, _______, TD_LEFT_BRACE, TD_RIGHT_BRACE, _______, _______, SFT_BACKSLASH, _______,
		TG(_MATH), _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

    /* MATH LAYER
     * ,---------------------------------------------------------------------------------------------------------------.
     * | ±    | ∓    | ×    | ÷ √  | ¹ ₁  | ² ₂  | ³ ₃  | ⁴ ₄  | ⁵ ₅  | ⁶ ₆  | ⁷ ₇  | ⁸ ₈  | ⁹ ₉  | ⁰ ₀  |      |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
     * | ⅖    | ⅗    |⅘    | ≠ ≈  |      |      | ∃    | ℝ    |      |      | μ    | ∞    |      | π    |      |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
     * | ⅓    | ⅔    | ⅕    |        | ∀    | σ ∑  | Δ ∇  |      |      |      |      |      |      |      |           |
     * |------+------+------+--------+------+------+------+------+------+------+------+------+------+------+-----------|
     * | ¼    | ½    | ¾    |           | ∈ ∉  | ∋ ∌  | ∪ ∩  | ∨ ∧  |      |      |      | ≤    | ≥    |      |        |
     * |------+------+------+-----------+------+------+------+------+------+------+------+------+------+------+--------|
     * |      |      |      |        |        |      |      |             |              |      |      |      |        |
     * `---------------------------------------------------------------------------------------------------------------'
     */
    [_MATH] = LAYOUT(
        PLUSMINUS, MINUSPLUS, MULTIPLYX, SFT_DIVIDE, SFT_POWER1, SFT_POWER2, SFT_POWER3, SFT_POWER4, SFT_POWER5, SFT_POWER6, SFT_POWER7, SFT_POWER8, SFT_POWER9, SFT_POWER0, XXXXXXX, XXXXXXX,
        TWOFITHS, THREEFIFTHS, FOURFIFTHS, SFT_NOTEQUAL, XXXXXXX, XXXXXXX, EXISTS, REALNUM, XXXXXXX, XXXXXXX, MICRO, INFIN, XXXXXXX, PI, XXXXXXX, XXXXXXX,
        THIRD, TWOTHIRDS, FIFTH, XXXXXXX, FORALL, SFT_SIGMA, SFT_DELTA, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        QUARTER, HALF, THREEQUARTERS, XXXXXXX, SFT_ELEMENT, SFT_CONTAINS, SFT_UNION, SFT_LOGIC, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
    ),

    /* FUNCTION KEYS
     * ,---------------------------------------------------------------------------------------------------------------.
     * |      |      |      |      | F1   | F2   | F3   | F4   | F5   | F6   | F7   | F8   | F9   | F10  | F11  | F12  |
     * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
     * | prev | paus | skip |      |      |      |      |      |      |      |      |      |      |      | 🖨️   |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
     * | vol_d| up   | vol_u|        |      |      |      |      |      |      |      |      |      |      |           |
     * |------+------+------+--------+------+------+------+------+------+------+------+------+------+------+-----------|
     * | left | down | right|           |      |      |      |      |      |      |      |      |      |      |        |
     * |------+------+------+-----------+------+------+------+------+------+------+------+------+------+------+--------|
     * |      |      |      |        |        |      |      |             |              | home | pgup | pgdn | end    |
     * `---------------------------------------------------------------------------------------------------------------'
     */
    [_FN] = LAYOUT(
        _______, _______, _______, _______, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
        KC_MEDIA_PREV_TRACK, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_NEXT_TRACK, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PSCR, _______, KC_INS,
        KC_AUDIO_VOL_DOWN, KC_UP, KC_AUDIO_VOL_UP, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        KC_LEFT, KC_DOWN, KC_RIGHT, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        KC_NUMLOCK, _______, _______, _______, _______, _______, _______, _______, _______, KC_HOME, KC_PGUP, KC_PGDOWN, KC_END
    ),

    /* ADJUST LAYER ‐‐ only active when UNICODE and FN are active
     * ,---------------------------------------------------------------------------------------------------------------.
     * |      |      |      |      |      |      |      |      |      |      |      |      |      |      |      |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |      |      |      |      |      |      |      |      |      |      |      |      |      |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |      |        |      |      |      |      |      |      |      |      |      |      |           |
     * |------+------+------+--------+------+------+------+------+------+------+------+------+------+------+-----------|
     * |      |      |      |           |      |      |      |      |      |      |      |      |      |      |        |
     * |------+------+------+-----------+------+------+------+------+------+------+------+------+------+------+--------|
     * |      |      |      |        |        |      |      |             |              |      |      |      |        |
     * `---------------------------------------------------------------------------------------------------------------'
     */
    [_ADJUST] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        RESET, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    )
    /* LAYOUT
     * ,---------------------------------------------------------------------------------------------------------------.
     * |      |      |      |      |      |      |      |      |      |      |      |      |      |      |      |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |      |      |      |      |      |      |      |      |      |      |      |      |      |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |      |        |      |      |      |      |      |      |      |      |      |      |           |
     * |------+------+------+--------+------+------+------+------+------+------+------+------+------+------+-----------|
     * |      |      |      |           |      |      |      |      |      |      |      |      |      |      |        |
     * |------+------+------+-----------+------+------+------+------+------+------+------+------+------+------+--------|
     * |      |      |      |        |        |      |      |             |              |      |      |      |        |
     * `---------------------------------------------------------------------------------------------------------------'
     */
    /*
    [3] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    )
    */
};

/* Runs just one time when the keyboard initializes. */
void eeconfig_init_keymap(void) {
    set_unicode_input_mode(UC_WINC);
};

bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case UNICODE:
            if (record->event.pressed) {
              layer_on(_UNICODE);
              update_tri_layer(_UNICODE, _FN, _ADJUST);
            }
            else {
              layer_off(_UNICODE);
              update_tri_layer(_UNICODE, _FN, _ADJUST);
            }
            return false;
            break;
        case FN:
            if (record->event.pressed) {
              layer_on(_FN);
              update_tri_layer(_UNICODE, _FN, _ADJUST);
            }
            else {
              layer_off(_FN);
              update_tri_layer(_UNICODE, _FN, _ADJUST);
            }
            return false;
            break;
    }

    return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _UNICODE, _FN, _ADJUST);
}