#pragma once

#include "quantum.h"

#define LAYOUT( \
    K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113,   \
    K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212,         \
    K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311,               \
    K401, K402, K403, K404, K405, K406                                              \
) { \
    { K301,  K302,  K404,  K405,  /**/ K406,  KC_NO, KC_NO, KC_NO, /**/ KC_NO, KC_NO, KC_NO, KC_NO, /**/ KC_NO, KC_NO, KC_NO, KC_NO }, \
    { K103,  K104,  K105,  K106,  /**/ K203,  K204,  K205,  K206,  /**/ K303,  K304,  K305,  K306,  /**/ K101,  K102,  K201,  K202  }, \
    { K307,  K308,  K403,  K402,  /**/ K401,  KC_NO, KC_NO, K113,   /**/ KC_NO, KC_NO, KC_NO, KC_NO, /**/ KC_NO, KC_NO, KC_NO, KC_NO }, \
    { K109,  K110,  K111,  K112,  /**/ K209,  K210,  K211,  K311,  /**/ K309,  K310,  K212,  KC_NO, /**/ K107,  K108,  K207,  K208  }  \
}
