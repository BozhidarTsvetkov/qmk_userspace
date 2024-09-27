#include QMK_KEYBOARD_H

// tap dance declarations
enum tapdances {
    TD_QUOT_DQT,
    TD_BSLS_PIPE,
    TD_CBKT,
    TD_BRKT,
    TD_PRN
};

enum combos {
  TY_COLN,
  GH_QUOT,
  BN_UNDS,
  RU_BSLS_PIPE,
  FJ_CAPS,
  VM_MINS,
  EI_PRN,
  DK_CBKT,
  CCOM_BRKT,
  WO_PLUS,
  SL_EQL
};

enum layers {
  _BASE = 1,
  _LOWER = 2,
  _UPPER = 3,
  _ADJUST = 4,
  _MOUSE = 5
};

// tap dance definitios
tap_dance_action_t tap_dance_actions[] = {
    [TD_QUOT_DQT] = ACTION_TAP_DANCE_DOUBLE(KC_QUOT, KC_DQUO),
    [TD_BSLS_PIPE] = ACTION_TAP_DANCE_DOUBLE(KC_BSLS, KC_PIPE),
    [TD_PRN] = ACTION_TAP_DANCE_DOUBLE(KC_LPRN, KC_RPRN),
    [TD_CBKT] = ACTION_TAP_DANCE_DOUBLE(KC_LCBR, KC_RCBR),
    [TD_BRKT] = ACTION_TAP_DANCE_DOUBLE(KC_LBRC, KC_RBRC)
};

const uint16_t PROGMEM ty_combo[] = {KC_T, KC_Y, COMBO_END};
const uint16_t PROGMEM gh_combo[] = {KC_G, KC_H, COMBO_END};
const uint16_t PROGMEM bn_combo[] = {KC_B, KC_N, COMBO_END};
const uint16_t PROGMEM ru_combo[] = {KC_R, KC_U, COMBO_END};
const uint16_t PROGMEM fj_combo[] = {LSFT_T(KC_F), RSFT_T(KC_J), COMBO_END};
const uint16_t PROGMEM vm_combo[] = {KC_V, KC_M, COMBO_END};
const uint16_t PROGMEM ei_combo[] = {KC_E, KC_I, COMBO_END};
const uint16_t PROGMEM dk_combo[] = {LCTL_T(KC_D), RCTL_T(KC_K), COMBO_END};
const uint16_t PROGMEM ccom_combo[] = {KC_C, KC_COMM, COMBO_END};
const uint16_t PROGMEM wo_combo[] = {KC_W, KC_O, COMBO_END};
const uint16_t PROGMEM sl_combo[] = {LGUI_T(KC_S), RGUI_T(KC_L), COMBO_END};

combo_t key_combos[] = {
  [TY_COLN] = COMBO(ty_combo, KC_COLN),
  [GH_QUOT] = COMBO(gh_combo, TD(TD_QUOT_DQT)),
  [BN_UNDS] = COMBO(bn_combo, KC_UNDS),
  [RU_BSLS_PIPE] = COMBO(ru_combo, TD(TD_BSLS_PIPE)),
  [FJ_CAPS] = COMBO(fj_combo, KC_CAPS),
  [VM_MINS] = COMBO(vm_combo, KC_MINS),
  [EI_PRN] = COMBO(ei_combo, TD(TD_PRN)),
  [DK_CBKT] = COMBO(dk_combo, TD(TD_CBKT)),
  [CCOM_BRKT] = COMBO(ccom_combo, TD(TD_BRKT)),
  [WO_PLUS] = COMBO(wo_combo, KC_PLUS),
  [SL_EQL] = COMBO(sl_combo, KC_EQL)
};

// Automatically enable sniping-mode on the pointer layer.
// #define DILEMMA_AUTO_SNIPING_ON_LAYER LAYER_POINTER

#ifndef POINTING_DEVICE_ENABLE
#    define DRGSCRL KC_NO
#    define DPI_MOD KC_NO
#    define S_D_MOD KC_NO
#    define SNIPING KC_NO
#endif // !POINTING_DEVICE_ENABLE

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_split_3x5_3(
       LT(_MOUSE, KC_Q), KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,
       LALT_T(KC_A), LGUI_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_G, KC_H, RSFT_T(KC_J), RCTL_T(KC_K), RGUI_T(KC_L), RALT_T(KC_SCLN),
       KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH,
       KC_DEL,LT(_LOWER, KC_ESC),KC_BSPC,  KC_SPC,LT(_UPPER, KC_ENT),KC_TAB
  ),

  [_LOWER] = LAYOUT_split_3x5_3(
    KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0,
    LALT_T(KC_NO), LGUI_T(KC_NO), LCTL_T(KC_NO), LSFT_T(KC_NO), KC_NO, KC_LEFT, RSFT_T(KC_DOWN), RCTL_T(KC_UP), RGUI_T(KC_RGHT), RALT_T(KC_NO),
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_BSLS,
    KC_NO,     KC_NO,     KC_NO,         KC_SPC,LT(_ADJUST, KC_ENT),KC_TAB
  ),

  [_UPPER] = LAYOUT_split_3x5_3(
    KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,
    LALT_T(KC_F11), LGUI_T(KC_F12), LCTL_T(KC_NO), LSFT_T(KC_NO), KC_NO, KC_MINS, RSFT_T(KC_EQL), RCTL_T(KC_LBRC), RGUI_T(KC_RBRC), RALT_T(KC_QUOT),
    KC_GRV, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_DEL,LT(_ADJUST,KC_ESC),KC_BSPC,        KC_NO,   KC_NO,  KC_NO
  ),

  [_ADJUST] = LAYOUT_split_3x5_3(
    KC_MUTE, KC_VOLD, KC_VOLU, KC_BRID, KC_BRIU, KC_PSCR, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_MPLY, KC_MPRV, KC_MNXT, KC_NO, KC_NO, KC_NO, RGB_RMOD, RGB_TOG, RGB_MOD, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO,      KC_NO ,   KC_NO,          KC_NO,    KC_NO,     KC_NO
  ),

  [_MOUSE] = LAYOUT_split_3x5_3(
    KC_NO, DRGSCRL, SNIPING, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_BTN3,    KC_BTN2 ,   KC_BTN1,       KC_BTN1,  KC_BTN2,     KC_BTN3
  ),
};

#ifdef POINTING_DEVICE_ENABLE
#    ifdef DILEMMA_AUTO_SNIPING_ON_LAYER
layer_state_t layer_state_set_user(layer_state_t state) {
    dilemma_set_pointer_sniping_enabled(layer_state_cmp(state, DILEMMA_AUTO_SNIPING_ON_LAYER));
    return state;
}
#    endif // DILEMMA_AUTO_SNIPING_ON_LAYER
#endif     // POINTING_DEVICE_ENABLE
