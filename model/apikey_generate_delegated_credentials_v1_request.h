/*
 * apikey_generate_delegated_credentials_v1_request.h
 *
 * Request for POST /1/object/apikey/generateDelegatedCredentials
 */

#ifndef _apikey_generate_delegated_credentials_v1_request_H_
#define _apikey_generate_delegated_credentials_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct apikey_generate_delegated_credentials_v1_request_t apikey_generate_delegated_credentials_v1_request_t;




typedef struct apikey_generate_delegated_credentials_v1_request_t {
    int i_expiration_minutes; //numeric

} apikey_generate_delegated_credentials_v1_request_t;

apikey_generate_delegated_credentials_v1_request_t *apikey_generate_delegated_credentials_v1_request_create(
    int i_expiration_minutes
);

void apikey_generate_delegated_credentials_v1_request_free(apikey_generate_delegated_credentials_v1_request_t *apikey_generate_delegated_credentials_v1_request);

apikey_generate_delegated_credentials_v1_request_t *apikey_generate_delegated_credentials_v1_request_parseFromJSON(cJSON *apikey_generate_delegated_credentials_v1_requestJSON);

cJSON *apikey_generate_delegated_credentials_v1_request_convertToJSON(apikey_generate_delegated_credentials_v1_request_t *apikey_generate_delegated_credentials_v1_request);

#endif /* _apikey_generate_delegated_credentials_v1_request_H_ */

