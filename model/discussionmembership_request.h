/*
 * discussionmembership_request.h
 *
 * A Discussionmembership Object
 */

#ifndef _discussionmembership_request_H_
#define _discussionmembership_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct discussionmembership_request_t discussionmembership_request_t;




typedef struct discussionmembership_request_t {
    int pki_discussionmembership_id; //numeric
    int fki_discussion_id; //numeric
    int fki_user_id; //numeric
    int fki_usergroup_id; //numeric
    int fki_modulesection_id; //numeric
    char *dt_discussionmembership_joined; // string

    int _library_owned; // Is the library responsible for freeing this object?
} discussionmembership_request_t;

__attribute__((deprecated)) discussionmembership_request_t *discussionmembership_request_create(
    int pki_discussionmembership_id,
    int fki_discussion_id,
    int fki_user_id,
    int fki_usergroup_id,
    int fki_modulesection_id,
    char *dt_discussionmembership_joined
);

void discussionmembership_request_free(discussionmembership_request_t *discussionmembership_request);

discussionmembership_request_t *discussionmembership_request_parseFromJSON(cJSON *discussionmembership_requestJSON);

cJSON *discussionmembership_request_convertToJSON(discussionmembership_request_t *discussionmembership_request);

#endif /* _discussionmembership_request_H_ */

