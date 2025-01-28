/*
 * usergroup_request_compound.h
 *
 * A Usergroup Object and children
 */

#ifndef _usergroup_request_compound_H_
#define _usergroup_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroup_request_compound_t usergroup_request_compound_t;

#include "email_request.h"
#include "multilingual_usergroup_name.h"



typedef struct usergroup_request_compound_t {
    int pki_usergroup_id; //numeric
    struct email_request_t *obj_email; //model
    struct multilingual_usergroup_name_t *obj_usergroup_name; //model

    int _library_owned; // Is the library responsible for freeing this object?
} usergroup_request_compound_t;

__attribute__((deprecated)) usergroup_request_compound_t *usergroup_request_compound_create(
    int pki_usergroup_id,
    email_request_t *obj_email,
    multilingual_usergroup_name_t *obj_usergroup_name
);

void usergroup_request_compound_free(usergroup_request_compound_t *usergroup_request_compound);

usergroup_request_compound_t *usergroup_request_compound_parseFromJSON(cJSON *usergroup_request_compoundJSON);

cJSON *usergroup_request_compound_convertToJSON(usergroup_request_compound_t *usergroup_request_compound);

#endif /* _usergroup_request_compound_H_ */

