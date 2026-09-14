/*
 * commissionadvance_get_communication_count_v1_response_m_payload.h
 *
 * Response for GET /1/object/commissionadvance/{pkiCommissionadvanceID}/getCommunicationCount
 */

#ifndef _commissionadvance_get_communication_count_v1_response_m_payload_H_
#define _commissionadvance_get_communication_count_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct commissionadvance_get_communication_count_v1_response_m_payload_t commissionadvance_get_communication_count_v1_response_m_payload_t;




typedef struct commissionadvance_get_communication_count_v1_response_m_payload_t {
    int *i_communication_count; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} commissionadvance_get_communication_count_v1_response_m_payload_t;

__attribute__((deprecated)) commissionadvance_get_communication_count_v1_response_m_payload_t *commissionadvance_get_communication_count_v1_response_m_payload_create(
    int *i_communication_count
);

void commissionadvance_get_communication_count_v1_response_m_payload_free(commissionadvance_get_communication_count_v1_response_m_payload_t *commissionadvance_get_communication_count_v1_response_m_payload);

commissionadvance_get_communication_count_v1_response_m_payload_t *commissionadvance_get_communication_count_v1_response_m_payload_parseFromJSON(cJSON *commissionadvance_get_communication_count_v1_response_m_payloadJSON);

cJSON *commissionadvance_get_communication_count_v1_response_m_payload_convertToJSON(commissionadvance_get_communication_count_v1_response_m_payload_t *commissionadvance_get_communication_count_v1_response_m_payload);

#endif /* _commissionadvance_get_communication_count_v1_response_m_payload_H_ */

