/*
 * customer_import_into_edm_v1_request.h
 *
 * Request for POST /1/object/customer/{pkiCustomerID}/importIntoEDM
 */

#ifndef _customer_import_into_edm_v1_request_H_
#define _customer_import_into_edm_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct customer_import_into_edm_v1_request_t customer_import_into_edm_v1_request_t;

#include "custom_attachment_import_into_edm_request.h"



typedef struct customer_import_into_edm_v1_request_t {
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} customer_import_into_edm_v1_request_t;

__attribute__((deprecated)) customer_import_into_edm_v1_request_t *customer_import_into_edm_v1_request_create(
    list_t *a_obj_attachment
);

void customer_import_into_edm_v1_request_free(customer_import_into_edm_v1_request_t *customer_import_into_edm_v1_request);

customer_import_into_edm_v1_request_t *customer_import_into_edm_v1_request_parseFromJSON(cJSON *customer_import_into_edm_v1_requestJSON);

cJSON *customer_import_into_edm_v1_request_convertToJSON(customer_import_into_edm_v1_request_t *customer_import_into_edm_v1_request);

#endif /* _customer_import_into_edm_v1_request_H_ */

