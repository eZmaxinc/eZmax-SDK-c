/*
 * department_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/department/getAutocomplete
 */

#ifndef _department_get_autocomplete_v2_response_m_payload_H_
#define _department_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct department_get_autocomplete_v2_response_m_payload_t department_get_autocomplete_v2_response_m_payload_t;

#include "department_autocomplete_element_response.h"



typedef struct department_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_department; //nonprimitive container

} department_get_autocomplete_v2_response_m_payload_t;

department_get_autocomplete_v2_response_m_payload_t *department_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_department
);

void department_get_autocomplete_v2_response_m_payload_free(department_get_autocomplete_v2_response_m_payload_t *department_get_autocomplete_v2_response_m_payload);

department_get_autocomplete_v2_response_m_payload_t *department_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *department_get_autocomplete_v2_response_m_payloadJSON);

cJSON *department_get_autocomplete_v2_response_m_payload_convertToJSON(department_get_autocomplete_v2_response_m_payload_t *department_get_autocomplete_v2_response_m_payload);

#endif /* _department_get_autocomplete_v2_response_m_payload_H_ */

