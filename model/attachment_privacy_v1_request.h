/*
 * attachment_privacy_v1_request.h
 *
 * Request for POST /1/object/attachment/{pkiAttachmentID}/privacy
 */

#ifndef _attachment_privacy_v1_request_H_
#define _attachment_privacy_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct attachment_privacy_v1_request_t attachment_privacy_v1_request_t;

#include "field_e_attachment_privacy.h"



typedef struct attachment_privacy_v1_request_t {
    ezmax_api_definition__full_field_e_attachment_privacy__e e_attachment_privacy; //referenced enum
    int *fki_user_id_specific; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} attachment_privacy_v1_request_t;

__attribute__((deprecated)) attachment_privacy_v1_request_t *attachment_privacy_v1_request_create(
    ezmax_api_definition__full_field_e_attachment_privacy__e e_attachment_privacy,
    int *fki_user_id_specific
);

void attachment_privacy_v1_request_free(attachment_privacy_v1_request_t *attachment_privacy_v1_request);

attachment_privacy_v1_request_t *attachment_privacy_v1_request_parseFromJSON(cJSON *attachment_privacy_v1_requestJSON);

cJSON *attachment_privacy_v1_request_convertToJSON(attachment_privacy_v1_request_t *attachment_privacy_v1_request);

#endif /* _attachment_privacy_v1_request_H_ */

