/*
 * user_edit_colleagues_v2_request.h
 *
 * Request for PUT /2/object/user/{pkiUserID}/editColleagues
 */

#ifndef _user_edit_colleagues_v2_request_H_
#define _user_edit_colleagues_v2_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct user_edit_colleagues_v2_request_t user_edit_colleagues_v2_request_t;

#include "colleague_request_compound_v2.h"



typedef struct user_edit_colleagues_v2_request_t {
    list_t *a_obj_colleague; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} user_edit_colleagues_v2_request_t;

__attribute__((deprecated)) user_edit_colleagues_v2_request_t *user_edit_colleagues_v2_request_create(
    list_t *a_obj_colleague
);

void user_edit_colleagues_v2_request_free(user_edit_colleagues_v2_request_t *user_edit_colleagues_v2_request);

user_edit_colleagues_v2_request_t *user_edit_colleagues_v2_request_parseFromJSON(cJSON *user_edit_colleagues_v2_requestJSON);

cJSON *user_edit_colleagues_v2_request_convertToJSON(user_edit_colleagues_v2_request_t *user_edit_colleagues_v2_request);

#endif /* _user_edit_colleagues_v2_request_H_ */

