/*
 * department_get_members_v1_response_m_payload.h
 *
 * Payload for GET /1/object/department/{pkiDepartmentID}/getMembers
 */

#ifndef _department_get_members_v1_response_m_payload_H_
#define _department_get_members_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct department_get_members_v1_response_m_payload_t department_get_members_v1_response_m_payload_t;




typedef struct department_get_members_v1_response_m_payload_t {
    list_t *a_fki_agent_id; //primitive container
    list_t *a_fki_broker_id; //primitive container
    list_t *a_fki_customer_id; //primitive container
    list_t *a_fki_employee_id; //primitive container

} department_get_members_v1_response_m_payload_t;

department_get_members_v1_response_m_payload_t *department_get_members_v1_response_m_payload_create(
    list_t *a_fki_agent_id,
    list_t *a_fki_broker_id,
    list_t *a_fki_customer_id,
    list_t *a_fki_employee_id
);

void department_get_members_v1_response_m_payload_free(department_get_members_v1_response_m_payload_t *department_get_members_v1_response_m_payload);

department_get_members_v1_response_m_payload_t *department_get_members_v1_response_m_payload_parseFromJSON(cJSON *department_get_members_v1_response_m_payloadJSON);

cJSON *department_get_members_v1_response_m_payload_convertToJSON(department_get_members_v1_response_m_payload_t *department_get_members_v1_response_m_payload);

#endif /* _department_get_members_v1_response_m_payload_H_ */

