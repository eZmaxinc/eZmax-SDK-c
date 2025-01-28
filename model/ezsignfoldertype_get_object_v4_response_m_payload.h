/*
 * ezsignfoldertype_get_object_v4_response_m_payload.h
 *
 * Payload for GET /4/object/ezsignfoldertype/{pkiEzsignfoldertypeID}
 */

#ifndef _ezsignfoldertype_get_object_v4_response_m_payload_H_
#define _ezsignfoldertype_get_object_v4_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfoldertype_get_object_v4_response_m_payload_t ezsignfoldertype_get_object_v4_response_m_payload_t;

#include "ezsignfoldertype_response_compound_v4.h"



typedef struct ezsignfoldertype_get_object_v4_response_m_payload_t {
    struct ezsignfoldertype_response_compound_v4_t *obj_ezsignfoldertype; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignfoldertype_get_object_v4_response_m_payload_t;

__attribute__((deprecated)) ezsignfoldertype_get_object_v4_response_m_payload_t *ezsignfoldertype_get_object_v4_response_m_payload_create(
    ezsignfoldertype_response_compound_v4_t *obj_ezsignfoldertype
);

void ezsignfoldertype_get_object_v4_response_m_payload_free(ezsignfoldertype_get_object_v4_response_m_payload_t *ezsignfoldertype_get_object_v4_response_m_payload);

ezsignfoldertype_get_object_v4_response_m_payload_t *ezsignfoldertype_get_object_v4_response_m_payload_parseFromJSON(cJSON *ezsignfoldertype_get_object_v4_response_m_payloadJSON);

cJSON *ezsignfoldertype_get_object_v4_response_m_payload_convertToJSON(ezsignfoldertype_get_object_v4_response_m_payload_t *ezsignfoldertype_get_object_v4_response_m_payload);

#endif /* _ezsignfoldertype_get_object_v4_response_m_payload_H_ */

