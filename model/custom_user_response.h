/*
 * custom_user_response.h
 *
 * A User Object
 */

#ifndef _custom_user_response_H_
#define _custom_user_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_user_response_t custom_user_response_t;




typedef struct custom_user_response_t {
    int pki_user_id; //numeric
    char *s_user_lastname; // string
    char *s_user_firstname; // string
    char *s_email_address; // string

} custom_user_response_t;

custom_user_response_t *custom_user_response_create(
    int pki_user_id,
    char *s_user_lastname,
    char *s_user_firstname,
    char *s_email_address
);

void custom_user_response_free(custom_user_response_t *custom_user_response);

custom_user_response_t *custom_user_response_parseFromJSON(cJSON *custom_user_responseJSON);

cJSON *custom_user_response_convertToJSON(custom_user_response_t *custom_user_response);

#endif /* _custom_user_response_H_ */

