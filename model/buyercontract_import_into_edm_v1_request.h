/*
 * buyercontract_import_into_edm_v1_request.h
 *
 * Request for POST /1/object/buyercontract/{pkiBuyercontractID}/importIntoEDM
 */

#ifndef _buyercontract_import_into_edm_v1_request_H_
#define _buyercontract_import_into_edm_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct buyercontract_import_into_edm_v1_request_t buyercontract_import_into_edm_v1_request_t;

#include "custom_attachment_import_into_edm_request.h"



typedef struct buyercontract_import_into_edm_v1_request_t {
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} buyercontract_import_into_edm_v1_request_t;

__attribute__((deprecated)) buyercontract_import_into_edm_v1_request_t *buyercontract_import_into_edm_v1_request_create(
    list_t *a_obj_attachment
);

void buyercontract_import_into_edm_v1_request_free(buyercontract_import_into_edm_v1_request_t *buyercontract_import_into_edm_v1_request);

buyercontract_import_into_edm_v1_request_t *buyercontract_import_into_edm_v1_request_parseFromJSON(cJSON *buyercontract_import_into_edm_v1_requestJSON);

cJSON *buyercontract_import_into_edm_v1_request_convertToJSON(buyercontract_import_into_edm_v1_request_t *buyercontract_import_into_edm_v1_request);

#endif /* _buyercontract_import_into_edm_v1_request_H_ */

