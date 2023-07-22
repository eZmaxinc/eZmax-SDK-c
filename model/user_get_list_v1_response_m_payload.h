/*
 * user_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/user/getList
 */

#ifndef _user_get_list_v1_response_m_payload_H_
#define _user_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct user_get_list_v1_response_m_payload_t user_get_list_v1_response_m_payload_t;

#include "user_list_element.h"



typedef struct user_get_list_v1_response_m_payload_t {
    list_t *a_obj_user; //nonprimitive container
    int i_row_returned; //numeric
    int i_row_filtered; //numeric

} user_get_list_v1_response_m_payload_t;

user_get_list_v1_response_m_payload_t *user_get_list_v1_response_m_payload_create(
    list_t *a_obj_user,
    int i_row_returned,
    int i_row_filtered
);

void user_get_list_v1_response_m_payload_free(user_get_list_v1_response_m_payload_t *user_get_list_v1_response_m_payload);

user_get_list_v1_response_m_payload_t *user_get_list_v1_response_m_payload_parseFromJSON(cJSON *user_get_list_v1_response_m_payloadJSON);

cJSON *user_get_list_v1_response_m_payload_convertToJSON(user_get_list_v1_response_m_payload_t *user_get_list_v1_response_m_payload);

#endif /* _user_get_list_v1_response_m_payload_H_ */

