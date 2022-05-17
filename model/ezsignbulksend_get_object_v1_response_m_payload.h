/*
 * ezsignbulksend_get_object_v1_response_m_payload.h
 *
 * Payload for GET /1/object/ezsignbulksend/{pkiEzsignbulksendID}
 */

#ifndef _ezsignbulksend_get_object_v1_response_m_payload_H_
#define _ezsignbulksend_get_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksend_get_object_v1_response_m_payload_t ezsignbulksend_get_object_v1_response_m_payload_t;

#include "common_audit.h"
#include "ezsignbulksend_response_compound.h"
#include "ezsignbulksenddocumentmapping_response_compound.h"
#include "ezsignbulksendsignermapping_response.h"



typedef struct ezsignbulksend_get_object_v1_response_m_payload_t {
    int pki_ezsignbulksend_id; //numeric
    int fki_ezsignfoldertype_id; //numeric
    int fki_language_id; //numeric
    char *s_language_name_x; // string
    char *s_ezsignfoldertype_name_x; // string
    char *s_ezsignbulksend_description; // string
    char *t_ezsignbulksend_note; // string
    int b_ezsignbulksend_needvalidation; //boolean
    int b_ezsignbulksend_isactive; //boolean
    struct common_audit_t *obj_audit; //model
    list_t *a_obj_ezsignbulksenddocumentmapping; //nonprimitive container
    list_t *a_obj_ezsignbulksendsignermapping; //nonprimitive container

} ezsignbulksend_get_object_v1_response_m_payload_t;

ezsignbulksend_get_object_v1_response_m_payload_t *ezsignbulksend_get_object_v1_response_m_payload_create(
    int pki_ezsignbulksend_id,
    int fki_ezsignfoldertype_id,
    int fki_language_id,
    char *s_language_name_x,
    char *s_ezsignfoldertype_name_x,
    char *s_ezsignbulksend_description,
    char *t_ezsignbulksend_note,
    int b_ezsignbulksend_needvalidation,
    int b_ezsignbulksend_isactive,
    common_audit_t *obj_audit,
    list_t *a_obj_ezsignbulksenddocumentmapping,
    list_t *a_obj_ezsignbulksendsignermapping
);

void ezsignbulksend_get_object_v1_response_m_payload_free(ezsignbulksend_get_object_v1_response_m_payload_t *ezsignbulksend_get_object_v1_response_m_payload);

ezsignbulksend_get_object_v1_response_m_payload_t *ezsignbulksend_get_object_v1_response_m_payload_parseFromJSON(cJSON *ezsignbulksend_get_object_v1_response_m_payloadJSON);

cJSON *ezsignbulksend_get_object_v1_response_m_payload_convertToJSON(ezsignbulksend_get_object_v1_response_m_payload_t *ezsignbulksend_get_object_v1_response_m_payload);

#endif /* _ezsignbulksend_get_object_v1_response_m_payload_H_ */

