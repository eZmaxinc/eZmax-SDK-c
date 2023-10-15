/*
 * field_e_ezsigndocumentlog_type.h
 *
 * The Ezsigndocumentlog Type.
 */

#ifndef _field_e_ezsigndocumentlog_type_H_
#define _field_e_ezsigndocumentlog_type_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_ezsigndocumentlog_type_t field_e_ezsigndocumentlog_type_t;


// Enum  for field_e_ezsigndocumentlog_type

typedef enum { ezmax_api_definition__full_field_e_ezsigndocumentlog_type__NULL = 0, ezmax_api_definition__full_field_e_ezsigndocumentlog_type__Clone, ezmax_api_definition__full_field_e_ezsigndocumentlog_type__Login, ezmax_api_definition__full_field_e_ezsigndocumentlog_type__Sendcode, ezmax_api_definition__full_field_e_ezsigndocumentlog_type__Badcode, ezmax_api_definition__full_field_e_ezsigndocumentlog_type__Goodcode, ezmax_api_definition__full_field_e_ezsigndocumentlog_type__Badresponse, ezmax_api_definition__full_field_e_ezsigndocumentlog_type__Goodresponse, ezmax_api_definition__full_field_e_ezsigndocumentlog_type__Authentication, ezmax_api_definition__full_field_e_ezsigndocumentlog_type__Createpage, ezmax_api_definition__full_field_e_ezsigndocumentlog_type__Download, ezmax_api_definition__full_field_e_ezsigndocumentlog_type__Send, ezmax_api_definition__full_field_e_ezsigndocumentlog_type__Sign, ezmax_api_definition__full_field_e_ezsigndocumentlog_type__Upload, ezmax_api_definition__full_field_e_ezsigndocumentlog_type__View, ezmax_api_definition__full_field_e_ezsigndocumentlog_type__Completion, ezmax_api_definition__full_field_e_ezsigndocumentlog_type__Changelimitdate, ezmax_api_definition__full_field_e_ezsigndocumentlog_type__Unsign, ezmax_api_definition__full_field_e_ezsigndocumentlog_type__ImportFromInstanet, ezmax_api_definition__full_field_e_ezsigndocumentlog_type__SendEmail, ezmax_api_definition__full_field_e_ezsigndocumentlog_type__FormCompletion, ezmax_api_definition__full_field_e_ezsigndocumentlog_type__SignatureAttachmentAdd, ezmax_api_definition__full_field_e_ezsigndocumentlog_type__SignatureAttachmentValidation, ezmax_api_definition__full_field_e_ezsigndocumentlog_type__SignatureAttachmentRefused, ezmax_api_definition__full_field_e_ezsigndocumentlog_type__SignatureAttachmentDeleted, ezmax_api_definition__full_field_e_ezsigndocumentlog_type__DeclinedToSign, ezmax_api_definition__full_field_e_ezsigndocumentlog_type__DelayedSendEmail, ezmax_api_definition__full_field_e_ezsigndocumentlog_type__AnnotationAdded, ezmax_api_definition__full_field_e_ezsigndocumentlog_type__Flatten, ezmax_api_definition__full_field_e_ezsigndocumentlog_type__RegeneratePage, ezmax_api_definition__full_field_e_ezsigndocumentlog_type__RegeneratePageForm, ezmax_api_definition__full_field_e_ezsigndocumentlog_type__Reassign } ezmax_api_definition__full_field_e_ezsigndocumentlog_type__e;

char* field_e_ezsigndocumentlog_type_field_e_ezsigndocumentlog_type_ToString(ezmax_api_definition__full_field_e_ezsigndocumentlog_type__e field_e_ezsigndocumentlog_type);

ezmax_api_definition__full_field_e_ezsigndocumentlog_type__e field_e_ezsigndocumentlog_type_field_e_ezsigndocumentlog_type_FromString(char* field_e_ezsigndocumentlog_type);

//cJSON *field_e_ezsigndocumentlog_type_field_e_ezsigndocumentlog_type_convertToJSON(ezmax_api_definition__full_field_e_ezsigndocumentlog_type__e field_e_ezsigndocumentlog_type);

//ezmax_api_definition__full_field_e_ezsigndocumentlog_type__e field_e_ezsigndocumentlog_type_field_e_ezsigndocumentlog_type_parseFromJSON(cJSON *field_e_ezsigndocumentlog_typeJSON);

#endif /* _field_e_ezsigndocumentlog_type_H_ */

