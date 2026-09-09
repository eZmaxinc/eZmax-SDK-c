/*
 * paymentpreparation_import_into_edm_v1_response_m_payload.h
 *
 * Payload for POST /1/object/paymentpreparation/{pkiPaymentpreparationID}/importIntoEDM
 */

#ifndef _paymentpreparation_import_into_edm_v1_response_m_payload_H_
#define _paymentpreparation_import_into_edm_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct paymentpreparation_import_into_edm_v1_response_m_payload_t paymentpreparation_import_into_edm_v1_response_m_payload_t;

#include "custom_attachment_import_into_edm_response.h"



typedef struct paymentpreparation_import_into_edm_v1_response_m_payload_t {
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} paymentpreparation_import_into_edm_v1_response_m_payload_t;

__attribute__((deprecated)) paymentpreparation_import_into_edm_v1_response_m_payload_t *paymentpreparation_import_into_edm_v1_response_m_payload_create(
    list_t *a_obj_attachment
);

void paymentpreparation_import_into_edm_v1_response_m_payload_free(paymentpreparation_import_into_edm_v1_response_m_payload_t *paymentpreparation_import_into_edm_v1_response_m_payload);

paymentpreparation_import_into_edm_v1_response_m_payload_t *paymentpreparation_import_into_edm_v1_response_m_payload_parseFromJSON(cJSON *paymentpreparation_import_into_edm_v1_response_m_payloadJSON);

cJSON *paymentpreparation_import_into_edm_v1_response_m_payload_convertToJSON(paymentpreparation_import_into_edm_v1_response_m_payload_t *paymentpreparation_import_into_edm_v1_response_m_payload);

#endif /* _paymentpreparation_import_into_edm_v1_response_m_payload_H_ */

