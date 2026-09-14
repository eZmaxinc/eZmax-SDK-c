/*
 * attachment_restore_v1_request.h
 *
 * Request for POST /1/object/attachment/{pkiAttachmentID}/restore
 */

#ifndef _attachment_restore_v1_request_H_
#define _attachment_restore_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct attachment_restore_v1_request_t attachment_restore_v1_request_t;




typedef struct attachment_restore_v1_request_t {
    int *b_force_override; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} attachment_restore_v1_request_t;

__attribute__((deprecated)) attachment_restore_v1_request_t *attachment_restore_v1_request_create(
    int *b_force_override
);

void attachment_restore_v1_request_free(attachment_restore_v1_request_t *attachment_restore_v1_request);

attachment_restore_v1_request_t *attachment_restore_v1_request_parseFromJSON(cJSON *attachment_restore_v1_requestJSON);

cJSON *attachment_restore_v1_request_convertToJSON(attachment_restore_v1_request_t *attachment_restore_v1_request);

#endif /* _attachment_restore_v1_request_H_ */

