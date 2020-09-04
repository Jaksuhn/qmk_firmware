#include "prime_uni.h"
#include "tap-hold.h"
#include "macros.h"
static bool shift_held = false;
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    #ifdef UNICODE_ENABLE
      case BANG: /* ‽ */
        if (record->event.pressed) {
          send_unicode_hex_string("203D");
        }
        return false;
        break;
      case PLUSMINUS: /* ± */
        if (record->event.pressed) {
          send_unicode_hex_string("00B1");
        }
        return false;
        break;
      case MULTIPLYX: /* × */
        if (record->event.pressed) {
          send_unicode_hex_string("00D7");
        }
        return false;
        break;
      case OBELUS: /* ÷ */
        if (record->event.pressed) {
          send_unicode_hex_string("00F7");
        }
        return false;
        break;
      case SQRT: /* √ */
        if (record->event.pressed) {
          send_unicode_hex_string("221A");
        }
        return false;
        break;
      case NOTEQUAL: /* ≠ */
        if (record->event.pressed) {
          send_unicode_hex_string("2260");
        }
        return false;
        break;
      case POWER1: /* ¹ */
        if (record->event.pressed) {
          send_unicode_hex_string("00B9");
        }
        return false;
        break;
      case POWER2: /* ² */
        if (record->event.pressed) {
          send_unicode_hex_string("00B2");
        }
        return false;
        break;
      case POWER3: /* ³ */
        if (record->event.pressed) {
          send_unicode_hex_string("00B3");
        }
        return false;
        break;
      case CENTS: /* ¢ */
        if (record->event.pressed) {
          send_unicode_hex_string("00A2");
        }
        return false;
        break;
      case PIPE: /* | */
        if (record->event.pressed) {
          send_unicode_hex_string("007C");
        }
        return false;
        break;
      case DASH: /* ‐ */
        if (record->event.pressed) {
          send_unicode_hex_string("2010");
        }
        return false;
        break;
      case DEGREE: /* ° */
        if (record->event.pressed) {
          send_unicode_hex_string("00B0");
        }
        return false;
        break;
      case LSQBR: /* [ */
        if (record->event.pressed) {
          send_unicode_hex_string("005B");
        }
        return false;
        break;
      case RSQBR: /* ] */
        if (record->event.pressed) {
          send_unicode_hex_string("005D");
        }
        return false;
        break;
      case QUARTER: /* ¼ */
        if (record->event.pressed) {
          send_unicode_hex_string("00BC");
        }
        return false;
        break;
      case PI: /* π */
        if (record->event.pressed) {
          send_unicode_hex_string("03C0");
        }
        return false;
        break;
      case EURO: /* € */
        if (record->event.pressed) {
          send_unicode_hex_string("20AC");
        }
        return false;
        break;
      case HALF: /* ½ */
        if (record->event.pressed) {
          send_unicode_hex_string("00BD");
        }
        return false;
        break;
      case EMDASH: /* — */
        if (record->event.pressed) {
          send_unicode_hex_string("2014");
        }
        return false;
        break;
      case THREEQUARTERS: /* ¾ */
        if (record->event.pressed) {
          send_unicode_hex_string("00BE");
        }
        return false;
        break;
      case INFINITY: /* ∞ */
        if (record->event.pressed) {
          send_unicode_hex_string("221E");
        }
        return false;
        break;
      case LCRBR: /* { */
        if (record->event.pressed) {
          send_unicode_hex_string("007B");
        }
        return false;
        break;
      case RCRBR: /* } */
        if (record->event.pressed) {
          send_unicode_hex_string("007D");
        }
        return false;
        break;
      case REGTM: /* ® */
        if (record->event.pressed) {
          send_unicode_hex_string("00AE");
        }
        return false;
        break;
      case TM: /* ™ */
        if (record->event.pressed) {
          send_unicode_hex_string("2122");
        }
        return false;
        break;
      case MICRO: /* µ */
        if (record->event.pressed) {
          send_unicode_hex_string("00B5");
        }
        return false;
        break;
      case RING_SM_A: /* å */
        if (record->event.pressed) {
          send_unicode_hex_string("00E5");
        }
        return false;
        break;
      case RING_BG_A: /* Å */
        if (record->event.pressed) {
          send_unicode_hex_string("00C5");
        }
        return false;
        break;
      case DELTA: /* Δ */
        if (record->event.pressed) {
          send_unicode_hex_string("0394");
        }
        return false;
        break;
      case HAMMER: /* ☭ */
        if (record->event.pressed) {
          send_unicode_hex_string("262D");
        }
        return false;
        break;
      case UML_SM_O: /* ö */
        if (record->event.pressed) {
          send_unicode_hex_string("00F6");
        }
        return false;
        break;
      case UML_BG_O: /* Ö */
        if (record->event.pressed) {
          send_unicode_hex_string("00D6");
        }
        return false;
        break;
      case UML_SM_A: /* ä */
        if (record->event.pressed) {
          send_unicode_hex_string("00E4");
        }
        return false;
        break;
      case UML_BG_A: /* Ä */
        if (record->event.pressed) {
          send_unicode_hex_string("00C4");
        }
        return false;
        break;
      case CORRECTCHECK: /* ✓ */
        if (record->event.pressed) {
          send_unicode_hex_string("2713");
        }
        return false;
        break;
      case WRONGX: /* ✗ */
        if (record->event.pressed) {
          send_unicode_hex_string("2717");
        }
        return false;
        break;
      case CPYRT: /* © */
        if (record->event.pressed) {
          send_unicode_hex_string("00A9");
        }
        return false;
        break;
      case TILDE: /* ~ */
        if (record->event.pressed) {
          send_unicode_hex_string("007E");
        }
        return false;
        break;
      case GRAVE: /* ` */
        if (record->event.pressed) {
          send_unicode_hex_string("0060");
        }
        return false;
        break;
      case COMMA: /* , */
        if (record->event.pressed) {
          send_unicode_hex_string("002C");
        }
        return false;
        break;
      case SEMICOLON: /* ; */
        if (record->event.pressed) {
          send_unicode_hex_string("003B");
        }
        return false;
        break;
      case LESSTHAN: /* < */
        if (record->event.pressed) {
          send_unicode_hex_string("003C");
        }
        return false;
        break;
      case LESSTHANEQUAL: /* ≤ */
        if (record->event.pressed) {
          send_unicode_hex_string("2264");
        }
        return false;
        break;
      case PERIOD: /* . */
        if (record->event.pressed) {
          send_unicode_hex_string("002E");
        }
        return false;
        break;
      case COLON: /* : */
        if (record->event.pressed) {
          send_unicode_hex_string("003A");
        }
        return false;
        break;
      case GREATERTHAN: /* > */
        if (record->event.pressed) {
          send_unicode_hex_string("003E");
        }
        return false;
        break;
      case GREATERTHANEQUAL: /* ≥ */
        if (record->event.pressed) {
          send_unicode_hex_string("2265");
        }
        return false;
        break;
      case BACKSLASH:
      if (record->event.pressed) {
          send_unicode_hex_string("005C");
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
              unregister_code(KC_LSFT);
              unregister_code(KC_RSFT);
              register_code(SQRT);
            } else {
              register_code(KC_LSFT);
              register_code(KC_KP_SLASH);
            }
          } else { // Release the key
            unregister_code(SQRT);
            unregister_code(KC_LSFT);
            unregister_code(KC_RSFT);
            unregister_code(KC_KP_SLASH);
          }
          return false;
          break;
        }
        case SFT_COMMA: {
          if (record->event.pressed) {
            if (shift_held) {
              unregister_code(KC_LSFT);
              unregister_code(KC_RSFT);
              register_code(COLON);
            } else {
              register_code(KC_LSFT);
              register_code(COMMA);
            }
          } else { // Release the key
            unregister_code(COLON);
            unregister_code(KC_LSFT);
            unregister_code(KC_RSFT);
            unregister_code(COMMA);
          }
          return false;
          break;
        }
        case SFT_PERIOD: {
          if (record->event.pressed) {
            if (shift_held) {
              unregister_code(KC_LSFT);
              unregister_code(KC_RSFT);
              register_code(SEMICOLON);
            } else {
              register_code(KC_LSFT);
              register_code(PERIOD);
            }
          } else { // Release the key
            unregister_code(SEMICOLON);
            unregister_code(KC_LSFT);
            unregister_code(KC_RSFT);
            unregister_code(PERIOD);
          }
          return false;
          break;
        }
        case SFT_POW2: {
          if (record->event.pressed) {
            if (shift_held) {
              unregister_code(KC_LSFT);
              unregister_code(KC_RSFT);
              register_code(QUARTER);
            } else {
              register_code(KC_LSFT);
              register_code(POWER2);
            }
          } else { // Release the key
            unregister_code(QUARTER);
            unregister_code(KC_LSFT);
            unregister_code(KC_RSFT);
            unregister_code(POWER2);
          }
          return false;
          break;
        }
        case SFT_POW3: {
          if (record->event.pressed) {
            if (shift_held) {
              unregister_code(KC_LSFT);
              unregister_code(KC_RSFT);
              register_code(PI);
            } else {
              register_code(KC_LSFT);
              register_code(POWER3);
            }
          } else { // Release the key
            unregister_code(PI);
            unregister_code(KC_LSFT);
            unregister_code(KC_RSFT);
            unregister_code(POWER3);
          }
          return false;
          break;
        }
        case SFT_CENTS: {
          if (record->event.pressed) {
            if (shift_held) {
              unregister_code(KC_LSFT);
              unregister_code(KC_RSFT);
              register_code(EURO);
            } else {
              register_code(KC_LSFT);
              register_code(CENTS);
            }
          } else { // Release the key
            unregister_code(EURO);
            unregister_code(KC_LSFT);
            unregister_code(KC_RSFT);
            unregister_code(CENTS);
          }
          return false;
          break;
        }
        case SFT_PIPE: {
          if (record->event.pressed) {
            if (shift_held) {
              unregister_code(KC_LSFT);
              unregister_code(KC_RSFT);
              register_code(HALF);
            } else {
              register_code(KC_LSFT);
              register_code(PIPE);
            }
          } else { // Release the key
            unregister_code(HALF);
            unregister_code(KC_LSFT);
            unregister_code(KC_RSFT);
            unregister_code(PIPE);
          }
          return false;
          break;
        }
        case SFT_HYPHEN: {
          if (record->event.pressed) {
            if (shift_held) {
              unregister_code(KC_LSFT);
              unregister_code(KC_RSFT);
              register_code(EMDASH);
            } else {
              register_code(KC_LSFT);
              register_code(DASH);
            }
          } else { // Release the key
            unregister_code(EMDASH);
            unregister_code(KC_LSFT);
            unregister_code(KC_RSFT);
            unregister_code(DASH);
          }
          return false;
          break;
        }
        case SFT_TILDE: {
          if (record->event.pressed) {
            if (shift_held) {
              unregister_code(KC_LSFT);
              unregister_code(KC_RSFT);
              register_code(THREEQUARTERS);
            } else {
              register_code(KC_LSFT);
              register_code(TILDE);
            }
          } else { // Release the key
            unregister_code(THREEQUARTERS);
            unregister_code(KC_LSFT);
            unregister_code(KC_RSFT);
            unregister_code(TILDE);
          }
          return false;
          break;
        }
        case SFT_DEGREE: {
          if (record->event.pressed) {
            if (shift_held) {
              unregister_code(KC_LSFT);
              unregister_code(KC_RSFT);
              register_code(INFINITY);
            } else {
              register_code(KC_LSFT);
              register_code(DEGREE);
            }
          } else { // Release the key
            unregister_code(INFINITY);
            unregister_code(KC_LSFT);
            unregister_code(KC_RSFT);
            unregister_code(DEGREE);
          }
          return false;
          break;
        }
        case SFT_LSQBR: {
          if (record->event.pressed) {
            if (shift_held) {
              unregister_code(KC_LSFT);
              unregister_code(KC_RSFT);
              register_code(LCRBR);
            } else {
              register_code(KC_LSFT);
              register_code(LSQBR);
            }
          } else { // Release the key
            unregister_code(LCRBR);
            unregister_code(KC_LSFT);
            unregister_code(KC_RSFT);
            unregister_code(LSQBR);
          }
          return false;
          break;
        }
        case SFT_RSQBR: {
          if (record->event.pressed) {
            if (shift_held) {
              unregister_code(KC_LSFT);
              unregister_code(KC_RSFT);
              register_code(RCRBR);
            } else {
              register_code(KC_LSFT);
              register_code(RSQBR);
            }
          } else { // Release the key
            unregister_code(RCRBR);
            unregister_code(KC_LSFT);
            unregister_code(KC_RSFT);
            unregister_code(RSQBR);
          }
          return false;
          break;
        }
        case SFT_RING_A: {
          if (record->event.pressed) {
            if (shift_held) {
              unregister_code(KC_LSFT);
              unregister_code(KC_RSFT);
              register_code(RING_BG_A);
            } else {
              register_code(KC_LSFT);
              register_code(RING_SM_A);
            }
          } else { // Release the key
            unregister_code(RING_BG_A);
            unregister_code(KC_LSFT);
            unregister_code(KC_RSFT);
            unregister_code(RING_SM_A);
          }
          return false;
          break;
        }
        case SFT_UML_O: {
          if (record->event.pressed) {
            if (shift_held) {
              unregister_code(KC_LSFT);
              unregister_code(KC_RSFT);
              register_code(UML_BG_O);
            } else {
              register_code(KC_LSFT);
              register_code(UML_SM_O);
            }
          } else { // Release the key
            unregister_code(UML_BG_O);
            unregister_code(KC_LSFT);
            unregister_code(KC_RSFT);
            unregister_code(UML_SM_O);
          }
          return false;
          break;
        }
        case SFT_UML_A: {
          if (record->event.pressed) {
            if (shift_held) {
              unregister_code(KC_LSFT);
              unregister_code(KC_RSFT);
              register_code(UML_BG_A);
            } else {
              register_code(KC_LSFT);
              register_code(UML_SM_A);
            }
          } else { // Release the key
            unregister_code(UML_BG_A);
            unregister_code(KC_LSFT);
            unregister_code(KC_RSFT);
            unregister_code(UML_SM_A);
          }
          return false;
          break;
        }
        case SFT_LESSTHAN: {
          if (record->event.pressed) {
            if (shift_held) {
              unregister_code(KC_LSFT);
              unregister_code(KC_RSFT);
              register_code(LESSTHANEQUAL);
            } else {
              register_code(KC_LSFT);
              register_code(LESSTHAN);
            }
          } else { // Release the key
            unregister_code(LESSTHANEQUAL);
            unregister_code(KC_LSFT);
            unregister_code(KC_RSFT);
            unregister_code(LESSTHAN);
          }
          return false;
          break;
        }
        case SFT_GREATERTHAN: {
          if (record->event.pressed) {
            if (shift_held) {
              unregister_code(KC_LSFT);
              unregister_code(KC_RSFT);
              register_code(GREATERTHANEQUAL);
            } else {
              register_code(KC_LSFT);
              register_code(GREATERTHAN);
            }
          } else { // Release the key
            unregister_code(GREATERTHANEQUAL);
            unregister_code(KC_LSFT);
            unregister_code(KC_RSFT);
            unregister_code(GREATERTHAN);
          }
          return false;
          break;
        }
        case SFT_BACKSLASH: {
          if (record->event.pressed) {
            if (shift_held) {
              unregister_code(KC_LSFT);
              unregister_code(KC_RSFT);
              register_code(BANG);
            } else {
              register_code(KC_LSFT);
              register_code(BACKSLASH);
            }
          } else { // Release the key
            unregister_code(BANG);
            unregister_code(KC_LSFT);
            unregister_code(KC_RSFT);
            unregister_code(BACKSLASH);
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