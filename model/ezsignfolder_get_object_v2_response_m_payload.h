/*
 * ezsignfolder_get_object_v2_response_m_payload.h
 *
 * Payload for GET /2/object/ezsignfolder/{pkiEzsignfolderID}
 */

#ifndef _ezsignfolder_get_object_v2_response_m_payload_H_
#define _ezsignfolder_get_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfolder_get_object_v2_response_m_payload_t ezsignfolder_get_object_v2_response_m_payload_t;

#include "ezsignfolder_response_compound.h"



typedef struct ezsignfolder_get_object_v2_response_m_payload_t {
    struct ezsignfolder_response_compound_t *obj_ezsignfolder; //model

} ezsignfolder_get_object_v2_response_m_payload_t;

ezsignfolder_get_object_v2_response_m_payload_t *ezsignfolder_get_object_v2_response_m_payload_create(
    ezsignfolder_response_compound_t *obj_ezsignfolder
);

void ezsignfolder_get_object_v2_response_m_payload_free(ezsignfolder_get_object_v2_response_m_payload_t *ezsignfolder_get_object_v2_response_m_payload);

ezsignfolder_get_object_v2_response_m_payload_t *ezsignfolder_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsignfolder_get_object_v2_response_m_payloadJSON);

cJSON *ezsignfolder_get_object_v2_response_m_payload_convertToJSON(ezsignfolder_get_object_v2_response_m_payload_t *ezsignfolder_get_object_v2_response_m_payload);

#endif /* _ezsignfolder_get_object_v2_response_m_payload_H_ */

