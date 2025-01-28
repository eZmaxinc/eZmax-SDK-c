/*
 * discussionmessage_create_object_v1_response_m_payload.h
 *
 * Payload for POST /1/object/discussionmessage
 */

#ifndef _discussionmessage_create_object_v1_response_m_payload_H_
#define _discussionmessage_create_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct discussionmessage_create_object_v1_response_m_payload_t discussionmessage_create_object_v1_response_m_payload_t;




typedef struct discussionmessage_create_object_v1_response_m_payload_t {
    list_t *a_pki_discussionmessage_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} discussionmessage_create_object_v1_response_m_payload_t;

__attribute__((deprecated)) discussionmessage_create_object_v1_response_m_payload_t *discussionmessage_create_object_v1_response_m_payload_create(
    list_t *a_pki_discussionmessage_id
);

void discussionmessage_create_object_v1_response_m_payload_free(discussionmessage_create_object_v1_response_m_payload_t *discussionmessage_create_object_v1_response_m_payload);

discussionmessage_create_object_v1_response_m_payload_t *discussionmessage_create_object_v1_response_m_payload_parseFromJSON(cJSON *discussionmessage_create_object_v1_response_m_payloadJSON);

cJSON *discussionmessage_create_object_v1_response_m_payload_convertToJSON(discussionmessage_create_object_v1_response_m_payload_t *discussionmessage_create_object_v1_response_m_payload);

#endif /* _discussionmessage_create_object_v1_response_m_payload_H_ */

