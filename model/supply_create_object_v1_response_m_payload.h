/*
 * supply_create_object_v1_response_m_payload.h
 *
 * Payload for POST /1/object/supply
 */

#ifndef _supply_create_object_v1_response_m_payload_H_
#define _supply_create_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct supply_create_object_v1_response_m_payload_t supply_create_object_v1_response_m_payload_t;




typedef struct supply_create_object_v1_response_m_payload_t {
    list_t *a_pki_supply_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} supply_create_object_v1_response_m_payload_t;

__attribute__((deprecated)) supply_create_object_v1_response_m_payload_t *supply_create_object_v1_response_m_payload_create(
    list_t *a_pki_supply_id
);

void supply_create_object_v1_response_m_payload_free(supply_create_object_v1_response_m_payload_t *supply_create_object_v1_response_m_payload);

supply_create_object_v1_response_m_payload_t *supply_create_object_v1_response_m_payload_parseFromJSON(cJSON *supply_create_object_v1_response_m_payloadJSON);

cJSON *supply_create_object_v1_response_m_payload_convertToJSON(supply_create_object_v1_response_m_payload_t *supply_create_object_v1_response_m_payload);

#endif /* _supply_create_object_v1_response_m_payload_H_ */

