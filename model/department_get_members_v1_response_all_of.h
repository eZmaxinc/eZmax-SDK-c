/*
 * department_get_members_v1_response_all_of.h
 *
 * 
 */

#ifndef _department_get_members_v1_response_all_of_H_
#define _department_get_members_v1_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct department_get_members_v1_response_all_of_t department_get_members_v1_response_all_of_t;

#include "department_get_members_v1_response_m_payload.h"



typedef struct department_get_members_v1_response_all_of_t {
    struct department_get_members_v1_response_m_payload_t *m_payload; //model

} department_get_members_v1_response_all_of_t;

department_get_members_v1_response_all_of_t *department_get_members_v1_response_all_of_create(
    department_get_members_v1_response_m_payload_t *m_payload
);

void department_get_members_v1_response_all_of_free(department_get_members_v1_response_all_of_t *department_get_members_v1_response_all_of);

department_get_members_v1_response_all_of_t *department_get_members_v1_response_all_of_parseFromJSON(cJSON *department_get_members_v1_response_all_ofJSON);

cJSON *department_get_members_v1_response_all_of_convertToJSON(department_get_members_v1_response_all_of_t *department_get_members_v1_response_all_of);

#endif /* _department_get_members_v1_response_all_of_H_ */

