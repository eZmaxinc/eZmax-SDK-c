/*
 * supplier_get_attachments_v1_response.h
 *
 * Response for GET /1/object/supplier/{pkiSupplierID}/getAttachments
 */

#ifndef _supplier_get_attachments_v1_response_H_
#define _supplier_get_attachments_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct supplier_get_attachments_v1_response_t supplier_get_attachments_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "supplier_get_attachments_v1_response_m_payload.h"



typedef struct supplier_get_attachments_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct supplier_get_attachments_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} supplier_get_attachments_v1_response_t;

__attribute__((deprecated)) supplier_get_attachments_v1_response_t *supplier_get_attachments_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    supplier_get_attachments_v1_response_m_payload_t *m_payload
);

void supplier_get_attachments_v1_response_free(supplier_get_attachments_v1_response_t *supplier_get_attachments_v1_response);

supplier_get_attachments_v1_response_t *supplier_get_attachments_v1_response_parseFromJSON(cJSON *supplier_get_attachments_v1_responseJSON);

cJSON *supplier_get_attachments_v1_response_convertToJSON(supplier_get_attachments_v1_response_t *supplier_get_attachments_v1_response);

#endif /* _supplier_get_attachments_v1_response_H_ */

