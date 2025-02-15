/*
 * ezsignbulksendtransmission_get_object_v2_response_m_payload.h
 *
 * Payload for GET /2/object/ezsignbulksendtransmission/{pkiEzsignbulksendtransmissionID}
 */

#ifndef _ezsignbulksendtransmission_get_object_v2_response_m_payload_H_
#define _ezsignbulksendtransmission_get_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksendtransmission_get_object_v2_response_m_payload_t ezsignbulksendtransmission_get_object_v2_response_m_payload_t;

#include "ezsignbulksendtransmission_response_compound.h"



typedef struct ezsignbulksendtransmission_get_object_v2_response_m_payload_t {
    struct ezsignbulksendtransmission_response_compound_t *obj_ezsignbulksendtransmission; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignbulksendtransmission_get_object_v2_response_m_payload_t;

__attribute__((deprecated)) ezsignbulksendtransmission_get_object_v2_response_m_payload_t *ezsignbulksendtransmission_get_object_v2_response_m_payload_create(
    ezsignbulksendtransmission_response_compound_t *obj_ezsignbulksendtransmission
);

void ezsignbulksendtransmission_get_object_v2_response_m_payload_free(ezsignbulksendtransmission_get_object_v2_response_m_payload_t *ezsignbulksendtransmission_get_object_v2_response_m_payload);

ezsignbulksendtransmission_get_object_v2_response_m_payload_t *ezsignbulksendtransmission_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsignbulksendtransmission_get_object_v2_response_m_payloadJSON);

cJSON *ezsignbulksendtransmission_get_object_v2_response_m_payload_convertToJSON(ezsignbulksendtransmission_get_object_v2_response_m_payload_t *ezsignbulksendtransmission_get_object_v2_response_m_payload);

#endif /* _ezsignbulksendtransmission_get_object_v2_response_m_payload_H_ */

