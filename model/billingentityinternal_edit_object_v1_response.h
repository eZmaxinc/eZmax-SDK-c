/*
 * billingentityinternal_edit_object_v1_response.h
 *
 * Response for PUT /1/object/billingentityinternal/{pkiBillingentityinternalID}
 */

#ifndef _billingentityinternal_edit_object_v1_response_H_
#define _billingentityinternal_edit_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct billingentityinternal_edit_object_v1_response_t billingentityinternal_edit_object_v1_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct billingentityinternal_edit_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} billingentityinternal_edit_object_v1_response_t;

billingentityinternal_edit_object_v1_response_t *billingentityinternal_edit_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void billingentityinternal_edit_object_v1_response_free(billingentityinternal_edit_object_v1_response_t *billingentityinternal_edit_object_v1_response);

billingentityinternal_edit_object_v1_response_t *billingentityinternal_edit_object_v1_response_parseFromJSON(cJSON *billingentityinternal_edit_object_v1_responseJSON);

cJSON *billingentityinternal_edit_object_v1_response_convertToJSON(billingentityinternal_edit_object_v1_response_t *billingentityinternal_edit_object_v1_response);

#endif /* _billingentityinternal_edit_object_v1_response_H_ */

