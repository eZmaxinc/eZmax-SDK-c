/*
 * domain_create_object_v1_request.h
 *
 * Request for POST /1/object/domain
 */

#ifndef _domain_create_object_v1_request_H_
#define _domain_create_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct domain_create_object_v1_request_t domain_create_object_v1_request_t;

#include "domain_request_compound.h"



typedef struct domain_create_object_v1_request_t {
    list_t *a_obj_domain; //nonprimitive container

} domain_create_object_v1_request_t;

domain_create_object_v1_request_t *domain_create_object_v1_request_create(
    list_t *a_obj_domain
);

void domain_create_object_v1_request_free(domain_create_object_v1_request_t *domain_create_object_v1_request);

domain_create_object_v1_request_t *domain_create_object_v1_request_parseFromJSON(cJSON *domain_create_object_v1_requestJSON);

cJSON *domain_create_object_v1_request_convertToJSON(domain_create_object_v1_request_t *domain_create_object_v1_request);

#endif /* _domain_create_object_v1_request_H_ */

