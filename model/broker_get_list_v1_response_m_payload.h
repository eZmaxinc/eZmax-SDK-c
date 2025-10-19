/*
 * broker_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/broker/getList
 */

#ifndef _broker_get_list_v1_response_m_payload_H_
#define _broker_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct broker_get_list_v1_response_m_payload_t broker_get_list_v1_response_m_payload_t;

#include "broker_list_element.h"



typedef struct broker_get_list_v1_response_m_payload_t {
    int i_row_returned; //numeric
    int i_row_filtered; //numeric
    list_t *a_obj_broker; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} broker_get_list_v1_response_m_payload_t;

__attribute__((deprecated)) broker_get_list_v1_response_m_payload_t *broker_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_broker
);

void broker_get_list_v1_response_m_payload_free(broker_get_list_v1_response_m_payload_t *broker_get_list_v1_response_m_payload);

broker_get_list_v1_response_m_payload_t *broker_get_list_v1_response_m_payload_parseFromJSON(cJSON *broker_get_list_v1_response_m_payloadJSON);

cJSON *broker_get_list_v1_response_m_payload_convertToJSON(broker_get_list_v1_response_m_payload_t *broker_get_list_v1_response_m_payload);

#endif /* _broker_get_list_v1_response_m_payload_H_ */

