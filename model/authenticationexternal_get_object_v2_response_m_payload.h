/*
 * authenticationexternal_get_object_v2_response_m_payload.h
 *
 * Payload for GET /2/object/authenticationexternal/{pkiAuthenticationexternalID}
 */

#ifndef _authenticationexternal_get_object_v2_response_m_payload_H_
#define _authenticationexternal_get_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct authenticationexternal_get_object_v2_response_m_payload_t authenticationexternal_get_object_v2_response_m_payload_t;

#include "authenticationexternal_response_compound.h"



typedef struct authenticationexternal_get_object_v2_response_m_payload_t {
    struct authenticationexternal_response_compound_t *obj_authenticationexternal; //model

    int _library_owned; // Is the library responsible for freeing this object?
} authenticationexternal_get_object_v2_response_m_payload_t;

__attribute__((deprecated)) authenticationexternal_get_object_v2_response_m_payload_t *authenticationexternal_get_object_v2_response_m_payload_create(
    authenticationexternal_response_compound_t *obj_authenticationexternal
);

void authenticationexternal_get_object_v2_response_m_payload_free(authenticationexternal_get_object_v2_response_m_payload_t *authenticationexternal_get_object_v2_response_m_payload);

authenticationexternal_get_object_v2_response_m_payload_t *authenticationexternal_get_object_v2_response_m_payload_parseFromJSON(cJSON *authenticationexternal_get_object_v2_response_m_payloadJSON);

cJSON *authenticationexternal_get_object_v2_response_m_payload_convertToJSON(authenticationexternal_get_object_v2_response_m_payload_t *authenticationexternal_get_object_v2_response_m_payload);

#endif /* _authenticationexternal_get_object_v2_response_m_payload_H_ */

