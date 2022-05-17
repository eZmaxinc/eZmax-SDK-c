/*
 * ezsignfolder_create_object_v2_response_m_payload.h
 *
 * Payload for POST /2/object/ezsignfolder
 */

#ifndef _ezsignfolder_create_object_v2_response_m_payload_H_
#define _ezsignfolder_create_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfolder_create_object_v2_response_m_payload_t ezsignfolder_create_object_v2_response_m_payload_t;




typedef struct ezsignfolder_create_object_v2_response_m_payload_t {
    list_t *a_pki_ezsignfolder_id; //primitive container

} ezsignfolder_create_object_v2_response_m_payload_t;

ezsignfolder_create_object_v2_response_m_payload_t *ezsignfolder_create_object_v2_response_m_payload_create(
    list_t *a_pki_ezsignfolder_id
);

void ezsignfolder_create_object_v2_response_m_payload_free(ezsignfolder_create_object_v2_response_m_payload_t *ezsignfolder_create_object_v2_response_m_payload);

ezsignfolder_create_object_v2_response_m_payload_t *ezsignfolder_create_object_v2_response_m_payload_parseFromJSON(cJSON *ezsignfolder_create_object_v2_response_m_payloadJSON);

cJSON *ezsignfolder_create_object_v2_response_m_payload_convertToJSON(ezsignfolder_create_object_v2_response_m_payload_t *ezsignfolder_create_object_v2_response_m_payload);

#endif /* _ezsignfolder_create_object_v2_response_m_payload_H_ */

