/*
 * rejectedoffertopurchase_get_communication_list_v1_response.h
 *
 * Response for GET /1/object/rejectedoffertopurchase/{pkiRejectedoffertopurchaseID}/getCommunicationList
 */

#ifndef _rejectedoffertopurchase_get_communication_list_v1_response_H_
#define _rejectedoffertopurchase_get_communication_list_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct rejectedoffertopurchase_get_communication_list_v1_response_t rejectedoffertopurchase_get_communication_list_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload_get_list.h"
#include "rejectedoffertopurchase_get_communication_list_v1_response_m_payload.h"



typedef struct rejectedoffertopurchase_get_communication_list_v1_response_t {
    struct common_response_obj_debug_payload_get_list_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct rejectedoffertopurchase_get_communication_list_v1_response_m_payload_t *m_payload; //model

} rejectedoffertopurchase_get_communication_list_v1_response_t;

rejectedoffertopurchase_get_communication_list_v1_response_t *rejectedoffertopurchase_get_communication_list_v1_response_create(
    common_response_obj_debug_payload_get_list_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    rejectedoffertopurchase_get_communication_list_v1_response_m_payload_t *m_payload
);

void rejectedoffertopurchase_get_communication_list_v1_response_free(rejectedoffertopurchase_get_communication_list_v1_response_t *rejectedoffertopurchase_get_communication_list_v1_response);

rejectedoffertopurchase_get_communication_list_v1_response_t *rejectedoffertopurchase_get_communication_list_v1_response_parseFromJSON(cJSON *rejectedoffertopurchase_get_communication_list_v1_responseJSON);

cJSON *rejectedoffertopurchase_get_communication_list_v1_response_convertToJSON(rejectedoffertopurchase_get_communication_list_v1_response_t *rejectedoffertopurchase_get_communication_list_v1_response);

#endif /* _rejectedoffertopurchase_get_communication_list_v1_response_H_ */
