/*
 * otherincome_get_communication_count_v1_response_m_payload.h
 *
 * Response for GET /1/object/otherincome/{pkiOtherincomeID}/getCommunicationCount
 */

#ifndef _otherincome_get_communication_count_v1_response_m_payload_H_
#define _otherincome_get_communication_count_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct otherincome_get_communication_count_v1_response_m_payload_t otherincome_get_communication_count_v1_response_m_payload_t;




typedef struct otherincome_get_communication_count_v1_response_m_payload_t {
    int i_communication_count; //numeric

} otherincome_get_communication_count_v1_response_m_payload_t;

otherincome_get_communication_count_v1_response_m_payload_t *otherincome_get_communication_count_v1_response_m_payload_create(
    int i_communication_count
);

void otherincome_get_communication_count_v1_response_m_payload_free(otherincome_get_communication_count_v1_response_m_payload_t *otherincome_get_communication_count_v1_response_m_payload);

otherincome_get_communication_count_v1_response_m_payload_t *otherincome_get_communication_count_v1_response_m_payload_parseFromJSON(cJSON *otherincome_get_communication_count_v1_response_m_payloadJSON);

cJSON *otherincome_get_communication_count_v1_response_m_payload_convertToJSON(otherincome_get_communication_count_v1_response_m_payload_t *otherincome_get_communication_count_v1_response_m_payload);

#endif /* _otherincome_get_communication_count_v1_response_m_payload_H_ */

