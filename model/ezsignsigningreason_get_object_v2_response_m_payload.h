/*
 * ezsignsigningreason_get_object_v2_response_m_payload.h
 *
 * Payload for GET /2/object/ezsignsigningreason/{pkiEzsignsigningreasonID}
 */

#ifndef _ezsignsigningreason_get_object_v2_response_m_payload_H_
#define _ezsignsigningreason_get_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsigningreason_get_object_v2_response_m_payload_t ezsignsigningreason_get_object_v2_response_m_payload_t;

#include "ezsignsigningreason_response_compound.h"



typedef struct ezsignsigningreason_get_object_v2_response_m_payload_t {
    struct ezsignsigningreason_response_compound_t *obj_ezsignsigningreason; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignsigningreason_get_object_v2_response_m_payload_t;

__attribute__((deprecated)) ezsignsigningreason_get_object_v2_response_m_payload_t *ezsignsigningreason_get_object_v2_response_m_payload_create(
    ezsignsigningreason_response_compound_t *obj_ezsignsigningreason
);

void ezsignsigningreason_get_object_v2_response_m_payload_free(ezsignsigningreason_get_object_v2_response_m_payload_t *ezsignsigningreason_get_object_v2_response_m_payload);

ezsignsigningreason_get_object_v2_response_m_payload_t *ezsignsigningreason_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsignsigningreason_get_object_v2_response_m_payloadJSON);

cJSON *ezsignsigningreason_get_object_v2_response_m_payload_convertToJSON(ezsignsigningreason_get_object_v2_response_m_payload_t *ezsignsigningreason_get_object_v2_response_m_payload);

#endif /* _ezsignsigningreason_get_object_v2_response_m_payload_H_ */

