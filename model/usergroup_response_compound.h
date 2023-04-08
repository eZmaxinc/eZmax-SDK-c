/*
 * usergroup_response_compound.h
 *
 * A Usergroup Object
 */

#ifndef _usergroup_response_compound_H_
#define _usergroup_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroup_response_compound_t usergroup_response_compound_t;

#include "multilingual_usergroup_name.h"



typedef struct usergroup_response_compound_t {
    int pki_usergroup_id; //numeric
    struct multilingual_usergroup_name_t *obj_usergroup_name; //model

} usergroup_response_compound_t;

usergroup_response_compound_t *usergroup_response_compound_create(
    int pki_usergroup_id,
    multilingual_usergroup_name_t *obj_usergroup_name
);

void usergroup_response_compound_free(usergroup_response_compound_t *usergroup_response_compound);

usergroup_response_compound_t *usergroup_response_compound_parseFromJSON(cJSON *usergroup_response_compoundJSON);

cJSON *usergroup_response_compound_convertToJSON(usergroup_response_compound_t *usergroup_response_compound);

#endif /* _usergroup_response_compound_H_ */

