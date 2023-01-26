/*
 * paymentterm_get_list_v1_response.h
 *
 * Response for GET /1/object/paymentterm/getList
 */

#ifndef _paymentterm_get_list_v1_response_H_
#define _paymentterm_get_list_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct paymentterm_get_list_v1_response_t paymentterm_get_list_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload_get_list.h"
#include "paymentterm_get_list_v1_response_m_payload.h"



typedef struct paymentterm_get_list_v1_response_t {
    struct paymentterm_get_list_v1_response_m_payload_t *m_payload; //model
    struct common_response_obj_debug_payload_get_list_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} paymentterm_get_list_v1_response_t;

paymentterm_get_list_v1_response_t *paymentterm_get_list_v1_response_create(
    paymentterm_get_list_v1_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_get_list_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void paymentterm_get_list_v1_response_free(paymentterm_get_list_v1_response_t *paymentterm_get_list_v1_response);

paymentterm_get_list_v1_response_t *paymentterm_get_list_v1_response_parseFromJSON(cJSON *paymentterm_get_list_v1_responseJSON);

cJSON *paymentterm_get_list_v1_response_convertToJSON(paymentterm_get_list_v1_response_t *paymentterm_get_list_v1_response);

#endif /* _paymentterm_get_list_v1_response_H_ */

