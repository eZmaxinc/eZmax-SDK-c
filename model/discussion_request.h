/*
 * discussion_request.h
 *
 * A Discussion Object
 */

#ifndef _discussion_request_H_
#define _discussion_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct discussion_request_t discussion_request_t;




typedef struct discussion_request_t {
    int pki_discussion_id; //numeric
    char *s_discussion_description; // string
    int b_discussion_closed; //boolean

} discussion_request_t;

discussion_request_t *discussion_request_create(
    int pki_discussion_id,
    char *s_discussion_description,
    int b_discussion_closed
);

void discussion_request_free(discussion_request_t *discussion_request);

discussion_request_t *discussion_request_parseFromJSON(cJSON *discussion_requestJSON);

cJSON *discussion_request_convertToJSON(discussion_request_t *discussion_request);

#endif /* _discussion_request_H_ */

