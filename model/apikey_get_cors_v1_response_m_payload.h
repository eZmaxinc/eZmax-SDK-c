/*
 * apikey_get_cors_v1_response_m_payload.h
 *
 * Response for GET /1/object/apikey/{pkiApikeyID}/getCors
 */

#ifndef _apikey_get_cors_v1_response_m_payload_H_
#define _apikey_get_cors_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct apikey_get_cors_v1_response_m_payload_t apikey_get_cors_v1_response_m_payload_t;

#include "cors_response_compound.h"



typedef struct apikey_get_cors_v1_response_m_payload_t {
    list_t *a_obj_cors; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} apikey_get_cors_v1_response_m_payload_t;

__attribute__((deprecated)) apikey_get_cors_v1_response_m_payload_t *apikey_get_cors_v1_response_m_payload_create(
    list_t *a_obj_cors
);

void apikey_get_cors_v1_response_m_payload_free(apikey_get_cors_v1_response_m_payload_t *apikey_get_cors_v1_response_m_payload);

apikey_get_cors_v1_response_m_payload_t *apikey_get_cors_v1_response_m_payload_parseFromJSON(cJSON *apikey_get_cors_v1_response_m_payloadJSON);

cJSON *apikey_get_cors_v1_response_m_payload_convertToJSON(apikey_get_cors_v1_response_m_payload_t *apikey_get_cors_v1_response_m_payload);

#endif /* _apikey_get_cors_v1_response_m_payload_H_ */

