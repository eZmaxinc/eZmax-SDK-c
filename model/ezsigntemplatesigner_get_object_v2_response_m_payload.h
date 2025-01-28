/*
 * ezsigntemplatesigner_get_object_v2_response_m_payload.h
 *
 * Payload for GET /2/object/ezsigntemplatesigner/{pkiEzsigntemplatesignerID}
 */

#ifndef _ezsigntemplatesigner_get_object_v2_response_m_payload_H_
#define _ezsigntemplatesigner_get_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatesigner_get_object_v2_response_m_payload_t ezsigntemplatesigner_get_object_v2_response_m_payload_t;

#include "ezsigntemplatesigner_response_compound.h"



typedef struct ezsigntemplatesigner_get_object_v2_response_m_payload_t {
    struct ezsigntemplatesigner_response_compound_t *obj_ezsigntemplatesigner; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatesigner_get_object_v2_response_m_payload_t;

__attribute__((deprecated)) ezsigntemplatesigner_get_object_v2_response_m_payload_t *ezsigntemplatesigner_get_object_v2_response_m_payload_create(
    ezsigntemplatesigner_response_compound_t *obj_ezsigntemplatesigner
);

void ezsigntemplatesigner_get_object_v2_response_m_payload_free(ezsigntemplatesigner_get_object_v2_response_m_payload_t *ezsigntemplatesigner_get_object_v2_response_m_payload);

ezsigntemplatesigner_get_object_v2_response_m_payload_t *ezsigntemplatesigner_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsigntemplatesigner_get_object_v2_response_m_payloadJSON);

cJSON *ezsigntemplatesigner_get_object_v2_response_m_payload_convertToJSON(ezsigntemplatesigner_get_object_v2_response_m_payload_t *ezsigntemplatesigner_get_object_v2_response_m_payload);

#endif /* _ezsigntemplatesigner_get_object_v2_response_m_payload_H_ */

