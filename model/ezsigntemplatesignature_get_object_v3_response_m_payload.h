/*
 * ezsigntemplatesignature_get_object_v3_response_m_payload.h
 *
 * Payload for GET /3/object/ezsigntemplatesignature/{pkiEzsigntemplatesignatureID}
 */

#ifndef _ezsigntemplatesignature_get_object_v3_response_m_payload_H_
#define _ezsigntemplatesignature_get_object_v3_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatesignature_get_object_v3_response_m_payload_t ezsigntemplatesignature_get_object_v3_response_m_payload_t;

#include "ezsigntemplatesignature_response_compound_v3.h"



typedef struct ezsigntemplatesignature_get_object_v3_response_m_payload_t {
    struct ezsigntemplatesignature_response_compound_v3_t *obj_ezsigntemplatesignature; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatesignature_get_object_v3_response_m_payload_t;

__attribute__((deprecated)) ezsigntemplatesignature_get_object_v3_response_m_payload_t *ezsigntemplatesignature_get_object_v3_response_m_payload_create(
    ezsigntemplatesignature_response_compound_v3_t *obj_ezsigntemplatesignature
);

void ezsigntemplatesignature_get_object_v3_response_m_payload_free(ezsigntemplatesignature_get_object_v3_response_m_payload_t *ezsigntemplatesignature_get_object_v3_response_m_payload);

ezsigntemplatesignature_get_object_v3_response_m_payload_t *ezsigntemplatesignature_get_object_v3_response_m_payload_parseFromJSON(cJSON *ezsigntemplatesignature_get_object_v3_response_m_payloadJSON);

cJSON *ezsigntemplatesignature_get_object_v3_response_m_payload_convertToJSON(ezsigntemplatesignature_get_object_v3_response_m_payload_t *ezsigntemplatesignature_get_object_v3_response_m_payload);

#endif /* _ezsigntemplatesignature_get_object_v3_response_m_payload_H_ */

