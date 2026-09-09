/*
 * purchase_import_into_edm_v1_request.h
 *
 * Request for POST /1/object/purchase/{pkiPurchaseID}/importIntoEDM
 */

#ifndef _purchase_import_into_edm_v1_request_H_
#define _purchase_import_into_edm_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct purchase_import_into_edm_v1_request_t purchase_import_into_edm_v1_request_t;

#include "custom_attachment_import_into_edm_request.h"



typedef struct purchase_import_into_edm_v1_request_t {
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} purchase_import_into_edm_v1_request_t;

__attribute__((deprecated)) purchase_import_into_edm_v1_request_t *purchase_import_into_edm_v1_request_create(
    list_t *a_obj_attachment
);

void purchase_import_into_edm_v1_request_free(purchase_import_into_edm_v1_request_t *purchase_import_into_edm_v1_request);

purchase_import_into_edm_v1_request_t *purchase_import_into_edm_v1_request_parseFromJSON(cJSON *purchase_import_into_edm_v1_requestJSON);

cJSON *purchase_import_into_edm_v1_request_convertToJSON(purchase_import_into_edm_v1_request_t *purchase_import_into_edm_v1_request);

#endif /* _purchase_import_into_edm_v1_request_H_ */

