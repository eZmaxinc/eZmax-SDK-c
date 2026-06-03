/*
 * user_get_ezmaxcustomeruser_v1_response_m_payload.h
 *
 * Response for GET /1/object/user/getEzmaxcustomeruser
 */

#ifndef _user_get_ezmaxcustomeruser_v1_response_m_payload_H_
#define _user_get_ezmaxcustomeruser_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct user_get_ezmaxcustomeruser_v1_response_m_payload_t user_get_ezmaxcustomeruser_v1_response_m_payload_t;

#include "custom_ezmaxcustomeruser_response.h"



typedef struct user_get_ezmaxcustomeruser_v1_response_m_payload_t {
    struct custom_ezmaxcustomeruser_response_t *obj_ezmaxcustomeruser; //model

    int _library_owned; // Is the library responsible for freeing this object?
} user_get_ezmaxcustomeruser_v1_response_m_payload_t;

__attribute__((deprecated)) user_get_ezmaxcustomeruser_v1_response_m_payload_t *user_get_ezmaxcustomeruser_v1_response_m_payload_create(
    custom_ezmaxcustomeruser_response_t *obj_ezmaxcustomeruser
);

void user_get_ezmaxcustomeruser_v1_response_m_payload_free(user_get_ezmaxcustomeruser_v1_response_m_payload_t *user_get_ezmaxcustomeruser_v1_response_m_payload);

user_get_ezmaxcustomeruser_v1_response_m_payload_t *user_get_ezmaxcustomeruser_v1_response_m_payload_parseFromJSON(cJSON *user_get_ezmaxcustomeruser_v1_response_m_payloadJSON);

cJSON *user_get_ezmaxcustomeruser_v1_response_m_payload_convertToJSON(user_get_ezmaxcustomeruser_v1_response_m_payload_t *user_get_ezmaxcustomeruser_v1_response_m_payload);

#endif /* _user_get_ezmaxcustomeruser_v1_response_m_payload_H_ */

