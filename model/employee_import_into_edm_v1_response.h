/*
 * employee_import_into_edm_v1_response.h
 *
 * Response for POST /1/object/employee/{pkiEmployeeID}/importIntoEDM
 */

#ifndef _employee_import_into_edm_v1_response_H_
#define _employee_import_into_edm_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct employee_import_into_edm_v1_response_t employee_import_into_edm_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "employee_import_into_edm_v1_response_m_payload.h"



typedef struct employee_import_into_edm_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct employee_import_into_edm_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} employee_import_into_edm_v1_response_t;

__attribute__((deprecated)) employee_import_into_edm_v1_response_t *employee_import_into_edm_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    employee_import_into_edm_v1_response_m_payload_t *m_payload
);

void employee_import_into_edm_v1_response_free(employee_import_into_edm_v1_response_t *employee_import_into_edm_v1_response);

employee_import_into_edm_v1_response_t *employee_import_into_edm_v1_response_parseFromJSON(cJSON *employee_import_into_edm_v1_responseJSON);

cJSON *employee_import_into_edm_v1_response_convertToJSON(employee_import_into_edm_v1_response_t *employee_import_into_edm_v1_response);

#endif /* _employee_import_into_edm_v1_response_H_ */

