/*
 * emailtype_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/emailtype/getAutocomplete
 */

#ifndef _emailtype_get_autocomplete_v2_response_m_payload_H_
#define _emailtype_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct emailtype_get_autocomplete_v2_response_m_payload_t emailtype_get_autocomplete_v2_response_m_payload_t;

#include "emailtype_autocomplete_element_response.h"



typedef struct emailtype_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_emailtype; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} emailtype_get_autocomplete_v2_response_m_payload_t;

__attribute__((deprecated)) emailtype_get_autocomplete_v2_response_m_payload_t *emailtype_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_emailtype
);

void emailtype_get_autocomplete_v2_response_m_payload_free(emailtype_get_autocomplete_v2_response_m_payload_t *emailtype_get_autocomplete_v2_response_m_payload);

emailtype_get_autocomplete_v2_response_m_payload_t *emailtype_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *emailtype_get_autocomplete_v2_response_m_payloadJSON);

cJSON *emailtype_get_autocomplete_v2_response_m_payload_convertToJSON(emailtype_get_autocomplete_v2_response_m_payload_t *emailtype_get_autocomplete_v2_response_m_payload);

#endif /* _emailtype_get_autocomplete_v2_response_m_payload_H_ */

