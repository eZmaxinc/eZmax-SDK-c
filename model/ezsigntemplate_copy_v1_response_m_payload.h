/*
 * ezsigntemplate_copy_v1_response_m_payload.h
 *
 * Payload for POST /1/object/ezsigntemplate/{pkiEzsigntemplateID}/copy
 */

#ifndef _ezsigntemplate_copy_v1_response_m_payload_H_
#define _ezsigntemplate_copy_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplate_copy_v1_response_m_payload_t ezsigntemplate_copy_v1_response_m_payload_t;




typedef struct ezsigntemplate_copy_v1_response_m_payload_t {
    list_t *a_pki_ezsigntemplate_id; //primitive container

} ezsigntemplate_copy_v1_response_m_payload_t;

ezsigntemplate_copy_v1_response_m_payload_t *ezsigntemplate_copy_v1_response_m_payload_create(
    list_t *a_pki_ezsigntemplate_id
);

void ezsigntemplate_copy_v1_response_m_payload_free(ezsigntemplate_copy_v1_response_m_payload_t *ezsigntemplate_copy_v1_response_m_payload);

ezsigntemplate_copy_v1_response_m_payload_t *ezsigntemplate_copy_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplate_copy_v1_response_m_payloadJSON);

cJSON *ezsigntemplate_copy_v1_response_m_payload_convertToJSON(ezsigntemplate_copy_v1_response_m_payload_t *ezsigntemplate_copy_v1_response_m_payload);

#endif /* _ezsigntemplate_copy_v1_response_m_payload_H_ */

