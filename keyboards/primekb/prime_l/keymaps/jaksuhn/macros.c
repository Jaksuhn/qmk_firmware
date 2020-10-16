#include "prime_uni.h"
#include "tap-hold.h"
#include "macros.h"
static bool shift_held = false;
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    #ifdef UNICODE_ENABLE
      /*
      *                _                  _
      *  _   _  _ __  (_)  ___  ___    __| |  ___
      * | | | || '_ \ | | / __|/ _ \  / _` | / _ \
      * | |_| || | | || || (__| (_) || (_| ||  __/
      *  \__,_||_| |_||_| \___|\___/  \__,_| \___|
      *
      */
      case BANG: /* ‽ */
        if (record->event.pressed) {
          send_unicode_string("‽");
        }
        return false;
        break;
      case PIPE: /* | */
        if (record->event.pressed) {
          send_unicode_string("|");
        }
        return false;
        break;
      case DEGREE: /* ° */
        if (record->event.pressed) {
          send_unicode_string("°");
        }
        return false;
        break;
      case CENTS: /* ¢ */
        if (record->event.pressed) {
          send_unicode_string("¢");
        }
        return false;
        break;
      case EURO: /* € */
        if (record->event.pressed) {
          send_unicode_string("€");
        }
        return false;
        break;
      case POUND: /* £ */
        if (record->event.pressed) {
          send_unicode_string("£");
        }
        return false;
        break;
      case REGTM: /* ® */
        if (record->event.pressed) {
          send_unicode_string("®");
        }
        return false;
        break;
      case TM: /* ™ */
        if (record->event.pressed) {
          send_unicode_string("™");
        }
        return false;
        break;
      case RING_SM_A: /* å */
        if (record->event.pressed) {
          send_unicode_string("å");
        }
        return false;
        break;
      case RING_BG_A: /* Å */
        if (record->event.pressed) {
          send_unicode_string("Å");
        }
        return false;
        break;
      case HAMMER: /* ☭ */
        if (record->event.pressed) {
          send_unicode_string("☭");
        }
        return false;
        break;
      case UML_SM_O: /* ö */
        if (record->event.pressed) {
          send_unicode_string("ö");
        }
        return false;
        break;
      case UML_BG_O: /* Ö */
        if (record->event.pressed) {
          send_unicode_string("Ö");
        }
        return false;
        break;
      case UML_SM_A: /* ä */
        if (record->event.pressed) {
          send_unicode_string("ä");
        }
        return false;
        break;
      case UML_BG_A: /* Ä */
        if (record->event.pressed) {
          send_unicode_string("Ä");
        }
        return false;
        break;
      case CORRECTCHECK: /* ✓ */
        if (record->event.pressed) {
          send_unicode_string("✓");
        }
        return false;
        break;
      case WRONGX: /* ✗ */
        if (record->event.pressed) {
          send_unicode_string("✗");
        }
        return false;
        break;
      case CPYRT: /* © */
        if (record->event.pressed) {
          send_unicode_string("©");
        }
        return false;
        break;
      case GRAVE: /* ` */
        if (record->event.pressed) {
          send_unicode_string("`");
        }
        return false;
        break;
      case NUMERO: /* № */
        if (record->event.pressed) {
            send_unicode_string("№");
          }
        return false;
        break;
      case MENACING: /* ゴ */
        if (record->event.pressed) {
            send_unicode_string("ゴ");
          }
        return false;
        break;

      /*
      *
      *                    _    _                              _             _
      *  _ __ ___    __ _ | |_ | |__    ___  _   _  _ __ ___  | |__    ___  | | ___
      * | '_ ` _ \  / _` || __|| '_ \  / __|| | | || '_ ` _ \ | '_ \  / _ \ | |/ __|
      * | | | | | || (_| || |_ | | | | \__ \| |_| || | | | | || |_) || (_) || |\__ \
      * |_| |_| |_| \__,_| \__||_| |_| |___/ \__, ||_| |_| |_||_.__/  \___/ |_||___/
      *                                      |___/
      *
      */
      case PLUSMINUS: /* ± */
        if (record->event.pressed) {
            send_unicode_string("±");
          }
        return false;
        break;
      case MINUSPLUS: /* ∓ */
        if (record->event.pressed) {
            send_unicode_string("∓");
          }
        return false;
        break;
      case MULTIPLYX: /* × */
        if (record->event.pressed) {
            send_unicode_string("×");
          }
        return false;
        break;
      case OBELUS: /* ÷ */
        if (record->event.pressed) {
            send_unicode_string("÷");
          }
        return false;
        break;
      case SQRT: /* √ */
        if (record->event.pressed) {
            send_unicode_string("√");
          }
        return false;
        break;
      case NOTEQUAL: /* ≠ */
        if (record->event.pressed) {
            send_unicode_string("≠");
          }
        return false;
        break;
      case APPROX: /* ≈ */
        if (record->event.pressed) {
            send_unicode_string("≈");
          }
        return false;
        break;
      case POWER1: /* ¹ */
        if (record->event.pressed) {
            send_unicode_string("¹");
          }
        return false;
        break;
      case POWER2: /* ² */
        if (record->event.pressed) {
            send_unicode_string("²");
          }
        return false;
        break;
      case POWER3: /* ³ */
        if (record->event.pressed) {
            send_unicode_string("³");
          }
        return false;
        break;
      case POWER4: /* ⁴ */
        if (record->event.pressed) {
            send_unicode_string("⁴");
          }
        return false;
        break;
      case POWER5: /* ⁵ */
        if (record->event.pressed) {
            send_unicode_string("⁵");
          }
        return false;
        break;
      case POWER6: /* ⁶ */
        if (record->event.pressed) {
            send_unicode_string("⁶");
          }
        return false;
        break;
      case POWER7: /* ⁷ */
        if (record->event.pressed) {
            send_unicode_string("⁷");
          }
        return false;
        break;
      case POWER8: /* ⁸ */
        if (record->event.pressed) {
            send_unicode_string("⁸");
          }
        return false;
        break;
      case POWER9: /* ⁹ */
        if (record->event.pressed) {
            send_unicode_string("⁹");
          }
        return false;
        break;
      case POWER0: /* ⁰ */
        if (record->event.pressed) {
            send_unicode_string("⁰");
          }
        return false;
        break;
      case QUARTER: /* ¼ */
        if (record->event.pressed) {
          send_unicode_string("¼");
        }
        return false;
        break;
      case HALF: /* ½ */
        if (record->event.pressed) {
          send_unicode_string("½");
        }
        return false;
        break;
      case THREEQUARTERS: /* ¾ */
        if (record->event.pressed) {
          send_unicode_string("¾");
        }
        return false;
        break;
      case THIRD: /* ⅓ */
        if (record->event.pressed) {
          send_unicode_string("⅓");
        }
        return false;
        break;
      case TWOTHIRDS: /* ⅔ */
        if (record->event.pressed) {
          send_unicode_string("⅔");
        }
        return false;
        break;
      case FIFTH: /* ⅕ */
        if (record->event.pressed) {
          send_unicode_string("⅕");
        }
        return false;
        break;
      case TWOFITHS: /* ⅖ */
        if (record->event.pressed) {
          send_unicode_string("⅖");
        }
        return false;
        break;
      case THREEFIFTHS: /* ⅗ */
        if (record->event.pressed) {
          send_unicode_string("⅗");
        }
        return false;
        break;
      case FOURFIFTHS: /* ⅘ */
        if (record->event.pressed) {
          send_unicode_string("⅘");
        }
        return false;
        break;
      case EXISTS: /* ∃ */
        if (record->event.pressed) {
            send_unicode_string("∃");
          }
        return false;
        break;
      case REALNUM: /* ℝ */
        if (record->event.pressed) {
            send_unicode_string("ℝ");
          }
        return false;
        break;
      case INFIN: /* ∞ */
        if (record->event.pressed) {
            send_unicode_string("∞");
          }
        return false;
        break;
      case FORALL: /* ∀ */
        if (record->event.pressed) {
            send_unicode_string("∀");
          }
        return false;
        break;
      case NABLA: /* ∇ */
        if (record->event.pressed) {
            send_unicode_string("∇");
          }
        return false;
        break;
      case ELEMENTOF: /* ∈ */
        if (record->event.pressed) {
            send_unicode_string("∈");
          }
        return false;
        break;
      case NOTELEMENTOF: /* ∉ */
        if (record->event.pressed) {
            send_unicode_string("∉");
          }
        return false;
        break;
      case CONTAINS: /* ∋ */
        if (record->event.pressed) {
            send_unicode_string("∋");
          }
        return false;
        break;
      case NOTCONTAINS: /* ∌ */
        if (record->event.pressed) {
            send_unicode_string("∌");
          }
        return false;
        break;
      case UNION: /* ∪ */
        if (record->event.pressed) {
            send_unicode_string("∪");
          }
        return false;
        break;
      case NOTUNION: /* ∩ */
        if (record->event.pressed) {
            send_unicode_string("∩");
          }
        return false;
        break;
      case LOGICOR: /* ∨ */
        if (record->event.pressed) {
            send_unicode_string("∨");
          }
        return false;
        break;
      case LOGICAND: /* ∧ */
        if (record->event.pressed) {
            send_unicode_string("∧");
          }
        return false;
        break;
      case LOGICNOT: /* ¬ */
        if (record->event.pressed) {
            send_unicode_string("¬");
          }
        return false;
        break;
      case IFTHEN: /* → */
        if (record->event.pressed) {
            send_unicode_string("→");
          }
        return false;
        break;
      case IFONLYIF: /* ⇔ */
        if (record->event.pressed) {
            send_unicode_string("⇔");
          }
        return false;
        break;
      case LESSTHANEQUAL: /* ≤ */
        if (record->event.pressed) {
            send_unicode_string("≤");
          }
        return false;
        break;
      case GREATERTHANEQUAL: /* ≥ */
        if (record->event.pressed) {
            send_unicode_string("≥");
         }
        return false;
        break;

      /*
      *                          _    _
      *   ___  _ __ ___    ___  | |_ (_)  ___  ___   _ __   ___
      *  / _ \| '_ ` _ \  / _ \ | __|| | / __|/ _ \ | '_ \ / __|
      * |  __/| | | | | || (_) || |_ | || (__| (_) || | | |\__ \
      *  \___||_| |_| |_| \___/  \__||_| \___|\___/ |_| |_||___/
      *
      */
      case AMENO:  /* ༼ つ ◕_◕ ༽つ */
        if (record->event.pressed) {
          send_unicode_hex_string("0F3C 0020 3064 0020 25D5 005F 25D5 0020 0F3D 3064");
        }
        return false;
        break;
      case MAGIC:  /* (∩ ͡° ͜ʖ ͡°)⊃━☆ﾟ. * */
        if (record->event.pressed) {
          send_unicode_hex_string("0028 2229 0020 0361 00B0 0020 035C 0296 0020 0361 00B0 0029 2283 2501 2606 FF9F 002E 0020 002A");
        }
        return false;
        break;
      case LENNY:  /* ( ͡° ͜ʖ ͡°) */
        if (record->event.pressed) {
          send_unicode_hex_string("0028 0020 0361 00B0 0020 035C 0296 0020 0361 00b0 0029");
        }
        return false;
        break;
      case DISFACE:  /* ಠ_ಠ */
        if (record->event.pressed) {
          send_unicode_hex_string("0CA0 005F 0CA0");
        }
        return false;
        break;
      case TFLIP:  /* (╯°□°)╯ ︵ ┻━┻ */
        if (record->event.pressed) {
          send_unicode_hex_string("0028 256F 00b0 25A1 00B0 0029 256F FE35 253B 2501 253B");
        }
        return false;
        break;
      case TPUT:  /* ┬──┬ ノ( ゜-゜ノ) */
        if (record->event.pressed) {
          send_unicode_hex_string("252C 2500 2500 252C 0020 30CE 0028 0020 309C 002D 309C 30CE 0029");
        }
        return false;
        break;
      case SHRUG:  /* ¯\_(ツ)_/¯ */
        if (record->event.pressed) {
          send_unicode_hex_string("00AF 005C 005F 0028 30C4 0029 005F 002F 00AF");
        }
        return false;
        break;
      case ZOOP:  /* (☞ﾟヮﾟ)☞ */
        if (record->event.pressed) {
          send_unicode_hex_string("0028 261E FF9F 30EE FF9F 0029 261E");
        }
        return false;
        break;

      /*
      *                    _                           _      _   __  _
      *   ___  _   _  ___ | |_  ___   _ __ ___    ___ | |__  (_) / _|| |_  ___
      *  / __|| | | |/ __|| __|/ _ \ | '_ ` _ \  / __|| '_ \ | || |_ | __|/ __|
      * | (__ | |_| |\__ \| |_| (_) || | | | | | \__ \| | | || ||  _|| |_ \__ \
      *  \___| \__,_||___/ \__|\___/ |_| |_| |_| |___/|_| |_||_||_|   \__||___/
      *
      *
      */
      case KC_LSFT:
        shift_held = record->event.pressed;
        return true;
        break;
      case KC_RSFT:
        shift_held = record->event.pressed;
        return true;
        break;
        case SFT_RING_A: {
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("Å");
            } else {
              send_unicode_string("å");
            }
          }
          return false;
          break;
        }
        case SFT_UML_O: {
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("Ö");
            } else {
              send_unicode_string("ö");
            }
          }
          return false;
          break;
        }
        case SFT_UML_A: {
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("Ä");
            } else {
              send_unicode_string("ä");
            }
          }
          return false;
          break;
        }
        case SFT_POWER1: {
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("₁");
            } else {
              send_unicode_string("¹");
            }
          }
          return false;
          break;
        }
        case SFT_POWER2: {
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("₂");
            } else {
              send_unicode_string("²");
            }
          }
          return false;
          break;
        }
        case SFT_POWER3: {
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("₃");
            } else {
              send_unicode_string("³");
            }
          }
          return false;
          break;
        }
        case SFT_POWER4: {
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("₄");
            } else {
              send_unicode_string("⁴");
            }
          }
          return false;
          break;
        }
        case SFT_POWER5: {
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("₅");
            } else {
              send_unicode_string("⁵");
            }
          }
          return false;
          break;
        }
        case SFT_POWER6: {
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("₆");
            } else {
              send_unicode_string("⁶");
            }
          }
          return false;
          break;
        }
        case SFT_POWER7: {
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("₇");
            } else {
              send_unicode_string("⁷");
            }
          }
          return false;
          break;
        }
        case SFT_POWER8: {
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("₈");
            } else {
              send_unicode_string("⁸");
            }
          }
          return false;
          break;
        }
        case SFT_POWER9: {
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("₉");
            } else {
              send_unicode_string("⁹");
            }
          }
          return false;
          break;
        }
        case SFT_POWER0: {
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("₀");
            } else {
              send_unicode_string("⁰");
            }
          }
          return false;
          break;
        }
        case SFT_DIVIDE: {
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("√");
            } else {
              send_unicode_string("÷");
            }
          }
          return false;
          break;
        }
        case SFT_NOTEQUAL: {
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("≈");
            } else {
              send_unicode_string("≠");
            }
          }
          return false;
          break;
        }
        case SFT_ELEMENT: {
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("∉");
            } else {
              send_unicode_string("∈");
            }
          }
          return false;
          break;
        }
        case SFT_CONTAINS: {
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("∌");
            } else {
              send_unicode_string("∋");
            }
          }
          return false;
          break;
        }
        case SFT_UNION: {
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("∩");
            } else {
              send_unicode_string("∪");
            }
          }
          return false;
          break;
        }
        case SFT_LOGIC: {
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("∧");
            } else {
              send_unicode_string("∨");
            }
          }
          return false;
          break;
        }

        /*
        *
        *
        *                          _
        *   __ _  _ __  ___   ___ | | __
        *  / _` || '__|/ _ \ / _ \| |/ /
        * | (_| || |  |  __/|  __/|   <
        *  \__, ||_|   \___| \___||_|\_\
        *  |___/
        *
        */
        case SFT_GR_EPSL: /* Ε */
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("Ε");
            } else {
              send_unicode_string("ε");
            }
          }
          return false;
          break;
        case SFT_GR_RHO: /* Ρ */
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("Ρ");
            } else {
              send_unicode_string("ρ");
            }
          }
          return false;
          break;
        case SFT_GR_TAU: /* Τ */
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("Τ");
            } else {
              send_unicode_string("τ");
            }
          }
          return false;
          break;
        case SFT_GR_UPSL: /* Υ */
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("Υ");
            } else {
              send_unicode_string("υ");
            }
          }
          return false;
          break;
        case SFT_GR_THET: /* Θ */
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("Θ");
            } else {
              send_unicode_string("θ");
            }
          }
          return false;
          break;
        case SFT_GR_IOTA: /* Ι */
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("Ι");
            } else {
              send_unicode_string("ι");
            }
          }
          return false;
          break;
        case SFT_GR_OMCR: /* Ο */
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("Ο");
            } else {
              send_unicode_string("ο");
            }
          }
          return false;
          break;
        case SFT_GR_PI: /* Π */
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("Π");
            } else {
              send_unicode_string("π");
            }
          }
          return false;
          break;
        case SFT_GR_ALPH: /* Α */
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("Α");
            } else {
              send_unicode_string("α");
            }
          }
          return false;
          break;
        case SFT_GR_SIGM: /* Σ */
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("Σ");
            } else {
              send_unicode_string("σ");
            }
          }
          return false;
          break;
        case SFT_GR_DELT: /* Δ */
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("Δ");
            } else {
              send_unicode_string("δ");
            }
          }
          return false;
          break;
        case SFT_GR_PHI: /* Φ */
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("Φ");
            } else {
              send_unicode_string("φ");
            }
          }
          return false;
          break;
        case SFT_GR_GAMM: /* Γ */
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("Γ");
            } else {
              send_unicode_string("γ");
            }
          }
          return false;
          break;
        case SFT_GR_ETA: /* Η */
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("Η");
            } else {
              send_unicode_string("η");
            }
          }
          return false;
          break;
        case SFT_GR_XI: /* Ξ */
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("Ξ");
            } else {
              send_unicode_string("ξ");
            }
          }
          return false;
          break;
        case SFT_GR_KAPP: /* Κ */
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("Κ");
            } else {
              send_unicode_string("κ");
            }
          }
          return false;
          break;
        case SFT_GR_LAMB: /* Λ */
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("Λ");
            } else {
              send_unicode_string("λ");
            }
          }
          return false;
          break;
        case SFT_GR_ZETA: /* Ζ */
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("Ζ");
            } else {
              send_unicode_string("ζ");
            }
          }
          return false;
          break;
        case SFT_GR_CHI: /* Χ */
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("Χ");
            } else {
              send_unicode_string("χ");
            }
          }
          return false;
          break;
        case SFT_GR_PSI: /* Ψ */
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("Ψ");
            } else {
              send_unicode_string("ψ");
            }
          }
            return false;
            break;
        case SFT_GR_OMEG: /* Ω */
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("Ω");
            } else {
              send_unicode_string("ω");
            }
          }
          return false;
          break;
        case SFT_GR_BETA: /* Β */
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("Β");
            } else {
              send_unicode_string("β");
            }
          }
          return false;
          break;
        case SFT_GR_NU: /* Ν */
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("Ν");
            } else {
              send_unicode_string("ν");
            }
          }
          return false;
          break;
        case SFT_GR_MU: /* Μ */
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("Μ");
            } else {
              send_unicode_string("μ");
            }
          }
          return false;
          break;
    #endif
    default:
      #ifdef UNICODE_ENABLE
        // if ( zalgo_enabled ) {
        //   if ( keycode < KC_A || ( keycode > KC_0 && keycode < KC_MINUS ) || keycode > KC_SLASH ) {
        //     process_record_keymap( keycode, record );
        //     return true;
        //   }
        //   if (record->event.pressed ) {
        //     zalgo_text( keycode );
        //   }
        //   return false;
        // }
      #endif
      break;
  }
  process_record_keymap(keycode, record);
  return true;
};