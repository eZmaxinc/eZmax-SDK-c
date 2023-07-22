/*
 * user_get_list_v1_response_m_payload_all_of.h
 *
 * 
 */

#ifndef _user_get_list_v1_response_m_payload_all_of_H_
#define _user_get_list_v1_response_m_payload_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct user_get_list_v1_response_m_payload_all_of_t user_get_list_v1_response_m_payload_all_of_t;

#include "user_list_element.h"



typedef struct user_get_list_v1_response_m_payload_all_of_t {
    list_t *a_obj_user; //nonprimitive container

} user_get_list_v1_response_m_payload_all_of_t;

user_get_list_v1_response_m_payload_all_of_t *user_get_list_v1_response_m_payload_all_of_create(
    list_t *a_obj_user
);

void user_get_list_v1_response_m_payload_all_of_free(user_get_list_v1_response_m_payload_all_of_t *user_get_list_v1_response_m_payload_all_of);

user_get_list_v1_response_m_payload_all_of_t *user_get_list_v1_response_m_payload_all_of_parseFromJSON(cJSON *user_get_list_v1_response_m_payload_all_ofJSON);

cJSON *user_get_list_v1_response_m_payload_all_of_convertToJSON(user_get_list_v1_response_m_payload_all_of_t *user_get_list_v1_response_m_payload_all_of);

#endif /* _user_get_list_v1_response_m_payload_all_of_H_ */

