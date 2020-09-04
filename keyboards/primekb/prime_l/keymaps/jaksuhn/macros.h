#pragma once

#include "quantum.h"
#include "tap-hold.h"

enum custom_keycodes {
  BANG = SAFE_RANGE, /* ‽ */
  PLUSMINUS, /* ± */
  MULTIPLYX, /* × */
  OBELUS, /* ÷ */
  SQRT, /* √ */
  NOTEQUAL, /* ≠ */
  POWER1, /* ¹ */
  POWER2, /* ² */
  POWER3, /* ³ */
  CENTS, /* ¢ */
  PIPE, /* | */
  DASH, /* ‐ */
  DEGREE, /* ° */
  LSQBR, /* [ */
  RSQBR, /* ] */
  QUARTER, /* ¼ */
  PI, /* π */
  EURO, /* € */
  HALF, /* ½ */
  EMDASH, /* — */
  THREEQUARTERS, /* ¾ */
  INFINITY, /* ∞ */
  LCRBR, /* { */
  RCRBR, /* } */
  REGTM, /* ® */
  TM, /* ™ */
  MICRO, /* µ */
  RING_SM_A, /* å */
  RING_BG_A, /* Å */
  DELTA, /* Δ */
  HAMMER, /* ☭ */
  UML_SM_O, /* ö */
  UML_BG_O, /* Ö */
  UML_SM_A, /* ä */
  UML_BG_A, /* Ä */
  CORRECTCHECK, /* ✓ */
  WRONGX, /* ✗ */
  CPYRT, /* © */
  TILDE, /* ~ */
  GRAVE, /* ` */
  COMMA, /* , */
  SEMICOLON, /* ; */
  LESSTHAN, /* < */
  LESSTHANEQUAL, /* ≤ */
  PERIOD, /* . */
  COLON, /* : */
  GREATERTHAN, /* > */
  GREATERTHANEQUAL, /* ≥ */
  BACKSLASH,
  LENNY, /* ( ͡° ͜ʖ ͡°) */
  SHRUG, /* ¯\_(ツ)_/¯ */
  TFLIP, /* (╯°□°)╯︵ ┻━┻ */
  DISFACE, /* (ಠ_ಠ) */
  AMENO, /* ༼ つ ◕_◕ ༽つ */
  MAGIC, /* (∩ ͡° ͜ʖ ͡°)⊃━☆ﾟ. * */
  TPUT, /* ┬──┬ ノ( ゜-゜ノ) */
  SFT_DIVIDE,
  SFT_COMMA,
  SFT_PERIOD,
  SFT_POW2,
  SFT_POW3,
  SFT_CENTS,
  SFT_PIPE,
  SFT_HYPHEN,
  SFT_TILDE,
  SFT_DEGREE,
  SFT_LSQBR,
  SFT_RSQBR,
  SFT_RING_A,
  SFT_UML_O,
  SFT_UML_A,
  SFT_LESSTHAN,
  SFT_GREATERTHAN,
  SFT_BACKSLASH
};