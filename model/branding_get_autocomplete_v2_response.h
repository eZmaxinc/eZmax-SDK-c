/*
 * branding_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/branding/getAutocomplete
 */

#ifndef _branding_get_autocomplete_v2_response_H_
#define _branding_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct branding_get_autocomplete_v2_response_t branding_get_autocomplete_v2_response_t;

#include "branding_get_autocomplete_v2_response_m_payload.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct branding_get_autocomplete_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct branding_get_autocomplete_v2_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} branding_get_autocomplete_v2_response_t;

__attribute__((deprecated)) branding_get_autocomplete_v2_response_t *branding_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    branding_get_autocomplete_v2_response_m_payload_t *m_payload
);

void branding_get_autocomplete_v2_response_free(branding_get_autocomplete_v2_response_t *branding_get_autocomplete_v2_response);

branding_get_autocomplete_v2_response_t *branding_get_autocomplete_v2_response_parseFromJSON(cJSON *branding_get_autocomplete_v2_responseJSON);

cJSON *branding_get_autocomplete_v2_response_convertToJSON(branding_get_autocomplete_v2_response_t *branding_get_autocomplete_v2_response);

#endif /* _branding_get_autocomplete_v2_response_H_ */

