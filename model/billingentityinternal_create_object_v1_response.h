/*
 * billingentityinternal_create_object_v1_response.h
 *
 * Response for POST /1/object/billingentityinternal
 */

#ifndef _billingentityinternal_create_object_v1_response_H_
#define _billingentityinternal_create_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct billingentityinternal_create_object_v1_response_t billingentityinternal_create_object_v1_response_t;

#include "billingentityinternal_create_object_v1_response_m_payload.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct billingentityinternal_create_object_v1_response_t {
    struct billingentityinternal_create_object_v1_response_m_payload_t *m_payload; //model
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} billingentityinternal_create_object_v1_response_t;

billingentityinternal_create_object_v1_response_t *billingentityinternal_create_object_v1_response_create(
    billingentityinternal_create_object_v1_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void billingentityinternal_create_object_v1_response_free(billingentityinternal_create_object_v1_response_t *billingentityinternal_create_object_v1_response);

billingentityinternal_create_object_v1_response_t *billingentityinternal_create_object_v1_response_parseFromJSON(cJSON *billingentityinternal_create_object_v1_responseJSON);

cJSON *billingentityinternal_create_object_v1_response_convertToJSON(billingentityinternal_create_object_v1_response_t *billingentityinternal_create_object_v1_response);

#endif /* _billingentityinternal_create_object_v1_response_H_ */

