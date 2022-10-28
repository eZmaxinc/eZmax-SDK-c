/*
 * ezsignfoldersignerassociation_get_object_v2_response_m_payload.h
 *
 * Payload for GET /2/object/ezsignfoldersignerassociation/{pkiEzsignfoldersignerassociationID}
 */

#ifndef _ezsignfoldersignerassociation_get_object_v2_response_m_payload_H_
#define _ezsignfoldersignerassociation_get_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfoldersignerassociation_get_object_v2_response_m_payload_t ezsignfoldersignerassociation_get_object_v2_response_m_payload_t;

#include "ezsignfoldersignerassociation_response_compound.h"



typedef struct ezsignfoldersignerassociation_get_object_v2_response_m_payload_t {
    struct ezsignfoldersignerassociation_response_compound_t *obj_ezsignfoldersignerassociation; //model

} ezsignfoldersignerassociation_get_object_v2_response_m_payload_t;

ezsignfoldersignerassociation_get_object_v2_response_m_payload_t *ezsignfoldersignerassociation_get_object_v2_response_m_payload_create(
    ezsignfoldersignerassociation_response_compound_t *obj_ezsignfoldersignerassociation
);

void ezsignfoldersignerassociation_get_object_v2_response_m_payload_free(ezsignfoldersignerassociation_get_object_v2_response_m_payload_t *ezsignfoldersignerassociation_get_object_v2_response_m_payload);

ezsignfoldersignerassociation_get_object_v2_response_m_payload_t *ezsignfoldersignerassociation_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsignfoldersignerassociation_get_object_v2_response_m_payloadJSON);

cJSON *ezsignfoldersignerassociation_get_object_v2_response_m_payload_convertToJSON(ezsignfoldersignerassociation_get_object_v2_response_m_payload_t *ezsignfoldersignerassociation_get_object_v2_response_m_payload);

#endif /* _ezsignfoldersignerassociation_get_object_v2_response_m_payload_H_ */

