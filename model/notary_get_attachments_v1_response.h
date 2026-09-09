/*
 * notary_get_attachments_v1_response.h
 *
 * Response for GET /1/object/notary/{pkiNotaryID}/getAttachments
 */

#ifndef _notary_get_attachments_v1_response_H_
#define _notary_get_attachments_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct notary_get_attachments_v1_response_t notary_get_attachments_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "notary_get_attachments_v1_response_m_payload.h"



typedef struct notary_get_attachments_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct notary_get_attachments_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} notary_get_attachments_v1_response_t;

__attribute__((deprecated)) notary_get_attachments_v1_response_t *notary_get_attachments_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    notary_get_attachments_v1_response_m_payload_t *m_payload
);

void notary_get_attachments_v1_response_free(notary_get_attachments_v1_response_t *notary_get_attachments_v1_response);

notary_get_attachments_v1_response_t *notary_get_attachments_v1_response_parseFromJSON(cJSON *notary_get_attachments_v1_responseJSON);

cJSON *notary_get_attachments_v1_response_convertToJSON(notary_get_attachments_v1_response_t *notary_get_attachments_v1_response);

#endif /* _notary_get_attachments_v1_response_H_ */

