/*
 * ezsigndocument_get_words_positions_v1_request.h
 *
 * Request for POST /1/object/ezsigndocument/{pkiEzsigndocumentID}/getWordsPositions
 */

#ifndef _ezsigndocument_get_words_positions_v1_request_H_
#define _ezsigndocument_get_words_positions_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndocument_get_words_positions_v1_request_t ezsigndocument_get_words_positions_v1_request_t;


// Enum EGET for ezsigndocument_get_words_positions_v1_request

typedef enum  { ezmax_api_definition__full_ezsigndocument_get_words_positions_v1_request_EGET_NULL = 0, ezmax_api_definition__full_ezsigndocument_get_words_positions_v1_request_EGET_All, ezmax_api_definition__full_ezsigndocument_get_words_positions_v1_request_EGET_Words } ezmax_api_definition__full_ezsigndocument_get_words_positions_v1_request_EGET_e;

char* ezsigndocument_get_words_positions_v1_request_e_get_ToString(ezmax_api_definition__full_ezsigndocument_get_words_positions_v1_request_EGET_e e_get);

ezmax_api_definition__full_ezsigndocument_get_words_positions_v1_request_EGET_e ezsigndocument_get_words_positions_v1_request_e_get_FromString(char* e_get);



typedef struct ezsigndocument_get_words_positions_v1_request_t {
    ezmax_api_definition__full_ezsigndocument_get_words_positions_v1_request_EGET_e e_get; //enum
    int b_word_case_sensitive; //boolean
    list_t *a_s_word; //primitive container

} ezsigndocument_get_words_positions_v1_request_t;

ezsigndocument_get_words_positions_v1_request_t *ezsigndocument_get_words_positions_v1_request_create(
    ezmax_api_definition__full_ezsigndocument_get_words_positions_v1_request_EGET_e e_get,
    int b_word_case_sensitive,
    list_t *a_s_word
);

void ezsigndocument_get_words_positions_v1_request_free(ezsigndocument_get_words_positions_v1_request_t *ezsigndocument_get_words_positions_v1_request);

ezsigndocument_get_words_positions_v1_request_t *ezsigndocument_get_words_positions_v1_request_parseFromJSON(cJSON *ezsigndocument_get_words_positions_v1_requestJSON);

cJSON *ezsigndocument_get_words_positions_v1_request_convertToJSON(ezsigndocument_get_words_positions_v1_request_t *ezsigndocument_get_words_positions_v1_request);

#endif /* _ezsigndocument_get_words_positions_v1_request_H_ */

