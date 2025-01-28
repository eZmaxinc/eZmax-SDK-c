/*
 * language_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/language/getAutocomplete
 */

#ifndef _language_get_autocomplete_v2_response_m_payload_H_
#define _language_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct language_get_autocomplete_v2_response_m_payload_t language_get_autocomplete_v2_response_m_payload_t;

#include "language_autocomplete_element_response.h"



typedef struct language_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_language; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} language_get_autocomplete_v2_response_m_payload_t;

__attribute__((deprecated)) language_get_autocomplete_v2_response_m_payload_t *language_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_language
);

void language_get_autocomplete_v2_response_m_payload_free(language_get_autocomplete_v2_response_m_payload_t *language_get_autocomplete_v2_response_m_payload);

language_get_autocomplete_v2_response_m_payload_t *language_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *language_get_autocomplete_v2_response_m_payloadJSON);

cJSON *language_get_autocomplete_v2_response_m_payload_convertToJSON(language_get_autocomplete_v2_response_m_payload_t *language_get_autocomplete_v2_response_m_payload);

#endif /* _language_get_autocomplete_v2_response_m_payload_H_ */

