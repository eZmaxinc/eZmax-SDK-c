/*
 * activesession_response_compound_user.h
 *
 * An Activesession-&gt;User Object and children to create a complete structure
 */

#ifndef _activesession_response_compound_user_H_
#define _activesession_response_compound_user_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct activesession_response_compound_user_t activesession_response_compound_user_t;




typedef struct activesession_response_compound_user_t {
    int pki_user_id; //numeric
    char *s_avatar_url; // string
    char *s_user_firstname; // string
    char *s_user_lastname; // string
    char *s_email_address; // string

} activesession_response_compound_user_t;

activesession_response_compound_user_t *activesession_response_compound_user_create(
    int pki_user_id,
    char *s_avatar_url,
    char *s_user_firstname,
    char *s_user_lastname,
    char *s_email_address
);

void activesession_response_compound_user_free(activesession_response_compound_user_t *activesession_response_compound_user);

activesession_response_compound_user_t *activesession_response_compound_user_parseFromJSON(cJSON *activesession_response_compound_userJSON);

cJSON *activesession_response_compound_user_convertToJSON(activesession_response_compound_user_t *activesession_response_compound_user);

#endif /* _activesession_response_compound_user_H_ */

