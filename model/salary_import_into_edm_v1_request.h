/*
 * salary_import_into_edm_v1_request.h
 *
 * Request for POST /1/object/salary/{pkiSalaryID}/importIntoEDM
 */

#ifndef _salary_import_into_edm_v1_request_H_
#define _salary_import_into_edm_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct salary_import_into_edm_v1_request_t salary_import_into_edm_v1_request_t;

#include "custom_attachment_import_into_edm_request.h"



typedef struct salary_import_into_edm_v1_request_t {
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} salary_import_into_edm_v1_request_t;

__attribute__((deprecated)) salary_import_into_edm_v1_request_t *salary_import_into_edm_v1_request_create(
    list_t *a_obj_attachment
);

void salary_import_into_edm_v1_request_free(salary_import_into_edm_v1_request_t *salary_import_into_edm_v1_request);

salary_import_into_edm_v1_request_t *salary_import_into_edm_v1_request_parseFromJSON(cJSON *salary_import_into_edm_v1_requestJSON);

cJSON *salary_import_into_edm_v1_request_convertToJSON(salary_import_into_edm_v1_request_t *salary_import_into_edm_v1_request);

#endif /* _salary_import_into_edm_v1_request_H_ */

