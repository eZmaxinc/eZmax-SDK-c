/*
 * attachmentlog_response.h
 *
 * An Attachmentlog Object
 */

#ifndef _attachmentlog_response_H_
#define _attachmentlog_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct attachmentlog_response_t attachmentlog_response_t;

#include "custom_user_name_response.h"
#include "field_e_attachmentlog_type.h"



typedef struct attachmentlog_response_t {
    int *fki_attachment_id; //numeric
    int *fki_user_id; //numeric
    struct custom_user_name_response_t *obj_user; //model
    char *dt_attachmentlog_datetime; // string
    ezmax_api_definition__full_field_e_attachmentlog_type__e e_attachmentlog_type; //referenced enum
    char *s_attachmentlog_detail; // string

    int _library_owned; // Is the library responsible for freeing this object?
} attachmentlog_response_t;

__attribute__((deprecated)) attachmentlog_response_t *attachmentlog_response_create(
    int *fki_attachment_id,
    int *fki_user_id,
    custom_user_name_response_t *obj_user,
    char *dt_attachmentlog_datetime,
    ezmax_api_definition__full_field_e_attachmentlog_type__e e_attachmentlog_type,
    char *s_attachmentlog_detail
);

void attachmentlog_response_free(attachmentlog_response_t *attachmentlog_response);

attachmentlog_response_t *attachmentlog_response_parseFromJSON(cJSON *attachmentlog_responseJSON);

cJSON *attachmentlog_response_convertToJSON(attachmentlog_response_t *attachmentlog_response);

#endif /* _attachmentlog_response_H_ */

