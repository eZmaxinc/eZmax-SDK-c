/*
 * salary_import_into_edm_v1_response_m_payload.h
 *
 * Payload for POST /1/object/salary/{pkiSalaryID}/importIntoEDM
 */

#ifndef _salary_import_into_edm_v1_response_m_payload_H_
#define _salary_import_into_edm_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct salary_import_into_edm_v1_response_m_payload_t salary_import_into_edm_v1_response_m_payload_t;

#include "custom_attachment_import_into_edm_response.h"



typedef struct salary_import_into_edm_v1_response_m_payload_t {
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} salary_import_into_edm_v1_response_m_payload_t;

__attribute__((deprecated)) salary_import_into_edm_v1_response_m_payload_t *salary_import_into_edm_v1_response_m_payload_create(
    list_t *a_obj_attachment
);

void salary_import_into_edm_v1_response_m_payload_free(salary_import_into_edm_v1_response_m_payload_t *salary_import_into_edm_v1_response_m_payload);

salary_import_into_edm_v1_response_m_payload_t *salary_import_into_edm_v1_response_m_payload_parseFromJSON(cJSON *salary_import_into_edm_v1_response_m_payloadJSON);

cJSON *salary_import_into_edm_v1_response_m_payload_convertToJSON(salary_import_into_edm_v1_response_m_payload_t *salary_import_into_edm_v1_response_m_payload);

#endif /* _salary_import_into_edm_v1_response_m_payload_H_ */

