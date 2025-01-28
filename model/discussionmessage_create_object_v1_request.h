/*
 * discussionmessage_create_object_v1_request.h
 *
 * Request for POST /1/object/discussionmessage
 */

#ifndef _discussionmessage_create_object_v1_request_H_
#define _discussionmessage_create_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct discussionmessage_create_object_v1_request_t discussionmessage_create_object_v1_request_t;

#include "discussionmessage_request_compound.h"



typedef struct discussionmessage_create_object_v1_request_t {
    list_t *a_obj_discussionmessage; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} discussionmessage_create_object_v1_request_t;

__attribute__((deprecated)) discussionmessage_create_object_v1_request_t *discussionmessage_create_object_v1_request_create(
    list_t *a_obj_discussionmessage
);

void discussionmessage_create_object_v1_request_free(discussionmessage_create_object_v1_request_t *discussionmessage_create_object_v1_request);

discussionmessage_create_object_v1_request_t *discussionmessage_create_object_v1_request_parseFromJSON(cJSON *discussionmessage_create_object_v1_requestJSON);

cJSON *discussionmessage_create_object_v1_request_convertToJSON(discussionmessage_create_object_v1_request_t *discussionmessage_create_object_v1_request);

#endif /* _discussionmessage_create_object_v1_request_H_ */

