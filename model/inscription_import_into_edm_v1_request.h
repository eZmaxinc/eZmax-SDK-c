/*
 * inscription_import_into_edm_v1_request.h
 *
 * Request for POST /1/report/accountspayable/accountspayable
 */

#ifndef _inscription_import_into_edm_v1_request_H_
#define _inscription_import_into_edm_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inscription_import_into_edm_v1_request_t inscription_import_into_edm_v1_request_t;

#include "custom_attachment_import_into_edm_request.h"



typedef struct inscription_import_into_edm_v1_request_t {
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} inscription_import_into_edm_v1_request_t;

__attribute__((deprecated)) inscription_import_into_edm_v1_request_t *inscription_import_into_edm_v1_request_create(
    list_t *a_obj_attachment
);

void inscription_import_into_edm_v1_request_free(inscription_import_into_edm_v1_request_t *inscription_import_into_edm_v1_request);

inscription_import_into_edm_v1_request_t *inscription_import_into_edm_v1_request_parseFromJSON(cJSON *inscription_import_into_edm_v1_requestJSON);

cJSON *inscription_import_into_edm_v1_request_convertToJSON(inscription_import_into_edm_v1_request_t *inscription_import_into_edm_v1_request);

#endif /* _inscription_import_into_edm_v1_request_H_ */

