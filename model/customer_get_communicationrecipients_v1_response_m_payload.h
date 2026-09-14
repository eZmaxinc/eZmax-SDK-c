/*
 * customer_get_communicationrecipients_v1_response_m_payload.h
 *
 * Response for GET /1/object/customer/{pkiCustomerID}/getCommunicationrecipients
 */

#ifndef _customer_get_communicationrecipients_v1_response_m_payload_H_
#define _customer_get_communicationrecipients_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct customer_get_communicationrecipients_v1_response_m_payload_t customer_get_communicationrecipients_v1_response_m_payload_t;

#include "custom_communicationrecipientsgroup_response.h"



typedef struct customer_get_communicationrecipients_v1_response_m_payload_t {
    list_t *a_obj_communicationrecipientsgroup; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} customer_get_communicationrecipients_v1_response_m_payload_t;

__attribute__((deprecated)) customer_get_communicationrecipients_v1_response_m_payload_t *customer_get_communicationrecipients_v1_response_m_payload_create(
    list_t *a_obj_communicationrecipientsgroup
);

void customer_get_communicationrecipients_v1_response_m_payload_free(customer_get_communicationrecipients_v1_response_m_payload_t *customer_get_communicationrecipients_v1_response_m_payload);

customer_get_communicationrecipients_v1_response_m_payload_t *customer_get_communicationrecipients_v1_response_m_payload_parseFromJSON(cJSON *customer_get_communicationrecipients_v1_response_m_payloadJSON);

cJSON *customer_get_communicationrecipients_v1_response_m_payload_convertToJSON(customer_get_communicationrecipients_v1_response_m_payload_t *customer_get_communicationrecipients_v1_response_m_payload);

#endif /* _customer_get_communicationrecipients_v1_response_m_payload_H_ */

