/*
 * ezsignbulksendsignermapping_get_object_v2_response_m_payload.h
 *
 * Payload for GET /2/object/ezsignbulksendsignermapping/{pkiEzsignbulksendsignermappingID}
 */

#ifndef _ezsignbulksendsignermapping_get_object_v2_response_m_payload_H_
#define _ezsignbulksendsignermapping_get_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksendsignermapping_get_object_v2_response_m_payload_t ezsignbulksendsignermapping_get_object_v2_response_m_payload_t;

#include "ezsignbulksendsignermapping_response_compound.h"



typedef struct ezsignbulksendsignermapping_get_object_v2_response_m_payload_t {
    struct ezsignbulksendsignermapping_response_compound_t *obj_ezsignbulksendsignermapping; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignbulksendsignermapping_get_object_v2_response_m_payload_t;

__attribute__((deprecated)) ezsignbulksendsignermapping_get_object_v2_response_m_payload_t *ezsignbulksendsignermapping_get_object_v2_response_m_payload_create(
    ezsignbulksendsignermapping_response_compound_t *obj_ezsignbulksendsignermapping
);

void ezsignbulksendsignermapping_get_object_v2_response_m_payload_free(ezsignbulksendsignermapping_get_object_v2_response_m_payload_t *ezsignbulksendsignermapping_get_object_v2_response_m_payload);

ezsignbulksendsignermapping_get_object_v2_response_m_payload_t *ezsignbulksendsignermapping_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsignbulksendsignermapping_get_object_v2_response_m_payloadJSON);

cJSON *ezsignbulksendsignermapping_get_object_v2_response_m_payload_convertToJSON(ezsignbulksendsignermapping_get_object_v2_response_m_payload_t *ezsignbulksendsignermapping_get_object_v2_response_m_payload);

#endif /* _ezsignbulksendsignermapping_get_object_v2_response_m_payload_H_ */

