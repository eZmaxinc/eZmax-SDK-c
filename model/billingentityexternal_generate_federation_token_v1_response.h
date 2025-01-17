/*
 * billingentityexternal_generate_federation_token_v1_response.h
 *
 * Response for POST /1/object/billingentityexternal/{pkiBillingentityexternalID}/generateFederationToken
 */

#ifndef _billingentityexternal_generate_federation_token_v1_response_H_
#define _billingentityexternal_generate_federation_token_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct billingentityexternal_generate_federation_token_v1_response_t billingentityexternal_generate_federation_token_v1_response_t;

#include "billingentityexternal_generate_federation_token_v1_response_m_payload.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct billingentityexternal_generate_federation_token_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct billingentityexternal_generate_federation_token_v1_response_m_payload_t *m_payload; //model

} billingentityexternal_generate_federation_token_v1_response_t;

billingentityexternal_generate_federation_token_v1_response_t *billingentityexternal_generate_federation_token_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    billingentityexternal_generate_federation_token_v1_response_m_payload_t *m_payload
);

void billingentityexternal_generate_federation_token_v1_response_free(billingentityexternal_generate_federation_token_v1_response_t *billingentityexternal_generate_federation_token_v1_response);

billingentityexternal_generate_federation_token_v1_response_t *billingentityexternal_generate_federation_token_v1_response_parseFromJSON(cJSON *billingentityexternal_generate_federation_token_v1_responseJSON);

cJSON *billingentityexternal_generate_federation_token_v1_response_convertToJSON(billingentityexternal_generate_federation_token_v1_response_t *billingentityexternal_generate_federation_token_v1_response);

#endif /* _billingentityexternal_generate_federation_token_v1_response_H_ */

