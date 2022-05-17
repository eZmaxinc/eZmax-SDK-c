/*
 * franchisereferalincome_create_object_v2_request.h
 *
 * Request for POST /2/object/franchisereferalincome
 */

#ifndef _franchisereferalincome_create_object_v2_request_H_
#define _franchisereferalincome_create_object_v2_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct franchisereferalincome_create_object_v2_request_t franchisereferalincome_create_object_v2_request_t;

#include "franchisereferalincome_request_compound.h"



typedef struct franchisereferalincome_create_object_v2_request_t {
    list_t *a_obj_franchisereferalincome; //nonprimitive container

} franchisereferalincome_create_object_v2_request_t;

franchisereferalincome_create_object_v2_request_t *franchisereferalincome_create_object_v2_request_create(
    list_t *a_obj_franchisereferalincome
);

void franchisereferalincome_create_object_v2_request_free(franchisereferalincome_create_object_v2_request_t *franchisereferalincome_create_object_v2_request);

franchisereferalincome_create_object_v2_request_t *franchisereferalincome_create_object_v2_request_parseFromJSON(cJSON *franchisereferalincome_create_object_v2_requestJSON);

cJSON *franchisereferalincome_create_object_v2_request_convertToJSON(franchisereferalincome_create_object_v2_request_t *franchisereferalincome_create_object_v2_request);

#endif /* _franchisereferalincome_create_object_v2_request_H_ */

