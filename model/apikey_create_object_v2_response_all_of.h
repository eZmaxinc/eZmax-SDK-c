/*
 * apikey_create_object_v2_response_all_of.h
 *
 * 
 */

#ifndef _apikey_create_object_v2_response_all_of_H_
#define _apikey_create_object_v2_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct apikey_create_object_v2_response_all_of_t apikey_create_object_v2_response_all_of_t;

#include "apikey_create_object_v2_response_m_payload.h"



typedef struct apikey_create_object_v2_response_all_of_t {
    struct apikey_create_object_v2_response_m_payload_t *m_payload; //model

} apikey_create_object_v2_response_all_of_t;

apikey_create_object_v2_response_all_of_t *apikey_create_object_v2_response_all_of_create(
    apikey_create_object_v2_response_m_payload_t *m_payload
);

void apikey_create_object_v2_response_all_of_free(apikey_create_object_v2_response_all_of_t *apikey_create_object_v2_response_all_of);

apikey_create_object_v2_response_all_of_t *apikey_create_object_v2_response_all_of_parseFromJSON(cJSON *apikey_create_object_v2_response_all_ofJSON);

cJSON *apikey_create_object_v2_response_all_of_convertToJSON(apikey_create_object_v2_response_all_of_t *apikey_create_object_v2_response_all_of);

#endif /* _apikey_create_object_v2_response_all_of_H_ */

