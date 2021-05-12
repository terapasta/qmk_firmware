//
// Created by 樋田一幸 on 2020/07/12.
//

#pragma once

#include "quantum.h"

#define LAYOUT( \
    K_ESC ,  K_1, K_2, K_3, K_4, K_5,        K_6, K_7, K_8, K_9, K_0, K_MNS, K_EQL, K_BSLS, K_GRV,  \
    K_TAB,  K_Q, K_W, K_E, K_R, K_T,        K_Y, K_U, K_I, K_O, K_P, K_LB, K_RB, K_BS,              \
    K_CAPS, K_A, K_S, K_D, K_F, K_G,        K_H, K_J, K_K, K_L, K_SCLN, K_QUOT, K_ENT,              \
    K_LSFT, K_Z, K_X, K_C, K_V, K_B,        K_N, K_M, K_COM, K_DOT, K_SLS, K_RSFT, K_UP, K_DEL,     \
    K_LCTL, K_LGUI, K_FN, K_LALT, K_SPC0,   K_SPC1, K_RALT, K_APP, K_LEFT, K_DOWN, K_RGHT           \
) {                                                                                                 \
    { K_ESC, K_1, K_2, K_3,     /**/ K_4, K_5, K_6, K_7,            /**/ K_8, K_9, K_0, K_MNS,          /**/ K_EQL, K_BSLS, K_GRV, KC_NO }, \
    { K_TAB,  K_Q, K_W, K_E,    /**/ K_R, K_T, KC_NO, KC_NO,        /**/ K_CAPS, K_A, K_S, K_D,         /**/ K_F, K_G, KC_NO, KC_NO },      \
    { K_Y, K_U, K_I, K_O,       /**/ K_P, K_LB, K_RB, K_BS,         /**/ K_H, K_J, K_K, K_L,            /**/ K_SCLN, K_QUOT, K_ENT, KC_NO },\
    { K_LSFT, K_Z, K_X, K_C,    /**/ K_V, K_B, KC_NO, KC_NO,        /**/ K_LCTL, K_LGUI, K_FN, K_LALT,  /**/ K_SPC0, K_SPC1, KC_NO, KC_NO },\
    { K_N, K_M, K_COM, K_DOT,   /**/ K_SLS, K_RSFT, K_UP, K_DEL,    /**/ K_RALT, K_APP, K_LEFT, K_DOWN, /**/ K_RGHT, KC_NO, KC_NO, KC_NO }  \
}


