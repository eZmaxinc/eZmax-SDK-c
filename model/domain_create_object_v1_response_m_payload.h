/*
 * domain_create_object_v1_response_m_payload.h
 *
 * Payload for POST /1/object/domain
 */

#ifndef _domain_create_object_v1_response_m_payload_H_
#define _domain_create_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct domain_create_object_v1_response_m_payload_t domain_create_object_v1_response_m_payload_t;




typedef struct domain_create_object_v1_response_m_payload_t {
    list_t *a_pki_domain_id; //primitive container

} domain_create_object_v1_response_m_payload_t;

domain_create_object_v1_response_m_payload_t *domain_create_object_v1_response_m_payload_create(
    list_t *a_pki_domain_id
);

void domain_create_object_v1_response_m_payload_free(domain_create_object_v1_response_m_payload_t *domain_create_object_v1_response_m_payload);

domain_create_object_v1_response_m_payload_t *domain_create_object_v1_response_m_payload_parseFromJSON(cJSON *domain_create_object_v1_response_m_payloadJSON);

cJSON *domain_create_object_v1_response_m_payload_convertToJSON(domain_create_object_v1_response_m_payload_t *domain_create_object_v1_response_m_payload);

#endif /* _domain_create_object_v1_response_m_payload_H_ */

