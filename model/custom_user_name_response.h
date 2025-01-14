/*
 * custom_user_name_response.h
 *
 * A User name Object
 */

#ifndef _custom_user_name_response_H_
#define _custom_user_name_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_user_name_response_t custom_user_name_response_t;




typedef struct custom_user_name_response_t {
    char *s_user_lastname; // string
    char *s_user_firstname; // string

} custom_user_name_response_t;

custom_user_name_response_t *custom_user_name_response_create(
    char *s_user_lastname,
    char *s_user_firstname
);

void custom_user_name_response_free(custom_user_name_response_t *custom_user_name_response);

custom_user_name_response_t *custom_user_name_response_parseFromJSON(cJSON *custom_user_name_responseJSON);

cJSON *custom_user_name_response_convertToJSON(custom_user_name_response_t *custom_user_name_response);

#endif /* _custom_user_name_response_H_ */

