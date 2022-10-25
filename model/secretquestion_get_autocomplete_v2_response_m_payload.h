/*
 * secretquestion_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/secretquestion/getAutocomplete
 */

#ifndef _secretquestion_get_autocomplete_v2_response_m_payload_H_
#define _secretquestion_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct secretquestion_get_autocomplete_v2_response_m_payload_t secretquestion_get_autocomplete_v2_response_m_payload_t;

#include "secretquestion_autocomplete_element_response.h"



typedef struct secretquestion_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_secretquestion; //nonprimitive container

} secretquestion_get_autocomplete_v2_response_m_payload_t;

secretquestion_get_autocomplete_v2_response_m_payload_t *secretquestion_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_secretquestion
);

void secretquestion_get_autocomplete_v2_response_m_payload_free(secretquestion_get_autocomplete_v2_response_m_payload_t *secretquestion_get_autocomplete_v2_response_m_payload);

secretquestion_get_autocomplete_v2_response_m_payload_t *secretquestion_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *secretquestion_get_autocomplete_v2_response_m_payloadJSON);

cJSON *secretquestion_get_autocomplete_v2_response_m_payload_convertToJSON(secretquestion_get_autocomplete_v2_response_m_payload_t *secretquestion_get_autocomplete_v2_response_m_payload);

#endif /* _secretquestion_get_autocomplete_v2_response_m_payload_H_ */

