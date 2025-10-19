/*
 * tranqcontract_import_into_edm_v1_response.h
 *
 * Response for POST /1/object/tranqcontract/{pkiTranqcontractID}/importIntoEDM
 */

#ifndef _tranqcontract_import_into_edm_v1_response_H_
#define _tranqcontract_import_into_edm_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct tranqcontract_import_into_edm_v1_response_t tranqcontract_import_into_edm_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "tranqcontract_import_into_edm_v1_response_m_payload.h"



typedef struct tranqcontract_import_into_edm_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct tranqcontract_import_into_edm_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} tranqcontract_import_into_edm_v1_response_t;

__attribute__((deprecated)) tranqcontract_import_into_edm_v1_response_t *tranqcontract_import_into_edm_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    tranqcontract_import_into_edm_v1_response_m_payload_t *m_payload
);

void tranqcontract_import_into_edm_v1_response_free(tranqcontract_import_into_edm_v1_response_t *tranqcontract_import_into_edm_v1_response);

tranqcontract_import_into_edm_v1_response_t *tranqcontract_import_into_edm_v1_response_parseFromJSON(cJSON *tranqcontract_import_into_edm_v1_responseJSON);

cJSON *tranqcontract_import_into_edm_v1_response_convertToJSON(tranqcontract_import_into_edm_v1_response_t *tranqcontract_import_into_edm_v1_response);

#endif /* _tranqcontract_import_into_edm_v1_response_H_ */

