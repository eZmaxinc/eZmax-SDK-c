/*
 * commissionadvance_get_attachments_v1_response.h
 *
 * Response for GET /1/object/commissionadvance/{pkiCommissionadvanceID}/getAttachments
 */

#ifndef _commissionadvance_get_attachments_v1_response_H_
#define _commissionadvance_get_attachments_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct commissionadvance_get_attachments_v1_response_t commissionadvance_get_attachments_v1_response_t;

#include "commissionadvance_get_attachments_v1_response_m_payload.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct commissionadvance_get_attachments_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct commissionadvance_get_attachments_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} commissionadvance_get_attachments_v1_response_t;

__attribute__((deprecated)) commissionadvance_get_attachments_v1_response_t *commissionadvance_get_attachments_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    commissionadvance_get_attachments_v1_response_m_payload_t *m_payload
);

void commissionadvance_get_attachments_v1_response_free(commissionadvance_get_attachments_v1_response_t *commissionadvance_get_attachments_v1_response);

commissionadvance_get_attachments_v1_response_t *commissionadvance_get_attachments_v1_response_parseFromJSON(cJSON *commissionadvance_get_attachments_v1_responseJSON);

cJSON *commissionadvance_get_attachments_v1_response_convertToJSON(commissionadvance_get_attachments_v1_response_t *commissionadvance_get_attachments_v1_response);

#endif /* _commissionadvance_get_attachments_v1_response_H_ */

