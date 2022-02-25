/*
 * apikey_create_object_v2_response_m_payload.h
 *
 * Payload for the /2/object/apikey/createObject API Request
 */

#ifndef _apikey_create_object_v2_response_m_payload_H_
#define _apikey_create_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct apikey_create_object_v2_response_m_payload_t apikey_create_object_v2_response_m_payload_t;

#include "apikey_response.h"



typedef struct apikey_create_object_v2_response_m_payload_t {
    list_t *a_obj_apikey; //nonprimitive container

} apikey_create_object_v2_response_m_payload_t;

apikey_create_object_v2_response_m_payload_t *apikey_create_object_v2_response_m_payload_create(
    list_t *a_obj_apikey
);

void apikey_create_object_v2_response_m_payload_free(apikey_create_object_v2_response_m_payload_t *apikey_create_object_v2_response_m_payload);

apikey_create_object_v2_response_m_payload_t *apikey_create_object_v2_response_m_payload_parseFromJSON(cJSON *apikey_create_object_v2_response_m_payloadJSON);

cJSON *apikey_create_object_v2_response_m_payload_convertToJSON(apikey_create_object_v2_response_m_payload_t *apikey_create_object_v2_response_m_payload);

#endif /* _apikey_create_object_v2_response_m_payload_H_ */

