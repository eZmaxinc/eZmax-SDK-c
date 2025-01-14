/*
 * activesession_generate_federation_token_v1_response_m_payload.h
 *
 * Payload for POST /1/object/activesession/generateFederationToken
 */

#ifndef _activesession_generate_federation_token_v1_response_m_payload_H_
#define _activesession_generate_federation_token_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct activesession_generate_federation_token_v1_response_m_payload_t activesession_generate_federation_token_v1_response_m_payload_t;

#include "custom_apikeyfederation.h"



typedef struct activesession_generate_federation_token_v1_response_m_payload_t {
    struct custom_apikeyfederation_t *obj_apikeyfederation; //model
    char *s_ezmaxcustomercode_url; // string

} activesession_generate_federation_token_v1_response_m_payload_t;

activesession_generate_federation_token_v1_response_m_payload_t *activesession_generate_federation_token_v1_response_m_payload_create(
    custom_apikeyfederation_t *obj_apikeyfederation,
    char *s_ezmaxcustomercode_url
);

void activesession_generate_federation_token_v1_response_m_payload_free(activesession_generate_federation_token_v1_response_m_payload_t *activesession_generate_federation_token_v1_response_m_payload);

activesession_generate_federation_token_v1_response_m_payload_t *activesession_generate_federation_token_v1_response_m_payload_parseFromJSON(cJSON *activesession_generate_federation_token_v1_response_m_payloadJSON);

cJSON *activesession_generate_federation_token_v1_response_m_payload_convertToJSON(activesession_generate_federation_token_v1_response_m_payload_t *activesession_generate_federation_token_v1_response_m_payload);

#endif /* _activesession_generate_federation_token_v1_response_m_payload_H_ */

