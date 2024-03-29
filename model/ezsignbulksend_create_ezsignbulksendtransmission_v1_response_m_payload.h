/*
 * ezsignbulksend_create_ezsignbulksendtransmission_v1_response_m_payload.h
 *
 * Payload for POST /1/object/ezsignbulksend/{pkiEzsignbulksendID}/createEzsignbulksendtransmission
 */

#ifndef _ezsignbulksend_create_ezsignbulksendtransmission_v1_response_m_payload_H_
#define _ezsignbulksend_create_ezsignbulksendtransmission_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksend_create_ezsignbulksendtransmission_v1_response_m_payload_t ezsignbulksend_create_ezsignbulksendtransmission_v1_response_m_payload_t;

#include "ezsignbulksendtransmission_response.h"



typedef struct ezsignbulksend_create_ezsignbulksendtransmission_v1_response_m_payload_t {
    struct ezsignbulksendtransmission_response_t *obj_ezsignbulksendtransmission; //model

} ezsignbulksend_create_ezsignbulksendtransmission_v1_response_m_payload_t;

ezsignbulksend_create_ezsignbulksendtransmission_v1_response_m_payload_t *ezsignbulksend_create_ezsignbulksendtransmission_v1_response_m_payload_create(
    ezsignbulksendtransmission_response_t *obj_ezsignbulksendtransmission
);

void ezsignbulksend_create_ezsignbulksendtransmission_v1_response_m_payload_free(ezsignbulksend_create_ezsignbulksendtransmission_v1_response_m_payload_t *ezsignbulksend_create_ezsignbulksendtransmission_v1_response_m_payload);

ezsignbulksend_create_ezsignbulksendtransmission_v1_response_m_payload_t *ezsignbulksend_create_ezsignbulksendtransmission_v1_response_m_payload_parseFromJSON(cJSON *ezsignbulksend_create_ezsignbulksendtransmission_v1_response_m_payloadJSON);

cJSON *ezsignbulksend_create_ezsignbulksendtransmission_v1_response_m_payload_convertToJSON(ezsignbulksend_create_ezsignbulksendtransmission_v1_response_m_payload_t *ezsignbulksend_create_ezsignbulksendtransmission_v1_response_m_payload);

#endif /* _ezsignbulksend_create_ezsignbulksendtransmission_v1_response_m_payload_H_ */

