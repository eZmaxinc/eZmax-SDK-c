/*
 * billingentityexternal_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/billingentityexternal/getAutocomplete
 */

#ifndef _billingentityexternal_get_autocomplete_v2_response_H_
#define _billingentityexternal_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct billingentityexternal_get_autocomplete_v2_response_t billingentityexternal_get_autocomplete_v2_response_t;

#include "billingentityexternal_get_autocomplete_v2_response_m_payload.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct billingentityexternal_get_autocomplete_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct billingentityexternal_get_autocomplete_v2_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} billingentityexternal_get_autocomplete_v2_response_t;

__attribute__((deprecated)) billingentityexternal_get_autocomplete_v2_response_t *billingentityexternal_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    billingentityexternal_get_autocomplete_v2_response_m_payload_t *m_payload
);

void billingentityexternal_get_autocomplete_v2_response_free(billingentityexternal_get_autocomplete_v2_response_t *billingentityexternal_get_autocomplete_v2_response);

billingentityexternal_get_autocomplete_v2_response_t *billingentityexternal_get_autocomplete_v2_response_parseFromJSON(cJSON *billingentityexternal_get_autocomplete_v2_responseJSON);

cJSON *billingentityexternal_get_autocomplete_v2_response_convertToJSON(billingentityexternal_get_autocomplete_v2_response_t *billingentityexternal_get_autocomplete_v2_response);

#endif /* _billingentityexternal_get_autocomplete_v2_response_H_ */

