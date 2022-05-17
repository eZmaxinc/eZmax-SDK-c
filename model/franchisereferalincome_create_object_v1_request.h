/*
 * franchisereferalincome_create_object_v1_request.h
 *
 * Request for POST /1/object/franchisereferalincome
 */

#ifndef _franchisereferalincome_create_object_v1_request_H_
#define _franchisereferalincome_create_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct franchisereferalincome_create_object_v1_request_t franchisereferalincome_create_object_v1_request_t;

#include "franchisereferalincome_request.h"
#include "franchisereferalincome_request_compound.h"



typedef struct franchisereferalincome_create_object_v1_request_t {
    struct franchisereferalincome_request_t *obj_franchisereferalincome; //model
    struct franchisereferalincome_request_compound_t *obj_franchisereferalincome_compound; //model

} franchisereferalincome_create_object_v1_request_t;

franchisereferalincome_create_object_v1_request_t *franchisereferalincome_create_object_v1_request_create(
    franchisereferalincome_request_t *obj_franchisereferalincome,
    franchisereferalincome_request_compound_t *obj_franchisereferalincome_compound
);

void franchisereferalincome_create_object_v1_request_free(franchisereferalincome_create_object_v1_request_t *franchisereferalincome_create_object_v1_request);

franchisereferalincome_create_object_v1_request_t *franchisereferalincome_create_object_v1_request_parseFromJSON(cJSON *franchisereferalincome_create_object_v1_requestJSON);

cJSON *franchisereferalincome_create_object_v1_request_convertToJSON(franchisereferalincome_create_object_v1_request_t *franchisereferalincome_create_object_v1_request);

#endif /* _franchisereferalincome_create_object_v1_request_H_ */

