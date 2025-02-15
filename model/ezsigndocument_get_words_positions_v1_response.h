/*
 * ezsigndocument_get_words_positions_v1_response.h
 *
 * Response for POST /1/object/ezsigndocument/{pkiEzsigndocumentID}/getWordsPositions
 */

#ifndef _ezsigndocument_get_words_positions_v1_response_H_
#define _ezsigndocument_get_words_positions_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndocument_get_words_positions_v1_response_t ezsigndocument_get_words_positions_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "custom_word_position_word_response.h"



typedef struct ezsigndocument_get_words_positions_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    list_t *m_payload; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigndocument_get_words_positions_v1_response_t;

__attribute__((deprecated)) ezsigndocument_get_words_positions_v1_response_t *ezsigndocument_get_words_positions_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    list_t *m_payload
);

void ezsigndocument_get_words_positions_v1_response_free(ezsigndocument_get_words_positions_v1_response_t *ezsigndocument_get_words_positions_v1_response);

ezsigndocument_get_words_positions_v1_response_t *ezsigndocument_get_words_positions_v1_response_parseFromJSON(cJSON *ezsigndocument_get_words_positions_v1_responseJSON);

cJSON *ezsigndocument_get_words_positions_v1_response_convertToJSON(ezsigndocument_get_words_positions_v1_response_t *ezsigndocument_get_words_positions_v1_response);

#endif /* _ezsigndocument_get_words_positions_v1_response_H_ */

