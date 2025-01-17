/*
 * apikey_generate_delegated_credentials_v1_response.h
 *
 * Response for POST /1/object/apikey/generateDelegatedCredentials
 */

#ifndef _apikey_generate_delegated_credentials_v1_response_H_
#define _apikey_generate_delegated_credentials_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct apikey_generate_delegated_credentials_v1_response_t apikey_generate_delegated_credentials_v1_response_t;

#include "apikey_generate_delegated_credentials_v1_response_m_payload.h"
#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct apikey_generate_delegated_credentials_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct apikey_generate_delegated_credentials_v1_response_m_payload_t *m_payload; //model

} apikey_generate_delegated_credentials_v1_response_t;

apikey_generate_delegated_credentials_v1_response_t *apikey_generate_delegated_credentials_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    apikey_generate_delegated_credentials_v1_response_m_payload_t *m_payload
);

void apikey_generate_delegated_credentials_v1_response_free(apikey_generate_delegated_credentials_v1_response_t *apikey_generate_delegated_credentials_v1_response);

apikey_generate_delegated_credentials_v1_response_t *apikey_generate_delegated_credentials_v1_response_parseFromJSON(cJSON *apikey_generate_delegated_credentials_v1_responseJSON);

cJSON *apikey_generate_delegated_credentials_v1_response_convertToJSON(apikey_generate_delegated_credentials_v1_response_t *apikey_generate_delegated_credentials_v1_response);

#endif /* _apikey_generate_delegated_credentials_v1_response_H_ */

