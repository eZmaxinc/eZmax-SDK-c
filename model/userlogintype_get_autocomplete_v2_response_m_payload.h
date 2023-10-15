/*
 * userlogintype_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/userlogintype/getAutocomplete
 */

#ifndef _userlogintype_get_autocomplete_v2_response_m_payload_H_
#define _userlogintype_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct userlogintype_get_autocomplete_v2_response_m_payload_t userlogintype_get_autocomplete_v2_response_m_payload_t;

#include "userlogintype_autocomplete_element_response.h"



typedef struct userlogintype_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_userlogintype; //nonprimitive container

} userlogintype_get_autocomplete_v2_response_m_payload_t;

userlogintype_get_autocomplete_v2_response_m_payload_t *userlogintype_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_userlogintype
);

void userlogintype_get_autocomplete_v2_response_m_payload_free(userlogintype_get_autocomplete_v2_response_m_payload_t *userlogintype_get_autocomplete_v2_response_m_payload);

userlogintype_get_autocomplete_v2_response_m_payload_t *userlogintype_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *userlogintype_get_autocomplete_v2_response_m_payloadJSON);

cJSON *userlogintype_get_autocomplete_v2_response_m_payload_convertToJSON(userlogintype_get_autocomplete_v2_response_m_payload_t *userlogintype_get_autocomplete_v2_response_m_payload);

#endif /* _userlogintype_get_autocomplete_v2_response_m_payload_H_ */

