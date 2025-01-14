/*
 * domain_get_object_v2_response.h
 *
 * Response for GET /2/object/domain/{pkiDomainID}
 */

#ifndef _domain_get_object_v2_response_H_
#define _domain_get_object_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct domain_get_object_v2_response_t domain_get_object_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "domain_get_object_v2_response_m_payload.h"



typedef struct domain_get_object_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct domain_get_object_v2_response_m_payload_t *m_payload; //model

} domain_get_object_v2_response_t;

domain_get_object_v2_response_t *domain_get_object_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    domain_get_object_v2_response_m_payload_t *m_payload
);

void domain_get_object_v2_response_free(domain_get_object_v2_response_t *domain_get_object_v2_response);

domain_get_object_v2_response_t *domain_get_object_v2_response_parseFromJSON(cJSON *domain_get_object_v2_responseJSON);

cJSON *domain_get_object_v2_response_convertToJSON(domain_get_object_v2_response_t *domain_get_object_v2_response);

#endif /* _domain_get_object_v2_response_H_ */

