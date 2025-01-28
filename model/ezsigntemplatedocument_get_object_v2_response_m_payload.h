/*
 * ezsigntemplatedocument_get_object_v2_response_m_payload.h
 *
 * Payload for GET /2/object/ezsigntemplatedocument/{pkiEzsigntemplatedocumentID}
 */

#ifndef _ezsigntemplatedocument_get_object_v2_response_m_payload_H_
#define _ezsigntemplatedocument_get_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatedocument_get_object_v2_response_m_payload_t ezsigntemplatedocument_get_object_v2_response_m_payload_t;

#include "ezsigntemplatedocument_response_compound.h"



typedef struct ezsigntemplatedocument_get_object_v2_response_m_payload_t {
    struct ezsigntemplatedocument_response_compound_t *obj_ezsigntemplatedocument; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatedocument_get_object_v2_response_m_payload_t;

__attribute__((deprecated)) ezsigntemplatedocument_get_object_v2_response_m_payload_t *ezsigntemplatedocument_get_object_v2_response_m_payload_create(
    ezsigntemplatedocument_response_compound_t *obj_ezsigntemplatedocument
);

void ezsigntemplatedocument_get_object_v2_response_m_payload_free(ezsigntemplatedocument_get_object_v2_response_m_payload_t *ezsigntemplatedocument_get_object_v2_response_m_payload);

ezsigntemplatedocument_get_object_v2_response_m_payload_t *ezsigntemplatedocument_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsigntemplatedocument_get_object_v2_response_m_payloadJSON);

cJSON *ezsigntemplatedocument_get_object_v2_response_m_payload_convertToJSON(ezsigntemplatedocument_get_object_v2_response_m_payload_t *ezsigntemplatedocument_get_object_v2_response_m_payload);

#endif /* _ezsigntemplatedocument_get_object_v2_response_m_payload_H_ */

