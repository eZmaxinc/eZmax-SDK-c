/*
 * discussion_update_discussionreadstatus_v1_request.h
 *
 * Request for POST /1/object/discussion/{pkiDiscussionID}/updateDiscussionreadstatus
 */

#ifndef _discussion_update_discussionreadstatus_v1_request_H_
#define _discussion_update_discussionreadstatus_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct discussion_update_discussionreadstatus_v1_request_t discussion_update_discussionreadstatus_v1_request_t;




typedef struct discussion_update_discussionreadstatus_v1_request_t {
    char *dt_discussionreadstatus_date; // string

} discussion_update_discussionreadstatus_v1_request_t;

discussion_update_discussionreadstatus_v1_request_t *discussion_update_discussionreadstatus_v1_request_create(
    char *dt_discussionreadstatus_date
);

void discussion_update_discussionreadstatus_v1_request_free(discussion_update_discussionreadstatus_v1_request_t *discussion_update_discussionreadstatus_v1_request);

discussion_update_discussionreadstatus_v1_request_t *discussion_update_discussionreadstatus_v1_request_parseFromJSON(cJSON *discussion_update_discussionreadstatus_v1_requestJSON);

cJSON *discussion_update_discussionreadstatus_v1_request_convertToJSON(discussion_update_discussionreadstatus_v1_request_t *discussion_update_discussionreadstatus_v1_request);

#endif /* _discussion_update_discussionreadstatus_v1_request_H_ */

