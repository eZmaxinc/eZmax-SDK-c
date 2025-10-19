/*
 * domain_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/domain/getAutocomplete
 */

#ifndef _domain_get_autocomplete_v2_response_m_payload_H_
#define _domain_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct domain_get_autocomplete_v2_response_m_payload_t domain_get_autocomplete_v2_response_m_payload_t;

#include "domain_autocomplete_element_response.h"



typedef struct domain_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_domain; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} domain_get_autocomplete_v2_response_m_payload_t;

__attribute__((deprecated)) domain_get_autocomplete_v2_response_m_payload_t *domain_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_domain
);

void domain_get_autocomplete_v2_response_m_payload_free(domain_get_autocomplete_v2_response_m_payload_t *domain_get_autocomplete_v2_response_m_payload);

domain_get_autocomplete_v2_response_m_payload_t *domain_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *domain_get_autocomplete_v2_response_m_payloadJSON);

cJSON *domain_get_autocomplete_v2_response_m_payload_convertToJSON(domain_get_autocomplete_v2_response_m_payload_t *domain_get_autocomplete_v2_response_m_payload);

#endif /* _domain_get_autocomplete_v2_response_m_payload_H_ */

