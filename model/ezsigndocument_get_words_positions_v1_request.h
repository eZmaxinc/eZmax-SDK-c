/*
 * ezsigndocument_get_words_positions_v1_request.h
 *
 * Request for the /1/object/ezsigndocument/{pkiEzsigndocumentID}/getWordsPositions API Request
 */

#ifndef _ezsigndocument_get_words_positions_v1_request_H_
#define _ezsigndocument_get_words_positions_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndocument_get_words_positions_v1_request_t ezsigndocument_get_words_positions_v1_request_t;




typedef struct ezsigndocument_get_words_positions_v1_request_t {
    list_t *a_s_words; //primitive container

} ezsigndocument_get_words_positions_v1_request_t;

ezsigndocument_get_words_positions_v1_request_t *ezsigndocument_get_words_positions_v1_request_create(
    list_t *a_s_words
);

void ezsigndocument_get_words_positions_v1_request_free(ezsigndocument_get_words_positions_v1_request_t *ezsigndocument_get_words_positions_v1_request);

ezsigndocument_get_words_positions_v1_request_t *ezsigndocument_get_words_positions_v1_request_parseFromJSON(cJSON *ezsigndocument_get_words_positions_v1_requestJSON);

cJSON *ezsigndocument_get_words_positions_v1_request_convertToJSON(ezsigndocument_get_words_positions_v1_request_t *ezsigndocument_get_words_positions_v1_request);

#endif /* _ezsigndocument_get_words_positions_v1_request_H_ */

