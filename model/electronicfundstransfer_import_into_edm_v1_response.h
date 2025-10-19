/*
 * electronicfundstransfer_import_into_edm_v1_response.h
 *
 * Response for POST /1/object/electronicfundstransfer/{pkiElectronicfundstransferID}/importIntoEDM
 */

#ifndef _electronicfundstransfer_import_into_edm_v1_response_H_
#define _electronicfundstransfer_import_into_edm_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct electronicfundstransfer_import_into_edm_v1_response_t electronicfundstransfer_import_into_edm_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "electronicfundstransfer_import_into_edm_v1_response_m_payload.h"



typedef struct electronicfundstransfer_import_into_edm_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct electronicfundstransfer_import_into_edm_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} electronicfundstransfer_import_into_edm_v1_response_t;

__attribute__((deprecated)) electronicfundstransfer_import_into_edm_v1_response_t *electronicfundstransfer_import_into_edm_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    electronicfundstransfer_import_into_edm_v1_response_m_payload_t *m_payload
);

void electronicfundstransfer_import_into_edm_v1_response_free(electronicfundstransfer_import_into_edm_v1_response_t *electronicfundstransfer_import_into_edm_v1_response);

electronicfundstransfer_import_into_edm_v1_response_t *electronicfundstransfer_import_into_edm_v1_response_parseFromJSON(cJSON *electronicfundstransfer_import_into_edm_v1_responseJSON);

cJSON *electronicfundstransfer_import_into_edm_v1_response_convertToJSON(electronicfundstransfer_import_into_edm_v1_response_t *electronicfundstransfer_import_into_edm_v1_response);

#endif /* _electronicfundstransfer_import_into_edm_v1_response_H_ */

