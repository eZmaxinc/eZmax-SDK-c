/*
 * officetaxreport_get_attachments_v1_response.h
 *
 * Response for GET /1/object/officetaxreport/{pkiOfficetaxreportID}/getAttachments
 */

#ifndef _officetaxreport_get_attachments_v1_response_H_
#define _officetaxreport_get_attachments_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct officetaxreport_get_attachments_v1_response_t officetaxreport_get_attachments_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "officetaxreport_get_attachments_v1_response_m_payload.h"



typedef struct officetaxreport_get_attachments_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct officetaxreport_get_attachments_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} officetaxreport_get_attachments_v1_response_t;

__attribute__((deprecated)) officetaxreport_get_attachments_v1_response_t *officetaxreport_get_attachments_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    officetaxreport_get_attachments_v1_response_m_payload_t *m_payload
);

void officetaxreport_get_attachments_v1_response_free(officetaxreport_get_attachments_v1_response_t *officetaxreport_get_attachments_v1_response);

officetaxreport_get_attachments_v1_response_t *officetaxreport_get_attachments_v1_response_parseFromJSON(cJSON *officetaxreport_get_attachments_v1_responseJSON);

cJSON *officetaxreport_get_attachments_v1_response_convertToJSON(officetaxreport_get_attachments_v1_response_t *officetaxreport_get_attachments_v1_response);

#endif /* _officetaxreport_get_attachments_v1_response_H_ */

