/*
 * usergroup_get_list_v1_response_m_payload_all_of.h
 *
 * 
 */

#ifndef _usergroup_get_list_v1_response_m_payload_all_of_H_
#define _usergroup_get_list_v1_response_m_payload_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroup_get_list_v1_response_m_payload_all_of_t usergroup_get_list_v1_response_m_payload_all_of_t;

#include "usergroup_list_element.h"



typedef struct usergroup_get_list_v1_response_m_payload_all_of_t {
    list_t *a_obj_usergroup; //nonprimitive container

} usergroup_get_list_v1_response_m_payload_all_of_t;

usergroup_get_list_v1_response_m_payload_all_of_t *usergroup_get_list_v1_response_m_payload_all_of_create(
    list_t *a_obj_usergroup
);

void usergroup_get_list_v1_response_m_payload_all_of_free(usergroup_get_list_v1_response_m_payload_all_of_t *usergroup_get_list_v1_response_m_payload_all_of);

usergroup_get_list_v1_response_m_payload_all_of_t *usergroup_get_list_v1_response_m_payload_all_of_parseFromJSON(cJSON *usergroup_get_list_v1_response_m_payload_all_ofJSON);

cJSON *usergroup_get_list_v1_response_m_payload_all_of_convertToJSON(usergroup_get_list_v1_response_m_payload_all_of_t *usergroup_get_list_v1_response_m_payload_all_of);

#endif /* _usergroup_get_list_v1_response_m_payload_all_of_H_ */

