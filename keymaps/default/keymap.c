#include QMK_KEYBOARD_H

enum layers {
    _STENO_DEFAULT,
    _QWERTY,
    _RAISE,
    _LOWER,
};

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)
#define QWERTY DF(_QWERTY)
#define STENO DF(_STENO_DEFAULT)

// Keymap definition
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_STENO_DEFAULT] = LAYOUT(
        STN_N1,  STN_N2,  STN_N3,  STN_N4,  STN_N5,   STN_N6,  _______,  _______,  _______, STN_N7,  STN_N8,  STN_N9,  STN_NA,  STN_NB,   STN_NC,
        KC_NO,   STN_SL,  STN_TL,  STN_PL,  STN_HL,  STN_STR, _______,  _______,  _______, STN_STR, STN_FR,  STN_PR,  STN_LR,  STN_TR,  STN_DR,
        QWERTY , STN_SL,  STN_KL,  STN_WL,  STN_RL,  STN_STR, _______,  _______,  _______, STN_STR, STN_RR,  STN_BR,  STN_GR,  STN_SR,  STN_ZR,
        _______, _______, _______, _______, _______, _______, _______,  _______,  _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, STN_N1,  STN_A,   STN_O,   _______,  _______,  _______, STN_E,   STN_U,   STN_N2,  _______, _______, _______
    ),



    [_QWERTY] = LAYOUT(
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    _______,  _______,  _______, KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,    KC_BSPC,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    _______,  _______,  _______, KC_H,    KC_J,    KC_K,    KC_L,   KC_SCLN, KC_QUOT,
        STENO,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    _______,  _______,  _______, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
        _______, _______, _______, _______, _______, _______, _______,  _______,  _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, KC_LGUI, RAISE,   KC_LSFT, _______,  _______,  _______, KC_SPC,  LOWER,   KC_RALT, _______, _______, _______
    ),




    [_RAISE] = LAYOUT(
        _______,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,   _______,  _______,  _______, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
        KC_TAB,  _______, _______, _______, _______, _______, _______,  _______,  _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,_______,
        KC_NO,   _______, _______, _______, _______, _______, _______,  _______,  _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,  _______,  _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,  _______,  _______, _______, KC_NO,   _______, _______, _______, _______
    ),



    [_LOWER] = LAYOUT(
        _______, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC, _______,  _______,  _______, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
        _______, _______, KC_MUTE, KC_VOLD, KC_VOLU, _______, _______,  _______,  _______, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS, KC_GRV,
        KC_NO,   _______, _______, _______, _______, _______, _______,  _______,  _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,  _______,  _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, KC_NO,   _______, _______,  _______,  _______, _______, _______, _______, _______, _______, _______
    ),
};
