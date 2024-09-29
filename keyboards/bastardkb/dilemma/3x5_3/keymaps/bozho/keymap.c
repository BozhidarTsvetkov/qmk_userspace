#include QMK_KEYBOARD_H


  // Default layer
  // ╭──────────┬──────────┬──────────┬──────────┬──────────╮   ╭──────────┬──────────┬──────────┬──────────┬──────────╮
  // │Q or Mouse│  W       │  E       │  R       │  T       │   │  Y       │  U       │  I       │  O       │  P       │
  // ├──────────┼──────────┼──────────┼──────────┼──────────┤   ├──────────┼──────────┼──────────┼──────────┼──────────┤
  // │ A or ALT │S or GUI  │S or CTL  │F or Shift│  G       │   │  H       │J or Shift│K or CTL  │L or GUI  │; and ;   │
  // ├──────────┼──────────┼──────────┼──────────┼──────────┤   ├──────────┼──────────┼──────────┼──────────┼──────────┤
  // │  Z       │  X       │  C       │  V       │  B       │   │  N       │  M       │ , <      │ . >      │ / and ?  │
 //  ╰──────────┴──────────┼──────────┼──────────┼──────────┤   ├──────────┼──────────┼──────────┼──────────┴──────────╯
 //                        │DEL       │ESC or L1 │Backspace │   │Space     │ENT or L2 │Tab       │
  //                       ╰──────────┴──────────┴──────────╯   ╰──────────┴──────────┴──────────╯

  // Left (or lower) layer
  // ╭──────────┬──────────┬──────────┬──────────┬──────────╮   ╭──────────┬──────────┬──────────┬──────────┬──────────╮
//   │1 and !   │2 and @   │3 and #   │4 and $   │5 and %   │   │6 and ^   │7 and &   │8 and *   │9 and (   │0 and )   │
  // ├──────────┼──────────┼──────────┼──────────┼──────────┤   ├──────────┼──────────┼──────────┼──────────┼──────────┤
//   │NO   or AT│NO or GUI │NO or CTL │NO or SHFT│  NO      │   │<-        │V or Shift│^ or CTL  │-> or GUI │ NO or AL │
  // ├──────────┼──────────┼──────────┼──────────┼──────────┤   ├──────────┼──────────┼──────────┼──────────┼──────────┤
//   │ NO       │ NO       │   NO     │  NO      │  NO      │   │HOME      │PG_DOWN   │PG_UP     │ END      │ \ and │  │
  // ╰──────────┴──────────┼──────────┼──────────┼──────────┤   ├──────────┼──────────┼──────────┼──────────┴──────────╯
//                         │  NO      │  NO      │  NO      │   │Space     │ENT or TRI│  TAB     │
  //                       ╰──────────┴──────────┴──────────╯   ╰──────────┴──────────┴──────────╯

   // Right (or upper) layer
  // ╭──────────┬──────────┬──────────┬──────────┬──────────╮   ╭──────────┬──────────┬──────────┬──────────┬──────────╮
//   │  F1      │  F2      │  F3      │  F4      │  F5      │   │  F6      │  F7      │  F8      │  F9      │  F10     │
  // ├──────────┼──────────┼──────────┼──────────┼──────────┤   ├──────────┼──────────┼──────────┼──────────┼──────────┤
//   │ F11 or AT│F12 or GUI│ NO or CTL│NO or SHFT│  NO      │   │ - or _   │= and +SFT│[ and { CT│] and }GUI│' and ",AL│
  // ├──────────┼──────────┼──────────┼──────────┼──────────┤   ├──────────┼──────────┼──────────┼──────────┼──────────┤
//   │ ` and ~  │ NO       │ NO       │  NO      │  NO      │   │NO        │NO        │NO        │ NO       │ NO       │
  // ╰──────────┴──────────┼──────────┼──────────┼──────────┤   ├──────────┼──────────┼──────────┼──────────┴──────────╯
//                         │DEL       │ESC or TRI│Backspace │   │  NO      │  NO      │  NO      │
  //                       ╰──────────┴──────────┴──────────╯   ╰──────────┴──────────┴──────────╯

   // both (or adjust) layer
  // ╭──────────┬──────────┬──────────┬──────────┬──────────╮   ╭──────────┬──────────┬──────────┬──────────┬──────────╮
//   │  Mute    │Vol Down  │Vol Up    │BrightDown│BrightUp  │   │Print Scr │ NO       │  NO      │   NO     │  NO      │
  // ├──────────┼──────────┼──────────┼──────────┼──────────┤   ├──────────┼──────────┼──────────┼──────────┼──────────┤
//   │Play/Pause│Prev Song │Next Song │   NO     │  NO      │   │  NO      │Prev RGB  │Toggle RGB│Next RGB  │   NO     │
  // ├──────────┼──────────┼──────────┼──────────┼──────────┤   ├──────────┼──────────┼──────────┼──────────┼──────────┤
//   │ NO       │  NO      │ NO       │  NO      │  NO      │   │  NO      │  NO      │   NO     │   NO     │ NO       │
  // ╰──────────┴──────────┼──────────┼──────────┼──────────┤   ├──────────┼──────────┼──────────┼──────────┴──────────╯
//                         │  NO      │  NO      │NO        │   │ NO       │ NO       │  NO      │
  //                       ╰──────────┴──────────┴──────────╯   ╰──────────┴──────────┴──────────╯

 // Mouse Layer
  // ╭──────────┬──────────┬──────────┬──────────┬──────────╮   ╭──────────┬──────────┬──────────┬──────────┬──────────╮
//   │ NO       │DragScroll│Sniping   │  NO      │  NO      │   │  NO      │  NO      │   NO     │   NO     │ NO       │
  // ├──────────┼──────────┼──────────┼──────────┼──────────┤   ├──────────┼──────────┼──────────┼──────────┼──────────┤
//   │ NO       │  NO      │ NO       │  NO      │  NO      │   │  NO      │  NO      │   NO     │   NO     │ NO       │
  // ├──────────┼──────────┼──────────┼──────────┼──────────┤   ├──────────┼──────────┼──────────┼──────────┼──────────┤
//   │ NO       │  NO      │ NO       │  NO      │  NO      │   │  NO      │  NO      │   NO     │   NO     │ NO       │
  // ╰──────────┴──────────┼──────────┼──────────┼──────────┤   ├──────────┼──────────┼──────────┼──────────┴──────────╯
//                         │Button 3  │Button 2  │Button 1  │   │Button 1  │Button 2  │Button 3  │
  //                       ╰──────────┴──────────┴──────────╯   ╰──────────┴──────────┴──────────╯
  //
// Combos
// T + Y = :
// G + H = ' or ", tap dance
// R + U = \ or |, tap dance
// F + J = CAPS
// V + M = -
// B + N = _
// E + I = ( or ), tap dance
// D + K = { or }, tap dance
// C + , = [ or ], tap dance
// W + O = +
// S + L = =


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

enum dilemma_keymap_layers {
    LAYER_BASE = 0,
    LAYER_FUNCTION,
    LAYER_NAVIGATION,
    LAYER_MEDIA,
    LAYER_POINTER,
    LAYER_NUMERAL,
    LAYER_SYMBOLS,
};

// Automatically enable sniping-mode on the pointer layer.
// #define DILEMMA_AUTO_SNIPING_ON_LAYER LAYER_POINTER

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

#define ESC_MED LT(LAYER_MEDIA, KC_ESC)
#define ESC_NAV LT(LAYER_NAVIGATION, KC_ESC)
#define ENT_FUN LT(LAYER_FUNCTION, KC_ENT)
#define ENT_MED LT(LAYER_MEDIA, KC_ENT)
#define PT_Q LT(LAYER_POINTER, KC_Q)
#define PT_P LT(LAYER_POINTER, KC_P)

#ifndef POINTING_DEVICE_ENABLE
#    define DRGSCRL KC_NO
#    define DPI_MOD KC_NO
#    define S_D_MOD KC_NO
#    define SNIPING KC_NO
#endif // !POINTING_DEVICE_ENABLE

// clang-format off
/** \brief QWERTY layout (3 rows, 10 columns). */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [LAYER_BASE] = LAYOUT_split_3x5_3(
       PT_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    PT_P,
       LALT_T(KC_A), LGUI_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_G, KC_H, RSFT_T(KC_J), RCTL_T(KC_K), RGUI_T(KC_L), RALT_T(KC_SCLN),
       KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,
                      KC_DEL, ESC_NAV, KC_BSPC, KC_SPC, ENT_FUN, KC_TAB
  ),

/*
 * Layers used on the Dilemma.
 *
 * These layers started off heavily inspired by the Miryoku layout, but trimmed
 * down and tailored for a stock experience that is meant to be fundation for
 * further personalization.
 *
 * See https://github.com/manna-harbour/miryoku for the original layout.
 */

/**
 * \brief Function layer.
 *
 * Secondary right-hand layer has function keys mirroring the numerals on the
 * primary layer with extras on the pinkie column, plus system keys on the inner
 * column. App is on the tertiary thumb key and other thumb keys are duplicated
 * from the base layer to enable auto-repeat.
 */
  [LAYER_FUNCTION] = LAYOUT_split_3x5_3(
    KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,
    LALT_T(KC_F11), LGUI_T(KC_F12), KC_LCTL, KC_LSFT, XXXXXXX, KC_MINS,RSFT_T(KC_EQL),   RCTL_T(KC_LBRC),   RGUI_T(KC_RBRC),  RALT_T(KC_QUOT),
    KC_GRV, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,  XXXXXXX,
                      KC_DEL,  ESC_MED, KC_BSPC, XXXXXXX, _______, XXXXXXX
  ),

/**
 * \brief Navigation layer.
 *
 * Primary right-hand layer (left home thumb) is navigation and editing. Cursor
 * keys are on the home position, line and page movement below, clipboard above,
 * caps lock and insert on the inner column. Thumb keys are duplicated from the
 * base layer to avoid having to layer change mid edit and to enable auto-repeat.
 */
  [LAYER_NAVIGATION] = LAYOUT_split_3x5_3(
    KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0,
    KC_LALT, KC_LGUI, KC_LCTL, KC_LSFT, XXXXXXX,  KC_LEFT, RSFT_T(KC_DOWN),   RCTL_T(KC_UP), RGUI_T(KC_RGHT), KC_RALT,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  KC_HOME, KC_PGDN, KC_PGUP,  KC_END,KC_BSLS,
                      XXXXXXX, _______, XXXXXXX,  KC_SPC, ENT_MED, KC_TAB
  ),

/**
 * \brief Media layer.
 *
 * Tertiary left- and right-hand layer is media and RGB control.  This layer is
 * symmetrical to accomodate the left- and right-hand trackball.
 */
  [LAYER_MEDIA] = LAYOUT_split_3x5_3(
    KC_MUTE, KC_VOLD, KC_VOLU, KC_BRID, KC_BRIU, KC_PSCR,XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    KC_MPLY, KC_MPRV, KC_MNXT, XXXXXXX, XXXXXXX, XXXXXXX, RGB_RMOD, RGB_TOG, RGB_MOD, KC_MNXT,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                      XXXXXXX, _______, XXXXXXX, XXXXXXX, _______, XXXXXXX
  ),

/** \brief Mouse emulation and pointer functions. */
  [LAYER_POINTER] = LAYOUT_split_3x5_3(
    _______,  DRGSCRL, SNIPING, DPI_MOD, S_D_MOD, S_D_MOD, DPI_MOD, SNIPING,  DRGSCRL, _______,
    KC_LALT, KC_LGUI, KC_LCTL, KC_LSFT, XXXXXXX, XXXXXXX, KC_RSFT, KC_RCTL, KC_RGUI, KC_RALT,
    QK_BOOT, EE_CLR, XXXXXXX, KC_BTN3, XXXXXXX, XXXXXXX, KC_BTN3, XXXXXXX, EE_CLR, QK_BOOT,
                      KC_BTN3, KC_BTN2, KC_BTN1, KC_BTN1, KC_BTN2, KC_BTN3
  ),

/**
 * \brief Numeral layout.
 *
 * Primary left-hand layer (right home thumb) is numerals and symbols. Numerals
 * are in the standard numpad locations with symbols in the remaining positions.
 * `KC_DOT` is duplicated from the base layer.
 */
  [LAYER_NUMERAL] = LAYOUT_split_3x5_3(
    KC_LBRC,    KC_7,    KC_8,    KC_9, KC_RBRC, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    KC_SCLN,    KC_4,    KC_5,    KC_6,  KC_EQL, XXXXXXX, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
     KC_DOT,    KC_1,    KC_2,    KC_3, KC_BSLS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                       KC_DOT, KC_MINS,    KC_0, XXXXXXX, _______, XXXXXXX
  ),

/**
 * \brief Symbols layer.
 *
 * Secondary left-hand layer has shifted symbols in the same locations to reduce
 * chording when using mods with shifted symbols. `KC_LPRN` is duplicated next to
 * `KC_RPRN`.
 */
  [LAYER_SYMBOLS] = LAYOUT_split_3x5_3(
    KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    KC_COLN,  KC_DLR, KC_PERC, KC_CIRC, KC_PLUS, XXXXXXX, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    KC_TILD, KC_EXLM,   KC_AT, KC_HASH, KC_PIPE, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                      KC_LPRN,  KC_GRV, KC_UNDS, _______, XXXXXXX, XXXXXXX
  ),
};
// clang-format on

#ifdef POINTING_DEVICE_ENABLE
#    ifdef DILEMMA_AUTO_SNIPING_ON_LAYER
layer_state_t layer_state_set_user(layer_state_t state) {
    dilemma_set_pointer_sniping_enabled(layer_state_cmp(state, DILEMMA_AUTO_SNIPING_ON_LAYER));
    return state;
}
#    endif // DILEMMA_AUTO_SNIPING_ON_LAYER
#endif     // POINTING_DEVICE_ENABLE

#ifdef ENCODER_MAP_ENABLE
// clang-format off
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [LAYER_BASE]       = {ENCODER_CCW_CW(KC_WH_D, KC_WH_U),  ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [LAYER_FUNCTION]   = {ENCODER_CCW_CW(KC_DOWN, KC_UP),    ENCODER_CCW_CW(KC_LEFT, KC_RGHT)},
    [LAYER_NAVIGATION] = {ENCODER_CCW_CW(KC_PGDN, KC_PGUP),  ENCODER_CCW_CW(KC_VOLU, KC_VOLD)},
    [LAYER_MEDIA] = {ENCODER_CCW_CW(KC_PGDN, KC_PGUP),  ENCODER_CCW_CW(KC_VOLU, KC_VOLD)},
    [LAYER_POINTER]    = {ENCODER_CCW_CW(RGB_HUD, RGB_HUI),  ENCODER_CCW_CW(RGB_SAD, RGB_SAI)},
    [LAYER_NUMERAL]    = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI),  ENCODER_CCW_CW(RGB_SPD, RGB_SPI)},
    [LAYER_SYMBOLS]    = {ENCODER_CCW_CW(RGB_RMOD, RGB_MOD), ENCODER_CCW_CW(KC_LEFT, KC_RGHT)},
};
// clang-format on
#endif // ENCODER_MAP_ENABLE
