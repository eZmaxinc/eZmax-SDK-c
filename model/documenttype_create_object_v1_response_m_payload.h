/*
 * documenttype_create_object_v1_response_m_payload.h
 *
 * Payload for POST /1/object/documenttype
 */

#ifndef _documenttype_create_object_v1_response_m_payload_H_
#define _documenttype_create_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct documenttype_create_object_v1_response_m_payload_t documenttype_create_object_v1_response_m_payload_t;




typedef struct documenttype_create_object_v1_response_m_payload_t {
    list_t *a_pki_documenttype_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} documenttype_create_object_v1_response_m_payload_t;

__attribute__((deprecated)) documenttype_create_object_v1_response_m_payload_t *documenttype_create_object_v1_response_m_payload_create(
    list_t *a_pki_documenttype_id
);

void documenttype_create_object_v1_response_m_payload_free(documenttype_create_object_v1_response_m_payload_t *documenttype_create_object_v1_response_m_payload);

documenttype_create_object_v1_response_m_payload_t *documenttype_create_object_v1_response_m_payload_parseFromJSON(cJSON *documenttype_create_object_v1_response_m_payloadJSON);

cJSON *documenttype_create_object_v1_response_m_payload_convertToJSON(documenttype_create_object_v1_response_m_payload_t *documenttype_create_object_v1_response_m_payload);

#endif /* _documenttype_create_object_v1_response_m_payload_H_ */

