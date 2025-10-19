/*
 * employee_import_into_edm_v1_request.h
 *
 * Request for POST /1/object/employee/{pkiEmployeeID}/importIntoEDM
 */

#ifndef _employee_import_into_edm_v1_request_H_
#define _employee_import_into_edm_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct employee_import_into_edm_v1_request_t employee_import_into_edm_v1_request_t;

#include "custom_attachment_import_into_edm_request.h"



typedef struct employee_import_into_edm_v1_request_t {
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} employee_import_into_edm_v1_request_t;

__attribute__((deprecated)) employee_import_into_edm_v1_request_t *employee_import_into_edm_v1_request_create(
    list_t *a_obj_attachment
);

void employee_import_into_edm_v1_request_free(employee_import_into_edm_v1_request_t *employee_import_into_edm_v1_request);

employee_import_into_edm_v1_request_t *employee_import_into_edm_v1_request_parseFromJSON(cJSON *employee_import_into_edm_v1_requestJSON);

cJSON *employee_import_into_edm_v1_request_convertToJSON(employee_import_into_edm_v1_request_t *employee_import_into_edm_v1_request);

#endif /* _employee_import_into_edm_v1_request_H_ */

