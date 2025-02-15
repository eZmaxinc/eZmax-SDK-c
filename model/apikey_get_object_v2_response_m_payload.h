/*
 * apikey_get_object_v2_response_m_payload.h
 *
 * Payload for GET /2/object/apikey/{pkiApikeyID}
 */

#ifndef _apikey_get_object_v2_response_m_payload_H_
#define _apikey_get_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct apikey_get_object_v2_response_m_payload_t apikey_get_object_v2_response_m_payload_t;

#include "apikey_response_compound.h"



typedef struct apikey_get_object_v2_response_m_payload_t {
    struct apikey_response_compound_t *obj_apikey; //model

    int _library_owned; // Is the library responsible for freeing this object?
} apikey_get_object_v2_response_m_payload_t;

__attribute__((deprecated)) apikey_get_object_v2_response_m_payload_t *apikey_get_object_v2_response_m_payload_create(
    apikey_response_compound_t *obj_apikey
);

void apikey_get_object_v2_response_m_payload_free(apikey_get_object_v2_response_m_payload_t *apikey_get_object_v2_response_m_payload);

apikey_get_object_v2_response_m_payload_t *apikey_get_object_v2_response_m_payload_parseFromJSON(cJSON *apikey_get_object_v2_response_m_payloadJSON);

cJSON *apikey_get_object_v2_response_m_payload_convertToJSON(apikey_get_object_v2_response_m_payload_t *apikey_get_object_v2_response_m_payload);

#endif /* _apikey_get_object_v2_response_m_payload_H_ */

