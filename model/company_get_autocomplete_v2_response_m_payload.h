/*
 * company_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/company/getAutocomplete
 */

#ifndef _company_get_autocomplete_v2_response_m_payload_H_
#define _company_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct company_get_autocomplete_v2_response_m_payload_t company_get_autocomplete_v2_response_m_payload_t;

#include "company_autocomplete_element_response.h"



typedef struct company_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_company; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} company_get_autocomplete_v2_response_m_payload_t;

__attribute__((deprecated)) company_get_autocomplete_v2_response_m_payload_t *company_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_company
);

void company_get_autocomplete_v2_response_m_payload_free(company_get_autocomplete_v2_response_m_payload_t *company_get_autocomplete_v2_response_m_payload);

company_get_autocomplete_v2_response_m_payload_t *company_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *company_get_autocomplete_v2_response_m_payloadJSON);

cJSON *company_get_autocomplete_v2_response_m_payload_convertToJSON(company_get_autocomplete_v2_response_m_payload_t *company_get_autocomplete_v2_response_m_payload);

#endif /* _company_get_autocomplete_v2_response_m_payload_H_ */

