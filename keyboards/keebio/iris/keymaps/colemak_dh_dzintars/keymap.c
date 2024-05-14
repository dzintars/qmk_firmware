#include QMK_KEYBOARD_H

#define COLEMAK 0
#define RIGHT 1
#define LEFT 2
#define QWERTY 3
#define MINECRAFT 4

#define LYR_CM TO(COLEMAK)
#define LYR_RT MO(RIGHT)
#define LYR_LT MO(LEFT)
#define LYR_QW TO(QWERTY)
#define LYR_MC TO(MINECRAFT)

enum custom_keycodes {
  _COLEMAK = SAFE_RANGE,
  _RIGHT,
  _LEFT,
  _QWERTY,
  _MINECRAFT,
};

// KEYCODE DEFINITIONS
#define CTL_ESC MT(MOD_LCTL, KC_ESC)

// Left-hand home row mods
#define GUI_A LGUI_T(KC_A)
#define ALT_R LALT_T(KC_R)
#define SFT_S LSFT_T(KC_S)
#define CTLL_T LCTL_T(KC_T)

// Right-hand home row mods
#define CTL_N RCTL_T(KC_N)
#define SFT_E RSFT_T(KC_E)
#define ALT_I LALT_T(KC_I)
#define GUI_O RGUI_T(KC_O)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [COLEMAK] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                               KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     CTL_ESC, GUI_A,   ALT_R,   SFT_S,   CTLL_T,  KC_G,                               KC_M,    CTL_N,   SFT_E,   ALT_I,   GUI_O,   CTL_ESC,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,    KC_APP,           LYR_MC,  KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LGUI, LYR_RT,  KC_SPC,                    KC_ENT,  LYR_LT,  KC_RGUI
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [RIGHT] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_NO,   RGB_HUI, RGB_SAI, RGB_VAI, RGB_MOD,                            KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     CTL_ESC, KC_NO,   RGB_HUD, RGB_SAD, RGB_VAD, RGB_TOG,                            KC_NO,   KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_UNDO, KC_CUT,  KC_COPY, KC_PSTE, KC_NO,   KC_NO,            LYR_QW,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_BSLS, KC_NO,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_NO,   KC_TRNS, KC_NO,                     KC_END,  KC_TRNS, KC_NO
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [LEFT] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                            KC_DOWN, KC_RGHT, KC_NO,   KC_NO,   KC_NO,   KC_PSCR,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     CTL_ESC, G(KC_1), G(KC_2), G(KC_3), G(KC_4), G(KC_5),                            G(KC_6), G(KC_7), G(KC_8), G(KC_9), G(KC_0), KC_CAPS,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_UNDO, KC_CUT,  KC_COPY, KC_PSTE, KC_NO,   KC_NO,            KC_UP,   KC_UP,   KC_LEFT, KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LALT, KC_TRNS, KC_HOME,                   KC_NO,   KC_TRNS, KC_NO
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [QWERTY] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     CTL_ESC, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_NO,            LYR_CM,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_ESC,  KC_ENT,  KC_SPC,                    KC_NO,   KC_NO,   KC_TRNS
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [MINECRAFT] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_F11,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_T,    KC_W,    KC_E,    KC_M,                               KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_LCTL, KC_A,    KC_S,    KC_D,    KC_U,                               KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_NO,   KC_NO,   KC_C,    KC_H,    KC_NO,   KC_V,             LYR_CM,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_NO,   KC_NO,   KC_SPC,                    KC_NO,   KC_NO,   KC_NO
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case _COLEMAK:
      if (record->event.pressed) {
        set_single_persistent_default_layer(COLEMAK);
      }
      return false;
      break;
    case _RIGHT:
      if (record->event.pressed) {
        layer_on(RIGHT);
        update_tri_layer(RIGHT, LEFT, QWERTY);
      } else {
        layer_off(RIGHT);
        update_tri_layer(RIGHT, LEFT, QWERTY);
      }
      return false;
      break;
    case _LEFT:
      if (record->event.pressed) {
        layer_on(LEFT);
        update_tri_layer(LEFT, RIGHT, QWERTY);
      } else {
        layer_off(LEFT);
        update_tri_layer(LEFT, RIGHT, QWERTY);
      }
      return false;
      break;
    case _QWERTY:
      if (record->event.pressed) {
        layer_on(QWERTY);
      } else {
        layer_off(QWERTY);
      }
      return false;
      break;
    case _MINECRAFT:
      if (record->event.pressed) {
        layer_on(MINECRAFT);
      } else {
        layer_off(MINECRAFT);
      }
      return false;
      break;
  }
  return true;
}
