/*
 * paymentpreparation_get_attachments_v1_response.h
 *
 * Response for GET /1/object/paymentpreparation/{pkiPaymentpreparationID}/getAttachments
 */

#ifndef _paymentpreparation_get_attachments_v1_response_H_
#define _paymentpreparation_get_attachments_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct paymentpreparation_get_attachments_v1_response_t paymentpreparation_get_attachments_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "paymentpreparation_get_attachments_v1_response_m_payload.h"



typedef struct paymentpreparation_get_attachments_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct paymentpreparation_get_attachments_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} paymentpreparation_get_attachments_v1_response_t;

__attribute__((deprecated)) paymentpreparation_get_attachments_v1_response_t *paymentpreparation_get_attachments_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    paymentpreparation_get_attachments_v1_response_m_payload_t *m_payload
);

void paymentpreparation_get_attachments_v1_response_free(paymentpreparation_get_attachments_v1_response_t *paymentpreparation_get_attachments_v1_response);

paymentpreparation_get_attachments_v1_response_t *paymentpreparation_get_attachments_v1_response_parseFromJSON(cJSON *paymentpreparation_get_attachments_v1_responseJSON);

cJSON *paymentpreparation_get_attachments_v1_response_convertToJSON(paymentpreparation_get_attachments_v1_response_t *paymentpreparation_get_attachments_v1_response);

#endif /* _paymentpreparation_get_attachments_v1_response_H_ */

