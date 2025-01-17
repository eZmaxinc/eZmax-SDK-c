/*
 * discussionmessage_request_compound.h
 *
 * A Discussionmessage Object and children
 */

#ifndef _discussionmessage_request_compound_H_
#define _discussionmessage_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct discussionmessage_request_compound_t discussionmessage_request_compound_t;

#include "discussionmessage_request.h"



typedef struct discussionmessage_request_compound_t {
    int pki_discussionmessage_id; //numeric
    int fki_discussion_id; //numeric
    int fki_discussionmembership_id_actionrequired; //numeric
    char *t_discussionmessage_content; // string

} discussionmessage_request_compound_t;

discussionmessage_request_compound_t *discussionmessage_request_compound_create(
    int pki_discussionmessage_id,
    int fki_discussion_id,
    int fki_discussionmembership_id_actionrequired,
    char *t_discussionmessage_content
);

void discussionmessage_request_compound_free(discussionmessage_request_compound_t *discussionmessage_request_compound);

discussionmessage_request_compound_t *discussionmessage_request_compound_parseFromJSON(cJSON *discussionmessage_request_compoundJSON);

cJSON *discussionmessage_request_compound_convertToJSON(discussionmessage_request_compound_t *discussionmessage_request_compound);

#endif /* _discussionmessage_request_compound_H_ */

