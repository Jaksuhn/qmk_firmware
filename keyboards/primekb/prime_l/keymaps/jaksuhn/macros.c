#include "prime_uni.h"
#include "tap-hold.h"
#include "macros.h"
static bool shift_held = false;
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    #ifdef UNICODE_ENABLE
      case BANG: /* ‽ */
        if (record->event.pressed) {
          send_unicode_string("‽");
        }
        return false;
        break;
      case PLUSMINUS: /* ± */
        if (record->event.pressed) {
          send_unicode_string("±");
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
      case CENTS: /* ¢ */
        if (record->event.pressed) {
          send_unicode_string("¢");
        }
        return false;
        break;
      case PIPE: /* | */
        if (record->event.pressed) {
          send_unicode_string("|");
        }
        return false;
        break;
      case DASH: /* ‐ */
        if (record->event.pressed) {
          send_unicode_string("‐");
        }
        return false;
        break;
      case DEGREE: /* ° */
        if (record->event.pressed) {
          send_unicode_string("°");
        }
        return false;
        break;
      case LSQBR: /* [ */
        if (record->event.pressed) {
          send_unicode_string("[");
        }
        return false;
        break;
      case RSQBR: /* ] */
        if (record->event.pressed) {
          send_unicode_string("]");
        }
        return false;
        break;
      case QUARTER: /* ¼ */
        if (record->event.pressed) {
          send_unicode_string("¼");
        }
        return false;
        break;
      case PI: /* π */
        if (record->event.pressed) {
          send_unicode_string("π");
        }
        return false;
        break;
      case EURO: /* € */
        if (record->event.pressed) {
          send_unicode_string("€");
        }
        return false;
        break;
      case HALF: /* ½ */
        if (record->event.pressed) {
          send_unicode_string("½");
        }
        return false;
        break;
      case EMDASH: /* — */
        if (record->event.pressed) {
          send_unicode_string("—");
        }
        return false;
        break;
      case THREEQUARTERS: /* ¾ */
        if (record->event.pressed) {
          send_unicode_string("¾");
        }
        return false;
        break;
      case INFIN: /* ∞ */
        if (record->event.pressed) {
          send_unicode_string("∞");
        }
        return false;
        break;
      case LCRBR: /* { */
        if (record->event.pressed) {
          send_unicode_string("{");
        }
        return false;
        break;
      case RCRBR: /* } */
        if (record->event.pressed) {
          send_unicode_string("}");
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
      case MICRO: /* µ */
        if (record->event.pressed) {
          send_unicode_string("µ");
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
      case DELTA: /* Δ */
        if (record->event.pressed) {
          send_unicode_string("Δ");
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
      case TILDE: /* ~ */
        if (record->event.pressed) {
          send_unicode_string("~");
        }
        return false;
        break;
      case GRAVE: /* ` */
        if (record->event.pressed) {
          send_unicode_string("`");
        }
        return false;
        break;
      case COMMA: /* , */
        if (record->event.pressed) {
          send_unicode_string(",");
        }
        return false;
        break;
      case SEMICOLON: /* ; */
        if (record->event.pressed) {
          send_unicode_string(";");
        }
        return false;
        break;
      case LESSTHAN: /* < */
        if (record->event.pressed) {
          send_unicode_string("<");
        }
        return false;
        break;
      case LESSTHANEQUAL: /* ≤ */
        if (record->event.pressed) {
          send_unicode_string("≤");
        }
        return false;
        break;
      case PERIOD: /* . */
        if (record->event.pressed) {
          send_unicode_string(".");
        }
        return false;
        break;
      case COLON: /* : */
        if (record->event.pressed) {
          send_unicode_string(":");
        }
        return false;
        break;
      case GREATERTHAN: /* > */
        if (record->event.pressed) {
          send_unicode_string(">");
        }
        return false;
        break;
      case GREATERTHANEQUAL: /* ≥ */
        if (record->event.pressed) {
          send_unicode_string("≥");
        }
        return false;
        break;
      case BACKSLASH: /* \\ */
      if (record->event.pressed) {
          send_unicode_string("\\");
        }
        return false;
        break;
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

      // CUSTOM SHIFT KEYS
      case KC_LSFT:
        shift_held = record->event.pressed;
        return true;
        break;
      case KC_RSFT:
        shift_held = record->event.pressed;
        return true;
        break;
        case SFT_DIVIDE: {
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("√");
            } else {
              send_unicode_string("/");
            }
          }
          return false;
          break;
        }
        case SFT_COMMA: {
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string(";");
            } else {
              send_unicode_string(",");
            }
          }
          return false;
          break;
        }
        case SFT_PERIOD: {
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string(":");
            } else {
              send_unicode_string(".");
            }
          }
          return false;
          break;
        }
        case SFT_POW2: {
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("¼");
            } else {
              send_unicode_string("²");
            }
          }
          return false;
          break;
        }
        case SFT_POW3: {
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("π");
            } else {
              send_unicode_string("³");
            }
          }
          return false;
          break;
        }
        case SFT_CENTS: {
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("€");
            } else {
              send_unicode_string("¢");
            }
          }
          return false;
          break;
        }
        case SFT_PIPE: {
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("½");
            } else {
              send_unicode_string("|");
            }
          }
          return false;
          break;
        }
        case SFT_HYPHEN: {
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("—");
            } else {
              send_unicode_string("‐");
            }
          }
          return false;
          break;
        }
        case SFT_TILDE: {
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("¾");
            } else {
              send_unicode_string("~");
            }
          }
          return false;
          break;
        }
        case SFT_DEGREE: {
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("∞");
            } else {
              send_unicode_string("°");
            }
          }
          return false;
          break;
        }
        case SFT_LSQBR: {
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("[");
            } else {
              send_unicode_string("{");
            }
          }
          return false;
          break;
        }
        case SFT_RSQBR: {
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("]");
            } else {
              send_unicode_string("}");
            }
          }
          return false;
          break;
        }
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
        case SFT_LESSTHAN: {
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("≤");
            } else {
              send_unicode_string("<");
            }
          }
          return false;
          break;
        }
        case SFT_GREATERTHAN: {
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("≥");
            } else {
              send_unicode_string(">");
            }
          }
          return false;
          break;
        }
        case SFT_BACKSLASH: {
          if (record->event.pressed) {
            if (shift_held) {
              send_unicode_string("‽");
            } else {
              send_unicode_string("\\");
            }
          }
          return false;
          break;
        }
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