/*
 * user_get_list_v1_response_all_of.h
 *
 * 
 */

#ifndef _user_get_list_v1_response_all_of_H_
#define _user_get_list_v1_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct user_get_list_v1_response_all_of_t user_get_list_v1_response_all_of_t;

#include "user_get_list_v1_response_m_payload.h"



typedef struct user_get_list_v1_response_all_of_t {
    struct user_get_list_v1_response_m_payload_t *m_payload; //model

} user_get_list_v1_response_all_of_t;

user_get_list_v1_response_all_of_t *user_get_list_v1_response_all_of_create(
    user_get_list_v1_response_m_payload_t *m_payload
);

void user_get_list_v1_response_all_of_free(user_get_list_v1_response_all_of_t *user_get_list_v1_response_all_of);

user_get_list_v1_response_all_of_t *user_get_list_v1_response_all_of_parseFromJSON(cJSON *user_get_list_v1_response_all_ofJSON);

cJSON *user_get_list_v1_response_all_of_convertToJSON(user_get_list_v1_response_all_of_t *user_get_list_v1_response_all_of);

#endif /* _user_get_list_v1_response_all_of_H_ */

