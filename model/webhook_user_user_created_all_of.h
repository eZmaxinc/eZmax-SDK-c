/*
 * webhook_user_user_created_all_of.h
 *
 * 
 */

#ifndef _webhook_user_user_created_all_of_H_
#define _webhook_user_user_created_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_user_user_created_all_of_t webhook_user_user_created_all_of_t;

#include "user_response.h"



typedef struct webhook_user_user_created_all_of_t {
    struct user_response_t *obj_user; //model

} webhook_user_user_created_all_of_t;

webhook_user_user_created_all_of_t *webhook_user_user_created_all_of_create(
    user_response_t *obj_user
);

void webhook_user_user_created_all_of_free(webhook_user_user_created_all_of_t *webhook_user_user_created_all_of);

webhook_user_user_created_all_of_t *webhook_user_user_created_all_of_parseFromJSON(cJSON *webhook_user_user_created_all_ofJSON);

cJSON *webhook_user_user_created_all_of_convertToJSON(webhook_user_user_created_all_of_t *webhook_user_user_created_all_of);

#endif /* _webhook_user_user_created_all_of_H_ */

