/*
 * salary_get_attachments_v1_response.h
 *
 * Response for GET /1/object/salary/{pkiSalaryID}/getAttachments
 */

#ifndef _salary_get_attachments_v1_response_H_
#define _salary_get_attachments_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct salary_get_attachments_v1_response_t salary_get_attachments_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "salary_get_attachments_v1_response_m_payload.h"



typedef struct salary_get_attachments_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct salary_get_attachments_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} salary_get_attachments_v1_response_t;

__attribute__((deprecated)) salary_get_attachments_v1_response_t *salary_get_attachments_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    salary_get_attachments_v1_response_m_payload_t *m_payload
);

void salary_get_attachments_v1_response_free(salary_get_attachments_v1_response_t *salary_get_attachments_v1_response);

salary_get_attachments_v1_response_t *salary_get_attachments_v1_response_parseFromJSON(cJSON *salary_get_attachments_v1_responseJSON);

cJSON *salary_get_attachments_v1_response_convertToJSON(salary_get_attachments_v1_response_t *salary_get_attachments_v1_response);

#endif /* _salary_get_attachments_v1_response_H_ */

