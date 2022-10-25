/*
 * taxassignment_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/taxassignment/getAutocomplete
 */

#ifndef _taxassignment_get_autocomplete_v2_response_H_
#define _taxassignment_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct taxassignment_get_autocomplete_v2_response_t taxassignment_get_autocomplete_v2_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "taxassignment_get_autocomplete_v2_response_all_of.h"
#include "taxassignment_get_autocomplete_v2_response_m_payload.h"



typedef struct taxassignment_get_autocomplete_v2_response_t {
    struct taxassignment_get_autocomplete_v2_response_m_payload_t *m_payload; //model
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} taxassignment_get_autocomplete_v2_response_t;

taxassignment_get_autocomplete_v2_response_t *taxassignment_get_autocomplete_v2_response_create(
    taxassignment_get_autocomplete_v2_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void taxassignment_get_autocomplete_v2_response_free(taxassignment_get_autocomplete_v2_response_t *taxassignment_get_autocomplete_v2_response);

taxassignment_get_autocomplete_v2_response_t *taxassignment_get_autocomplete_v2_response_parseFromJSON(cJSON *taxassignment_get_autocomplete_v2_responseJSON);

cJSON *taxassignment_get_autocomplete_v2_response_convertToJSON(taxassignment_get_autocomplete_v2_response_t *taxassignment_get_autocomplete_v2_response);

#endif /* _taxassignment_get_autocomplete_v2_response_H_ */

