/*
 * department_get_members_v1_response.h
 *
 * Response for GET /1/object/department/{pkiDepartmentID}/getMembers
 */

#ifndef _department_get_members_v1_response_H_
#define _department_get_members_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct department_get_members_v1_response_t department_get_members_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "department_get_members_v1_response_m_payload.h"



typedef struct department_get_members_v1_response_t {
    struct department_get_members_v1_response_m_payload_t *m_payload; //model
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} department_get_members_v1_response_t;

department_get_members_v1_response_t *department_get_members_v1_response_create(
    department_get_members_v1_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void department_get_members_v1_response_free(department_get_members_v1_response_t *department_get_members_v1_response);

department_get_members_v1_response_t *department_get_members_v1_response_parseFromJSON(cJSON *department_get_members_v1_responseJSON);

cJSON *department_get_members_v1_response_convertToJSON(department_get_members_v1_response_t *department_get_members_v1_response);

#endif /* _department_get_members_v1_response_H_ */

