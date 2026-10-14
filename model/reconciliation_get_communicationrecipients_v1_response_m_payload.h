/*
 * reconciliation_get_communicationrecipients_v1_response_m_payload.h
 *
 * Response for GET /1/object/reconciliation/{pkiReconciliationID}/getCommunicationrecipients
 */

#ifndef _reconciliation_get_communicationrecipients_v1_response_m_payload_H_
#define _reconciliation_get_communicationrecipients_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct reconciliation_get_communicationrecipients_v1_response_m_payload_t reconciliation_get_communicationrecipients_v1_response_m_payload_t;

#include "custom_communicationrecipientsgroup_response.h"



typedef struct reconciliation_get_communicationrecipients_v1_response_m_payload_t {
    list_t *a_obj_communicationrecipientsgroup; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} reconciliation_get_communicationrecipients_v1_response_m_payload_t;

__attribute__((deprecated)) reconciliation_get_communicationrecipients_v1_response_m_payload_t *reconciliation_get_communicationrecipients_v1_response_m_payload_create(
    list_t *a_obj_communicationrecipientsgroup
);

void reconciliation_get_communicationrecipients_v1_response_m_payload_free(reconciliation_get_communicationrecipients_v1_response_m_payload_t *reconciliation_get_communicationrecipients_v1_response_m_payload);

reconciliation_get_communicationrecipients_v1_response_m_payload_t *reconciliation_get_communicationrecipients_v1_response_m_payload_parseFromJSON(cJSON *reconciliation_get_communicationrecipients_v1_response_m_payloadJSON);

cJSON *reconciliation_get_communicationrecipients_v1_response_m_payload_convertToJSON(reconciliation_get_communicationrecipients_v1_response_m_payload_t *reconciliation_get_communicationrecipients_v1_response_m_payload);

#endif /* _reconciliation_get_communicationrecipients_v1_response_m_payload_H_ */

