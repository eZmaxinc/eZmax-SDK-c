/*
 * electronicfundstransfer_import_into_edm_v1_request.h
 *
 * Request for POST /1/object/electronicfundstransfer/{pkiElectronicfundstransferID}/importIntoEDM
 */

#ifndef _electronicfundstransfer_import_into_edm_v1_request_H_
#define _electronicfundstransfer_import_into_edm_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct electronicfundstransfer_import_into_edm_v1_request_t electronicfundstransfer_import_into_edm_v1_request_t;

#include "custom_attachment_import_into_edm_request.h"



typedef struct electronicfundstransfer_import_into_edm_v1_request_t {
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} electronicfundstransfer_import_into_edm_v1_request_t;

__attribute__((deprecated)) electronicfundstransfer_import_into_edm_v1_request_t *electronicfundstransfer_import_into_edm_v1_request_create(
    list_t *a_obj_attachment
);

void electronicfundstransfer_import_into_edm_v1_request_free(electronicfundstransfer_import_into_edm_v1_request_t *electronicfundstransfer_import_into_edm_v1_request);

electronicfundstransfer_import_into_edm_v1_request_t *electronicfundstransfer_import_into_edm_v1_request_parseFromJSON(cJSON *electronicfundstransfer_import_into_edm_v1_requestJSON);

cJSON *electronicfundstransfer_import_into_edm_v1_request_convertToJSON(electronicfundstransfer_import_into_edm_v1_request_t *electronicfundstransfer_import_into_edm_v1_request);

#endif /* _electronicfundstransfer_import_into_edm_v1_request_H_ */

