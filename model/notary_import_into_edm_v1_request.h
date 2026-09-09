/*
 * notary_import_into_edm_v1_request.h
 *
 * Request for POST /1/object/notary/{pkiNotaryID}/importIntoEDM
 */

#ifndef _notary_import_into_edm_v1_request_H_
#define _notary_import_into_edm_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct notary_import_into_edm_v1_request_t notary_import_into_edm_v1_request_t;

#include "custom_attachment_import_into_edm_request.h"



typedef struct notary_import_into_edm_v1_request_t {
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} notary_import_into_edm_v1_request_t;

__attribute__((deprecated)) notary_import_into_edm_v1_request_t *notary_import_into_edm_v1_request_create(
    list_t *a_obj_attachment
);

void notary_import_into_edm_v1_request_free(notary_import_into_edm_v1_request_t *notary_import_into_edm_v1_request);

notary_import_into_edm_v1_request_t *notary_import_into_edm_v1_request_parseFromJSON(cJSON *notary_import_into_edm_v1_requestJSON);

cJSON *notary_import_into_edm_v1_request_convertToJSON(notary_import_into_edm_v1_request_t *notary_import_into_edm_v1_request);

#endif /* _notary_import_into_edm_v1_request_H_ */

