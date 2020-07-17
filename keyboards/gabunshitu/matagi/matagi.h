//
// Created by 樋田一幸 on 2020/07/12.
//

#pragma once

#include "quantum.h"

#define xxxx KC_NO

#define LAYOUT( \
    K_F1, K_F2, K_F3, K_F4, K_F5, K_F6, K_F7, K_F8, K_F9, K_F10, K_F11, K_F12,          \
    K_ESC, K_1, K_2, K_3, K_4, K_5, K_6, K_7, K_8, K_9, K_0, K_MNS, K_EQL, K_GRV, K_BS, \
    K_TAB, K_Q, K_W, K_E, K_R, K_T, K_Y, K_U, K_I, K_O, K_P, K_LB, K_RB, K_BSLS,        \
    K_CAPS, K_A, K_S, K_D, K_F, K_G, K_H, K_J, K_K, K_L, K_SCLN, K_QUOT, K_ENT,         \
    K_LSFT, K_Z, K_X, K_C, K_V, K_B, K_N, K_M, K_COM, K_DOT, K_SLS, K_RSFT,             \
    K_FN, K_MENU, K_WIN, K_HOME, K_UP, K_END, K_PGUP, K_ALT, K_SPC,                     \
    K_LCTL, K_LT, K_DN, K_RT, K_PGDN, L_RCTL                                            \
) {                                                                                     \
    { K_FN, K_MENU, K_WIN, K_LCTL,  /**/ K_ALT, K_SPC, K_LT, K_DN,        /**/ K_RT, K_PGDN, L_RCTL, xxxx,    /**/ K_HOME, K_UP, K_END, K_PGUP },    \
    { K_F12, K_F11, K_F10, K_F9,    /**/ xxxx, xxxx, xxxx, xxxx,      /**/ xxxx, xxxx, xxxx, xxxx,        /**/ xxxx, xxxx, xxxx, xxxx },     \
    { K_F5, K_F6, K_F7, K_F8,       /**/ K_S, K_D, K_F, K_G,            /**/ K_X, K_C, K_V, K_B,            /**/ K_CAPS, K_A, K_LSFT, K_Z },    \
    { K_H, K_J, K_K, K_L,           /**/ K_SCLN, K_QUOT, K_ENT, K_BS,   /**/ K_N, K_M, K_COM, K_DOT,        /**/ K_RSFT, K_SLS, xxxx, xxxx },     \
    { K_F1, K_F2, K_F3, K_F4,       /**/ K_2, K_3, K_4, K_5,            /**/ K_W, K_E, K_R, K_T,            /**/ K_ESC, K_1, K_TAB, K_Q },    \
    { K_6, K_7, K_8, K_9,           /**/ K_0, K_MNS, K_EQL, K_GRV,      /**/ K_Y, K_U, K_I, K_O,            /**/ K_P, K_LB, K_RB, K_BSLS }     \
}

