/*
 * phonetype_get_autocomplete_v2_response_all_of.h
 *
 * 
 */

#ifndef _phonetype_get_autocomplete_v2_response_all_of_H_
#define _phonetype_get_autocomplete_v2_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct phonetype_get_autocomplete_v2_response_all_of_t phonetype_get_autocomplete_v2_response_all_of_t;

#include "phonetype_get_autocomplete_v2_response_m_payload.h"



typedef struct phonetype_get_autocomplete_v2_response_all_of_t {
    struct phonetype_get_autocomplete_v2_response_m_payload_t *m_payload; //model

} phonetype_get_autocomplete_v2_response_all_of_t;

phonetype_get_autocomplete_v2_response_all_of_t *phonetype_get_autocomplete_v2_response_all_of_create(
    phonetype_get_autocomplete_v2_response_m_payload_t *m_payload
);

void phonetype_get_autocomplete_v2_response_all_of_free(phonetype_get_autocomplete_v2_response_all_of_t *phonetype_get_autocomplete_v2_response_all_of);

phonetype_get_autocomplete_v2_response_all_of_t *phonetype_get_autocomplete_v2_response_all_of_parseFromJSON(cJSON *phonetype_get_autocomplete_v2_response_all_ofJSON);

cJSON *phonetype_get_autocomplete_v2_response_all_of_convertToJSON(phonetype_get_autocomplete_v2_response_all_of_t *phonetype_get_autocomplete_v2_response_all_of);

#endif /* _phonetype_get_autocomplete_v2_response_all_of_H_ */

