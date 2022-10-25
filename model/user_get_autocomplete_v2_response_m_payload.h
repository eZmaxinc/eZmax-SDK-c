/*
 * user_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/user/getAutocomplete
 */

#ifndef _user_get_autocomplete_v2_response_m_payload_H_
#define _user_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct user_get_autocomplete_v2_response_m_payload_t user_get_autocomplete_v2_response_m_payload_t;

#include "user_autocomplete_element_response.h"



typedef struct user_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_user; //nonprimitive container

} user_get_autocomplete_v2_response_m_payload_t;

user_get_autocomplete_v2_response_m_payload_t *user_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_user
);

void user_get_autocomplete_v2_response_m_payload_free(user_get_autocomplete_v2_response_m_payload_t *user_get_autocomplete_v2_response_m_payload);

user_get_autocomplete_v2_response_m_payload_t *user_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *user_get_autocomplete_v2_response_m_payloadJSON);

cJSON *user_get_autocomplete_v2_response_m_payload_convertToJSON(user_get_autocomplete_v2_response_m_payload_t *user_get_autocomplete_v2_response_m_payload);

#endif /* _user_get_autocomplete_v2_response_m_payload_H_ */

