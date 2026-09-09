/*
 * bankaccount_import_into_edm_v1_response.h
 *
 * Response for POST /1/object/bankaccount/{pkiBankaccountID}/importIntoEDM
 */

#ifndef _bankaccount_import_into_edm_v1_response_H_
#define _bankaccount_import_into_edm_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct bankaccount_import_into_edm_v1_response_t bankaccount_import_into_edm_v1_response_t;

#include "bankaccount_import_into_edm_v1_response_m_payload.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct bankaccount_import_into_edm_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct bankaccount_import_into_edm_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} bankaccount_import_into_edm_v1_response_t;

__attribute__((deprecated)) bankaccount_import_into_edm_v1_response_t *bankaccount_import_into_edm_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    bankaccount_import_into_edm_v1_response_m_payload_t *m_payload
);

void bankaccount_import_into_edm_v1_response_free(bankaccount_import_into_edm_v1_response_t *bankaccount_import_into_edm_v1_response);

bankaccount_import_into_edm_v1_response_t *bankaccount_import_into_edm_v1_response_parseFromJSON(cJSON *bankaccount_import_into_edm_v1_responseJSON);

cJSON *bankaccount_import_into_edm_v1_response_convertToJSON(bankaccount_import_into_edm_v1_response_t *bankaccount_import_into_edm_v1_response);

#endif /* _bankaccount_import_into_edm_v1_response_H_ */

