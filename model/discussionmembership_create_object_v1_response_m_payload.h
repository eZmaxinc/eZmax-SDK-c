/*
 * discussionmembership_create_object_v1_response_m_payload.h
 *
 * Payload for POST /1/object/discussionmembership
 */

#ifndef _discussionmembership_create_object_v1_response_m_payload_H_
#define _discussionmembership_create_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct discussionmembership_create_object_v1_response_m_payload_t discussionmembership_create_object_v1_response_m_payload_t;




typedef struct discussionmembership_create_object_v1_response_m_payload_t {
    list_t *a_pki_discussionmembership_id; //primitive container

} discussionmembership_create_object_v1_response_m_payload_t;

discussionmembership_create_object_v1_response_m_payload_t *discussionmembership_create_object_v1_response_m_payload_create(
    list_t *a_pki_discussionmembership_id
);

void discussionmembership_create_object_v1_response_m_payload_free(discussionmembership_create_object_v1_response_m_payload_t *discussionmembership_create_object_v1_response_m_payload);

discussionmembership_create_object_v1_response_m_payload_t *discussionmembership_create_object_v1_response_m_payload_parseFromJSON(cJSON *discussionmembership_create_object_v1_response_m_payloadJSON);

cJSON *discussionmembership_create_object_v1_response_m_payload_convertToJSON(discussionmembership_create_object_v1_response_m_payload_t *discussionmembership_create_object_v1_response_m_payload);

#endif /* _discussionmembership_create_object_v1_response_m_payload_H_ */

