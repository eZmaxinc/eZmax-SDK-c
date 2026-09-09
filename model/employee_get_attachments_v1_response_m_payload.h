/*
 * employee_get_attachments_v1_response_m_payload.h
 *
 * Response for GET /1/object/employee/{pkiEmployeeID}/getAttachments
 */

#ifndef _employee_get_attachments_v1_response_m_payload_H_
#define _employee_get_attachments_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct employee_get_attachments_v1_response_m_payload_t employee_get_attachments_v1_response_m_payload_t;

#include "custom_attachmentdocumenttype_response.h"



typedef struct employee_get_attachments_v1_response_m_payload_t {
    list_t *a_obj_attachmentdocumenttype; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} employee_get_attachments_v1_response_m_payload_t;

__attribute__((deprecated)) employee_get_attachments_v1_response_m_payload_t *employee_get_attachments_v1_response_m_payload_create(
    list_t *a_obj_attachmentdocumenttype
);

void employee_get_attachments_v1_response_m_payload_free(employee_get_attachments_v1_response_m_payload_t *employee_get_attachments_v1_response_m_payload);

employee_get_attachments_v1_response_m_payload_t *employee_get_attachments_v1_response_m_payload_parseFromJSON(cJSON *employee_get_attachments_v1_response_m_payloadJSON);

cJSON *employee_get_attachments_v1_response_m_payload_convertToJSON(employee_get_attachments_v1_response_m_payload_t *employee_get_attachments_v1_response_m_payload);

#endif /* _employee_get_attachments_v1_response_m_payload_H_ */

