/*
 * activesession_generate_federation_token_v1_request.h
 *
 * Request for POST /1/object/activesession/generateFederationToken
 */

#ifndef _activesession_generate_federation_token_v1_request_H_
#define _activesession_generate_federation_token_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct activesession_generate_federation_token_v1_request_t activesession_generate_federation_token_v1_request_t;




typedef struct activesession_generate_federation_token_v1_request_t {
    char *fks_ezmaxcustomer_code; // string

} activesession_generate_federation_token_v1_request_t;

activesession_generate_federation_token_v1_request_t *activesession_generate_federation_token_v1_request_create(
    char *fks_ezmaxcustomer_code
);

void activesession_generate_federation_token_v1_request_free(activesession_generate_federation_token_v1_request_t *activesession_generate_federation_token_v1_request);

activesession_generate_federation_token_v1_request_t *activesession_generate_federation_token_v1_request_parseFromJSON(cJSON *activesession_generate_federation_token_v1_requestJSON);

cJSON *activesession_generate_federation_token_v1_request_convertToJSON(activesession_generate_federation_token_v1_request_t *activesession_generate_federation_token_v1_request);

#endif /* _activesession_generate_federation_token_v1_request_H_ */

