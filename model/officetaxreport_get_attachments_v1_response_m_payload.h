/*
 * officetaxreport_get_attachments_v1_response_m_payload.h
 *
 * Response for GET /1/object/officetaxreport/{pkiOfficetaxreportID}/getAttachments
 */

#ifndef _officetaxreport_get_attachments_v1_response_m_payload_H_
#define _officetaxreport_get_attachments_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct officetaxreport_get_attachments_v1_response_m_payload_t officetaxreport_get_attachments_v1_response_m_payload_t;

#include "custom_attachmentdocumenttype_response.h"



typedef struct officetaxreport_get_attachments_v1_response_m_payload_t {
    list_t *a_obj_attachmentdocumenttype; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} officetaxreport_get_attachments_v1_response_m_payload_t;

__attribute__((deprecated)) officetaxreport_get_attachments_v1_response_m_payload_t *officetaxreport_get_attachments_v1_response_m_payload_create(
    list_t *a_obj_attachmentdocumenttype
);

void officetaxreport_get_attachments_v1_response_m_payload_free(officetaxreport_get_attachments_v1_response_m_payload_t *officetaxreport_get_attachments_v1_response_m_payload);

officetaxreport_get_attachments_v1_response_m_payload_t *officetaxreport_get_attachments_v1_response_m_payload_parseFromJSON(cJSON *officetaxreport_get_attachments_v1_response_m_payloadJSON);

cJSON *officetaxreport_get_attachments_v1_response_m_payload_convertToJSON(officetaxreport_get_attachments_v1_response_m_payload_t *officetaxreport_get_attachments_v1_response_m_payload);

#endif /* _officetaxreport_get_attachments_v1_response_m_payload_H_ */

