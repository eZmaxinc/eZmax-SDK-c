/*
 * discussionmessage_request.h
 *
 * A Discussionmessage Object
 */

#ifndef _discussionmessage_request_H_
#define _discussionmessage_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct discussionmessage_request_t discussionmessage_request_t;




typedef struct discussionmessage_request_t {
    int pki_discussionmessage_id; //numeric
    int fki_discussion_id; //numeric
    int fki_discussionmembership_id_actionrequired; //numeric
    char *t_discussionmessage_content; // string

} discussionmessage_request_t;

discussionmessage_request_t *discussionmessage_request_create(
    int pki_discussionmessage_id,
    int fki_discussion_id,
    int fki_discussionmembership_id_actionrequired,
    char *t_discussionmessage_content
);

void discussionmessage_request_free(discussionmessage_request_t *discussionmessage_request);

discussionmessage_request_t *discussionmessage_request_parseFromJSON(cJSON *discussionmessage_requestJSON);

cJSON *discussionmessage_request_convertToJSON(discussionmessage_request_t *discussionmessage_request);

#endif /* _discussionmessage_request_H_ */

