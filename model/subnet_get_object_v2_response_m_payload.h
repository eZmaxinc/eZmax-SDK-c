/*
 * subnet_get_object_v2_response_m_payload.h
 *
 * Payload for GET /2/object/subnet/{pkiSubnetID}
 */

#ifndef _subnet_get_object_v2_response_m_payload_H_
#define _subnet_get_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct subnet_get_object_v2_response_m_payload_t subnet_get_object_v2_response_m_payload_t;

#include "subnet_response_compound.h"



typedef struct subnet_get_object_v2_response_m_payload_t {
    struct subnet_response_compound_t *obj_subnet; //model

} subnet_get_object_v2_response_m_payload_t;

subnet_get_object_v2_response_m_payload_t *subnet_get_object_v2_response_m_payload_create(
    subnet_response_compound_t *obj_subnet
);

void subnet_get_object_v2_response_m_payload_free(subnet_get_object_v2_response_m_payload_t *subnet_get_object_v2_response_m_payload);

subnet_get_object_v2_response_m_payload_t *subnet_get_object_v2_response_m_payload_parseFromJSON(cJSON *subnet_get_object_v2_response_m_payloadJSON);

cJSON *subnet_get_object_v2_response_m_payload_convertToJSON(subnet_get_object_v2_response_m_payload_t *subnet_get_object_v2_response_m_payload);

#endif /* _subnet_get_object_v2_response_m_payload_H_ */

