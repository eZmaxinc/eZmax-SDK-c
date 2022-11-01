/*
 * franchiseoffice_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/franchiseoffice/getAutocomplete
 */

#ifndef _franchiseoffice_get_autocomplete_v2_response_m_payload_H_
#define _franchiseoffice_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct franchiseoffice_get_autocomplete_v2_response_m_payload_t franchiseoffice_get_autocomplete_v2_response_m_payload_t;

#include "franchiseoffice_autocomplete_element_response.h"



typedef struct franchiseoffice_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_franchiseoffice; //nonprimitive container

} franchiseoffice_get_autocomplete_v2_response_m_payload_t;

franchiseoffice_get_autocomplete_v2_response_m_payload_t *franchiseoffice_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_franchiseoffice
);

void franchiseoffice_get_autocomplete_v2_response_m_payload_free(franchiseoffice_get_autocomplete_v2_response_m_payload_t *franchiseoffice_get_autocomplete_v2_response_m_payload);

franchiseoffice_get_autocomplete_v2_response_m_payload_t *franchiseoffice_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *franchiseoffice_get_autocomplete_v2_response_m_payloadJSON);

cJSON *franchiseoffice_get_autocomplete_v2_response_m_payload_convertToJSON(franchiseoffice_get_autocomplete_v2_response_m_payload_t *franchiseoffice_get_autocomplete_v2_response_m_payload);

#endif /* _franchiseoffice_get_autocomplete_v2_response_m_payload_H_ */

