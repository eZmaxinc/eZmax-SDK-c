/*
 * ezsigndocument_get_object_v1_response_m_payload.h
 *
 * Payload for the /1/object/ezsigndocument/getObject API Request
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
#include "ezsigndocument_response.h"
#include "field_e_ezsigndocument_step.h"

// Enum  for ezsigndocument_get_object_v1_response_m_payload

typedef enum  { ezmax_api_definition_ezsigndocument_get_object_v1_response_m_payload__NULL = 0, ezmax_api_definition_ezsigndocument_get_object_v1_response_m_payload__Unsent, ezmax_api_definition_ezsigndocument_get_object_v1_response_m_payload___Unsigned, ezmax_api_definition_ezsigndocument_get_object_v1_response_m_payload__PartiallySigned, ezmax_api_definition_ezsigndocument_get_object_v1_response_m_payload__Completed } ezmax_api_definition_ezsigndocument_get_object_v1_response_m_payload__e;

char* ezsigndocument_get_object_v1_response_m_payload_e_ezsigndocument_step_ToString(ezmax_api_definition_ezsigndocument_get_object_v1_response_m_payload__e e_ezsigndocument_step);

ezmax_api_definition_ezsigndocument_get_object_v1_response_m_payload__e ezsigndocument_get_object_v1_response_m_payload_e_ezsigndocument_step_FromString(char* e_ezsigndocument_step);



typedef struct ezsigndocument_get_object_v1_response_m_payload_t {
    int fki_ezsignfolder_id; //numeric
    char *dt_ezsigndocument_duedate; // string
    int fki_language_id; //numeric
    char *s_ezsigndocument_filename; // string
    char *s_ezsigndocument_name; // string
    int pki_ezsigndocument_id; //numeric
    char *dt_ezsigndocument_firstsend; // string
    char *dt_ezsigndocument_lastsend; // string
    int i_ezsigndocument_order; //numeric
    int i_ezsigndocument_pagetotal; //numeric
    int i_ezsigndocument_signaturesigned; //numeric
    int i_ezsigndocument_signaturetotal; //numeric
    char *s_ezsigndocument_md5initial; // string
    char *s_ezsigndocument_md5signed; // string
    struct common_audit_t *obj_audit; //model

} ezsigndocument_get_object_v1_response_m_payload_t;

ezsigndocument_get_object_v1_response_m_payload_t *ezsigndocument_get_object_v1_response_m_payload_create(
    int fki_ezsignfolder_id,
    char *dt_ezsigndocument_duedate,
    int fki_language_id,
    char *s_ezsigndocument_filename,
    char *s_ezsigndocument_name,
    int pki_ezsigndocument_id,
    char *dt_ezsigndocument_firstsend,
    char *dt_ezsigndocument_lastsend,
    int i_ezsigndocument_order,
    int i_ezsigndocument_pagetotal,
    int i_ezsigndocument_signaturesigned,
    int i_ezsigndocument_signaturetotal,
    char *s_ezsigndocument_md5initial,
    char *s_ezsigndocument_md5signed,
    common_audit_t *obj_audit
);

void ezsigndocument_get_object_v1_response_m_payload_free(ezsigndocument_get_object_v1_response_m_payload_t *ezsigndocument_get_object_v1_response_m_payload);

ezsigndocument_get_object_v1_response_m_payload_t *ezsigndocument_get_object_v1_response_m_payload_parseFromJSON(cJSON *ezsigndocument_get_object_v1_response_m_payloadJSON);

cJSON *ezsigndocument_get_object_v1_response_m_payload_convertToJSON(ezsigndocument_get_object_v1_response_m_payload_t *ezsigndocument_get_object_v1_response_m_payload);

#endif /* _ezsigndocument_get_object_v1_response_m_payload_H_ */

