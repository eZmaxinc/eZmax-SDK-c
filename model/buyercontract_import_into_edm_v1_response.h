/*
 * buyercontract_import_into_edm_v1_response.h
 *
 * Response for POST /1/object/buyercontract/{pkiBuyercontractID}/importIntoEDM
 */

#ifndef _buyercontract_import_into_edm_v1_response_H_
#define _buyercontract_import_into_edm_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct buyercontract_import_into_edm_v1_response_t buyercontract_import_into_edm_v1_response_t;

#include "buyercontract_import_into_edm_v1_response_m_payload.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct buyercontract_import_into_edm_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct buyercontract_import_into_edm_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} buyercontract_import_into_edm_v1_response_t;

__attribute__((deprecated)) buyercontract_import_into_edm_v1_response_t *buyercontract_import_into_edm_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    buyercontract_import_into_edm_v1_response_m_payload_t *m_payload
);

void buyercontract_import_into_edm_v1_response_free(buyercontract_import_into_edm_v1_response_t *buyercontract_import_into_edm_v1_response);

buyercontract_import_into_edm_v1_response_t *buyercontract_import_into_edm_v1_response_parseFromJSON(cJSON *buyercontract_import_into_edm_v1_responseJSON);

cJSON *buyercontract_import_into_edm_v1_response_convertToJSON(buyercontract_import_into_edm_v1_response_t *buyercontract_import_into_edm_v1_response);

#endif /* _buyercontract_import_into_edm_v1_response_H_ */

