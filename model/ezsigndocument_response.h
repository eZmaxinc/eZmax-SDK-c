/*
 * ezsigndocument_response.h
 *
 * An Ezsigndocument Object
 */

#ifndef _ezsigndocument_response_H_
#define _ezsigndocument_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndocument_response_t ezsigndocument_response_t;

#include "common_audit.h"
#include "field_e_ezsigndocument_step.h"

// Enum  for ezsigndocument_response

typedef enum  { ezmax_api_definition__full_ezsigndocument_response__NULL = 0, ezmax_api_definition__full_ezsigndocument_response__Unsent, ezmax_api_definition__full_ezsigndocument_response___Unsigned, ezmax_api_definition__full_ezsigndocument_response__PartiallySigned, ezmax_api_definition__full_ezsigndocument_response__DeclinedToSign, ezmax_api_definition__full_ezsigndocument_response__PrematurelyEnded, ezmax_api_definition__full_ezsigndocument_response__Completed, ezmax_api_definition__full_ezsigndocument_response__Disposed } ezmax_api_definition__full_ezsigndocument_response__e;

char* ezsigndocument_response_e_ezsigndocument_step_ToString(ezmax_api_definition__full_ezsigndocument_response__e e_ezsigndocument_step);

ezmax_api_definition__full_ezsigndocument_response__e ezsigndocument_response_e_ezsigndocument_step_FromString(char* e_ezsigndocument_step);



typedef struct ezsigndocument_response_t {
    int fki_ezsignfolder_id; //numeric
    int fki_ezsignfoldersignerassociation_id_declinedtosign; //numeric
    char *dt_ezsigndocument_duedate; // string
    char *dt_ezsignform_completed; // string
    int fki_language_id; //numeric
    char *s_ezsigndocument_name; // string
    int pki_ezsigndocument_id; //numeric
    field_e_ezsigndocument_step_t *e_ezsigndocument_step; // custom
    char *dt_ezsigndocument_firstsend; // string
    char *dt_ezsigndocument_lastsend; // string
    int i_ezsigndocument_order; //numeric
    int i_ezsigndocument_pagetotal; //numeric
    int i_ezsigndocument_signaturesigned; //numeric
    int i_ezsigndocument_signaturetotal; //numeric
    char *s_ezsigndocument_md5initial; // string
    char *t_ezsigndocument_declinedtosignreason; // string
    char *s_ezsigndocument_md5signed; // string
    int b_ezsigndocument_ezsignform; //boolean
    struct common_audit_t *obj_audit; //model

} ezsigndocument_response_t;

ezsigndocument_response_t *ezsigndocument_response_create(
    int fki_ezsignfolder_id,
    int fki_ezsignfoldersignerassociation_id_declinedtosign,
    char *dt_ezsigndocument_duedate,
    char *dt_ezsignform_completed,
    int fki_language_id,
    char *s_ezsigndocument_name,
    int pki_ezsigndocument_id,
    field_e_ezsigndocument_step_t *e_ezsigndocument_step,
    char *dt_ezsigndocument_firstsend,
    char *dt_ezsigndocument_lastsend,
    int i_ezsigndocument_order,
    int i_ezsigndocument_pagetotal,
    int i_ezsigndocument_signaturesigned,
    int i_ezsigndocument_signaturetotal,
    char *s_ezsigndocument_md5initial,
    char *t_ezsigndocument_declinedtosignreason,
    char *s_ezsigndocument_md5signed,
    int b_ezsigndocument_ezsignform,
    common_audit_t *obj_audit
);

void ezsigndocument_response_free(ezsigndocument_response_t *ezsigndocument_response);

ezsigndocument_response_t *ezsigndocument_response_parseFromJSON(cJSON *ezsigndocument_responseJSON);

cJSON *ezsigndocument_response_convertToJSON(ezsigndocument_response_t *ezsigndocument_response);

#endif /* _ezsigndocument_response_H_ */

