/*
 * realestateassociation_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/realestateassociation/getAutocomplete
 */

#ifndef _realestateassociation_get_autocomplete_v2_response_H_
#define _realestateassociation_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct realestateassociation_get_autocomplete_v2_response_t realestateassociation_get_autocomplete_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "realestateassociation_get_autocomplete_v2_response_m_payload.h"



typedef struct realestateassociation_get_autocomplete_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct realestateassociation_get_autocomplete_v2_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} realestateassociation_get_autocomplete_v2_response_t;

__attribute__((deprecated)) realestateassociation_get_autocomplete_v2_response_t *realestateassociation_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    realestateassociation_get_autocomplete_v2_response_m_payload_t *m_payload
);

void realestateassociation_get_autocomplete_v2_response_free(realestateassociation_get_autocomplete_v2_response_t *realestateassociation_get_autocomplete_v2_response);

realestateassociation_get_autocomplete_v2_response_t *realestateassociation_get_autocomplete_v2_response_parseFromJSON(cJSON *realestateassociation_get_autocomplete_v2_responseJSON);

cJSON *realestateassociation_get_autocomplete_v2_response_convertToJSON(realestateassociation_get_autocomplete_v2_response_t *realestateassociation_get_autocomplete_v2_response);

#endif /* _realestateassociation_get_autocomplete_v2_response_H_ */

