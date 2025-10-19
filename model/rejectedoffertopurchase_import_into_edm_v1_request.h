/*
 * rejectedoffertopurchase_import_into_edm_v1_request.h
 *
 * Request for POST /1/object/rejectedoffertopurchase/{pkiRejectedoffertopurchaseID}/importIntoEDM
 */

#ifndef _rejectedoffertopurchase_import_into_edm_v1_request_H_
#define _rejectedoffertopurchase_import_into_edm_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct rejectedoffertopurchase_import_into_edm_v1_request_t rejectedoffertopurchase_import_into_edm_v1_request_t;

#include "custom_attachment_import_into_edm_request.h"



typedef struct rejectedoffertopurchase_import_into_edm_v1_request_t {
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} rejectedoffertopurchase_import_into_edm_v1_request_t;

__attribute__((deprecated)) rejectedoffertopurchase_import_into_edm_v1_request_t *rejectedoffertopurchase_import_into_edm_v1_request_create(
    list_t *a_obj_attachment
);

void rejectedoffertopurchase_import_into_edm_v1_request_free(rejectedoffertopurchase_import_into_edm_v1_request_t *rejectedoffertopurchase_import_into_edm_v1_request);

rejectedoffertopurchase_import_into_edm_v1_request_t *rejectedoffertopurchase_import_into_edm_v1_request_parseFromJSON(cJSON *rejectedoffertopurchase_import_into_edm_v1_requestJSON);

cJSON *rejectedoffertopurchase_import_into_edm_v1_request_convertToJSON(rejectedoffertopurchase_import_into_edm_v1_request_t *rejectedoffertopurchase_import_into_edm_v1_request);

#endif /* _rejectedoffertopurchase_import_into_edm_v1_request_H_ */

