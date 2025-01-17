/*
 * buyercontract_get_communicationsenders_v1_response.h
 *
 * Response for GET /1/object/buyercontract/{pkiBuyercontractID}/getCommunicationrecipients
 */

#ifndef _buyercontract_get_communicationsenders_v1_response_H_
#define _buyercontract_get_communicationsenders_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct buyercontract_get_communicationsenders_v1_response_t buyercontract_get_communicationsenders_v1_response_t;

#include "buyercontract_get_communicationsenders_v1_response_m_payload.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct buyercontract_get_communicationsenders_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct buyercontract_get_communicationsenders_v1_response_m_payload_t *m_payload; //model

} buyercontract_get_communicationsenders_v1_response_t;

buyercontract_get_communicationsenders_v1_response_t *buyercontract_get_communicationsenders_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    buyercontract_get_communicationsenders_v1_response_m_payload_t *m_payload
);

void buyercontract_get_communicationsenders_v1_response_free(buyercontract_get_communicationsenders_v1_response_t *buyercontract_get_communicationsenders_v1_response);

buyercontract_get_communicationsenders_v1_response_t *buyercontract_get_communicationsenders_v1_response_parseFromJSON(cJSON *buyercontract_get_communicationsenders_v1_responseJSON);

cJSON *buyercontract_get_communicationsenders_v1_response_convertToJSON(buyercontract_get_communicationsenders_v1_response_t *buyercontract_get_communicationsenders_v1_response);

#endif /* _buyercontract_get_communicationsenders_v1_response_H_ */

