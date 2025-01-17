/*
 * glaccount_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/glaccount/getAutocomplete
 */

#ifndef _glaccount_get_autocomplete_v2_response_H_
#define _glaccount_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct glaccount_get_autocomplete_v2_response_t glaccount_get_autocomplete_v2_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "glaccount_get_autocomplete_v2_response_m_payload.h"



typedef struct glaccount_get_autocomplete_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct glaccount_get_autocomplete_v2_response_m_payload_t *m_payload; //model

} glaccount_get_autocomplete_v2_response_t;

glaccount_get_autocomplete_v2_response_t *glaccount_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    glaccount_get_autocomplete_v2_response_m_payload_t *m_payload
);

void glaccount_get_autocomplete_v2_response_free(glaccount_get_autocomplete_v2_response_t *glaccount_get_autocomplete_v2_response);

glaccount_get_autocomplete_v2_response_t *glaccount_get_autocomplete_v2_response_parseFromJSON(cJSON *glaccount_get_autocomplete_v2_responseJSON);

cJSON *glaccount_get_autocomplete_v2_response_convertToJSON(glaccount_get_autocomplete_v2_response_t *glaccount_get_autocomplete_v2_response);

#endif /* _glaccount_get_autocomplete_v2_response_H_ */

