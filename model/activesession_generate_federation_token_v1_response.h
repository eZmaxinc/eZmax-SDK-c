/*
 * activesession_generate_federation_token_v1_response.h
 *
 * Response for POST /1/object/activesession/generateFederationToken
 */

#ifndef _activesession_generate_federation_token_v1_response_H_
#define _activesession_generate_federation_token_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct activesession_generate_federation_token_v1_response_t activesession_generate_federation_token_v1_response_t;

#include "activesession_generate_federation_token_v1_response_m_payload.h"
#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct activesession_generate_federation_token_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct activesession_generate_federation_token_v1_response_m_payload_t *m_payload; //model

} activesession_generate_federation_token_v1_response_t;

activesession_generate_federation_token_v1_response_t *activesession_generate_federation_token_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    activesession_generate_federation_token_v1_response_m_payload_t *m_payload
);

void activesession_generate_federation_token_v1_response_free(activesession_generate_federation_token_v1_response_t *activesession_generate_federation_token_v1_response);

activesession_generate_federation_token_v1_response_t *activesession_generate_federation_token_v1_response_parseFromJSON(cJSON *activesession_generate_federation_token_v1_responseJSON);

cJSON *activesession_generate_federation_token_v1_response_convertToJSON(activesession_generate_federation_token_v1_response_t *activesession_generate_federation_token_v1_response);

#endif /* _activesession_generate_federation_token_v1_response_H_ */

