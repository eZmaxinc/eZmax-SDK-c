/*
 * ezsignuser_get_object_v2_response_m_payload.h
 *
 * Payload for GET /2/object/ezsignuser/{pkiEzsignuserID}
 */

#ifndef _ezsignuser_get_object_v2_response_m_payload_H_
#define _ezsignuser_get_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignuser_get_object_v2_response_m_payload_t ezsignuser_get_object_v2_response_m_payload_t;

#include "ezsignuser_response_compound.h"



typedef struct ezsignuser_get_object_v2_response_m_payload_t {
    struct ezsignuser_response_compound_t *obj_ezsignuser; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignuser_get_object_v2_response_m_payload_t;

__attribute__((deprecated)) ezsignuser_get_object_v2_response_m_payload_t *ezsignuser_get_object_v2_response_m_payload_create(
    ezsignuser_response_compound_t *obj_ezsignuser
);

void ezsignuser_get_object_v2_response_m_payload_free(ezsignuser_get_object_v2_response_m_payload_t *ezsignuser_get_object_v2_response_m_payload);

ezsignuser_get_object_v2_response_m_payload_t *ezsignuser_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsignuser_get_object_v2_response_m_payloadJSON);

cJSON *ezsignuser_get_object_v2_response_m_payload_convertToJSON(ezsignuser_get_object_v2_response_m_payload_t *ezsignuser_get_object_v2_response_m_payload);

#endif /* _ezsignuser_get_object_v2_response_m_payload_H_ */

