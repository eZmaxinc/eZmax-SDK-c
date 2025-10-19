/*
 * supplier_import_into_edm_v1_request.h
 *
 * Request for POST /1/object/supplier/{pkiSupplierID}/importIntoEDM
 */

#ifndef _supplier_import_into_edm_v1_request_H_
#define _supplier_import_into_edm_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct supplier_import_into_edm_v1_request_t supplier_import_into_edm_v1_request_t;

#include "custom_attachment_import_into_edm_request.h"



typedef struct supplier_import_into_edm_v1_request_t {
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} supplier_import_into_edm_v1_request_t;

__attribute__((deprecated)) supplier_import_into_edm_v1_request_t *supplier_import_into_edm_v1_request_create(
    list_t *a_obj_attachment
);

void supplier_import_into_edm_v1_request_free(supplier_import_into_edm_v1_request_t *supplier_import_into_edm_v1_request);

supplier_import_into_edm_v1_request_t *supplier_import_into_edm_v1_request_parseFromJSON(cJSON *supplier_import_into_edm_v1_requestJSON);

cJSON *supplier_import_into_edm_v1_request_convertToJSON(supplier_import_into_edm_v1_request_t *supplier_import_into_edm_v1_request);

#endif /* _supplier_import_into_edm_v1_request_H_ */

