/*
 * ezsigndocument_response_compound.h
 *
 * An Ezsigndocument Object and children to create a complete structure
 */

#ifndef _ezsigndocument_response_compound_H_
#define _ezsigndocument_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndocument_response_compound_t ezsigndocument_response_compound_t;

#include "common_audit.h"
#include "custom_ezsignfoldersignerassociationstatus_response.h"
#include "field_e_ezsigndocument_step.h"

// Enum  for ezsigndocument_response_compound

typedef enum  { ezmax_api_definition__full_ezsigndocument_response_compound__NULL = 0, ezmax_api_definition__full_ezsigndocument_response_compound__Unsent, ezmax_api_definition__full_ezsigndocument_response_compound___Unsigned, ezmax_api_definition__full_ezsigndocument_response_compound__PartiallySigned, ezmax_api_definition__full_ezsigndocument_response_compound__DeclinedToSign, ezmax_api_definition__full_ezsigndocument_response_compound__PrematurelyEnded, ezmax_api_definition__full_ezsigndocument_response_compound__Completed, ezmax_api_definition__full_ezsigndocument_response_compound__Disposed } ezmax_api_definition__full_ezsigndocument_response_compound__e;

char* ezsigndocument_response_compound_e_ezsigndocument_step_ToString(ezmax_api_definition__full_ezsigndocument_response_compound__e e_ezsigndocument_step);

ezmax_api_definition__full_ezsigndocument_response_compound__e ezsigndocument_response_compound_e_ezsigndocument_step_FromString(char* e_ezsigndocument_step);



typedef struct ezsigndocument_response_compound_t {
    int pki_ezsigndocument_id; //numeric
    int fki_ezsignfolder_id; //numeric
    int fki_ezsignfoldersignerassociation_id_declinedtosign; //numeric
    char *dt_ezsigndocument_duedate; // string
    char *dt_ezsignform_completed; // string
    int fki_language_id; //numeric
    char *s_ezsigndocument_name; // string
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
    int b_ezsigndocument_hassignedsignatures; //boolean
    struct common_audit_t *obj_audit; //model
    char *s_ezsigndocument_externalid; // string
    int i_ezsigndocument_stepformtotal; //numeric
    int i_ezsigndocument_stepformcurrent; //numeric
    int i_ezsigndocument_stepsignaturetotal; //numeric
    int i_ezsigndocument_stepsignature_current; //numeric
    list_t *a_obj_ezsignfoldersignerassociationstatus; //nonprimitive container

} ezsigndocument_response_compound_t;

ezsigndocument_response_compound_t *ezsigndocument_response_compound_create(
    int pki_ezsigndocument_id,
    int fki_ezsignfolder_id,
    int fki_ezsignfoldersignerassociation_id_declinedtosign,
    char *dt_ezsigndocument_duedate,
    char *dt_ezsignform_completed,
    int fki_language_id,
    char *s_ezsigndocument_name,
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
    int b_ezsigndocument_hassignedsignatures,
    common_audit_t *obj_audit,
    char *s_ezsigndocument_externalid,
    int i_ezsigndocument_stepformtotal,
    int i_ezsigndocument_stepformcurrent,
    int i_ezsigndocument_stepsignaturetotal,
    int i_ezsigndocument_stepsignature_current,
    list_t *a_obj_ezsignfoldersignerassociationstatus
);

void ezsigndocument_response_compound_free(ezsigndocument_response_compound_t *ezsigndocument_response_compound);

ezsigndocument_response_compound_t *ezsigndocument_response_compound_parseFromJSON(cJSON *ezsigndocument_response_compoundJSON);

cJSON *ezsigndocument_response_compound_convertToJSON(ezsigndocument_response_compound_t *ezsigndocument_response_compound);

#endif /* _ezsigndocument_response_compound_H_ */

