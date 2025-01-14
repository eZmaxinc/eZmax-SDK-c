/*
 * authenticationexternal_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/authenticationexternal/getList
 */

#ifndef _authenticationexternal_get_list_v1_response_m_payload_H_
#define _authenticationexternal_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct authenticationexternal_get_list_v1_response_m_payload_t authenticationexternal_get_list_v1_response_m_payload_t;

#include "authenticationexternal_list_element.h"



typedef struct authenticationexternal_get_list_v1_response_m_payload_t {
    int i_row_returned; //numeric
    int i_row_filtered; //numeric
    list_t *a_obj_authenticationexternal; //nonprimitive container

} authenticationexternal_get_list_v1_response_m_payload_t;

authenticationexternal_get_list_v1_response_m_payload_t *authenticationexternal_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_authenticationexternal
);

void authenticationexternal_get_list_v1_response_m_payload_free(authenticationexternal_get_list_v1_response_m_payload_t *authenticationexternal_get_list_v1_response_m_payload);

authenticationexternal_get_list_v1_response_m_payload_t *authenticationexternal_get_list_v1_response_m_payload_parseFromJSON(cJSON *authenticationexternal_get_list_v1_response_m_payloadJSON);

cJSON *authenticationexternal_get_list_v1_response_m_payload_convertToJSON(authenticationexternal_get_list_v1_response_m_payload_t *authenticationexternal_get_list_v1_response_m_payload);

#endif /* _authenticationexternal_get_list_v1_response_m_payload_H_ */

