/*
 * module_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/module/getAutocomplete
 */

#ifndef _module_get_autocomplete_v2_response_m_payload_H_
#define _module_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct module_get_autocomplete_v2_response_m_payload_t module_get_autocomplete_v2_response_m_payload_t;

#include "module_autocomplete_element_response.h"



typedef struct module_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_module; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} module_get_autocomplete_v2_response_m_payload_t;

__attribute__((deprecated)) module_get_autocomplete_v2_response_m_payload_t *module_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_module
);

void module_get_autocomplete_v2_response_m_payload_free(module_get_autocomplete_v2_response_m_payload_t *module_get_autocomplete_v2_response_m_payload);

module_get_autocomplete_v2_response_m_payload_t *module_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *module_get_autocomplete_v2_response_m_payloadJSON);

cJSON *module_get_autocomplete_v2_response_m_payload_convertToJSON(module_get_autocomplete_v2_response_m_payload_t *module_get_autocomplete_v2_response_m_payload);

#endif /* _module_get_autocomplete_v2_response_m_payload_H_ */

