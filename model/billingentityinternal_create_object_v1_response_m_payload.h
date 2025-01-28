/*
 * billingentityinternal_create_object_v1_response_m_payload.h
 *
 * Payload for POST /1/object/billingentityinternal
 */

#ifndef _billingentityinternal_create_object_v1_response_m_payload_H_
#define _billingentityinternal_create_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct billingentityinternal_create_object_v1_response_m_payload_t billingentityinternal_create_object_v1_response_m_payload_t;




typedef struct billingentityinternal_create_object_v1_response_m_payload_t {
    list_t *a_pki_billingentityinternal_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} billingentityinternal_create_object_v1_response_m_payload_t;

__attribute__((deprecated)) billingentityinternal_create_object_v1_response_m_payload_t *billingentityinternal_create_object_v1_response_m_payload_create(
    list_t *a_pki_billingentityinternal_id
);

void billingentityinternal_create_object_v1_response_m_payload_free(billingentityinternal_create_object_v1_response_m_payload_t *billingentityinternal_create_object_v1_response_m_payload);

billingentityinternal_create_object_v1_response_m_payload_t *billingentityinternal_create_object_v1_response_m_payload_parseFromJSON(cJSON *billingentityinternal_create_object_v1_response_m_payloadJSON);

cJSON *billingentityinternal_create_object_v1_response_m_payload_convertToJSON(billingentityinternal_create_object_v1_response_m_payload_t *billingentityinternal_create_object_v1_response_m_payload);

#endif /* _billingentityinternal_create_object_v1_response_m_payload_H_ */

