/*
 * apikey_regenerate_v1_response_m_payload.h
 *
 * Response for GET /1/object/apikey/{pkiApikeyID}/regenerate
 */

#ifndef _apikey_regenerate_v1_response_m_payload_H_
#define _apikey_regenerate_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct apikey_regenerate_v1_response_m_payload_t apikey_regenerate_v1_response_m_payload_t;

#include "apikey_response_compound.h"



typedef struct apikey_regenerate_v1_response_m_payload_t {
    struct apikey_response_compound_t *obj_apikey; //model

    int _library_owned; // Is the library responsible for freeing this object?
} apikey_regenerate_v1_response_m_payload_t;

__attribute__((deprecated)) apikey_regenerate_v1_response_m_payload_t *apikey_regenerate_v1_response_m_payload_create(
    apikey_response_compound_t *obj_apikey
);

void apikey_regenerate_v1_response_m_payload_free(apikey_regenerate_v1_response_m_payload_t *apikey_regenerate_v1_response_m_payload);

apikey_regenerate_v1_response_m_payload_t *apikey_regenerate_v1_response_m_payload_parseFromJSON(cJSON *apikey_regenerate_v1_response_m_payloadJSON);

cJSON *apikey_regenerate_v1_response_m_payload_convertToJSON(apikey_regenerate_v1_response_m_payload_t *apikey_regenerate_v1_response_m_payload);

#endif /* _apikey_regenerate_v1_response_m_payload_H_ */

