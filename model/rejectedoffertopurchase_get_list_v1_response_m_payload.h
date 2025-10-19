/*
 * rejectedoffertopurchase_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/rejectedoffertopurchase/getList
 */

#ifndef _rejectedoffertopurchase_get_list_v1_response_m_payload_H_
#define _rejectedoffertopurchase_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct rejectedoffertopurchase_get_list_v1_response_m_payload_t rejectedoffertopurchase_get_list_v1_response_m_payload_t;

#include "rejectedoffertopurchase_list_element.h"



typedef struct rejectedoffertopurchase_get_list_v1_response_m_payload_t {
    int i_row_returned; //numeric
    int i_row_filtered; //numeric
    list_t *a_obj_rejectedoffertopurchase; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} rejectedoffertopurchase_get_list_v1_response_m_payload_t;

__attribute__((deprecated)) rejectedoffertopurchase_get_list_v1_response_m_payload_t *rejectedoffertopurchase_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_rejectedoffertopurchase
);

void rejectedoffertopurchase_get_list_v1_response_m_payload_free(rejectedoffertopurchase_get_list_v1_response_m_payload_t *rejectedoffertopurchase_get_list_v1_response_m_payload);

rejectedoffertopurchase_get_list_v1_response_m_payload_t *rejectedoffertopurchase_get_list_v1_response_m_payload_parseFromJSON(cJSON *rejectedoffertopurchase_get_list_v1_response_m_payloadJSON);

cJSON *rejectedoffertopurchase_get_list_v1_response_m_payload_convertToJSON(rejectedoffertopurchase_get_list_v1_response_m_payload_t *rejectedoffertopurchase_get_list_v1_response_m_payload);

#endif /* _rejectedoffertopurchase_get_list_v1_response_m_payload_H_ */

