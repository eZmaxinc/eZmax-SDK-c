/*
 * attachment_validate_v1_request.h
 *
 * Request for POST /1/object/attachment/{pkiAttachmentID}/validate
 */

#ifndef _attachment_validate_v1_request_H_
#define _attachment_validate_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct attachment_validate_v1_request_t attachment_validate_v1_request_t;

#include "field_e_attachment_verified.h"



typedef struct attachment_validate_v1_request_t {
    int *fki_attachmentrejectreason_id; //numeric
    ezmax_api_definition__full_field_e_attachment_verified__e e_attachment_verified; //referenced enum
    char *t_attachment_rejectioncomment; // string
    list_t *a_s_notification_email_address; //primitive container
    char *t_notification_message; // string
    int *b_notification_include_attachment; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} attachment_validate_v1_request_t;

__attribute__((deprecated)) attachment_validate_v1_request_t *attachment_validate_v1_request_create(
    int *fki_attachmentrejectreason_id,
    ezmax_api_definition__full_field_e_attachment_verified__e e_attachment_verified,
    char *t_attachment_rejectioncomment,
    list_t *a_s_notification_email_address,
    char *t_notification_message,
    int *b_notification_include_attachment
);

void attachment_validate_v1_request_free(attachment_validate_v1_request_t *attachment_validate_v1_request);

attachment_validate_v1_request_t *attachment_validate_v1_request_parseFromJSON(cJSON *attachment_validate_v1_requestJSON);

cJSON *attachment_validate_v1_request_convertToJSON(attachment_validate_v1_request_t *attachment_validate_v1_request);

#endif /* _attachment_validate_v1_request_H_ */

