/*
 * ezsigndocument_get_words_positions_v1_response_all_of.h
 *
 * 
 */

#ifndef _ezsigndocument_get_words_positions_v1_response_all_of_H_
#define _ezsigndocument_get_words_positions_v1_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndocument_get_words_positions_v1_response_all_of_t ezsigndocument_get_words_positions_v1_response_all_of_t;

#include "custom_word_position_word_response.h"



typedef struct ezsigndocument_get_words_positions_v1_response_all_of_t {
    list_t *m_payload; //nonprimitive container

} ezsigndocument_get_words_positions_v1_response_all_of_t;

ezsigndocument_get_words_positions_v1_response_all_of_t *ezsigndocument_get_words_positions_v1_response_all_of_create(
    list_t *m_payload
);

void ezsigndocument_get_words_positions_v1_response_all_of_free(ezsigndocument_get_words_positions_v1_response_all_of_t *ezsigndocument_get_words_positions_v1_response_all_of);

ezsigndocument_get_words_positions_v1_response_all_of_t *ezsigndocument_get_words_positions_v1_response_all_of_parseFromJSON(cJSON *ezsigndocument_get_words_positions_v1_response_all_ofJSON);

cJSON *ezsigndocument_get_words_positions_v1_response_all_of_convertToJSON(ezsigndocument_get_words_positions_v1_response_all_of_t *ezsigndocument_get_words_positions_v1_response_all_of);

#endif /* _ezsigndocument_get_words_positions_v1_response_all_of_H_ */

