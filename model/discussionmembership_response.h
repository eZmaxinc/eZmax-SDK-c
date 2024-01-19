/*
 * discussionmembership_response.h
 *
 * A Discussionmembership Object
 */

#ifndef _discussionmembership_response_H_
#define _discussionmembership_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct discussionmembership_response_t discussionmembership_response_t;




typedef struct discussionmembership_response_t {
    int pki_discussionmembership_id; //numeric
    int fki_discussion_id; //numeric
    int fki_user_id; //numeric
    int fki_usergroup_id; //numeric
    int fki_modulesection_id; //numeric
    char *s_discussionmembership_description; // string
    char *dt_discussionmembership_joined; // string

} discussionmembership_response_t;

discussionmembership_response_t *discussionmembership_response_create(
    int pki_discussionmembership_id,
    int fki_discussion_id,
    int fki_user_id,
    int fki_usergroup_id,
    int fki_modulesection_id,
    char *s_discussionmembership_description,
    char *dt_discussionmembership_joined
);

void discussionmembership_response_free(discussionmembership_response_t *discussionmembership_response);

discussionmembership_response_t *discussionmembership_response_parseFromJSON(cJSON *discussionmembership_responseJSON);

cJSON *discussionmembership_response_convertToJSON(discussionmembership_response_t *discussionmembership_response);

#endif /* _discussionmembership_response_H_ */

