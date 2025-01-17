/*
 * billingentityinternal_get_list_v1_response.h
 *
 * Response for GET /1/object/billingentityinternal/getList
 */

#ifndef _billingentityinternal_get_list_v1_response_H_
#define _billingentityinternal_get_list_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct billingentityinternal_get_list_v1_response_t billingentityinternal_get_list_v1_response_t;

#include "billingentityinternal_get_list_v1_response_m_payload.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload_get_list.h"



typedef struct billingentityinternal_get_list_v1_response_t {
    struct common_response_obj_debug_payload_get_list_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct billingentityinternal_get_list_v1_response_m_payload_t *m_payload; //model

} billingentityinternal_get_list_v1_response_t;

billingentityinternal_get_list_v1_response_t *billingentityinternal_get_list_v1_response_create(
    common_response_obj_debug_payload_get_list_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    billingentityinternal_get_list_v1_response_m_payload_t *m_payload
);

void billingentityinternal_get_list_v1_response_free(billingentityinternal_get_list_v1_response_t *billingentityinternal_get_list_v1_response);

billingentityinternal_get_list_v1_response_t *billingentityinternal_get_list_v1_response_parseFromJSON(cJSON *billingentityinternal_get_list_v1_responseJSON);

cJSON *billingentityinternal_get_list_v1_response_convertToJSON(billingentityinternal_get_list_v1_response_t *billingentityinternal_get_list_v1_response);

#endif /* _billingentityinternal_get_list_v1_response_H_ */

