/*
 * discussionmessage_request_patch.h
 *
 * A Discussionmessage Object
 */

#ifndef _discussionmessage_request_patch_H_
#define _discussionmessage_request_patch_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct discussionmessage_request_patch_t discussionmessage_request_patch_t;




typedef struct discussionmessage_request_patch_t {
    int fki_discussionmembership_id_actionrequired; //numeric
    char *t_discussionmessage_content; // string

} discussionmessage_request_patch_t;

discussionmessage_request_patch_t *discussionmessage_request_patch_create(
    int fki_discussionmembership_id_actionrequired,
    char *t_discussionmessage_content
);

void discussionmessage_request_patch_free(discussionmessage_request_patch_t *discussionmessage_request_patch);

discussionmessage_request_patch_t *discussionmessage_request_patch_parseFromJSON(cJSON *discussionmessage_request_patchJSON);

cJSON *discussionmessage_request_patch_convertToJSON(discussionmessage_request_patch_t *discussionmessage_request_patch);

#endif /* _discussionmessage_request_patch_H_ */

