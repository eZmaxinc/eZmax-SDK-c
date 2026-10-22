/*
 * documenttypechecklist_create_object_v1_response_m_payload.h
 *
 * Payload for POST /1/object/documenttypechecklist
 */

#ifndef _documenttypechecklist_create_object_v1_response_m_payload_H_
#define _documenttypechecklist_create_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct documenttypechecklist_create_object_v1_response_m_payload_t documenttypechecklist_create_object_v1_response_m_payload_t;




typedef struct documenttypechecklist_create_object_v1_response_m_payload_t {
    list_t *a_pki_documenttypechecklist_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} documenttypechecklist_create_object_v1_response_m_payload_t;

__attribute__((deprecated)) documenttypechecklist_create_object_v1_response_m_payload_t *documenttypechecklist_create_object_v1_response_m_payload_create(
    list_t *a_pki_documenttypechecklist_id
);

void documenttypechecklist_create_object_v1_response_m_payload_free(documenttypechecklist_create_object_v1_response_m_payload_t *documenttypechecklist_create_object_v1_response_m_payload);

documenttypechecklist_create_object_v1_response_m_payload_t *documenttypechecklist_create_object_v1_response_m_payload_parseFromJSON(cJSON *documenttypechecklist_create_object_v1_response_m_payloadJSON);

cJSON *documenttypechecklist_create_object_v1_response_m_payload_convertToJSON(documenttypechecklist_create_object_v1_response_m_payload_t *documenttypechecklist_create_object_v1_response_m_payload);

#endif /* _documenttypechecklist_create_object_v1_response_m_payload_H_ */

