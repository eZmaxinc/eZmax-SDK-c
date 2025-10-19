/*
 * lead_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/lead/getList
 */

#ifndef _lead_get_list_v1_response_m_payload_H_
#define _lead_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct lead_get_list_v1_response_m_payload_t lead_get_list_v1_response_m_payload_t;

#include "lead_list_element.h"



typedef struct lead_get_list_v1_response_m_payload_t {
    int i_row_returned; //numeric
    int i_row_filtered; //numeric
    list_t *a_obj_lead; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} lead_get_list_v1_response_m_payload_t;

__attribute__((deprecated)) lead_get_list_v1_response_m_payload_t *lead_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_lead
);

void lead_get_list_v1_response_m_payload_free(lead_get_list_v1_response_m_payload_t *lead_get_list_v1_response_m_payload);

lead_get_list_v1_response_m_payload_t *lead_get_list_v1_response_m_payload_parseFromJSON(cJSON *lead_get_list_v1_response_m_payloadJSON);

cJSON *lead_get_list_v1_response_m_payload_convertToJSON(lead_get_list_v1_response_m_payload_t *lead_get_list_v1_response_m_payload);

#endif /* _lead_get_list_v1_response_m_payload_H_ */

