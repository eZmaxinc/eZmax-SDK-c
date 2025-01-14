/*
 * apikey_generate_delegated_credentials_v1_response_m_payload.h
 *
 * Payload for POST /1/object/apikey/generateDelegatedCredentials
 */

#ifndef _apikey_generate_delegated_credentials_v1_response_m_payload_H_
#define _apikey_generate_delegated_credentials_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct apikey_generate_delegated_credentials_v1_response_m_payload_t apikey_generate_delegated_credentials_v1_response_m_payload_t;

#include "custom_apikey.h"



typedef struct apikey_generate_delegated_credentials_v1_response_m_payload_t {
    struct custom_apikey_t *obj_apikey; //model

} apikey_generate_delegated_credentials_v1_response_m_payload_t;

apikey_generate_delegated_credentials_v1_response_m_payload_t *apikey_generate_delegated_credentials_v1_response_m_payload_create(
    custom_apikey_t *obj_apikey
);

void apikey_generate_delegated_credentials_v1_response_m_payload_free(apikey_generate_delegated_credentials_v1_response_m_payload_t *apikey_generate_delegated_credentials_v1_response_m_payload);

apikey_generate_delegated_credentials_v1_response_m_payload_t *apikey_generate_delegated_credentials_v1_response_m_payload_parseFromJSON(cJSON *apikey_generate_delegated_credentials_v1_response_m_payloadJSON);

cJSON *apikey_generate_delegated_credentials_v1_response_m_payload_convertToJSON(apikey_generate_delegated_credentials_v1_response_m_payload_t *apikey_generate_delegated_credentials_v1_response_m_payload);

#endif /* _apikey_generate_delegated_credentials_v1_response_m_payload_H_ */

