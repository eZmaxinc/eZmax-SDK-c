/*
 * attachment_rename_v1_request.h
 *
 * Request for POST /1/object/attachment/{pkiAttachmentID}/rename
 */

#ifndef _attachment_rename_v1_request_H_
#define _attachment_rename_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct attachment_rename_v1_request_t attachment_rename_v1_request_t;




typedef struct attachment_rename_v1_request_t {
    char *s_attachment_name; // string
    char *s_attachment_category; // string
    int *b_force_override; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} attachment_rename_v1_request_t;

__attribute__((deprecated)) attachment_rename_v1_request_t *attachment_rename_v1_request_create(
    char *s_attachment_name,
    char *s_attachment_category,
    int *b_force_override
);

void attachment_rename_v1_request_free(attachment_rename_v1_request_t *attachment_rename_v1_request);

attachment_rename_v1_request_t *attachment_rename_v1_request_parseFromJSON(cJSON *attachment_rename_v1_requestJSON);

cJSON *attachment_rename_v1_request_convertToJSON(attachment_rename_v1_request_t *attachment_rename_v1_request);

#endif /* _attachment_rename_v1_request_H_ */

