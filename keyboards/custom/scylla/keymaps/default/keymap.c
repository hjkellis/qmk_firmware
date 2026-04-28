#include QMK_KEYBOARD_H

#define BASE DF(_BASE)
#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)
#define SYSTEM DF(_SYSTEM)

#define LT_ARROW S(KC_COMM)
#define RT_ARROW S(KC_DOT)
#define UND_SC S(KC_MINUS)
#define VERT_LN S(KC_BSLS)
#define PLUS S(KC_EQL)
#define ASTRX S(KC_8)
#define DOLLAR S(KC_4)
#define PRCNT S(KC_5)
#define EXPON S(KC_6)
#define ANDPR S(KC_7)
#define QUES S(KC_SLSH)
#define EXCL S(KC_1)

enum layers {
   _BASE,
   _LOWER,
   _RAISE,
   _SYSTEM
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   [_BASE] = LAYOUT(
   /* QWERTY
   * .-----------------------------------------.                                  .-----------------------------------------.
   * | Esc  |   1  |   2  |   3  |   4  |   5  |                                  |   6  |   7  |   8  |   9  |   0  |  Bsp |
   * |------+------+------+------+------+------|                                  |------+------+------+------+------+------|
   * | Tab  |   Q  |   W  |   E  |   R  |   T  |                                  |   Y  |   U  |   I  |   O  |   P  |  Bsp |
   * |------+------+------+------+------+------|                                  |------+------+------+------+------+------|
   * | Esc  |   A  |   S  |   D  |   F  |   G  |                                  |   H  |   J  |   K  |   L  |   ;  |  '   |
   * |------+------+------+------+------+------|                                  |------+------+------+------+------+------|
   * | Shft |   Z  |   X  |   C  |   V  |   B  |                                  |   N  |   M  |   ,  |   .  |   /  |  Del |
   * '-----------------------------------------/                                  \-----------------------------------------'
   *                                  /  Alt  /---------------.    .---------------\  Ctrl \
   *                                 /       / Enter / LOWER /      \ RAISE \ Space \       \
   *                                '-------/       /       /        \       \       \-------'
   *                                       /---------------/          \---------------\
   *                                      / LOWER / Ctrl  /            \  Alt  \ RAISE \
   *                                     /       /       /              \       \       \
   *                                    '---------------'                '---------------'
   */
   KC_ESC , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                                     KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_BSPC,
   KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,                                     KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSLS,
   KC_DEL , KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,                                     KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,
   KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   ,                                     KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_LSFT,
                                                KC_ENTER , KC_LCTL, KC_LALT , KC_RCTL , KC_RALT , KC_SPC,
                                                         LOWER , LOWER , RAISE , RAISE
    ),

   [_LOWER] = LAYOUT(
   /* LOWER
   * .-----------------------------------------.                                  .-----------------------------------------.
   * |      |      |      |      |      |      |                                  |      |      |      |      |      |      |
   * |------+------+------+------+------+------|                                  |------+------+------+------+------+------|
   * |      |      |      |   [  |   ]  |      |                                  |   @  |   #  |  _   |  ~   |   |  |      |
   * |------+------+------+------+------+------|                                  |------+------+------+------+------+------|
   * |      |  <   |  >   |   (  |   )  |      |                                  |   =  |   +  |  -   |  *   |  /   |  `   |
   * |------+------+------+------+------+------|                                  |------+------+------+------+------+------|
   * |      |      |      |   {  |   }  |      |                                  |   $  |   %  |  ^   |  &   |  \   |      |
   * '-----------------------------------------/                                  \-----------------------------------------'
   *                                  /       /---------------.    .---------------\       \
   *                                 /       /       /       /      \       \       \       \
   *                                '-------/       /       /        \       \       \-------'
   *                                       /---------------/          \---------------\
   *                                      /       /       /            \       \       \
   *                                     /       /       /              \       \       \
   *                                    '---------------'                '---------------'
   */
   XXXXXXX, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, XXXXXXX,
   XXXXXXX, XXXXXXX, XXXXXXX, KC_LBRC, KC_RBRC, XXXXXXX,                                     KC_AT  , KC_HASH, UND_SC , KC_TILD, VERT_LN, XXXXXXX,
   XXXXXXX,LT_ARROW,RT_ARROW, KC_LPRN, KC_RPRN, XXXXXXX,                                     KC_EQL , PLUS   , KC_MINS, ASTRX  , KC_SLSH, KC_GRV ,
   XXXXXXX, XXXXXXX, XXXXXXX, KC_LCBR, KC_RCBR, XXXXXXX,                                     DOLLAR , PRCNT  , EXPON  , ANDPR  , KC_BSLS, XXXXXXX,
                                                _______, _______, _______, _______, _______, _______,
                                                         _______, _______, _______, _______
    ),

   [_RAISE] = LAYOUT(
   /* RAISE
   * .-----------------------------------------.                                  .-----------------------------------------.
   * |      |      |      |      |      |      |                                  |      |      |      |      |      |      |
   * |------+------+------+------+------+------|                                  |------+------+------+------+------+------|
   * |      |  1   |  2   |   3  |   4  |  5   |                                  |  6   |  7   |  8   |  9   |  0   |      |
   * |------+------+------+------+------+------|                                  |------+------+------+------+------+------|
   * |      |  &   |  ?   |   !  |   .  |      |                                  | left | down |  up  | rght |      |      |
   * |------+------+------+------+------+------|                                  |------+------+------+------+------+------|
   * |      |      |      |      |      |      |                                  |      |      |      |      |      |      |
   * '-----------------------------------------/                                  \-----------------------------------------'
   *                                  /       /---------------.    .---------------\       \
   *                                 /       /       /       /      \       \       \       \
   *                                '-------/       /       /        \       \       \-------'
   *                                       /---------------/          \---------------\
   *                                      /       /       /            \       \       \
   *                                     /       /       /              \       \       \
   *                                    '---------------'                '---------------'
   */
   XXXXXXX, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, XXXXXXX,
   XXXXXXX, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                                     KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , XXXXXXX,
   XXXXXXX, ANDPR  , QUES   , EXCL   , KC_DOT , XXXXXXX,                                     KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, XXXXXXX, XXXXXXX,
   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LCBR, KC_RCBR,                                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                                _______, _______, _______, _______, _______, _______,
                                                         _______, _______, _______, _______
   ),

   [_SYSTEM] = LAYOUT(
   /* SYSTEM
   * .-----------------------------------------.                                  .-----------------------------------------.
   * |      |      |      |      |      |      |                                  |      |      |      |      |      |      |
   * |------+------+------+------+------+------|                                  |------+------+------+------+------+------|
   * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |                                  |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |
   * |------+------+------+------+------+------|                                  |------+------+------+------+------+------|
   * |      |      |      |ms_b1 |ms_b2 |ms_b3 |                                  | ms_l | ms_d | ms_u | ms_r |      |      |
   * |------+------+------+------+------+------|                                  |------+------+------+------+------+------|
   * |      |      |      |      |      |      |                                  |whl_l |whl_d |whl_u |whl_r |      |      |
   * '-----------------------------------------/                                  \-----------------------------------------'
   *                                  /       /---------------.    .---------------\       \
   *                                 /       /       /       /      \       \       \       \
   *                                '-------/       /       /        \       \       \-------'
   *                                       /---------------/          \---------------\
   *                                      /       /       /            \       \       \
   *                                     /       /       /              \       \       \
   *                                    '---------------'                '---------------'
   */
   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
   XXXXXXX, XXXXXXX, XXXXXXX, MS_BTN1, MS_BTN2, MS_BTN3,                                     MS_LEFT, MS_DOWN, MS_UP  , MS_RGHT, XXXXXXX, XXXXXXX,
   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                                     MS_WHLL, MS_WHLD, MS_WHLU, MS_WHLR, XXXXXXX, XXXXXXX,
                                                XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                                         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
   )
};

layer_state_t layer_state_set_user(layer_state_t state) {
   return update_tri_layer_state(state, _RAISE, _LOWER, _SYSTEM);
}
