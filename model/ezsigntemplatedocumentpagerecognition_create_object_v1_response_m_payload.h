/*
 * ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload.h
 *
 * Payload for POST /1/object/ezsigntemplatedocumentpagerecognition
 */

#ifndef _ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload_H_
#define _ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload_t ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload_t;




typedef struct ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload_t {
    list_t *a_pki_ezsigntemplatedocumentpagerecognition_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload_t;

__attribute__((deprecated)) ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload_t *ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload_create(
    list_t *a_pki_ezsigntemplatedocumentpagerecognition_id
);

void ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload_free(ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload_t *ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload);

ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload_t *ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payloadJSON);

cJSON *ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload_convertToJSON(ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload_t *ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload);

#endif /* _ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload_H_ */

