/*
 * ezsignannotation_get_object_v2_response_m_payload.h
 *
 * Payload for GET /2/object/ezsignannotation/{pkiEzsignannotationID}
 */

#ifndef _ezsignannotation_get_object_v2_response_m_payload_H_
#define _ezsignannotation_get_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignannotation_get_object_v2_response_m_payload_t ezsignannotation_get_object_v2_response_m_payload_t;

#include "ezsignannotation_response_compound.h"



typedef struct ezsignannotation_get_object_v2_response_m_payload_t {
    struct ezsignannotation_response_compound_t *obj_ezsignannotation; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignannotation_get_object_v2_response_m_payload_t;

__attribute__((deprecated)) ezsignannotation_get_object_v2_response_m_payload_t *ezsignannotation_get_object_v2_response_m_payload_create(
    ezsignannotation_response_compound_t *obj_ezsignannotation
);

void ezsignannotation_get_object_v2_response_m_payload_free(ezsignannotation_get_object_v2_response_m_payload_t *ezsignannotation_get_object_v2_response_m_payload);

ezsignannotation_get_object_v2_response_m_payload_t *ezsignannotation_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsignannotation_get_object_v2_response_m_payloadJSON);

cJSON *ezsignannotation_get_object_v2_response_m_payload_convertToJSON(ezsignannotation_get_object_v2_response_m_payload_t *ezsignannotation_get_object_v2_response_m_payload);

#endif /* _ezsignannotation_get_object_v2_response_m_payload_H_ */

