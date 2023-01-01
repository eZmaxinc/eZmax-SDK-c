/*
 * billingentityinternal_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/billingentityinternal/getAutocomplete
 */

#ifndef _billingentityinternal_get_autocomplete_v2_response_H_
#define _billingentityinternal_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct billingentityinternal_get_autocomplete_v2_response_t billingentityinternal_get_autocomplete_v2_response_t;

#include "billingentityinternal_get_autocomplete_v2_response_m_payload.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct billingentityinternal_get_autocomplete_v2_response_t {
    struct billingentityinternal_get_autocomplete_v2_response_m_payload_t *m_payload; //model
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} billingentityinternal_get_autocomplete_v2_response_t;

billingentityinternal_get_autocomplete_v2_response_t *billingentityinternal_get_autocomplete_v2_response_create(
    billingentityinternal_get_autocomplete_v2_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void billingentityinternal_get_autocomplete_v2_response_free(billingentityinternal_get_autocomplete_v2_response_t *billingentityinternal_get_autocomplete_v2_response);

billingentityinternal_get_autocomplete_v2_response_t *billingentityinternal_get_autocomplete_v2_response_parseFromJSON(cJSON *billingentityinternal_get_autocomplete_v2_responseJSON);

cJSON *billingentityinternal_get_autocomplete_v2_response_convertToJSON(billingentityinternal_get_autocomplete_v2_response_t *billingentityinternal_get_autocomplete_v2_response);

#endif /* _billingentityinternal_get_autocomplete_v2_response_H_ */

