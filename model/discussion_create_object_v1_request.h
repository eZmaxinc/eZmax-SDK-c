/*
 * discussion_create_object_v1_request.h
 *
 * Request for POST /1/object/discussion
 */

#ifndef _discussion_create_object_v1_request_H_
#define _discussion_create_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct discussion_create_object_v1_request_t discussion_create_object_v1_request_t;

#include "discussion_request_compound.h"



typedef struct discussion_create_object_v1_request_t {
    list_t *a_obj_discussion; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} discussion_create_object_v1_request_t;

__attribute__((deprecated)) discussion_create_object_v1_request_t *discussion_create_object_v1_request_create(
    list_t *a_obj_discussion
);

void discussion_create_object_v1_request_free(discussion_create_object_v1_request_t *discussion_create_object_v1_request);

discussion_create_object_v1_request_t *discussion_create_object_v1_request_parseFromJSON(cJSON *discussion_create_object_v1_requestJSON);

cJSON *discussion_create_object_v1_request_convertToJSON(discussion_create_object_v1_request_t *discussion_create_object_v1_request);

#endif /* _discussion_create_object_v1_request_H_ */

