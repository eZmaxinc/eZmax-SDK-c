/*
 * domain_get_object_v2_response_m_payload.h
 *
 * Payload for GET /2/object/domain/{pkiDomainID}
 */

#ifndef _domain_get_object_v2_response_m_payload_H_
#define _domain_get_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct domain_get_object_v2_response_m_payload_t domain_get_object_v2_response_m_payload_t;

#include "domain_response_compound.h"



typedef struct domain_get_object_v2_response_m_payload_t {
    struct domain_response_compound_t *obj_domain; //model

} domain_get_object_v2_response_m_payload_t;

domain_get_object_v2_response_m_payload_t *domain_get_object_v2_response_m_payload_create(
    domain_response_compound_t *obj_domain
);

void domain_get_object_v2_response_m_payload_free(domain_get_object_v2_response_m_payload_t *domain_get_object_v2_response_m_payload);

domain_get_object_v2_response_m_payload_t *domain_get_object_v2_response_m_payload_parseFromJSON(cJSON *domain_get_object_v2_response_m_payloadJSON);

cJSON *domain_get_object_v2_response_m_payload_convertToJSON(domain_get_object_v2_response_m_payload_t *domain_get_object_v2_response_m_payload);

#endif /* _domain_get_object_v2_response_m_payload_H_ */

