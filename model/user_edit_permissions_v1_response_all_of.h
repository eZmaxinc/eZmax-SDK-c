/*
 * user_edit_permissions_v1_response_all_of.h
 *
 * 
 */

#ifndef _user_edit_permissions_v1_response_all_of_H_
#define _user_edit_permissions_v1_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct user_edit_permissions_v1_response_all_of_t user_edit_permissions_v1_response_all_of_t;

#include "user_edit_permissions_v1_response_m_payload.h"



typedef struct user_edit_permissions_v1_response_all_of_t {
    struct user_edit_permissions_v1_response_m_payload_t *m_payload; //model

} user_edit_permissions_v1_response_all_of_t;

user_edit_permissions_v1_response_all_of_t *user_edit_permissions_v1_response_all_of_create(
    user_edit_permissions_v1_response_m_payload_t *m_payload
);

void user_edit_permissions_v1_response_all_of_free(user_edit_permissions_v1_response_all_of_t *user_edit_permissions_v1_response_all_of);

user_edit_permissions_v1_response_all_of_t *user_edit_permissions_v1_response_all_of_parseFromJSON(cJSON *user_edit_permissions_v1_response_all_ofJSON);

cJSON *user_edit_permissions_v1_response_all_of_convertToJSON(user_edit_permissions_v1_response_all_of_t *user_edit_permissions_v1_response_all_of);

#endif /* _user_edit_permissions_v1_response_all_of_H_ */

