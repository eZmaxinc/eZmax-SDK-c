/*
 * systemconfigurationtype_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/systemconfigurationtype/getAutocomplete
 */

#ifndef _systemconfigurationtype_get_autocomplete_v2_response_m_payload_H_
#define _systemconfigurationtype_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct systemconfigurationtype_get_autocomplete_v2_response_m_payload_t systemconfigurationtype_get_autocomplete_v2_response_m_payload_t;

#include "systemconfigurationtype_autocomplete_element_response.h"



typedef struct systemconfigurationtype_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_systemconfigurationtype; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} systemconfigurationtype_get_autocomplete_v2_response_m_payload_t;

__attribute__((deprecated)) systemconfigurationtype_get_autocomplete_v2_response_m_payload_t *systemconfigurationtype_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_systemconfigurationtype
);

void systemconfigurationtype_get_autocomplete_v2_response_m_payload_free(systemconfigurationtype_get_autocomplete_v2_response_m_payload_t *systemconfigurationtype_get_autocomplete_v2_response_m_payload);

systemconfigurationtype_get_autocomplete_v2_response_m_payload_t *systemconfigurationtype_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *systemconfigurationtype_get_autocomplete_v2_response_m_payloadJSON);

cJSON *systemconfigurationtype_get_autocomplete_v2_response_m_payload_convertToJSON(systemconfigurationtype_get_autocomplete_v2_response_m_payload_t *systemconfigurationtype_get_autocomplete_v2_response_m_payload);

#endif /* _systemconfigurationtype_get_autocomplete_v2_response_m_payload_H_ */

