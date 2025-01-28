/*
 * ezsignfolder_get_object_v3_response_m_payload.h
 *
 * Payload for GET /3/object/ezsignfolder/{pkiEzsignfolderID}
 */

#ifndef _ezsignfolder_get_object_v3_response_m_payload_H_
#define _ezsignfolder_get_object_v3_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfolder_get_object_v3_response_m_payload_t ezsignfolder_get_object_v3_response_m_payload_t;

#include "ezsignfolder_response_compound_v3.h"



typedef struct ezsignfolder_get_object_v3_response_m_payload_t {
    struct ezsignfolder_response_compound_v3_t *obj_ezsignfolder; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignfolder_get_object_v3_response_m_payload_t;

__attribute__((deprecated)) ezsignfolder_get_object_v3_response_m_payload_t *ezsignfolder_get_object_v3_response_m_payload_create(
    ezsignfolder_response_compound_v3_t *obj_ezsignfolder
);

void ezsignfolder_get_object_v3_response_m_payload_free(ezsignfolder_get_object_v3_response_m_payload_t *ezsignfolder_get_object_v3_response_m_payload);

ezsignfolder_get_object_v3_response_m_payload_t *ezsignfolder_get_object_v3_response_m_payload_parseFromJSON(cJSON *ezsignfolder_get_object_v3_response_m_payloadJSON);

cJSON *ezsignfolder_get_object_v3_response_m_payload_convertToJSON(ezsignfolder_get_object_v3_response_m_payload_t *ezsignfolder_get_object_v3_response_m_payload);

#endif /* _ezsignfolder_get_object_v3_response_m_payload_H_ */

