/*
 * subnet_create_object_v1_response_all_of.h
 *
 * 
 */

#ifndef _subnet_create_object_v1_response_all_of_H_
#define _subnet_create_object_v1_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct subnet_create_object_v1_response_all_of_t subnet_create_object_v1_response_all_of_t;

#include "subnet_create_object_v1_response_m_payload.h"



typedef struct subnet_create_object_v1_response_all_of_t {
    struct subnet_create_object_v1_response_m_payload_t *m_payload; //model

} subnet_create_object_v1_response_all_of_t;

subnet_create_object_v1_response_all_of_t *subnet_create_object_v1_response_all_of_create(
    subnet_create_object_v1_response_m_payload_t *m_payload
);

void subnet_create_object_v1_response_all_of_free(subnet_create_object_v1_response_all_of_t *subnet_create_object_v1_response_all_of);

subnet_create_object_v1_response_all_of_t *subnet_create_object_v1_response_all_of_parseFromJSON(cJSON *subnet_create_object_v1_response_all_ofJSON);

cJSON *subnet_create_object_v1_response_all_of_convertToJSON(subnet_create_object_v1_response_all_of_t *subnet_create_object_v1_response_all_of);

#endif /* _subnet_create_object_v1_response_all_of_H_ */

