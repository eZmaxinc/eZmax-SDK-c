/*
 * userstaged_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/userstaged/getList
 */

#ifndef _userstaged_get_list_v1_response_m_payload_H_
#define _userstaged_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct userstaged_get_list_v1_response_m_payload_t userstaged_get_list_v1_response_m_payload_t;

#include "userstaged_list_element.h"



typedef struct userstaged_get_list_v1_response_m_payload_t {
    list_t *a_obj_userstaged; //nonprimitive container
    int i_row_returned; //numeric
    int i_row_filtered; //numeric

} userstaged_get_list_v1_response_m_payload_t;

userstaged_get_list_v1_response_m_payload_t *userstaged_get_list_v1_response_m_payload_create(
    list_t *a_obj_userstaged,
    int i_row_returned,
    int i_row_filtered
);

void userstaged_get_list_v1_response_m_payload_free(userstaged_get_list_v1_response_m_payload_t *userstaged_get_list_v1_response_m_payload);

userstaged_get_list_v1_response_m_payload_t *userstaged_get_list_v1_response_m_payload_parseFromJSON(cJSON *userstaged_get_list_v1_response_m_payloadJSON);

cJSON *userstaged_get_list_v1_response_m_payload_convertToJSON(userstaged_get_list_v1_response_m_payload_t *userstaged_get_list_v1_response_m_payload);

#endif /* _userstaged_get_list_v1_response_m_payload_H_ */

