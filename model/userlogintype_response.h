/*
 * userlogintype_response.h
 *
 * An Userlogintype Object
 */

#ifndef _userlogintype_response_H_
#define _userlogintype_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct userlogintype_response_t userlogintype_response_t;

#include "multilingual_userlogintype_description.h"



typedef struct userlogintype_response_t {
    int pki_userlogintype_id; //numeric
    struct multilingual_userlogintype_description_t *obj_userlogintype_description; //model
    char *s_userlogintype_description_x; // string

} userlogintype_response_t;

userlogintype_response_t *userlogintype_response_create(
    int pki_userlogintype_id,
    multilingual_userlogintype_description_t *obj_userlogintype_description,
    char *s_userlogintype_description_x
);

void userlogintype_response_free(userlogintype_response_t *userlogintype_response);

userlogintype_response_t *userlogintype_response_parseFromJSON(cJSON *userlogintype_responseJSON);

cJSON *userlogintype_response_convertToJSON(userlogintype_response_t *userlogintype_response);

#endif /* _userlogintype_response_H_ */

