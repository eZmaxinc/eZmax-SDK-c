/*
 * otherincome_import_into_edm_v1_request.h
 *
 * Request for POST /1/object/otherincome/{pkiOtherincomeID}/importIntoEDM
 */

#ifndef _otherincome_import_into_edm_v1_request_H_
#define _otherincome_import_into_edm_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct otherincome_import_into_edm_v1_request_t otherincome_import_into_edm_v1_request_t;

#include "custom_attachment_import_into_edm_request.h"



typedef struct otherincome_import_into_edm_v1_request_t {
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} otherincome_import_into_edm_v1_request_t;

__attribute__((deprecated)) otherincome_import_into_edm_v1_request_t *otherincome_import_into_edm_v1_request_create(
    list_t *a_obj_attachment
);

void otherincome_import_into_edm_v1_request_free(otherincome_import_into_edm_v1_request_t *otherincome_import_into_edm_v1_request);

otherincome_import_into_edm_v1_request_t *otherincome_import_into_edm_v1_request_parseFromJSON(cJSON *otherincome_import_into_edm_v1_requestJSON);

cJSON *otherincome_import_into_edm_v1_request_convertToJSON(otherincome_import_into_edm_v1_request_t *otherincome_import_into_edm_v1_request);

#endif /* _otherincome_import_into_edm_v1_request_H_ */

