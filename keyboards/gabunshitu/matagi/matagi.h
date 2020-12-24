//
// Created by 樋田一幸 on 2020/07/12.
//

#pragma once

#include "quantum.h"

#define xxxx KC_NO

#define LAYOUT( \
    K_ESC,  K_F1, K_F2, K_F3, K_F4,     K_F5, K_F6, K_F7, K_F8,     K_F9, K_F10, K_F11, K_F12,              /*13*/  \
    K_GRV,  K_1, K_2, K_3, K_4, K_5, K_6, K_HM, K_ED, K_PU, K_PD, K_7, K_8, K_9, K_0, K_MNS, K_EQL, K_BS,   /*18*/  \
    K_TAB,  K_Q, K_W, K_E, K_R, K_T,                        K_Y, K_U, K_I, K_O, K_P, K_LB, K_RB, K_BSLS,    /*14*/  \
    K_CAPS, K_A, K_S, K_D, K_F, K_G,                        K_H, K_J, K_K, K_L, K_SCLN, K_QUOT, K_ENT,      /*13*/  \
    K_LSFT, K_Z, K_X, K_C, K_V, K_B,                        K_N, K_M, K_COM, K_DOT, K_SLS, K_RSFT,          /*12*/  \
    K_INS,  K_DEL, K_PRT, K_WIN, K_LALT,        K_SPC,      K_RALT, K_LEFT, K_RGHT, K_UP, K_DOWN,           /*11*/  \
    K_LCTL, K_SPC0, L_RCTL                                                                                  /*3*/   \
) {                                                                                                                 \
    { K_ESC, K_F1, K_F2, K_F3,      /**/ K_F4, K_F5, K_F6, K_F7,        /**/ K_GRV, K_1, K_2, K_3,          /**/ K_4, K_5, K_6, K_HM },     \
    { K_F8, K_F9, K_F10, K_F11,     /**/ K_F12, xxxx, K_ED, K_PU,       /**/ K_PD, K_7, K_8, K_9,           /**/ K_0, K_MNS, K_EQL, K_BS },    \
    { K_TAB, K_Q, K_W, K_E,         /**/ K_R, K_T, xxxx, xxxx,          /**/ K_CAPS, K_A, K_S, K_D,         /**/ K_F, K_G, xxxx, xxxx },    \
    { K_Y, K_U, K_I, K_O,           /**/ K_P, K_LB, K_RB, K_BSLS,       /**/ K_H, K_J, K_K, K_L,            /**/ K_SCLN, K_QUOT, K_ENT, xxxx },     \
    { K_LSFT, K_Z, K_X, K_C,        /**/ K_V, K_B, K_INS, K_DEL,        /**/ K_PRT, K_WIN, K_LALT, K_SPC,   /**/ K_LCTL, K_SPC0, L_RCTL, xxxx },    \
    { K_N, K_M, K_COM, K_DOT,       /**/ K_SLS, K_RSFT, xxxx, xxxx,     /**/ K_RALT, K_LEFT, K_RGHT, K_UP,     /**/ K_P, K_LB, K_RB, K_BSLS }     \
}

