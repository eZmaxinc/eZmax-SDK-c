/*
 * discussion_request_patch.h
 *
 * A Discussion Object
 */

#ifndef _discussion_request_patch_H_
#define _discussion_request_patch_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct discussion_request_patch_t discussion_request_patch_t;




typedef struct discussion_request_patch_t {
    char *s_discussion_description; // string
    int b_discussion_closed; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} discussion_request_patch_t;

__attribute__((deprecated)) discussion_request_patch_t *discussion_request_patch_create(
    char *s_discussion_description,
    int b_discussion_closed
);

void discussion_request_patch_free(discussion_request_patch_t *discussion_request_patch);

discussion_request_patch_t *discussion_request_patch_parseFromJSON(cJSON *discussion_request_patchJSON);

cJSON *discussion_request_patch_convertToJSON(discussion_request_patch_t *discussion_request_patch);

#endif /* _discussion_request_patch_H_ */

