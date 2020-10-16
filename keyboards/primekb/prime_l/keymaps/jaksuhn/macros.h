#pragma once

#include "quantum.h"
#include "tap-hold.h"

enum custom_keycodes {
  BANG = SAFE_RANGE, /* ‽ */
  PIPE, /* | */
  DEGREE, /* ° */
  CENTS, /* ¢ */
  EURO, /* € */
  POUND, /* £ */
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
  GRAVE, /* ` */
  NUMERO, /* № */
  MENACING, /* ゴ */
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
  INFIN, /* ∞ */
  FORALL, /* ∀ */
  NABLA, /* ∇ */
  ELEMENTOF, /* ∈ */
  NOTELEMENTOF, /* ∉ */
  CONTAINS, /* ∋ */
  NOTCONTAINS, /* ∌ */
  UNION, /* ∪ */
  NOTUNION, /* ∩ */
  LOGICOR, /* ∨ */
  LOGICAND, /* ∧ */
  LOGICNOT, /* ¬ */
  IFTHEN, /* → */
  IFONLYIF, /* ⇔ */
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
  SFT_RING_A,
  SFT_UML_O,
  SFT_UML_A,
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
  SFT_ELEMENT,
  SFT_CONTAINS,
  SFT_UNION,
  SFT_LOGIC,
  SFT_GR_EPSL, /* Ε */
  SFT_GR_RHO, /* Ρ */
  SFT_GR_TAU, /* Τ */
  SFT_GR_UPSL, /* Υ */
  SFT_GR_THET, /* Θ */
  SFT_GR_IOTA, /* Ι */
  SFT_GR_OMCR, /* Ο */
  SFT_GR_PI, /* Π */
  SFT_GR_ALPH, /* Α */
  SFT_GR_SIGM, /* Σ */
  SFT_GR_DELT, /* Δ */
  SFT_GR_PHI, /* Φ */
  SFT_GR_GAMM, /* Γ */
  SFT_GR_ETA, /* Η */
  SFT_GR_XI, /* Ξ */
  SFT_GR_KAPP, /* Κ */
  SFT_GR_LAMB, /* Λ */
  SFT_GR_ZETA, /* Ζ */
  SFT_GR_CHI, /* Χ */
  SFT_GR_PSI, /* Ψ */
  SFT_GR_OMEG, /* Ω */
  SFT_GR_BETA, /* Β */
  SFT_GR_NU, /* Ν */
  SFT_GR_MU /* Μ */
};