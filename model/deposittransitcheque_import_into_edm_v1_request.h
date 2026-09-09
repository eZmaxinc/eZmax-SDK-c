/*
 * deposittransitcheque_import_into_edm_v1_request.h
 *
 * Request for POST /1/object/deposittransitcheque/{pkiDeposittransitchequeID}/importIntoEDM
 */

#ifndef _deposittransitcheque_import_into_edm_v1_request_H_
#define _deposittransitcheque_import_into_edm_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct deposittransitcheque_import_into_edm_v1_request_t deposittransitcheque_import_into_edm_v1_request_t;

#include "custom_attachment_import_into_edm_request.h"



typedef struct deposittransitcheque_import_into_edm_v1_request_t {
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} deposittransitcheque_import_into_edm_v1_request_t;

__attribute__((deprecated)) deposittransitcheque_import_into_edm_v1_request_t *deposittransitcheque_import_into_edm_v1_request_create(
    list_t *a_obj_attachment
);

void deposittransitcheque_import_into_edm_v1_request_free(deposittransitcheque_import_into_edm_v1_request_t *deposittransitcheque_import_into_edm_v1_request);

deposittransitcheque_import_into_edm_v1_request_t *deposittransitcheque_import_into_edm_v1_request_parseFromJSON(cJSON *deposittransitcheque_import_into_edm_v1_requestJSON);

cJSON *deposittransitcheque_import_into_edm_v1_request_convertToJSON(deposittransitcheque_import_into_edm_v1_request_t *deposittransitcheque_import_into_edm_v1_request);

#endif /* _deposittransitcheque_import_into_edm_v1_request_H_ */

