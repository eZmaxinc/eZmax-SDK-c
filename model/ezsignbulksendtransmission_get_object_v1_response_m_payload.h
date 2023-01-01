/*
 * ezsignbulksendtransmission_get_object_v1_response_m_payload.h
 *
 * Payload for GET /1/object/ezsignbulksendtransmission/{pkiEzsignbulksendtransmissionID}
 */

#ifndef _ezsignbulksendtransmission_get_object_v1_response_m_payload_H_
#define _ezsignbulksendtransmission_get_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksendtransmission_get_object_v1_response_m_payload_t ezsignbulksendtransmission_get_object_v1_response_m_payload_t;

#include "common_audit.h"
#include "custom_ezsignfoldertransmission_response.h"



typedef struct ezsignbulksendtransmission_get_object_v1_response_m_payload_t {
    int pki_ezsignbulksendtransmission_id; //numeric
    int fki_ezsignbulksend_id; //numeric
    char *s_ezsignbulksendtransmission_description; // string
    int i_ezsignbulksendtransmission_errors; //numeric
    struct common_audit_t *obj_audit; //model
    list_t *a_obj_ezsignfoldertransmission; //nonprimitive container

} ezsignbulksendtransmission_get_object_v1_response_m_payload_t;

ezsignbulksendtransmission_get_object_v1_response_m_payload_t *ezsignbulksendtransmission_get_object_v1_response_m_payload_create(
    int pki_ezsignbulksendtransmission_id,
    int fki_ezsignbulksend_id,
    char *s_ezsignbulksendtransmission_description,
    int i_ezsignbulksendtransmission_errors,
    common_audit_t *obj_audit,
    list_t *a_obj_ezsignfoldertransmission
);

void ezsignbulksendtransmission_get_object_v1_response_m_payload_free(ezsignbulksendtransmission_get_object_v1_response_m_payload_t *ezsignbulksendtransmission_get_object_v1_response_m_payload);

ezsignbulksendtransmission_get_object_v1_response_m_payload_t *ezsignbulksendtransmission_get_object_v1_response_m_payload_parseFromJSON(cJSON *ezsignbulksendtransmission_get_object_v1_response_m_payloadJSON);

cJSON *ezsignbulksendtransmission_get_object_v1_response_m_payload_convertToJSON(ezsignbulksendtransmission_get_object_v1_response_m_payload_t *ezsignbulksendtransmission_get_object_v1_response_m_payload);

#endif /* _ezsignbulksendtransmission_get_object_v1_response_m_payload_H_ */

