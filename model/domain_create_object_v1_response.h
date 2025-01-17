/*
 * domain_create_object_v1_response.h
 *
 * Response for POST /1/object/domain
 */

#ifndef _domain_create_object_v1_response_H_
#define _domain_create_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct domain_create_object_v1_response_t domain_create_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "domain_create_object_v1_response_m_payload.h"



typedef struct domain_create_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct domain_create_object_v1_response_m_payload_t *m_payload; //model

} domain_create_object_v1_response_t;

domain_create_object_v1_response_t *domain_create_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    domain_create_object_v1_response_m_payload_t *m_payload
);

void domain_create_object_v1_response_free(domain_create_object_v1_response_t *domain_create_object_v1_response);

domain_create_object_v1_response_t *domain_create_object_v1_response_parseFromJSON(cJSON *domain_create_object_v1_responseJSON);

cJSON *domain_create_object_v1_response_convertToJSON(domain_create_object_v1_response_t *domain_create_object_v1_response);

#endif /* _domain_create_object_v1_response_H_ */

