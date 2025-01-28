/*
 * ezsigntemplateglobal_get_object_v2_response_m_payload.h
 *
 * Payload for GET /2/object/ezsigntemplateglobal/{pkiEzsigntemplateglobalID}
 */

#ifndef _ezsigntemplateglobal_get_object_v2_response_m_payload_H_
#define _ezsigntemplateglobal_get_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplateglobal_get_object_v2_response_m_payload_t ezsigntemplateglobal_get_object_v2_response_m_payload_t;

#include "ezsigntemplateglobal_response_compound.h"



typedef struct ezsigntemplateglobal_get_object_v2_response_m_payload_t {
    struct ezsigntemplateglobal_response_compound_t *obj_ezsigntemplateglobal; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplateglobal_get_object_v2_response_m_payload_t;

__attribute__((deprecated)) ezsigntemplateglobal_get_object_v2_response_m_payload_t *ezsigntemplateglobal_get_object_v2_response_m_payload_create(
    ezsigntemplateglobal_response_compound_t *obj_ezsigntemplateglobal
);

void ezsigntemplateglobal_get_object_v2_response_m_payload_free(ezsigntemplateglobal_get_object_v2_response_m_payload_t *ezsigntemplateglobal_get_object_v2_response_m_payload);

ezsigntemplateglobal_get_object_v2_response_m_payload_t *ezsigntemplateglobal_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsigntemplateglobal_get_object_v2_response_m_payloadJSON);

cJSON *ezsigntemplateglobal_get_object_v2_response_m_payload_convertToJSON(ezsigntemplateglobal_get_object_v2_response_m_payload_t *ezsigntemplateglobal_get_object_v2_response_m_payload);

#endif /* _ezsigntemplateglobal_get_object_v2_response_m_payload_H_ */

