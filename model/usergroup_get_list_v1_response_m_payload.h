/*
 * usergroup_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/usergroup/getList
 */

#ifndef _usergroup_get_list_v1_response_m_payload_H_
#define _usergroup_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroup_get_list_v1_response_m_payload_t usergroup_get_list_v1_response_m_payload_t;

#include "common_get_list_v1_response_m_payload.h"
#include "usergroup_list_element.h"



typedef struct usergroup_get_list_v1_response_m_payload_t {
    int i_row_returned; //numeric
    int i_row_filtered; //numeric
    list_t *a_obj_usergroup; //nonprimitive container

} usergroup_get_list_v1_response_m_payload_t;

usergroup_get_list_v1_response_m_payload_t *usergroup_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_usergroup
);

void usergroup_get_list_v1_response_m_payload_free(usergroup_get_list_v1_response_m_payload_t *usergroup_get_list_v1_response_m_payload);

usergroup_get_list_v1_response_m_payload_t *usergroup_get_list_v1_response_m_payload_parseFromJSON(cJSON *usergroup_get_list_v1_response_m_payloadJSON);

cJSON *usergroup_get_list_v1_response_m_payload_convertToJSON(usergroup_get_list_v1_response_m_payload_t *usergroup_get_list_v1_response_m_payload);

#endif /* _usergroup_get_list_v1_response_m_payload_H_ */

