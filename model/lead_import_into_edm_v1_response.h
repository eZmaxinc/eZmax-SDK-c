/*
 * lead_import_into_edm_v1_response.h
 *
 * Request for POST /1/object/lead/{pkiLeadID}/importIntoEDM
 */

#ifndef _lead_import_into_edm_v1_response_H_
#define _lead_import_into_edm_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct lead_import_into_edm_v1_response_t lead_import_into_edm_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "lead_import_into_edm_v1_response_m_payload.h"



typedef struct lead_import_into_edm_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct lead_import_into_edm_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} lead_import_into_edm_v1_response_t;

__attribute__((deprecated)) lead_import_into_edm_v1_response_t *lead_import_into_edm_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    lead_import_into_edm_v1_response_m_payload_t *m_payload
);

void lead_import_into_edm_v1_response_free(lead_import_into_edm_v1_response_t *lead_import_into_edm_v1_response);

lead_import_into_edm_v1_response_t *lead_import_into_edm_v1_response_parseFromJSON(cJSON *lead_import_into_edm_v1_responseJSON);

cJSON *lead_import_into_edm_v1_response_convertToJSON(lead_import_into_edm_v1_response_t *lead_import_into_edm_v1_response);

#endif /* _lead_import_into_edm_v1_response_H_ */

