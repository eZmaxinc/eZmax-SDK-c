/*
 * agenttype_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/agenttype/getAutocomplete
 */

#ifndef _agenttype_get_autocomplete_v2_response_H_
#define _agenttype_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct agenttype_get_autocomplete_v2_response_t agenttype_get_autocomplete_v2_response_t;

#include "agenttype_get_autocomplete_v2_response_m_payload.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct agenttype_get_autocomplete_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct agenttype_get_autocomplete_v2_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} agenttype_get_autocomplete_v2_response_t;

__attribute__((deprecated)) agenttype_get_autocomplete_v2_response_t *agenttype_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    agenttype_get_autocomplete_v2_response_m_payload_t *m_payload
);

void agenttype_get_autocomplete_v2_response_free(agenttype_get_autocomplete_v2_response_t *agenttype_get_autocomplete_v2_response);

agenttype_get_autocomplete_v2_response_t *agenttype_get_autocomplete_v2_response_parseFromJSON(cJSON *agenttype_get_autocomplete_v2_responseJSON);

cJSON *agenttype_get_autocomplete_v2_response_convertToJSON(agenttype_get_autocomplete_v2_response_t *agenttype_get_autocomplete_v2_response);

#endif /* _agenttype_get_autocomplete_v2_response_H_ */

