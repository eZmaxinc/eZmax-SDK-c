/*
 * tranqcontract_get_communication_count_v1_response.h
 *
 * Response for GET /1/object/tranqcontract/{pkiTranqcontractID}/getCommunicationCount
 */

#ifndef _tranqcontract_get_communication_count_v1_response_H_
#define _tranqcontract_get_communication_count_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct tranqcontract_get_communication_count_v1_response_t tranqcontract_get_communication_count_v1_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "tranqcontract_get_communication_count_v1_response_m_payload.h"



typedef struct tranqcontract_get_communication_count_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct tranqcontract_get_communication_count_v1_response_m_payload_t *m_payload; //model

} tranqcontract_get_communication_count_v1_response_t;

tranqcontract_get_communication_count_v1_response_t *tranqcontract_get_communication_count_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    tranqcontract_get_communication_count_v1_response_m_payload_t *m_payload
);

void tranqcontract_get_communication_count_v1_response_free(tranqcontract_get_communication_count_v1_response_t *tranqcontract_get_communication_count_v1_response);

tranqcontract_get_communication_count_v1_response_t *tranqcontract_get_communication_count_v1_response_parseFromJSON(cJSON *tranqcontract_get_communication_count_v1_responseJSON);

cJSON *tranqcontract_get_communication_count_v1_response_convertToJSON(tranqcontract_get_communication_count_v1_response_t *tranqcontract_get_communication_count_v1_response);

#endif /* _tranqcontract_get_communication_count_v1_response_H_ */

