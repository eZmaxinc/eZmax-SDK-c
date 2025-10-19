/*
 * leadsource_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/leadsource/getAutocomplete
 */

#ifndef _leadsource_get_autocomplete_v2_response_H_
#define _leadsource_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct leadsource_get_autocomplete_v2_response_t leadsource_get_autocomplete_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "leadsource_get_autocomplete_v2_response_m_payload.h"



typedef struct leadsource_get_autocomplete_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct leadsource_get_autocomplete_v2_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} leadsource_get_autocomplete_v2_response_t;

__attribute__((deprecated)) leadsource_get_autocomplete_v2_response_t *leadsource_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    leadsource_get_autocomplete_v2_response_m_payload_t *m_payload
);

void leadsource_get_autocomplete_v2_response_free(leadsource_get_autocomplete_v2_response_t *leadsource_get_autocomplete_v2_response);

leadsource_get_autocomplete_v2_response_t *leadsource_get_autocomplete_v2_response_parseFromJSON(cJSON *leadsource_get_autocomplete_v2_responseJSON);

cJSON *leadsource_get_autocomplete_v2_response_convertToJSON(leadsource_get_autocomplete_v2_response_t *leadsource_get_autocomplete_v2_response);

#endif /* _leadsource_get_autocomplete_v2_response_H_ */

