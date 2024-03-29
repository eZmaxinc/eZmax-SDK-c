/*
 * ezsigndocumentlog_response_compound.h
 *
 * An Ezsigndocumentlog Object and children to create a complete structure
 */

#ifndef _ezsigndocumentlog_response_compound_H_
#define _ezsigndocumentlog_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndocumentlog_response_compound_t ezsigndocumentlog_response_compound_t;

#include "field_e_ezsigndocumentlog_type.h"

// Enum  for ezsigndocumentlog_response_compound

typedef enum  { ezmax_api_definition__full_ezsigndocumentlog_response_compound__NULL = 0, ezmax_api_definition__full_ezsigndocumentlog_response_compound__Clone, ezmax_api_definition__full_ezsigndocumentlog_response_compound__Login, ezmax_api_definition__full_ezsigndocumentlog_response_compound__Sendcode, ezmax_api_definition__full_ezsigndocumentlog_response_compound__Badcode, ezmax_api_definition__full_ezsigndocumentlog_response_compound__Goodcode, ezmax_api_definition__full_ezsigndocumentlog_response_compound__Authentication, ezmax_api_definition__full_ezsigndocumentlog_response_compound__Createpage, ezmax_api_definition__full_ezsigndocumentlog_response_compound__Download, ezmax_api_definition__full_ezsigndocumentlog_response_compound__Send, ezmax_api_definition__full_ezsigndocumentlog_response_compound__Sign, ezmax_api_definition__full_ezsigndocumentlog_response_compound__Upload, ezmax_api_definition__full_ezsigndocumentlog_response_compound__View, ezmax_api_definition__full_ezsigndocumentlog_response_compound__Completion, ezmax_api_definition__full_ezsigndocumentlog_response_compound__Changelimitdate, ezmax_api_definition__full_ezsigndocumentlog_response_compound__Unsign, ezmax_api_definition__full_ezsigndocumentlog_response_compound__ImportFromInstanet, ezmax_api_definition__full_ezsigndocumentlog_response_compound__SendEmail, ezmax_api_definition__full_ezsigndocumentlog_response_compound__FormCompletion, ezmax_api_definition__full_ezsigndocumentlog_response_compound__SignatureAttachmentAdd, ezmax_api_definition__full_ezsigndocumentlog_response_compound__SignatureAttachmentValidation, ezmax_api_definition__full_ezsigndocumentlog_response_compound__SignatureAttachmentRefused, ezmax_api_definition__full_ezsigndocumentlog_response_compound__SignatureAttachmentDeleted, ezmax_api_definition__full_ezsigndocumentlog_response_compound__DeclinedToSign, ezmax_api_definition__full_ezsigndocumentlog_response_compound__DelayedSendEmail } ezmax_api_definition__full_ezsigndocumentlog_response_compound__e;

char* ezsigndocumentlog_response_compound_e_ezsigndocumentlog_type_ToString(ezmax_api_definition__full_ezsigndocumentlog_response_compound__e e_ezsigndocumentlog_type);

ezmax_api_definition__full_ezsigndocumentlog_response_compound__e ezsigndocumentlog_response_compound_e_ezsigndocumentlog_type_FromString(char* e_ezsigndocumentlog_type);



typedef struct ezsigndocumentlog_response_compound_t {
    int fki_user_id; //numeric
    int fki_ezsignsigner_id; //numeric
    char *dt_ezsigndocumentlog_datetime; // string
    field_e_ezsigndocumentlog_type_t *e_ezsigndocumentlog_type; // custom
    char *s_ezsigndocumentlog_detail; // string
    char *s_ezsigndocumentlog_lastname; // string
    char *s_ezsigndocumentlog_firstname; // string
    char *s_ezsigndocumentlog_ip; // string

} ezsigndocumentlog_response_compound_t;

ezsigndocumentlog_response_compound_t *ezsigndocumentlog_response_compound_create(
    int fki_user_id,
    int fki_ezsignsigner_id,
    char *dt_ezsigndocumentlog_datetime,
    field_e_ezsigndocumentlog_type_t *e_ezsigndocumentlog_type,
    char *s_ezsigndocumentlog_detail,
    char *s_ezsigndocumentlog_lastname,
    char *s_ezsigndocumentlog_firstname,
    char *s_ezsigndocumentlog_ip
);

void ezsigndocumentlog_response_compound_free(ezsigndocumentlog_response_compound_t *ezsigndocumentlog_response_compound);

ezsigndocumentlog_response_compound_t *ezsigndocumentlog_response_compound_parseFromJSON(cJSON *ezsigndocumentlog_response_compoundJSON);

cJSON *ezsigndocumentlog_response_compound_convertToJSON(ezsigndocumentlog_response_compound_t *ezsigndocumentlog_response_compound);

#endif /* _ezsigndocumentlog_response_compound_H_ */

