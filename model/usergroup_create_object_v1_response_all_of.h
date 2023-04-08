/*
 * usergroup_create_object_v1_response_all_of.h
 *
 * 
 */

#ifndef _usergroup_create_object_v1_response_all_of_H_
#define _usergroup_create_object_v1_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroup_create_object_v1_response_all_of_t usergroup_create_object_v1_response_all_of_t;

#include "usergroup_create_object_v1_response_m_payload.h"



typedef struct usergroup_create_object_v1_response_all_of_t {
    struct usergroup_create_object_v1_response_m_payload_t *m_payload; //model

} usergroup_create_object_v1_response_all_of_t;

usergroup_create_object_v1_response_all_of_t *usergroup_create_object_v1_response_all_of_create(
    usergroup_create_object_v1_response_m_payload_t *m_payload
);

void usergroup_create_object_v1_response_all_of_free(usergroup_create_object_v1_response_all_of_t *usergroup_create_object_v1_response_all_of);

usergroup_create_object_v1_response_all_of_t *usergroup_create_object_v1_response_all_of_parseFromJSON(cJSON *usergroup_create_object_v1_response_all_ofJSON);

cJSON *usergroup_create_object_v1_response_all_of_convertToJSON(usergroup_create_object_v1_response_all_of_t *usergroup_create_object_v1_response_all_of);

#endif /* _usergroup_create_object_v1_response_all_of_H_ */

