/*
 * ezsigndocument_get_temporary_proof_v1_response_m_payload.h
 *
 * Payload for the /1/object/ezsigndocument/{pkiEzsigndocumentID}/getTemporaryProof API Request
 */

#ifndef _ezsigndocument_get_temporary_proof_v1_response_m_payload_H_
#define _ezsigndocument_get_temporary_proof_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndocument_get_temporary_proof_v1_response_m_payload_t ezsigndocument_get_temporary_proof_v1_response_m_payload_t;

#include "ezsigndocumentlog_response.h"



typedef struct ezsigndocument_get_temporary_proof_v1_response_m_payload_t {
    struct ezsigndocumentlog_response_t *a_obj_ezsigndocumentlog; //model

} ezsigndocument_get_temporary_proof_v1_response_m_payload_t;

ezsigndocument_get_temporary_proof_v1_response_m_payload_t *ezsigndocument_get_temporary_proof_v1_response_m_payload_create(
    ezsigndocumentlog_response_t *a_obj_ezsigndocumentlog
);

void ezsigndocument_get_temporary_proof_v1_response_m_payload_free(ezsigndocument_get_temporary_proof_v1_response_m_payload_t *ezsigndocument_get_temporary_proof_v1_response_m_payload);

ezsigndocument_get_temporary_proof_v1_response_m_payload_t *ezsigndocument_get_temporary_proof_v1_response_m_payload_parseFromJSON(cJSON *ezsigndocument_get_temporary_proof_v1_response_m_payloadJSON);

cJSON *ezsigndocument_get_temporary_proof_v1_response_m_payload_convertToJSON(ezsigndocument_get_temporary_proof_v1_response_m_payload_t *ezsigndocument_get_temporary_proof_v1_response_m_payload);

#endif /* _ezsigndocument_get_temporary_proof_v1_response_m_payload_H_ */

