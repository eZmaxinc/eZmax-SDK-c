/*
 * glaccountcontainer_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/glaccountcontainer/getAutocomplete
 */

#ifndef _glaccountcontainer_get_autocomplete_v2_response_m_payload_H_
#define _glaccountcontainer_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct glaccountcontainer_get_autocomplete_v2_response_m_payload_t glaccountcontainer_get_autocomplete_v2_response_m_payload_t;

#include "glaccountcontainer_autocomplete_element_response.h"



typedef struct glaccountcontainer_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_glaccountcontainer; //nonprimitive container

} glaccountcontainer_get_autocomplete_v2_response_m_payload_t;

glaccountcontainer_get_autocomplete_v2_response_m_payload_t *glaccountcontainer_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_glaccountcontainer
);

void glaccountcontainer_get_autocomplete_v2_response_m_payload_free(glaccountcontainer_get_autocomplete_v2_response_m_payload_t *glaccountcontainer_get_autocomplete_v2_response_m_payload);

glaccountcontainer_get_autocomplete_v2_response_m_payload_t *glaccountcontainer_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *glaccountcontainer_get_autocomplete_v2_response_m_payloadJSON);

cJSON *glaccountcontainer_get_autocomplete_v2_response_m_payload_convertToJSON(glaccountcontainer_get_autocomplete_v2_response_m_payload_t *glaccountcontainer_get_autocomplete_v2_response_m_payload);

#endif /* _glaccountcontainer_get_autocomplete_v2_response_m_payload_H_ */

