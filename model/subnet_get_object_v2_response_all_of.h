/*
 * subnet_get_object_v2_response_all_of.h
 *
 * 
 */

#ifndef _subnet_get_object_v2_response_all_of_H_
#define _subnet_get_object_v2_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct subnet_get_object_v2_response_all_of_t subnet_get_object_v2_response_all_of_t;

#include "subnet_get_object_v2_response_m_payload.h"



typedef struct subnet_get_object_v2_response_all_of_t {
    struct subnet_get_object_v2_response_m_payload_t *m_payload; //model

} subnet_get_object_v2_response_all_of_t;

subnet_get_object_v2_response_all_of_t *subnet_get_object_v2_response_all_of_create(
    subnet_get_object_v2_response_m_payload_t *m_payload
);

void subnet_get_object_v2_response_all_of_free(subnet_get_object_v2_response_all_of_t *subnet_get_object_v2_response_all_of);

subnet_get_object_v2_response_all_of_t *subnet_get_object_v2_response_all_of_parseFromJSON(cJSON *subnet_get_object_v2_response_all_ofJSON);

cJSON *subnet_get_object_v2_response_all_of_convertToJSON(subnet_get_object_v2_response_all_of_t *subnet_get_object_v2_response_all_of);

#endif /* _subnet_get_object_v2_response_all_of_H_ */

