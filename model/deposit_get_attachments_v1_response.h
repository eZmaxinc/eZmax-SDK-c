/*
 * deposit_get_attachments_v1_response.h
 *
 * Response for GET /1/object/deposit/{pkiDepositID}/getAttachments
 */

#ifndef _deposit_get_attachments_v1_response_H_
#define _deposit_get_attachments_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct deposit_get_attachments_v1_response_t deposit_get_attachments_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "deposit_get_attachments_v1_response_m_payload.h"



typedef struct deposit_get_attachments_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct deposit_get_attachments_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} deposit_get_attachments_v1_response_t;

__attribute__((deprecated)) deposit_get_attachments_v1_response_t *deposit_get_attachments_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    deposit_get_attachments_v1_response_m_payload_t *m_payload
);

void deposit_get_attachments_v1_response_free(deposit_get_attachments_v1_response_t *deposit_get_attachments_v1_response);

deposit_get_attachments_v1_response_t *deposit_get_attachments_v1_response_parseFromJSON(cJSON *deposit_get_attachments_v1_responseJSON);

cJSON *deposit_get_attachments_v1_response_convertToJSON(deposit_get_attachments_v1_response_t *deposit_get_attachments_v1_response);

#endif /* _deposit_get_attachments_v1_response_H_ */

