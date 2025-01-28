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



typedef struct ezsigndocument_response_t {
    int pki_ezsigndocument_id; //numeric
    int fki_ezsignfolder_id; //numeric
    int fki_ezsignfoldersignerassociation_id_declinedtosign; //numeric
    char *dt_ezsigndocument_duedate; // string
    char *dt_ezsignform_completed; // string
    int fki_language_id; //numeric
    char *s_ezsigndocument_name; // string
    ezmax_api_definition__full_field_e_ezsigndocument_step__e e_ezsigndocument_step; //referenced enum
    char *dt_ezsigndocument_firstsend; // string
    char *dt_ezsigndocument_lastsend; // string
    int i_ezsigndocument_order; //numeric
    int i_ezsigndocument_pagetotal; //numeric
    int i_ezsigndocument_signaturesigned; //numeric
    int i_ezsigndocument_signaturetotal; //numeric
    int i_ezsigndocument_formfieldtotal; //numeric
    char *s_ezsigndocument_md5initial; // string
    char *t_ezsigndocument_declinedtosignreason; // string
    char *s_ezsigndocument_md5signed; // string
    int b_ezsigndocument_ezsignform; //boolean
    int b_ezsigndocument_hassignedsignatures; //boolean
    struct common_audit_t *obj_audit; //model
    char *s_ezsigndocument_externalid; // string
    int i_ezsigndocument_ezsignsignatureattachmenttotal; //numeric
    int i_ezsigndocument_ezsigndiscussiontotal; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigndocument_response_t;

__attribute__((deprecated)) ezsigndocument_response_t *ezsigndocument_response_create(
    int pki_ezsigndocument_id,
    int fki_ezsignfolder_id,
    int fki_ezsignfoldersignerassociation_id_declinedtosign,
    char *dt_ezsigndocument_duedate,
    char *dt_ezsignform_completed,
    int fki_language_id,
    char *s_ezsigndocument_name,
    ezmax_api_definition__full_field_e_ezsigndocument_step__e e_ezsigndocument_step,
    char *dt_ezsigndocument_firstsend,
    char *dt_ezsigndocument_lastsend,
    int i_ezsigndocument_order,
    int i_ezsigndocument_pagetotal,
    int i_ezsigndocument_signaturesigned,
    int i_ezsigndocument_signaturetotal,
    int i_ezsigndocument_formfieldtotal,
    char *s_ezsigndocument_md5initial,
    char *t_ezsigndocument_declinedtosignreason,
    char *s_ezsigndocument_md5signed,
    int b_ezsigndocument_ezsignform,
    int b_ezsigndocument_hassignedsignatures,
    common_audit_t *obj_audit,
    char *s_ezsigndocument_externalid,
    int i_ezsigndocument_ezsignsignatureattachmenttotal,
    int i_ezsigndocument_ezsigndiscussiontotal
);

void ezsigndocument_response_free(ezsigndocument_response_t *ezsigndocument_response);

ezsigndocument_response_t *ezsigndocument_response_parseFromJSON(cJSON *ezsigndocument_responseJSON);

cJSON *ezsigndocument_response_convertToJSON(ezsigndocument_response_t *ezsigndocument_response);

#endif /* _ezsigndocument_response_H_ */

