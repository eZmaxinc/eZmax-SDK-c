/*
 * ezsigntemplatedocument_create_object_v1_response_m_payload.h
 *
 * Payload for POST /1/object/ezsigntemplatedocument
 */

#ifndef _ezsigntemplatedocument_create_object_v1_response_m_payload_H_
#define _ezsigntemplatedocument_create_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatedocument_create_object_v1_response_m_payload_t ezsigntemplatedocument_create_object_v1_response_m_payload_t;




typedef struct ezsigntemplatedocument_create_object_v1_response_m_payload_t {
    list_t *a_pki_ezsigntemplatedocument_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatedocument_create_object_v1_response_m_payload_t;

__attribute__((deprecated)) ezsigntemplatedocument_create_object_v1_response_m_payload_t *ezsigntemplatedocument_create_object_v1_response_m_payload_create(
    list_t *a_pki_ezsigntemplatedocument_id
);

void ezsigntemplatedocument_create_object_v1_response_m_payload_free(ezsigntemplatedocument_create_object_v1_response_m_payload_t *ezsigntemplatedocument_create_object_v1_response_m_payload);

ezsigntemplatedocument_create_object_v1_response_m_payload_t *ezsigntemplatedocument_create_object_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatedocument_create_object_v1_response_m_payloadJSON);

cJSON *ezsigntemplatedocument_create_object_v1_response_m_payload_convertToJSON(ezsigntemplatedocument_create_object_v1_response_m_payload_t *ezsigntemplatedocument_create_object_v1_response_m_payload);

#endif /* _ezsigntemplatedocument_create_object_v1_response_m_payload_H_ */

