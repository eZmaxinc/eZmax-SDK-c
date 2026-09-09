/*
 * disclosure_import_into_edm_v1_response.h
 *
 * Response for POST /1/object/disclosure/{pkiDisclosureID}/importIntoEDM
 */

#ifndef _disclosure_import_into_edm_v1_response_H_
#define _disclosure_import_into_edm_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct disclosure_import_into_edm_v1_response_t disclosure_import_into_edm_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "disclosure_import_into_edm_v1_response_m_payload.h"



typedef struct disclosure_import_into_edm_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct disclosure_import_into_edm_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} disclosure_import_into_edm_v1_response_t;

__attribute__((deprecated)) disclosure_import_into_edm_v1_response_t *disclosure_import_into_edm_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    disclosure_import_into_edm_v1_response_m_payload_t *m_payload
);

void disclosure_import_into_edm_v1_response_free(disclosure_import_into_edm_v1_response_t *disclosure_import_into_edm_v1_response);

disclosure_import_into_edm_v1_response_t *disclosure_import_into_edm_v1_response_parseFromJSON(cJSON *disclosure_import_into_edm_v1_responseJSON);

cJSON *disclosure_import_into_edm_v1_response_convertToJSON(disclosure_import_into_edm_v1_response_t *disclosure_import_into_edm_v1_response);

#endif /* _disclosure_import_into_edm_v1_response_H_ */

