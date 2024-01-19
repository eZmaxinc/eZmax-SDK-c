/*
 * discussionmembership_create_object_v1_request.h
 *
 * Request for POST /1/object/discussionmembership
 */

#ifndef _discussionmembership_create_object_v1_request_H_
#define _discussionmembership_create_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct discussionmembership_create_object_v1_request_t discussionmembership_create_object_v1_request_t;

#include "discussionmembership_request_compound.h"



typedef struct discussionmembership_create_object_v1_request_t {
    list_t *a_obj_discussionmembership; //nonprimitive container

} discussionmembership_create_object_v1_request_t;

discussionmembership_create_object_v1_request_t *discussionmembership_create_object_v1_request_create(
    list_t *a_obj_discussionmembership
);

void discussionmembership_create_object_v1_request_free(discussionmembership_create_object_v1_request_t *discussionmembership_create_object_v1_request);

discussionmembership_create_object_v1_request_t *discussionmembership_create_object_v1_request_parseFromJSON(cJSON *discussionmembership_create_object_v1_requestJSON);

cJSON *discussionmembership_create_object_v1_request_convertToJSON(discussionmembership_create_object_v1_request_t *discussionmembership_create_object_v1_request);

#endif /* _discussionmembership_create_object_v1_request_H_ */

