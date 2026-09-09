/*
 * bankaccount_import_into_edm_v1_response_m_payload.h
 *
 * Payload for POST /1/object/bankaccount/{pkiBankaccountID}/importIntoEDM
 */

#ifndef _bankaccount_import_into_edm_v1_response_m_payload_H_
#define _bankaccount_import_into_edm_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct bankaccount_import_into_edm_v1_response_m_payload_t bankaccount_import_into_edm_v1_response_m_payload_t;

#include "custom_attachment_import_into_edm_response.h"



typedef struct bankaccount_import_into_edm_v1_response_m_payload_t {
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} bankaccount_import_into_edm_v1_response_m_payload_t;

__attribute__((deprecated)) bankaccount_import_into_edm_v1_response_m_payload_t *bankaccount_import_into_edm_v1_response_m_payload_create(
    list_t *a_obj_attachment
);

void bankaccount_import_into_edm_v1_response_m_payload_free(bankaccount_import_into_edm_v1_response_m_payload_t *bankaccount_import_into_edm_v1_response_m_payload);

bankaccount_import_into_edm_v1_response_m_payload_t *bankaccount_import_into_edm_v1_response_m_payload_parseFromJSON(cJSON *bankaccount_import_into_edm_v1_response_m_payloadJSON);

cJSON *bankaccount_import_into_edm_v1_response_m_payload_convertToJSON(bankaccount_import_into_edm_v1_response_m_payload_t *bankaccount_import_into_edm_v1_response_m_payload);

#endif /* _bankaccount_import_into_edm_v1_response_m_payload_H_ */

