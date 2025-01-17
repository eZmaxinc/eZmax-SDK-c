/*
 * discussion_request_compound.h
 *
 * A Discussion Object and children
 */

#ifndef _discussion_request_compound_H_
#define _discussion_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct discussion_request_compound_t discussion_request_compound_t;




typedef struct discussion_request_compound_t {
    int pki_discussion_id; //numeric
    char *s_discussion_description; // string
    int b_discussion_closed; //boolean

} discussion_request_compound_t;

discussion_request_compound_t *discussion_request_compound_create(
    int pki_discussion_id,
    char *s_discussion_description,
    int b_discussion_closed
);

void discussion_request_compound_free(discussion_request_compound_t *discussion_request_compound);

discussion_request_compound_t *discussion_request_compound_parseFromJSON(cJSON *discussion_request_compoundJSON);

cJSON *discussion_request_compound_convertToJSON(discussion_request_compound_t *discussion_request_compound);

#endif /* _discussion_request_compound_H_ */

