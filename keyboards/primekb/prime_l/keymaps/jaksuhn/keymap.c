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
#include "keymap.h"

/*
enum unicode_names {
    BANG,
    PLUSMINUS,
    MULTIPLYX,
    OBELUS,
    SQRT,
    NOTEQUAL,
    POWER1,
    POWER2,
    POWER3,
    CENTS,
    PIPE,
    DASH,
    DEGREE,
    SQBRL,
    SQBRR,
    QUARTER,
    PI,
    EURO,
    HALF,
    EMDASH,
    THREEQUARTERS,
    INFINITY,
    CRBRL,
    CRBRR,
    REGTM,
    TM,
    MICRO,
    SMCIRA,
    BGCIRA,
    DELTA,
    HAMMER,
    SMUMLAUTO,
    BGUMLAUTO,
    SMUMLAUTA,
    BGUMLAUTA,
    CORRECTCHECK,
    WRONGX,
    CPYRT,
    TILDE,
    GRAVE,
    COMMA,
    SEMICOLON,
    LESSTHAN,
    LESSTHANEQUAL,
    PERIOD,
    COLON,
    GREATERTHAN,
    GREATERTHANEQUAL,
    BACKSLASH
};

const uint32_t PROGMEM unicode_map[] = {
    [BANG]  = 0x203D,  // ‽
    [PLUSMINUS] = 0x00B1,  // ±
    [MULTIPLYX]  = 0x00D7, // ×
    [OBELUS]  = 0x00F7, // ÷
    [SQRT]  = 0x221A, // √
    [NOTEQUAL]  = 0x2260, // ≠
    [POWER1]  = 0x00B9, // ¹
    [POWER2]  = 0x00B2, // ²
    [POWER3]  = 0x00B3, // ³
    [CENTS]  = 0x00A2, // ¢
    [PIPE] =  0x007C, // |
    [DASH]  = 0x2010, // ‐
    [DEGREE]  = 0x00B0, // °
    [SQBRL]  = 0x005B, // [
    [SQBRR]  = 0x005D, // ]
    [QUARTER]  = 0x00BC, // ¼
    [PI]  = 0x03C0, // π
    [EURO]  = 0x20AC, // €
    [HALF]  = 0x00BD, // ½
    [EMDASH]  = 0x2014, // —
    [THREEQUARTERS]  = 0x00BE, // ¾
    [INFINITY]  = 0x221E, // ∞
    [CRBRL]  = 0x007B, // {
    [CRBRR]  = 0x007D, // }
    [REGTM]  = 0x00AE, // ®
    [TM]  = 0X2122, // ™
    [MICRO]  = 0X00B5, // µ
    [SMCIRA]  = 0x00E5, // å
    [BGCIRA]  = 0x00C5, // Å
    [DELTA]  = 0x0394, // Δ
    [HAMMER]  = 0x262D, // ☭
    [SMUMLAUTO]  = 0x00F6, // ö
    [BGUMLAUTO]  = 0x00D6, // Ö
    [SMUMLAUTA]  = 0x00E4, // ä
    [BGUMLAUTA]  = 0x00C4, // Ä
    [CORRECTCHECK]  = 0x2713, // ✓
    [WRONGX]  = 0x2717, // ✗
    [CPYRT]  = 0X00A9, // ©
    [TILDE]  = 0x007E, // ~
    [GRAVE]  = 0x0060, // `
    [COMMA]  = 0x002C, // ,
    [SEMICOLON]  = 0x003B, // ;
    [LESSTHAN]  = 0x003C, // <
    [LESSTHANEQUAL]  = 0x2264, // ≤
    [PERIOD]  = 0x002E, // .
    [COLON]  = 0x003A, // :
    [GREATERTHAN]  = 0x003E, // >
    [GREATERTHANEQUAL]  = 0x2265, // ≥
    [BACKSLASH]  = 0x005C
};

enum emoticons {
    LENNY, //( ͡° ͜ʖ ͡°)
    SHRUG, // ¯\_(ツ)_/¯
    TFLIP, // (╯°□°)╯︵ ┻━┻
    LOOK // (ಠ_ಠ)
};
*/

enum layer_names {
    _BASE,
    _UNICODE,
    _FN,
    _ADJUST
};

enum keymap_custom_keycodes {
    RAISE = NEW_SAFE_RANGE,
    FN
};

// enum custom_keycodes {
//     KC_DTCL = SAFE_RANGE,
//     KC_CMSCL,
//     KC_SLSQ,
//     KC_POQU,
//     KC_POPI,
//     KC_CEEU,
//     KC_PIHA,
//     KC_DAEM,
//     KC_TITH,
//     KC_DEIN,
//     KC_SQCRl,
//     KC_SQCRR,
//     KC_SMBGAA,
//     KC_SMBGO,
//     KC_SMBGA,
//     KC_LELE,
//     KC_GRGR,
//     KC_BABA
// };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* QWERTY
     * ,---------------------------------------------------------------------------------------------------------------.
     * | +    | -    | *    | /(√) | 1    | 2    | 3    | 4    | 5    | 6    | 7    | 8    | 9    | 0    | Esc  | Bksp |
     * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
     * | 7    | 8    | 9    | =    | q    | w    | e    | r    | t    | y    | u    | i    | o    | p    | 🖨️   | Del  |
     * |------+------+------+------+------+-------------+------+------+------+------+------+------+------+------+------|
     * | 4    | 4    | 6    | Tab    | a    | s    | d    | f    | g    | h    | j    | k    | l    | '    | Enter     |
     * |------+------+------+--------+------+-------------+------+------+------+------+------+------+------+-----------|
     * | 1    | 2    | 3    | Shift     | z    | x    | c    | v    | b    | n    | m    | ,(;) | .(:) | /    | Shift  |
     * |------+------+------+-----------+------+------+------+------+------+------+------+------+------+------+--------|
     * | Ent  | 0    | .    | Ctrl   | Win    | Fn   | Alt  | Space       | MO(UNICODE)  | Left | Up   | Down | Right  |
     * `---------------------------------------------------------------------------------------------------------------'
     */
    [_BASE] = LAYOUT(
		KC_KP_PLUS, KC_KP_MINUS, KC_KP_ASTERISK, SFT_DIVIDE, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_ESC, KC_BSPC,
		KC_P7, KC_P8, KC_P9, KC_KP_EQUAL, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_PSCR, KC_DEL,
		KC_P4, KC_P5, KC_P6, KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_QUOT, KC_ENT,
		KC_P1, KC_P2, KC_P3, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, SFT_COMMA, SFT_PERIOD, KC_SLSH, KC_RSFT,
		KC_ENT, KC_P0, KC_PDOT, KC_LCTL, KC_LGUI, MO(2), KC_LALT, KC_SPC, MO(1), KC_LEFT, KC_UP, KC_DOWN, KC_RIGHT
    ),

    /* UNICODE LAYER
     * ,---------------------------------------------------------------------------------------------------------------.
     * | ±    |      | ×    | ÷    | ¹    | ²(¼) | ³(π) | ¢(€) | |(½) | -(–) | ~(¾) | °(∞) | [({) | ](}) |      |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |      | ≠    |      |      |      | ®    | ™    |      | μ    |      | å(Å) |      |      |      |
     * |------+------+------+------+------+-------------+------+------+------+------+------+------+------+------+------|
     * |      |      |      | faces  |      |      | Δ    |      |      | ☭    |      | ö(Ö) | ä(Ä) | `    |           |
     * |------+------+------+--------+------+-------------+------+------+------+------+------+------+------+-----------|
     * |      |      |      |           | ✓    | ✗    | ©    |      |      |      |      | <(≤) | >(≥) | \(‽) |        |
     * |------+------+------+-----------+------+------+------+------+------+------+------+------+------+------+--------|
     * |      |      |      |        |        |      |      |             |              |      |      |      |        |
     * `---------------------------------------------------------------------------------------------------------------'
     */
	[_UNICODE] = LAYOUT(
		PLUSMINUS, _______, MULTIPLYX, OBELUS, POWER1, SFT_POW2, SFT_POW3, SFT_CENTS, SFT_PIPE, SFT_HYPHEN, SFT_TILDE, SFT_DEGREE, SFT_LSQBR, SFT_RSQBR, _______, _______,
		_______, _______, _______, NOTEQUAL, _______, _______, _______, REGTM, TM, _______, MICRO, _______, SFT_RING_A, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, DELTA, _______, _______, HAMMER, _______, SFT_UML_O, SFT_UML_A, GRAVE, _______,
		_______, _______, _______, KC_CAPSLOCK, CORRECTCHECK, WRONGX, CPYRT, _______, _______, _______, _______, SFT_LESSTHAN, SFT_GREATERTHAN, SFT_BACKSLASH, _______,
		KC_NUMLOCK, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

    /* FUNCTION KEYS
     * ,---------------------------------------------------------------------------------------------------------------.
     * |      |      |      |      | F1   | F2   | F3   | F4   | F5   | F6   | F7   | F8   | F9   | F10  | F11  | F12  |
     * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
     * | prev | paus | skip |      |      |      |      |      |      |      |      |      |      |      |      |      |
     * |------+------+------+------+------+-------------+------+------+------+------+------+------+------+------+------|
     * | vol_d| up   | vol_u|        |      |      |      |      |      |      |      |      |      |      |           |
     * |------+------+------+--------+------+-------------+------+------+------+------+------+------+------+-----------|
     * | left | down | right|           |      |      |      |      |      |      |      |      |      |      |        |
     * |------+------+------+-----------+------+------+------+------+------+------+------+------+------+------+--------|
     * |      |      |      |        |        |      |      |             |              | home | pgup | pgdn | end    |
     * `---------------------------------------------------------------------------------------------------------------'
     */
    [_FN] = LAYOUT(
        _______, _______, _______, _______, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
        KC_MEDIA_PREV_TRACK, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_NEXT_TRACK, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        KC_AUDIO_VOL_DOWN, KC_UP, KC_AUDIO_VOL_UP, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        KC_LEFT, KC_DOWN, KC_RIGHT, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_HOME, KC_PGUP, KC_PGDOWN, KC_END
    ),

    /* LAYOUT
     * ,---------------------------------------------------------------------------------------------------------------.
     * |      |      |      |      |      |      |      |      |      |      |      |      |      |      |      |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |      |      |      |      |      |      |      |      |      |      |      |      |      |      |
     * |------+------+------+------+------+-------------+------+------+------+------+------+------+------+------+------|
     * |      |      |      |        |      |      |      |      |      |      |      |      |      |      |           |
     * |------+------+------+--------+------+-------------+------+------+------+------+------+------+------+-----------|
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
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    )
    /* LAYOUT
     * ,---------------------------------------------------------------------------------------------------------------.
     * |      |      |      |      |      |      |      |      |      |      |      |      |      |      |      |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |      |      |      |      |      |      |      |      |      |      |      |      |      |      |
     * |------+------+------+------+------+-------------+------+------+------+------+------+------+------+------+------|
     * |      |      |      |        |      |      |      |      |      |      |      |      |      |      |           |
     * |------+------+------+--------+------+-------------+------+------+------+------+------+------+------+-----------|
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

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
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