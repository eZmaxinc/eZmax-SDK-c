/*
 * usergroupexternal_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/usergroupexternal/getList
 */

#ifndef _usergroupexternal_get_list_v1_response_m_payload_H_
#define _usergroupexternal_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroupexternal_get_list_v1_response_m_payload_t usergroupexternal_get_list_v1_response_m_payload_t;

#include "common_get_list_v1_response_m_payload.h"
#include "usergroupexternal_list_element.h"



typedef struct usergroupexternal_get_list_v1_response_m_payload_t {
    int i_row_returned; //numeric
    int i_row_filtered; //numeric
    list_t *a_obj_usergroupexternal; //nonprimitive container

} usergroupexternal_get_list_v1_response_m_payload_t;

usergroupexternal_get_list_v1_response_m_payload_t *usergroupexternal_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_usergroupexternal
);

void usergroupexternal_get_list_v1_response_m_payload_free(usergroupexternal_get_list_v1_response_m_payload_t *usergroupexternal_get_list_v1_response_m_payload);

usergroupexternal_get_list_v1_response_m_payload_t *usergroupexternal_get_list_v1_response_m_payload_parseFromJSON(cJSON *usergroupexternal_get_list_v1_response_m_payloadJSON);

cJSON *usergroupexternal_get_list_v1_response_m_payload_convertToJSON(usergroupexternal_get_list_v1_response_m_payload_t *usergroupexternal_get_list_v1_response_m_payload);

#endif /* _usergroupexternal_get_list_v1_response_m_payload_H_ */

