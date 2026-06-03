/*
 * ezsignfolder_duplicate_v1_response_m_payload.h
 *
 * Payload for POST /1/object/ezsignfolder/{pkiEzsignfolderID}/duplicate
 */

#ifndef _ezsignfolder_duplicate_v1_response_m_payload_H_
#define _ezsignfolder_duplicate_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfolder_duplicate_v1_response_m_payload_t ezsignfolder_duplicate_v1_response_m_payload_t;




typedef struct ezsignfolder_duplicate_v1_response_m_payload_t {
    int *pki_ezsignfolder_id; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignfolder_duplicate_v1_response_m_payload_t;

__attribute__((deprecated)) ezsignfolder_duplicate_v1_response_m_payload_t *ezsignfolder_duplicate_v1_response_m_payload_create(
    int *pki_ezsignfolder_id
);

void ezsignfolder_duplicate_v1_response_m_payload_free(ezsignfolder_duplicate_v1_response_m_payload_t *ezsignfolder_duplicate_v1_response_m_payload);

ezsignfolder_duplicate_v1_response_m_payload_t *ezsignfolder_duplicate_v1_response_m_payload_parseFromJSON(cJSON *ezsignfolder_duplicate_v1_response_m_payloadJSON);

cJSON *ezsignfolder_duplicate_v1_response_m_payload_convertToJSON(ezsignfolder_duplicate_v1_response_m_payload_t *ezsignfolder_duplicate_v1_response_m_payload);

#endif /* _ezsignfolder_duplicate_v1_response_m_payload_H_ */

