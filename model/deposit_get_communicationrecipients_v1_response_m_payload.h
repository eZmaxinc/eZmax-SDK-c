/*
 * deposit_get_communicationrecipients_v1_response_m_payload.h
 *
 * Response for GET /1/object/deposit/{pkiDepositID}/getCommunicationrecipients
 */

#ifndef _deposit_get_communicationrecipients_v1_response_m_payload_H_
#define _deposit_get_communicationrecipients_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct deposit_get_communicationrecipients_v1_response_m_payload_t deposit_get_communicationrecipients_v1_response_m_payload_t;

#include "custom_communicationrecipientsgroup_response.h"



typedef struct deposit_get_communicationrecipients_v1_response_m_payload_t {
    list_t *a_obj_communicationrecipientsgroup; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} deposit_get_communicationrecipients_v1_response_m_payload_t;

__attribute__((deprecated)) deposit_get_communicationrecipients_v1_response_m_payload_t *deposit_get_communicationrecipients_v1_response_m_payload_create(
    list_t *a_obj_communicationrecipientsgroup
);

void deposit_get_communicationrecipients_v1_response_m_payload_free(deposit_get_communicationrecipients_v1_response_m_payload_t *deposit_get_communicationrecipients_v1_response_m_payload);

deposit_get_communicationrecipients_v1_response_m_payload_t *deposit_get_communicationrecipients_v1_response_m_payload_parseFromJSON(cJSON *deposit_get_communicationrecipients_v1_response_m_payloadJSON);

cJSON *deposit_get_communicationrecipients_v1_response_m_payload_convertToJSON(deposit_get_communicationrecipients_v1_response_m_payload_t *deposit_get_communicationrecipients_v1_response_m_payload);

#endif /* _deposit_get_communicationrecipients_v1_response_m_payload_H_ */

