/*
 * ezsigndocument_get_object_v1_response_m_payload.h
 *
 * Payload for GET /1/object/ezsigndocument/{pkiEzsigndocumentID}
 */

#ifndef _ezsigndocument_get_object_v1_response_m_payload_H_
#define _ezsigndocument_get_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndocument_get_object_v1_response_m_payload_t ezsigndocument_get_object_v1_response_m_payload_t;

#include "common_audit.h"
#include "computed_e_ezsigndocument_steptype.h"
#include "custom_ezsignfoldersignerassociationstatus_response.h"
#include "ezsigndocumentdependency_response.h"
#include "field_e_ezsigndocument_step.h"



typedef struct ezsigndocument_get_object_v1_response_m_payload_t {
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
    ezmax_api_definition__full_computed_e_ezsigndocument_steptype__e e_ezsigndocument_steptype; //referenced enum
    int i_ezsigndocument_stepformtotal; //numeric
    int i_ezsigndocument_stepformcurrent; //numeric
    int i_ezsigndocument_stepsignaturetotal; //numeric
    int i_ezsigndocument_stepsignature_current; //numeric
    list_t *a_obj_ezsignfoldersignerassociationstatus; //nonprimitive container
    list_t *a_obj_ezsigndocumentdependency; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigndocument_get_object_v1_response_m_payload_t;

__attribute__((deprecated)) ezsigndocument_get_object_v1_response_m_payload_t *ezsigndocument_get_object_v1_response_m_payload_create(
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
    int i_ezsigndocument_ezsigndiscussiontotal,
    ezmax_api_definition__full_computed_e_ezsigndocument_steptype__e e_ezsigndocument_steptype,
    int i_ezsigndocument_stepformtotal,
    int i_ezsigndocument_stepformcurrent,
    int i_ezsigndocument_stepsignaturetotal,
    int i_ezsigndocument_stepsignature_current,
    list_t *a_obj_ezsignfoldersignerassociationstatus,
    list_t *a_obj_ezsigndocumentdependency
);

void ezsigndocument_get_object_v1_response_m_payload_free(ezsigndocument_get_object_v1_response_m_payload_t *ezsigndocument_get_object_v1_response_m_payload);

ezsigndocument_get_object_v1_response_m_payload_t *ezsigndocument_get_object_v1_response_m_payload_parseFromJSON(cJSON *ezsigndocument_get_object_v1_response_m_payloadJSON);

cJSON *ezsigndocument_get_object_v1_response_m_payload_convertToJSON(ezsigndocument_get_object_v1_response_m_payload_t *ezsigndocument_get_object_v1_response_m_payload);

#endif /* _ezsigndocument_get_object_v1_response_m_payload_H_ */

