/*
 * variableexpense_create_object_v1_response_m_payload.h
 *
 * Payload for POST /1/object/variableexpense
 */

#ifndef _variableexpense_create_object_v1_response_m_payload_H_
#define _variableexpense_create_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct variableexpense_create_object_v1_response_m_payload_t variableexpense_create_object_v1_response_m_payload_t;




typedef struct variableexpense_create_object_v1_response_m_payload_t {
    list_t *a_pki_variableexpense_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} variableexpense_create_object_v1_response_m_payload_t;

__attribute__((deprecated)) variableexpense_create_object_v1_response_m_payload_t *variableexpense_create_object_v1_response_m_payload_create(
    list_t *a_pki_variableexpense_id
);

void variableexpense_create_object_v1_response_m_payload_free(variableexpense_create_object_v1_response_m_payload_t *variableexpense_create_object_v1_response_m_payload);

variableexpense_create_object_v1_response_m_payload_t *variableexpense_create_object_v1_response_m_payload_parseFromJSON(cJSON *variableexpense_create_object_v1_response_m_payloadJSON);

cJSON *variableexpense_create_object_v1_response_m_payload_convertToJSON(variableexpense_create_object_v1_response_m_payload_t *variableexpense_create_object_v1_response_m_payload);

#endif /* _variableexpense_create_object_v1_response_m_payload_H_ */

