/*
 * billingentityexternal_generate_federation_token_v1_request.h
 *
 * Request for POST /1/object/billingentityexternal/{pkiBillingentityexternalID}/generateFederationToken
 */

#ifndef _billingentityexternal_generate_federation_token_v1_request_H_
#define _billingentityexternal_generate_federation_token_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct billingentityexternal_generate_federation_token_v1_request_t billingentityexternal_generate_federation_token_v1_request_t;




typedef struct billingentityexternal_generate_federation_token_v1_request_t {
    char *fks_ezmaxcustomer_code; // string

    int _library_owned; // Is the library responsible for freeing this object?
} billingentityexternal_generate_federation_token_v1_request_t;

__attribute__((deprecated)) billingentityexternal_generate_federation_token_v1_request_t *billingentityexternal_generate_federation_token_v1_request_create(
    char *fks_ezmaxcustomer_code
);

void billingentityexternal_generate_federation_token_v1_request_free(billingentityexternal_generate_federation_token_v1_request_t *billingentityexternal_generate_federation_token_v1_request);

billingentityexternal_generate_federation_token_v1_request_t *billingentityexternal_generate_federation_token_v1_request_parseFromJSON(cJSON *billingentityexternal_generate_federation_token_v1_requestJSON);

cJSON *billingentityexternal_generate_federation_token_v1_request_convertToJSON(billingentityexternal_generate_federation_token_v1_request_t *billingentityexternal_generate_federation_token_v1_request);

#endif /* _billingentityexternal_generate_federation_token_v1_request_H_ */

