/*
 * authenticate_authenticate_v2_response_m_payload.h
 *
 * Payload for the /2/module/authenticate/authenticate API Request
 */

#ifndef _authenticate_authenticate_v2_response_m_payload_H_
#define _authenticate_authenticate_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct authenticate_authenticate_v2_response_m_payload_t authenticate_authenticate_v2_response_m_payload_t;




typedef struct authenticate_authenticate_v2_response_m_payload_t {
    char *s_authorization; // string
    char *s_secret; // string

} authenticate_authenticate_v2_response_m_payload_t;

authenticate_authenticate_v2_response_m_payload_t *authenticate_authenticate_v2_response_m_payload_create(
    char *s_authorization,
    char *s_secret
);

void authenticate_authenticate_v2_response_m_payload_free(authenticate_authenticate_v2_response_m_payload_t *authenticate_authenticate_v2_response_m_payload);

authenticate_authenticate_v2_response_m_payload_t *authenticate_authenticate_v2_response_m_payload_parseFromJSON(cJSON *authenticate_authenticate_v2_response_m_payloadJSON);

cJSON *authenticate_authenticate_v2_response_m_payload_convertToJSON(authenticate_authenticate_v2_response_m_payload_t *authenticate_authenticate_v2_response_m_payload);

#endif /* _authenticate_authenticate_v2_response_m_payload_H_ */

