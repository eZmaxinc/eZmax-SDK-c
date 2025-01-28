/*
 * ezsigndocument_edit_ezsignannotations_v1_response_m_payload.h
 *
 * Payload for PUT /1/object/ezsigndocument/{pkiEzsigndocumentID}/editEzsignannotations
 */

#ifndef _ezsigndocument_edit_ezsignannotations_v1_response_m_payload_H_
#define _ezsigndocument_edit_ezsignannotations_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndocument_edit_ezsignannotations_v1_response_m_payload_t ezsigndocument_edit_ezsignannotations_v1_response_m_payload_t;




typedef struct ezsigndocument_edit_ezsignannotations_v1_response_m_payload_t {
    list_t *a_pki_ezsignannotation_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigndocument_edit_ezsignannotations_v1_response_m_payload_t;

__attribute__((deprecated)) ezsigndocument_edit_ezsignannotations_v1_response_m_payload_t *ezsigndocument_edit_ezsignannotations_v1_response_m_payload_create(
    list_t *a_pki_ezsignannotation_id
);

void ezsigndocument_edit_ezsignannotations_v1_response_m_payload_free(ezsigndocument_edit_ezsignannotations_v1_response_m_payload_t *ezsigndocument_edit_ezsignannotations_v1_response_m_payload);

ezsigndocument_edit_ezsignannotations_v1_response_m_payload_t *ezsigndocument_edit_ezsignannotations_v1_response_m_payload_parseFromJSON(cJSON *ezsigndocument_edit_ezsignannotations_v1_response_m_payloadJSON);

cJSON *ezsigndocument_edit_ezsignannotations_v1_response_m_payload_convertToJSON(ezsigndocument_edit_ezsignannotations_v1_response_m_payload_t *ezsigndocument_edit_ezsignannotations_v1_response_m_payload);

#endif /* _ezsigndocument_edit_ezsignannotations_v1_response_m_payload_H_ */

