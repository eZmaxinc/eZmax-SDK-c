/*
 * cors_create_object_v1_response_all_of.h
 *
 * 
 */

#ifndef _cors_create_object_v1_response_all_of_H_
#define _cors_create_object_v1_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cors_create_object_v1_response_all_of_t cors_create_object_v1_response_all_of_t;

#include "cors_create_object_v1_response_m_payload.h"



typedef struct cors_create_object_v1_response_all_of_t {
    struct cors_create_object_v1_response_m_payload_t *m_payload; //model

} cors_create_object_v1_response_all_of_t;

cors_create_object_v1_response_all_of_t *cors_create_object_v1_response_all_of_create(
    cors_create_object_v1_response_m_payload_t *m_payload
);

void cors_create_object_v1_response_all_of_free(cors_create_object_v1_response_all_of_t *cors_create_object_v1_response_all_of);

cors_create_object_v1_response_all_of_t *cors_create_object_v1_response_all_of_parseFromJSON(cJSON *cors_create_object_v1_response_all_ofJSON);

cJSON *cors_create_object_v1_response_all_of_convertToJSON(cors_create_object_v1_response_all_of_t *cors_create_object_v1_response_all_of);

#endif /* _cors_create_object_v1_response_all_of_H_ */

