/*
 * customer_import_into_edm_v1_response_m_payload.h
 *
 * Payload for POST /1/object/customer/{pkiCustomerID}/importIntoEDM
 */

#ifndef _customer_import_into_edm_v1_response_m_payload_H_
#define _customer_import_into_edm_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct customer_import_into_edm_v1_response_m_payload_t customer_import_into_edm_v1_response_m_payload_t;

#include "custom_attachment_import_into_edm_response.h"



typedef struct customer_import_into_edm_v1_response_m_payload_t {
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} customer_import_into_edm_v1_response_m_payload_t;

__attribute__((deprecated)) customer_import_into_edm_v1_response_m_payload_t *customer_import_into_edm_v1_response_m_payload_create(
    list_t *a_obj_attachment
);

void customer_import_into_edm_v1_response_m_payload_free(customer_import_into_edm_v1_response_m_payload_t *customer_import_into_edm_v1_response_m_payload);

customer_import_into_edm_v1_response_m_payload_t *customer_import_into_edm_v1_response_m_payload_parseFromJSON(cJSON *customer_import_into_edm_v1_response_m_payloadJSON);

cJSON *customer_import_into_edm_v1_response_m_payload_convertToJSON(customer_import_into_edm_v1_response_m_payload_t *customer_import_into_edm_v1_response_m_payload);

#endif /* _customer_import_into_edm_v1_response_m_payload_H_ */

