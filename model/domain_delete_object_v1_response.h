/*
 * domain_delete_object_v1_response.h
 *
 * Response for DELETE /1/object/domain/{pkiDomainID}
 */

#ifndef _domain_delete_object_v1_response_H_
#define _domain_delete_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct domain_delete_object_v1_response_t domain_delete_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct domain_delete_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} domain_delete_object_v1_response_t;

domain_delete_object_v1_response_t *domain_delete_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void domain_delete_object_v1_response_free(domain_delete_object_v1_response_t *domain_delete_object_v1_response);

domain_delete_object_v1_response_t *domain_delete_object_v1_response_parseFromJSON(cJSON *domain_delete_object_v1_responseJSON);

cJSON *domain_delete_object_v1_response_convertToJSON(domain_delete_object_v1_response_t *domain_delete_object_v1_response);

#endif /* _domain_delete_object_v1_response_H_ */

