/*
 * paymentpreparation_get_attachments_v1_response_m_payload.h
 *
 * Response for GET /1/object/paymentpreparation/{pkiPaymentpreparationID}/getAttachments
 */

#ifndef _paymentpreparation_get_attachments_v1_response_m_payload_H_
#define _paymentpreparation_get_attachments_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct paymentpreparation_get_attachments_v1_response_m_payload_t paymentpreparation_get_attachments_v1_response_m_payload_t;

#include "custom_attachmentdocumenttype_response.h"



typedef struct paymentpreparation_get_attachments_v1_response_m_payload_t {
    list_t *a_obj_attachmentdocumenttype; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} paymentpreparation_get_attachments_v1_response_m_payload_t;

__attribute__((deprecated)) paymentpreparation_get_attachments_v1_response_m_payload_t *paymentpreparation_get_attachments_v1_response_m_payload_create(
    list_t *a_obj_attachmentdocumenttype
);

void paymentpreparation_get_attachments_v1_response_m_payload_free(paymentpreparation_get_attachments_v1_response_m_payload_t *paymentpreparation_get_attachments_v1_response_m_payload);

paymentpreparation_get_attachments_v1_response_m_payload_t *paymentpreparation_get_attachments_v1_response_m_payload_parseFromJSON(cJSON *paymentpreparation_get_attachments_v1_response_m_payloadJSON);

cJSON *paymentpreparation_get_attachments_v1_response_m_payload_convertToJSON(paymentpreparation_get_attachments_v1_response_m_payload_t *paymentpreparation_get_attachments_v1_response_m_payload);

#endif /* _paymentpreparation_get_attachments_v1_response_m_payload_H_ */

