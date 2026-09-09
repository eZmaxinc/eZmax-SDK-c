/*
 * disclosure_import_into_edm_v1_request.h
 *
 * Request for POST /1/object/disclosure/{pkiDisclosureID}/importIntoEDM
 */

#ifndef _disclosure_import_into_edm_v1_request_H_
#define _disclosure_import_into_edm_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct disclosure_import_into_edm_v1_request_t disclosure_import_into_edm_v1_request_t;

#include "custom_attachment_import_into_edm_request.h"



typedef struct disclosure_import_into_edm_v1_request_t {
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} disclosure_import_into_edm_v1_request_t;

__attribute__((deprecated)) disclosure_import_into_edm_v1_request_t *disclosure_import_into_edm_v1_request_create(
    list_t *a_obj_attachment
);

void disclosure_import_into_edm_v1_request_free(disclosure_import_into_edm_v1_request_t *disclosure_import_into_edm_v1_request);

disclosure_import_into_edm_v1_request_t *disclosure_import_into_edm_v1_request_parseFromJSON(cJSON *disclosure_import_into_edm_v1_requestJSON);

cJSON *disclosure_import_into_edm_v1_request_convertToJSON(disclosure_import_into_edm_v1_request_t *disclosure_import_into_edm_v1_request);

#endif /* _disclosure_import_into_edm_v1_request_H_ */

