/*
 * discussionmembership_request_compound.h
 *
 * A Discussionmembership Object and children
 */

#ifndef _discussionmembership_request_compound_H_
#define _discussionmembership_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct discussionmembership_request_compound_t discussionmembership_request_compound_t;




typedef struct discussionmembership_request_compound_t {
    int pki_discussionmembership_id; //numeric
    int fki_discussion_id; //numeric
    int fki_user_id; //numeric
    int fki_usergroup_id; //numeric
    int fki_modulesection_id; //numeric
    char *dt_discussionmembership_joined; // string

} discussionmembership_request_compound_t;

discussionmembership_request_compound_t *discussionmembership_request_compound_create(
    int pki_discussionmembership_id,
    int fki_discussion_id,
    int fki_user_id,
    int fki_usergroup_id,
    int fki_modulesection_id,
    char *dt_discussionmembership_joined
);

void discussionmembership_request_compound_free(discussionmembership_request_compound_t *discussionmembership_request_compound);

discussionmembership_request_compound_t *discussionmembership_request_compound_parseFromJSON(cJSON *discussionmembership_request_compoundJSON);

cJSON *discussionmembership_request_compound_convertToJSON(discussionmembership_request_compound_t *discussionmembership_request_compound);

#endif /* _discussionmembership_request_compound_H_ */

