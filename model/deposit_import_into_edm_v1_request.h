/*
 * deposit_import_into_edm_v1_request.h
 *
 * Request for POST /1/object/deposit/{pkiDepositID}/importIntoEDM
 */

#ifndef _deposit_import_into_edm_v1_request_H_
#define _deposit_import_into_edm_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct deposit_import_into_edm_v1_request_t deposit_import_into_edm_v1_request_t;

#include "custom_attachment_import_into_edm_request.h"



typedef struct deposit_import_into_edm_v1_request_t {
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} deposit_import_into_edm_v1_request_t;

__attribute__((deprecated)) deposit_import_into_edm_v1_request_t *deposit_import_into_edm_v1_request_create(
    list_t *a_obj_attachment
);

void deposit_import_into_edm_v1_request_free(deposit_import_into_edm_v1_request_t *deposit_import_into_edm_v1_request);

deposit_import_into_edm_v1_request_t *deposit_import_into_edm_v1_request_parseFromJSON(cJSON *deposit_import_into_edm_v1_requestJSON);

cJSON *deposit_import_into_edm_v1_request_convertToJSON(deposit_import_into_edm_v1_request_t *deposit_import_into_edm_v1_request);

#endif /* _deposit_import_into_edm_v1_request_H_ */

