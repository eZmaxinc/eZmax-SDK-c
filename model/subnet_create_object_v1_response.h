/*
 * subnet_create_object_v1_response.h
 *
 * Response for POST /1/object/subnet
 */

#ifndef _subnet_create_object_v1_response_H_
#define _subnet_create_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct subnet_create_object_v1_response_t subnet_create_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "subnet_create_object_v1_response_m_payload.h"



typedef struct subnet_create_object_v1_response_t {
    struct subnet_create_object_v1_response_m_payload_t *m_payload; //model
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} subnet_create_object_v1_response_t;

subnet_create_object_v1_response_t *subnet_create_object_v1_response_create(
    subnet_create_object_v1_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void subnet_create_object_v1_response_free(subnet_create_object_v1_response_t *subnet_create_object_v1_response);

subnet_create_object_v1_response_t *subnet_create_object_v1_response_parseFromJSON(cJSON *subnet_create_object_v1_responseJSON);

cJSON *subnet_create_object_v1_response_convertToJSON(subnet_create_object_v1_response_t *subnet_create_object_v1_response);

#endif /* _subnet_create_object_v1_response_H_ */

