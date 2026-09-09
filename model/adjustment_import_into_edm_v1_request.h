/*
 * adjustment_import_into_edm_v1_request.h
 *
 * Response for POST /1/object/adjustment/{pkiAdjustmentID}/importIntoEDM
 */

#ifndef _adjustment_import_into_edm_v1_request_H_
#define _adjustment_import_into_edm_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct adjustment_import_into_edm_v1_request_t adjustment_import_into_edm_v1_request_t;

#include "custom_attachment_import_into_edm_request.h"



typedef struct adjustment_import_into_edm_v1_request_t {
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} adjustment_import_into_edm_v1_request_t;

__attribute__((deprecated)) adjustment_import_into_edm_v1_request_t *adjustment_import_into_edm_v1_request_create(
    list_t *a_obj_attachment
);

void adjustment_import_into_edm_v1_request_free(adjustment_import_into_edm_v1_request_t *adjustment_import_into_edm_v1_request);

adjustment_import_into_edm_v1_request_t *adjustment_import_into_edm_v1_request_parseFromJSON(cJSON *adjustment_import_into_edm_v1_requestJSON);

cJSON *adjustment_import_into_edm_v1_request_convertToJSON(adjustment_import_into_edm_v1_request_t *adjustment_import_into_edm_v1_request);

#endif /* _adjustment_import_into_edm_v1_request_H_ */

