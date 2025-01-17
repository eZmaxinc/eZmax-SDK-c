/*
 * module_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/module/getAutocomplete
 */

#ifndef _module_get_autocomplete_v2_response_H_
#define _module_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct module_get_autocomplete_v2_response_t module_get_autocomplete_v2_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "module_get_autocomplete_v2_response_m_payload.h"



typedef struct module_get_autocomplete_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct module_get_autocomplete_v2_response_m_payload_t *m_payload; //model

} module_get_autocomplete_v2_response_t;

module_get_autocomplete_v2_response_t *module_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    module_get_autocomplete_v2_response_m_payload_t *m_payload
);

void module_get_autocomplete_v2_response_free(module_get_autocomplete_v2_response_t *module_get_autocomplete_v2_response);

module_get_autocomplete_v2_response_t *module_get_autocomplete_v2_response_parseFromJSON(cJSON *module_get_autocomplete_v2_responseJSON);

cJSON *module_get_autocomplete_v2_response_convertToJSON(module_get_autocomplete_v2_response_t *module_get_autocomplete_v2_response);

#endif /* _module_get_autocomplete_v2_response_H_ */

