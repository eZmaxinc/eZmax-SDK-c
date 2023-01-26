/*
 * communication_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/communication/getList
 */

#ifndef _communication_get_list_v1_response_m_payload_H_
#define _communication_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct communication_get_list_v1_response_m_payload_t communication_get_list_v1_response_m_payload_t;

#include "communication_list_element.h"



typedef struct communication_get_list_v1_response_m_payload_t {
    list_t *a_obj_communication; //nonprimitive container
    int i_row_returned; //numeric
    int i_row_filtered; //numeric

} communication_get_list_v1_response_m_payload_t;

communication_get_list_v1_response_m_payload_t *communication_get_list_v1_response_m_payload_create(
    list_t *a_obj_communication,
    int i_row_returned,
    int i_row_filtered
);

void communication_get_list_v1_response_m_payload_free(communication_get_list_v1_response_m_payload_t *communication_get_list_v1_response_m_payload);

communication_get_list_v1_response_m_payload_t *communication_get_list_v1_response_m_payload_parseFromJSON(cJSON *communication_get_list_v1_response_m_payloadJSON);

cJSON *communication_get_list_v1_response_m_payload_convertToJSON(communication_get_list_v1_response_m_payload_t *communication_get_list_v1_response_m_payload);

#endif /* _communication_get_list_v1_response_m_payload_H_ */

