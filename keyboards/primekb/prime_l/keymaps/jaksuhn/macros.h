#pragma once

#include "quantum.h"
#include "tap-hold.h"

enum custom_keycodes {
  BANG = SAFE_RANGE, /* ‽ */
  CENTS, /* ¢ */
  PIPE, /* | */
  DASH, /* ‐ */
  DEGREE, /* ° */
  LSQBR, /* [ */
  RSQBR, /* ] */
  EURO, /* € */
  EMDASH, /* — */
  LCRBR, /* { */
  RCRBR, /* } */
  REGTM, /* ® */
  TM, /* ™ */
  RING_SM_A, /* å */
  RING_BG_A, /* Å */
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
  PERIOD, /* . */
  COLON, /* : */
  GREATERTHAN, /* > */
  BACKSLASH, /* \ */
  PLUSMINUS, /* ± */
  MINUSPLUS, /* ∓ */
  MULTIPLYX, /* × */
  OBELUS, /* ÷ */
  SQRT, /* √ */
  NOTEQUAL, /* ≠ */
  APPROX, /* ≈ */
  POWER1, /* ¹ */
  POWER2, /* ² */
  POWER3, /* ³ */
  POWER4, /* ⁴ */
  POWER5, /* ⁵ */
  POWER6, /* ⁶ */
  POWER7, /* ⁷ */
  POWER8, /* ⁸ */
  POWER9, /* ⁹ */
  POWER0, /* ⁰ */
  QUARTER, /* ¼ */
  HALF, /* ½ */
  THREEQUARTERS, /* ¾ */
  THIRD, /* ⅓ */
  TWOTHIRDS, /* ⅔ */
  FIFTH, /* ⅕ */
  TWOFITHS, /* ⅖ */
  THREEFIFTHS, /* ⅗ */
  FOURFIFTHS, /* ⅘ */
  EXISTS, /* ∃ */
  REALNUM, /* ℝ */
  PI, /* π */
  INFIN, /* ∞ */
  MICRO, /* µ */
  FORALL, /* ∀ */
  SIGMA, /* σ */
  SUMMATION, /* ∑ */
  DELTA, /* Δ */
  NABLA, /* ∇ */
  ELEMENTOF, /* ∈ */
  NOTELEMENTOF, /* ∉ */
  CONTAINS, /* ∋ */
  NOTCONTAINS, /* ∌ */
  UNION, /* ∪ */
  NOTUNION, /* ∩ */
  LOGICOR, /* ∨ */
  LOGICAND, /* ∧ */
  LESSTHANEQUAL, /* ≤ */
  GREATERTHANEQUAL, /* ≥ */
  LENNY, /* ( ͡° ͜ʖ ͡°) */
  SHRUG, /* ¯\_(ツ)_/¯ */
  TFLIP, /* (╯°□°)╯︵ ┻━┻ */
  DISFACE, /* (ಠ_ಠ) */
  AMENO, /* ༼ つ ◕_◕ ༽つ */
  MAGIC, /* (∩ ͡° ͜ʖ ͡°)⊃━☆ﾟ. * */
  TPUT, /* ┬──┬ ノ( ゜-゜ノ) */
  ZOOP, /* (☞ﾟヮﾟ)☞ */
  SFT_COMMA,
  SFT_PERIOD,
  SFT_CENTS,
  SFT_HYPHEN,
  SFT_LSQBR,
  SFT_RSQBR,
  SFT_RING_A,
  SFT_UML_O,
  SFT_UML_A,
  SFT_LESSTHAN,
  SFT_GREATERTHAN,
  SFT_BACKSLASH,
  SFT_DIVIDE,
  SFT_POWER1,
  SFT_POWER2,
  SFT_POWER3,
  SFT_POWER4,
  SFT_POWER5,
  SFT_POWER6,
  SFT_POWER7,
  SFT_POWER8,
  SFT_POWER9,
  SFT_POWER0,
  SFT_NOTEQUAL,
  SFT_SIGMA,
  SFT_DELTA,
  SFT_ELEMENT,
  SFT_CONTAINS,
  SFT_UNION,
  SFT_LOGIC
};