/*
 * ezsignbulksend_get_object_v2_response_m_payload.h
 *
 * Payload for GET /2/object/ezsignbulksend/{pkiEzsignbulksendID}
 */

#ifndef _ezsignbulksend_get_object_v2_response_m_payload_H_
#define _ezsignbulksend_get_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksend_get_object_v2_response_m_payload_t ezsignbulksend_get_object_v2_response_m_payload_t;

#include "ezsignbulksend_response_compound.h"



typedef struct ezsignbulksend_get_object_v2_response_m_payload_t {
    struct ezsignbulksend_response_compound_t *obj_ezsignbulksend; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignbulksend_get_object_v2_response_m_payload_t;

__attribute__((deprecated)) ezsignbulksend_get_object_v2_response_m_payload_t *ezsignbulksend_get_object_v2_response_m_payload_create(
    ezsignbulksend_response_compound_t *obj_ezsignbulksend
);

void ezsignbulksend_get_object_v2_response_m_payload_free(ezsignbulksend_get_object_v2_response_m_payload_t *ezsignbulksend_get_object_v2_response_m_payload);

ezsignbulksend_get_object_v2_response_m_payload_t *ezsignbulksend_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsignbulksend_get_object_v2_response_m_payloadJSON);

cJSON *ezsignbulksend_get_object_v2_response_m_payload_convertToJSON(ezsignbulksend_get_object_v2_response_m_payload_t *ezsignbulksend_get_object_v2_response_m_payload);

#endif /* _ezsignbulksend_get_object_v2_response_m_payload_H_ */

