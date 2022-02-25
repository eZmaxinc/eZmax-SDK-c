/*
 * ezsigndocumentlog_response.h
 *
 * An Ezsigndocumentlog Object
 */

#ifndef _ezsigndocumentlog_response_H_
#define _ezsigndocumentlog_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndocumentlog_response_t ezsigndocumentlog_response_t;

#include "field_e_ezsigndocumentlog_type.h"

// Enum  for ezsigndocumentlog_response

typedef enum  { ezmax_api_definition_ezsigndocumentlog_response__NULL = 0, ezmax_api_definition_ezsigndocumentlog_response__Clone, ezmax_api_definition_ezsigndocumentlog_response__Login, ezmax_api_definition_ezsigndocumentlog_response__Sendcode, ezmax_api_definition_ezsigndocumentlog_response__Badcode, ezmax_api_definition_ezsigndocumentlog_response__Goodcode, ezmax_api_definition_ezsigndocumentlog_response__Authentication, ezmax_api_definition_ezsigndocumentlog_response__Createpage, ezmax_api_definition_ezsigndocumentlog_response__Download, ezmax_api_definition_ezsigndocumentlog_response__Send, ezmax_api_definition_ezsigndocumentlog_response__Sign, ezmax_api_definition_ezsigndocumentlog_response__Upload, ezmax_api_definition_ezsigndocumentlog_response__View, ezmax_api_definition_ezsigndocumentlog_response__Completion, ezmax_api_definition_ezsigndocumentlog_response__Changelimitdate, ezmax_api_definition_ezsigndocumentlog_response__Unsign, ezmax_api_definition_ezsigndocumentlog_response__ImportFromInstanet, ezmax_api_definition_ezsigndocumentlog_response__SendEmail, ezmax_api_definition_ezsigndocumentlog_response__FormCompletion, ezmax_api_definition_ezsigndocumentlog_response__SignatureAttachmentAdd, ezmax_api_definition_ezsigndocumentlog_response__SignatureAttachmentValidation, ezmax_api_definition_ezsigndocumentlog_response__SignatureAttachmentRefused, ezmax_api_definition_ezsigndocumentlog_response__SignatureAttachmentDeleted, ezmax_api_definition_ezsigndocumentlog_response__DeclinedToSign } ezmax_api_definition_ezsigndocumentlog_response__e;

char* ezsigndocumentlog_response_e_ezsigndocumentlog_type_ToString(ezmax_api_definition_ezsigndocumentlog_response__e e_ezsigndocumentlog_type);

ezmax_api_definition_ezsigndocumentlog_response__e ezsigndocumentlog_response_e_ezsigndocumentlog_type_FromString(char* e_ezsigndocumentlog_type);



typedef struct ezsigndocumentlog_response_t {
    int fki_user_id; //numeric
    int fki_ezsignsigner_id; //numeric
    char *dt_ezsigndocumentlog_datetime; // string
    field_e_ezsigndocumentlog_type_t *e_ezsigndocumentlog_type; // custom
    char *s_ezsigndocumentlog_detail; // string
    char *s_ezsigndocumentlog_lastname; // string
    char *s_ezsigndocumentlog_firstname; // string
    char *s_ezsigndocumentlog_ip; // string

} ezsigndocumentlog_response_t;

ezsigndocumentlog_response_t *ezsigndocumentlog_response_create(
    int fki_user_id,
    int fki_ezsignsigner_id,
    char *dt_ezsigndocumentlog_datetime,
    field_e_ezsigndocumentlog_type_t *e_ezsigndocumentlog_type,
    char *s_ezsigndocumentlog_detail,
    char *s_ezsigndocumentlog_lastname,
    char *s_ezsigndocumentlog_firstname,
    char *s_ezsigndocumentlog_ip
);

void ezsigndocumentlog_response_free(ezsigndocumentlog_response_t *ezsigndocumentlog_response);

ezsigndocumentlog_response_t *ezsigndocumentlog_response_parseFromJSON(cJSON *ezsigndocumentlog_responseJSON);

cJSON *ezsigndocumentlog_response_convertToJSON(ezsigndocumentlog_response_t *ezsigndocumentlog_response);

#endif /* _ezsigndocumentlog_response_H_ */

