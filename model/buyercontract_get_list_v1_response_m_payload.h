/*
 * buyercontract_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/buyercontract/getList
 */

#ifndef _buyercontract_get_list_v1_response_m_payload_H_
#define _buyercontract_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct buyercontract_get_list_v1_response_m_payload_t buyercontract_get_list_v1_response_m_payload_t;

#include "buyercontract_list_element.h"



typedef struct buyercontract_get_list_v1_response_m_payload_t {
    int i_row_returned; //numeric
    int i_row_filtered; //numeric
    list_t *a_obj_buyercontract; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} buyercontract_get_list_v1_response_m_payload_t;

__attribute__((deprecated)) buyercontract_get_list_v1_response_m_payload_t *buyercontract_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_buyercontract
);

void buyercontract_get_list_v1_response_m_payload_free(buyercontract_get_list_v1_response_m_payload_t *buyercontract_get_list_v1_response_m_payload);

buyercontract_get_list_v1_response_m_payload_t *buyercontract_get_list_v1_response_m_payload_parseFromJSON(cJSON *buyercontract_get_list_v1_response_m_payloadJSON);

cJSON *buyercontract_get_list_v1_response_m_payload_convertToJSON(buyercontract_get_list_v1_response_m_payload_t *buyercontract_get_list_v1_response_m_payload);

#endif /* _buyercontract_get_list_v1_response_m_payload_H_ */

