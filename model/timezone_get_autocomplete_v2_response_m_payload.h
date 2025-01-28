/*
 * timezone_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/timezone/getAutocomplete
 */

#ifndef _timezone_get_autocomplete_v2_response_m_payload_H_
#define _timezone_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct timezone_get_autocomplete_v2_response_m_payload_t timezone_get_autocomplete_v2_response_m_payload_t;

#include "timezone_autocomplete_element_response.h"



typedef struct timezone_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_timezone; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} timezone_get_autocomplete_v2_response_m_payload_t;

__attribute__((deprecated)) timezone_get_autocomplete_v2_response_m_payload_t *timezone_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_timezone
);

void timezone_get_autocomplete_v2_response_m_payload_free(timezone_get_autocomplete_v2_response_m_payload_t *timezone_get_autocomplete_v2_response_m_payload);

timezone_get_autocomplete_v2_response_m_payload_t *timezone_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *timezone_get_autocomplete_v2_response_m_payloadJSON);

cJSON *timezone_get_autocomplete_v2_response_m_payload_convertToJSON(timezone_get_autocomplete_v2_response_m_payload_t *timezone_get_autocomplete_v2_response_m_payload);

#endif /* _timezone_get_autocomplete_v2_response_m_payload_H_ */

