#include QMK_KEYBOARD_H

enum {
  _BASE,
  _GAME,
  _PROGM,
};

/****************************************************************************************************
*
* Keymap: Default Layer in Qwerty
*
* ,-------------------------------------------------------------------------------------------------------------------.
* | Esc    |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F8  |  F9  |  F10 |  F12 | Mute | VoUp | VoDn |  FN0 |  RBT   |
* |--------+------+------+------+------+------+---------------------------+------+------+------+------+------+--------|
* | =+     |  1!  |  2@  |  3#  |  4$  |  5%  |                           |  6^  |  7&  |  8*  |  9(  |  0)  | -_     |
* |--------+------+------+------+------+------|                           +------+------+------+------+------+--------|
* | Tab    |   Q  |   W  |   E  |   R  |   T  |                           |   Y  |   U  |   I  |   O  |   P  | \|     |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* | Caps   |   A  |   S  |   D  |   F  |   G  |                           |   H  |   J  |   K  |   L  |  ;:  | '"     |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* | Shift  |   Z  |   X  |   C  |   V  |   B  |                           |   N  |   M  |  ,.  |  .>  |  /?  | Shift  |
* `--------+------+------+------+------+-------                           `------+------+------+------+------+--------'
*          | `~   | INS  | Left | Right|                                         | Down | Up   |  [{  |  ]}  |
*          `---------------------------'                                         `---------------------------'
*                                        ,-------------.         ,-------------.
*                                        | Ctrl | Alt  |         | Alt  | Ctrl |
*                                 ,------|------|------|         |------+------+------.
*                                 |      |      | Gui  |         | Gui  |      |      |
*                                 | BkSp | Del  |------|         |------|Return| Space|
*                                 |      |      | PgUp |         | PgDn |      |      |
*                                 `--------------------'         `--------------------'
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_BASE] = LAYOUT(
           KC_ESC ,KC_F1  ,KC_F2  ,KC_F3   ,KC_F4  ,KC_F5  ,KC_F6  ,KC_F7  ,KC_F8,
           KC_EQL ,KC_1   ,KC_2   ,KC_3    ,KC_4   ,KC_5   ,
           KC_TAB ,KC_Q   ,KC_W   ,KC_E    ,KC_R   ,KC_T   ,
           KC_CAPS,KC_A   ,KC_S   ,KC_D    ,KC_F   ,KC_G   ,
           KC_LSFT,KC_Z   ,KC_X   ,KC_C    ,KC_V   ,KC_B   ,
                   KC_GRV ,KC_INS ,KC_LEFT ,KC_RGHT,
                                   KC_LCTL ,KC_LALT,
                                            KC_LGUI,
                           KC_BSPC,KC_DEL  ,KC_PGUP,
           KC_F9  ,KC_F10 ,KC_F11 ,KC_F12  ,KC_KB_MUTE ,KC_KB_VOLUME_DOWN  ,KC_KB_VOLUME_UP, KC_NO, MO(_PROGM),
           KC_6   ,KC_7   ,KC_8   ,KC_9    ,KC_0   ,KC_MINS,
           KC_Y   ,KC_U   ,KC_I   ,KC_O    ,KC_P   ,KC_BSLS,
           KC_H   ,KC_J   ,KC_K   ,KC_L    ,KC_SCLN,KC_QUOT,
           KC_N   ,KC_M   ,KC_COMM,KC_DOT  ,KC_SLSH,KC_RSFT,
                   KC_DOWN,KC_UP  ,KC_LBRC ,KC_RBRC,
                           KC_RALT,KC_RCTL ,
                           KC_RGUI,
                           KC_PGDN,KC_ENTER,KC_SPC
    ),
[_GAME] = LAYOUT(
           _______,_______,_______,_______,_______,_______,_______,_______,_______,
           _______,_______,_______,_______,_______,_______,
           _______,_______,_______,_______,_______,_______,
           _______,_______,_______,_______,_______,_______,
           _______,_______,_______,_______,_______,_______,
                   _______,_______,_______,_______,
                                   _______,_______,
                                           _______,
                           KC_SPC ,_______,_______,
           _______,_______,_______,_______,_______,_______,_______,_______,_______,
           _______,_______,_______,_______,_______,_______,
           _______,_______,_______,_______,_______,_______,
           _______,_______,_______,_______,_______,_______,
           _______,_______,_______,_______,_______,_______,
                   _______,_______,_______,_______,
                           _______,_______,
                           _______,
                           _______,_______,KC_BSPC
    ),
[_PROGM] = LAYOUT(
           _______  ,_______,_______,_______,_______,_______,_______,_______,_______,
           _______  ,_______,_______,_______,_______,_______,
           _______  ,_______,_______,_______,_______,_______,
           DF(_BASE),_______,_______,_______,_______,DF(_GAME),
           _______  ,_______,_______,_______,_______,_______,
                     _______,_______,_______,_______,
                                     _______,_______,
                                             _______,
                             _______,_______,_______,
           QK_BOOT  ,_______,_______,_______,_______,_______,_______,_______,_______,
           _______  ,_______,_______,_______,_______,_______,
           _______  ,_______,_______,_______,_______,_______,
           _______  ,_______,_______,_______,_______,_______,
           _______  ,_______,_______,_______,_______,_______,
                     _______,_______,_______,_______,
                        _______,_______,
                        _______,
                        _______,_______,_______
    ),
};

#define COMBO_COUNT 4
const uint16_t COMBO_LEN = COMBO_COUNT;
const uint16_t PROGMEM home1_combo[] = {KC_LGUI, KC_PGUP, COMBO_END};
const uint16_t PROGMEM home2_combo[] = {KC_RGUI, KC_PGUP, COMBO_END};
const uint16_t PROGMEM end1_combo[]  = {KC_LGUI, KC_PGDN, COMBO_END};
const uint16_t PROGMEM end2_combo[]  = {KC_RGUI, KC_PGDN, COMBO_END};
combo_t key_combos[COMBO_COUNT] = {
  COMBO(home1_combo, KC_HOME),
  COMBO(home2_combo, KC_HOME),
  COMBO(end1_combo,  KC_END),
  COMBO(end2_combo,  KC_END),
};


void matrix_init_user(void) {
  const int blink_duration = 100;

  led_init_ports();

  for (int i = 0; i < 2; i++) {
    if (i > 0) {
      wait_ms(blink_duration);
    }

    writePinLow(LED_NUM_LOCK_PIN);
    writePinLow(LED_CAPS_LOCK_PIN);
    writePinLow(LED_SCROLL_LOCK_PIN);
    writePinLow(LED_COMPOSE_PIN);

    wait_ms(blink_duration);

    writePinHigh(LED_NUM_LOCK_PIN);
    writePinHigh(LED_CAPS_LOCK_PIN);
    writePinHigh(LED_SCROLL_LOCK_PIN);
    writePinHigh(LED_COMPOSE_PIN);
  }
}
