/*
 * ezsigntemplatedocument_get_words_positions_v1_response.h
 *
 * Response for POST /1/object/ezsigntemplatedocument/{pkiEzsigntemplatedocumentID}/getWordsPositions
 */

#ifndef _ezsigntemplatedocument_get_words_positions_v1_response_H_
#define _ezsigntemplatedocument_get_words_positions_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatedocument_get_words_positions_v1_response_t ezsigntemplatedocument_get_words_positions_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "custom_word_position_word_response.h"



typedef struct ezsigntemplatedocument_get_words_positions_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    list_t *m_payload; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatedocument_get_words_positions_v1_response_t;

__attribute__((deprecated)) ezsigntemplatedocument_get_words_positions_v1_response_t *ezsigntemplatedocument_get_words_positions_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    list_t *m_payload
);

void ezsigntemplatedocument_get_words_positions_v1_response_free(ezsigntemplatedocument_get_words_positions_v1_response_t *ezsigntemplatedocument_get_words_positions_v1_response);

ezsigntemplatedocument_get_words_positions_v1_response_t *ezsigntemplatedocument_get_words_positions_v1_response_parseFromJSON(cJSON *ezsigntemplatedocument_get_words_positions_v1_responseJSON);

cJSON *ezsigntemplatedocument_get_words_positions_v1_response_convertToJSON(ezsigntemplatedocument_get_words_positions_v1_response_t *ezsigntemplatedocument_get_words_positions_v1_response);

#endif /* _ezsigntemplatedocument_get_words_positions_v1_response_H_ */

