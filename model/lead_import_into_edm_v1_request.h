/*
 * lead_import_into_edm_v1_request.h
 *
 * Request for POST /1/object/lead/{pkiLeadID}/importIntoEDM
 */

#ifndef _lead_import_into_edm_v1_request_H_
#define _lead_import_into_edm_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct lead_import_into_edm_v1_request_t lead_import_into_edm_v1_request_t;

#include "custom_attachment_import_into_edm_request.h"



typedef struct lead_import_into_edm_v1_request_t {
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} lead_import_into_edm_v1_request_t;

__attribute__((deprecated)) lead_import_into_edm_v1_request_t *lead_import_into_edm_v1_request_create(
    list_t *a_obj_attachment
);

void lead_import_into_edm_v1_request_free(lead_import_into_edm_v1_request_t *lead_import_into_edm_v1_request);

lead_import_into_edm_v1_request_t *lead_import_into_edm_v1_request_parseFromJSON(cJSON *lead_import_into_edm_v1_requestJSON);

cJSON *lead_import_into_edm_v1_request_convertToJSON(lead_import_into_edm_v1_request_t *lead_import_into_edm_v1_request);

#endif /* _lead_import_into_edm_v1_request_H_ */

