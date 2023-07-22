/*
 * subnet_get_object_v2_response.h
 *
 * Response for GET /2/object/subnet/{pkiSubnetID}
 */

#ifndef _subnet_get_object_v2_response_H_
#define _subnet_get_object_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct subnet_get_object_v2_response_t subnet_get_object_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "subnet_get_object_v2_response_m_payload.h"



typedef struct subnet_get_object_v2_response_t {
    struct subnet_get_object_v2_response_m_payload_t *m_payload; //model
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} subnet_get_object_v2_response_t;

subnet_get_object_v2_response_t *subnet_get_object_v2_response_create(
    subnet_get_object_v2_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void subnet_get_object_v2_response_free(subnet_get_object_v2_response_t *subnet_get_object_v2_response);

subnet_get_object_v2_response_t *subnet_get_object_v2_response_parseFromJSON(cJSON *subnet_get_object_v2_responseJSON);

cJSON *subnet_get_object_v2_response_convertToJSON(subnet_get_object_v2_response_t *subnet_get_object_v2_response);

#endif /* _subnet_get_object_v2_response_H_ */

