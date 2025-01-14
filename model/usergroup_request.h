/*
 * usergroup_request.h
 *
 * A Usergroup Object
 */

#ifndef _usergroup_request_H_
#define _usergroup_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroup_request_t usergroup_request_t;

#include "email_request.h"
#include "multilingual_usergroup_name.h"



typedef struct usergroup_request_t {
    int pki_usergroup_id; //numeric
    struct email_request_t *obj_email; //model
    struct multilingual_usergroup_name_t *obj_usergroup_name; //model

} usergroup_request_t;

usergroup_request_t *usergroup_request_create(
    int pki_usergroup_id,
    email_request_t *obj_email,
    multilingual_usergroup_name_t *obj_usergroup_name
);

void usergroup_request_free(usergroup_request_t *usergroup_request);

usergroup_request_t *usergroup_request_parseFromJSON(cJSON *usergroup_requestJSON);

cJSON *usergroup_request_convertToJSON(usergroup_request_t *usergroup_request);

#endif /* _usergroup_request_H_ */

