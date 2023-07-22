/*
 * subnet_create_object_v1_response_m_payload.h
 *
 * Payload for POST /1/object/subnet
 */

#ifndef _subnet_create_object_v1_response_m_payload_H_
#define _subnet_create_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct subnet_create_object_v1_response_m_payload_t subnet_create_object_v1_response_m_payload_t;




typedef struct subnet_create_object_v1_response_m_payload_t {
    list_t *a_pki_subnet_id; //primitive container

} subnet_create_object_v1_response_m_payload_t;

subnet_create_object_v1_response_m_payload_t *subnet_create_object_v1_response_m_payload_create(
    list_t *a_pki_subnet_id
);

void subnet_create_object_v1_response_m_payload_free(subnet_create_object_v1_response_m_payload_t *subnet_create_object_v1_response_m_payload);

subnet_create_object_v1_response_m_payload_t *subnet_create_object_v1_response_m_payload_parseFromJSON(cJSON *subnet_create_object_v1_response_m_payloadJSON);

cJSON *subnet_create_object_v1_response_m_payload_convertToJSON(subnet_create_object_v1_response_m_payload_t *subnet_create_object_v1_response_m_payload);

#endif /* _subnet_create_object_v1_response_m_payload_H_ */

