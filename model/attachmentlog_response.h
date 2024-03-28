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

#include "field_e_attachmentlog_type.h"

// Enum  for attachmentlog_response

typedef enum  { ezmax_api_definition__full_attachmentlog_response__NULL = 0, ezmax_api_definition__full_attachmentlog_response__AutoValidation, ezmax_api_definition__full_attachmentlog_response__CopyFrom, ezmax_api_definition__full_attachmentlog_response__CopyTo, ezmax_api_definition__full_attachmentlog_response__CopyToEzsign, ezmax_api_definition__full_attachmentlog_response__CreateByEzsign, ezmax_api_definition__full_attachmentlog_response__Download, ezmax_api_definition__full_attachmentlog_response__Deleted, ezmax_api_definition__full_attachmentlog_response__Destroyed, ezmax_api_definition__full_attachmentlog_response__Email, ezmax_api_definition__full_attachmentlog_response__EmailCC, ezmax_api_definition__full_attachmentlog_response__EmailCCI, ezmax_api_definition__full_attachmentlog_response__Fax, ezmax_api_definition__full_attachmentlog_response__ImportedFromExternalSystem, ezmax_api_definition__full_attachmentlog_response__ImportedFromEZA, ezmax_api_definition__full_attachmentlog_response__ImportedFromFaltour, ezmax_api_definition__full_attachmentlog_response__ImportedFromLonewolf, ezmax_api_definition__full_attachmentlog_response__ImportedFromProspects, ezmax_api_definition__full_attachmentlog_response__Move, ezmax_api_definition__full_attachmentlog_response__OpenFromEmail, ezmax_api_definition__full_attachmentlog_response__Purged, ezmax_api_definition__full_attachmentlog_response__Reject, ezmax_api_definition__full_attachmentlog_response__Rename, ezmax_api_definition__full_attachmentlog_response__Restore, ezmax_api_definition__full_attachmentlog_response__Scanned, ezmax_api_definition__full_attachmentlog_response__SendToGED, ezmax_api_definition__full_attachmentlog_response__UnvalidatedBy, ezmax_api_definition__full_attachmentlog_response__Upload, ezmax_api_definition__full_attachmentlog_response__ValidatedBy, ezmax_api_definition__full_attachmentlog_response__VetinfoUpload } ezmax_api_definition__full_attachmentlog_response__e;

char* attachmentlog_response_e_attachmentlog_type_ToString(ezmax_api_definition__full_attachmentlog_response__e e_attachmentlog_type);

ezmax_api_definition__full_attachmentlog_response__e attachmentlog_response_e_attachmentlog_type_FromString(char* e_attachmentlog_type);



typedef struct attachmentlog_response_t {
    int fki_attachment_id; //numeric
    int fki_user_id; //numeric
    char *dt_attachmentlog_datetime; // string
    field_e_attachmentlog_type_t *e_attachmentlog_type; // custom
    char *s_attachmentlog_detail; // string

} attachmentlog_response_t;

attachmentlog_response_t *attachmentlog_response_create(
    int fki_attachment_id,
    int fki_user_id,
    char *dt_attachmentlog_datetime,
    field_e_attachmentlog_type_t *e_attachmentlog_type,
    char *s_attachmentlog_detail
);

void attachmentlog_response_free(attachmentlog_response_t *attachmentlog_response);

attachmentlog_response_t *attachmentlog_response_parseFromJSON(cJSON *attachmentlog_responseJSON);

cJSON *attachmentlog_response_convertToJSON(attachmentlog_response_t *attachmentlog_response);

#endif /* _attachmentlog_response_H_ */
