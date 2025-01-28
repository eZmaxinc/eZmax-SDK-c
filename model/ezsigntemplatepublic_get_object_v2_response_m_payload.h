/*
 * ezsigntemplatepublic_get_object_v2_response_m_payload.h
 *
 * Payload for GET /2/object/ezsigntemplatepublic/{pkiEzsigntemplatepublicID}
 */

#ifndef _ezsigntemplatepublic_get_object_v2_response_m_payload_H_
#define _ezsigntemplatepublic_get_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepublic_get_object_v2_response_m_payload_t ezsigntemplatepublic_get_object_v2_response_m_payload_t;

#include "ezsigntemplatepublic_response_compound.h"



typedef struct ezsigntemplatepublic_get_object_v2_response_m_payload_t {
    struct ezsigntemplatepublic_response_compound_t *obj_ezsigntemplatepublic; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatepublic_get_object_v2_response_m_payload_t;

__attribute__((deprecated)) ezsigntemplatepublic_get_object_v2_response_m_payload_t *ezsigntemplatepublic_get_object_v2_response_m_payload_create(
    ezsigntemplatepublic_response_compound_t *obj_ezsigntemplatepublic
);

void ezsigntemplatepublic_get_object_v2_response_m_payload_free(ezsigntemplatepublic_get_object_v2_response_m_payload_t *ezsigntemplatepublic_get_object_v2_response_m_payload);

ezsigntemplatepublic_get_object_v2_response_m_payload_t *ezsigntemplatepublic_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsigntemplatepublic_get_object_v2_response_m_payloadJSON);

cJSON *ezsigntemplatepublic_get_object_v2_response_m_payload_convertToJSON(ezsigntemplatepublic_get_object_v2_response_m_payload_t *ezsigntemplatepublic_get_object_v2_response_m_payload);

#endif /* _ezsigntemplatepublic_get_object_v2_response_m_payload_H_ */

