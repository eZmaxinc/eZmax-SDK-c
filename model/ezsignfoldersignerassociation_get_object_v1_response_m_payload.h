/*
 * ezsignfoldersignerassociation_get_object_v1_response_m_payload.h
 *
 * Payload for the /1/object/ezsignfoldersignerassociation/getObject API Request
 */

#ifndef _ezsignfoldersignerassociation_get_object_v1_response_m_payload_H_
#define _ezsignfoldersignerassociation_get_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfoldersignerassociation_get_object_v1_response_m_payload_t ezsignfoldersignerassociation_get_object_v1_response_m_payload_t;

#include "ezsignfoldersignerassociation_response_compound.h"



typedef struct ezsignfoldersignerassociation_get_object_v1_response_m_payload_t {
    int pki_ezsignfoldersignerassociation_id; //numeric
    int fki_ezsignfolder_id; //numeric
    int b_ezsignfoldersignerassociation_receivecopy; //boolean

} ezsignfoldersignerassociation_get_object_v1_response_m_payload_t;

ezsignfoldersignerassociation_get_object_v1_response_m_payload_t *ezsignfoldersignerassociation_get_object_v1_response_m_payload_create(
    int pki_ezsignfoldersignerassociation_id,
    int fki_ezsignfolder_id,
    int b_ezsignfoldersignerassociation_receivecopy
);

void ezsignfoldersignerassociation_get_object_v1_response_m_payload_free(ezsignfoldersignerassociation_get_object_v1_response_m_payload_t *ezsignfoldersignerassociation_get_object_v1_response_m_payload);

ezsignfoldersignerassociation_get_object_v1_response_m_payload_t *ezsignfoldersignerassociation_get_object_v1_response_m_payload_parseFromJSON(cJSON *ezsignfoldersignerassociation_get_object_v1_response_m_payloadJSON);

cJSON *ezsignfoldersignerassociation_get_object_v1_response_m_payload_convertToJSON(ezsignfoldersignerassociation_get_object_v1_response_m_payload_t *ezsignfoldersignerassociation_get_object_v1_response_m_payload);

#endif /* _ezsignfoldersignerassociation_get_object_v1_response_m_payload_H_ */

