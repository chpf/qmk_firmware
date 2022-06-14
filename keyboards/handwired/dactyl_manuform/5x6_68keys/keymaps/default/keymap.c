#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_5x6(
        KC_GRV  , KC_1   , KC_2   , KC_3   , KC_4  , KC_5  ,                    KC_6   , KC_7  , KC_8   , KC_9  , KC_0   ,  KC_EQL   ,
        KC_TAB  , KC_Q   , KC_W   , KC_E   , KC_R  , KC_T  ,                    KC_Y   , KC_U  , KC_I   , KC_O  , KC_P   ,  KC_MINS  ,
        KC_ESC  , KC_A   , KC_S   , KC_D   , KC_F  , KC_G  ,                    KC_H   , KC_J  , KC_K   , KC_L  , KC_SCLN,  KC_QUOT  ,
        KC_LSFT , KC_Z   , KC_X   , KC_C   , KC_V  , KC_B  ,                    KC_N   , KC_M  , KC_COMM, KC_DOT, KC_SLSH,  KC_RSFT  ,
        KC_LCTL , KC_LGUI, KC_LALT, KC_LBRC,                                                     KC_RBRC,KC_BSLS, KC_RGUI,  KC_RCTL  ,
                                            LOWER  ,KC_SPC ,                    KC_BSPC , RAISE,
                                            KC_PGUP,KC_PIPE,                    KC_ENT  , KC_INS,
                                            KC_PGDN,KC_F14 ,                    KC_F13  , KC_DEL
    ),

    [_LOWER] = LAYOUT_5x6(
        KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                        KC_F6  , KC_F7 , KC_F8 , KC_F9 , KC_F10, KC_F11,
        _______,KC_MPLY,KC_MNXT,KC_MPRV,_______,KC_LBRC,                        KC_RBRC, KC_P7 , KC_P8 , KC_P9 ,KC_PMNS,KC_NUHS,
        _______,KC_MUTE,KC_VOLU,KC_VOLD,_______,KC_LPRN,                        KC_RPRN, KC_P4 , KC_P5 , KC_P6 ,KC_PPLS,KC_NUBS,
        _______,_______,_______,_______,_______,KC_LCBR,                        KC_RCBR, KC_P1 , KC_P2 , KC_P3 ,KC_DOT ,_______,
        _______,_______,_______,_______,                                                         KC_P0 ,KC_PCMM,KC_PENT,_______,
                                        _______,_______,                        _______,_______,
                                        _______,_______,                        KC_NUM ,KC_SCRL,
                                        _______,_______,                        KC_PSCR,KC_PAUS

    ),

    [_RAISE] = LAYOUT_5x6(
        KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                        KC_F6  , KC_F7 , KC_F8 , KC_F9 , KC_F10, KC_F11,
        _______,_______,_______,KC_UP  ,_______,KC_LBRC,                        KC_RBRC,_______,_______,_______,_______,_______,
        _______,_______,KC_LEFT,KC_DOWN,KC_RGHT,KC_LPRN,                        KC_RPRN,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,KC_LCBR,                        KC_RCBR,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,                                                        _______,_______,_______,_______,
                                        _______,_______,                        _______,_______,
                                        KC_COPY,KC_UNDO,                        _______,_______,
                                        KC_PSTE,KC_AGIN,                        _______,_______
    )
};
