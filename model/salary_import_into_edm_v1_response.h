/*
 * salary_import_into_edm_v1_response.h
 *
 * Response for POST /1/object/salary/{pkiSalaryID}/importIntoEDM
 */

#ifndef _salary_import_into_edm_v1_response_H_
#define _salary_import_into_edm_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct salary_import_into_edm_v1_response_t salary_import_into_edm_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "salary_import_into_edm_v1_response_m_payload.h"



typedef struct salary_import_into_edm_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct salary_import_into_edm_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} salary_import_into_edm_v1_response_t;

__attribute__((deprecated)) salary_import_into_edm_v1_response_t *salary_import_into_edm_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    salary_import_into_edm_v1_response_m_payload_t *m_payload
);

void salary_import_into_edm_v1_response_free(salary_import_into_edm_v1_response_t *salary_import_into_edm_v1_response);

salary_import_into_edm_v1_response_t *salary_import_into_edm_v1_response_parseFromJSON(cJSON *salary_import_into_edm_v1_responseJSON);

cJSON *salary_import_into_edm_v1_response_convertToJSON(salary_import_into_edm_v1_response_t *salary_import_into_edm_v1_response);

#endif /* _salary_import_into_edm_v1_response_H_ */

