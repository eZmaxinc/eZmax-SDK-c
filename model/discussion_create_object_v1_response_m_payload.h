/*
 * discussion_create_object_v1_response_m_payload.h
 *
 * Payload for POST /1/object/discussion
 */

#ifndef _discussion_create_object_v1_response_m_payload_H_
#define _discussion_create_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct discussion_create_object_v1_response_m_payload_t discussion_create_object_v1_response_m_payload_t;




typedef struct discussion_create_object_v1_response_m_payload_t {
    list_t *a_pki_discussion_id; //primitive container

} discussion_create_object_v1_response_m_payload_t;

discussion_create_object_v1_response_m_payload_t *discussion_create_object_v1_response_m_payload_create(
    list_t *a_pki_discussion_id
);

void discussion_create_object_v1_response_m_payload_free(discussion_create_object_v1_response_m_payload_t *discussion_create_object_v1_response_m_payload);

discussion_create_object_v1_response_m_payload_t *discussion_create_object_v1_response_m_payload_parseFromJSON(cJSON *discussion_create_object_v1_response_m_payloadJSON);

cJSON *discussion_create_object_v1_response_m_payload_convertToJSON(discussion_create_object_v1_response_m_payload_t *discussion_create_object_v1_response_m_payload);

#endif /* _discussion_create_object_v1_response_m_payload_H_ */

