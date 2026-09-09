/*
 * bankaccount_import_into_edm_v1_request.h
 *
 * Request for POST /1/object/bankaccount/{pkiBankaccountID}/importIntoEDM
 */

#ifndef _bankaccount_import_into_edm_v1_request_H_
#define _bankaccount_import_into_edm_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct bankaccount_import_into_edm_v1_request_t bankaccount_import_into_edm_v1_request_t;

#include "custom_attachment_import_into_edm_request.h"



typedef struct bankaccount_import_into_edm_v1_request_t {
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} bankaccount_import_into_edm_v1_request_t;

__attribute__((deprecated)) bankaccount_import_into_edm_v1_request_t *bankaccount_import_into_edm_v1_request_create(
    list_t *a_obj_attachment
);

void bankaccount_import_into_edm_v1_request_free(bankaccount_import_into_edm_v1_request_t *bankaccount_import_into_edm_v1_request);

bankaccount_import_into_edm_v1_request_t *bankaccount_import_into_edm_v1_request_parseFromJSON(cJSON *bankaccount_import_into_edm_v1_requestJSON);

cJSON *bankaccount_import_into_edm_v1_request_convertToJSON(bankaccount_import_into_edm_v1_request_t *bankaccount_import_into_edm_v1_request);

#endif /* _bankaccount_import_into_edm_v1_request_H_ */

