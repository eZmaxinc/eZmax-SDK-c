/*
 * province_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/province/getAutocomplete
 */

#ifndef _province_get_autocomplete_v2_response_m_payload_H_
#define _province_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct province_get_autocomplete_v2_response_m_payload_t province_get_autocomplete_v2_response_m_payload_t;

#include "province_autocomplete_element_response.h"



typedef struct province_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_province; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} province_get_autocomplete_v2_response_m_payload_t;

__attribute__((deprecated)) province_get_autocomplete_v2_response_m_payload_t *province_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_province
);

void province_get_autocomplete_v2_response_m_payload_free(province_get_autocomplete_v2_response_m_payload_t *province_get_autocomplete_v2_response_m_payload);

province_get_autocomplete_v2_response_m_payload_t *province_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *province_get_autocomplete_v2_response_m_payloadJSON);

cJSON *province_get_autocomplete_v2_response_m_payload_convertToJSON(province_get_autocomplete_v2_response_m_payload_t *province_get_autocomplete_v2_response_m_payload);

#endif /* _province_get_autocomplete_v2_response_m_payload_H_ */

