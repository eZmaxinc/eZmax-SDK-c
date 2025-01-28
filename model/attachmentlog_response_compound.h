/*
 * attachmentlog_response_compound.h
 *
 * A Attachmentlog Object
 */

#ifndef _attachmentlog_response_compound_H_
#define _attachmentlog_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct attachmentlog_response_compound_t attachmentlog_response_compound_t;

#include "field_e_attachmentlog_type.h"



typedef struct attachmentlog_response_compound_t {
    int fki_attachment_id; //numeric
    int fki_user_id; //numeric
    char *dt_attachmentlog_datetime; // string
    ezmax_api_definition__full_field_e_attachmentlog_type__e e_attachmentlog_type; //referenced enum
    char *s_attachmentlog_detail; // string

    int _library_owned; // Is the library responsible for freeing this object?
} attachmentlog_response_compound_t;

__attribute__((deprecated)) attachmentlog_response_compound_t *attachmentlog_response_compound_create(
    int fki_attachment_id,
    int fki_user_id,
    char *dt_attachmentlog_datetime,
    ezmax_api_definition__full_field_e_attachmentlog_type__e e_attachmentlog_type,
    char *s_attachmentlog_detail
);

void attachmentlog_response_compound_free(attachmentlog_response_compound_t *attachmentlog_response_compound);

attachmentlog_response_compound_t *attachmentlog_response_compound_parseFromJSON(cJSON *attachmentlog_response_compoundJSON);

cJSON *attachmentlog_response_compound_convertToJSON(attachmentlog_response_compound_t *attachmentlog_response_compound);

#endif /* _attachmentlog_response_compound_H_ */

