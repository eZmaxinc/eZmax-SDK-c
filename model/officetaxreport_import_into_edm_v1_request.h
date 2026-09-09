/*
 * officetaxreport_import_into_edm_v1_request.h
 *
 * Request for POST /1/object/officetaxreport/{pkiOfficetaxreportID}/importIntoEDM
 */

#ifndef _officetaxreport_import_into_edm_v1_request_H_
#define _officetaxreport_import_into_edm_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct officetaxreport_import_into_edm_v1_request_t officetaxreport_import_into_edm_v1_request_t;

#include "custom_attachment_import_into_edm_request.h"



typedef struct officetaxreport_import_into_edm_v1_request_t {
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} officetaxreport_import_into_edm_v1_request_t;

__attribute__((deprecated)) officetaxreport_import_into_edm_v1_request_t *officetaxreport_import_into_edm_v1_request_create(
    list_t *a_obj_attachment
);

void officetaxreport_import_into_edm_v1_request_free(officetaxreport_import_into_edm_v1_request_t *officetaxreport_import_into_edm_v1_request);

officetaxreport_import_into_edm_v1_request_t *officetaxreport_import_into_edm_v1_request_parseFromJSON(cJSON *officetaxreport_import_into_edm_v1_requestJSON);

cJSON *officetaxreport_import_into_edm_v1_request_convertToJSON(officetaxreport_import_into_edm_v1_request_t *officetaxreport_import_into_edm_v1_request);

#endif /* _officetaxreport_import_into_edm_v1_request_H_ */

