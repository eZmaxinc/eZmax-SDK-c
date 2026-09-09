/*
 * officetaxreport_import_into_edm_v1_response.h
 *
 * Response for POST /1/object/officetaxreport/{pkiOfficetaxreportID}/importIntoEDM
 */

#ifndef _officetaxreport_import_into_edm_v1_response_H_
#define _officetaxreport_import_into_edm_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct officetaxreport_import_into_edm_v1_response_t officetaxreport_import_into_edm_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "officetaxreport_import_into_edm_v1_response_m_payload.h"



typedef struct officetaxreport_import_into_edm_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct officetaxreport_import_into_edm_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} officetaxreport_import_into_edm_v1_response_t;

__attribute__((deprecated)) officetaxreport_import_into_edm_v1_response_t *officetaxreport_import_into_edm_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    officetaxreport_import_into_edm_v1_response_m_payload_t *m_payload
);

void officetaxreport_import_into_edm_v1_response_free(officetaxreport_import_into_edm_v1_response_t *officetaxreport_import_into_edm_v1_response);

officetaxreport_import_into_edm_v1_response_t *officetaxreport_import_into_edm_v1_response_parseFromJSON(cJSON *officetaxreport_import_into_edm_v1_responseJSON);

cJSON *officetaxreport_import_into_edm_v1_response_convertToJSON(officetaxreport_import_into_edm_v1_response_t *officetaxreport_import_into_edm_v1_response);

#endif /* _officetaxreport_import_into_edm_v1_response_H_ */

