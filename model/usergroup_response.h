/*
 * usergroup_response.h
 *
 * A Usergroup Object
 */

#ifndef _usergroup_response_H_
#define _usergroup_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroup_response_t usergroup_response_t;

#include "multilingual_usergroup_name.h"



typedef struct usergroup_response_t {
    int pki_usergroup_id; //numeric
    struct multilingual_usergroup_name_t *obj_usergroup_name; //model

} usergroup_response_t;

usergroup_response_t *usergroup_response_create(
    int pki_usergroup_id,
    multilingual_usergroup_name_t *obj_usergroup_name
);

void usergroup_response_free(usergroup_response_t *usergroup_response);

usergroup_response_t *usergroup_response_parseFromJSON(cJSON *usergroup_responseJSON);

cJSON *usergroup_response_convertToJSON(usergroup_response_t *usergroup_response);

#endif /* _usergroup_response_H_ */

