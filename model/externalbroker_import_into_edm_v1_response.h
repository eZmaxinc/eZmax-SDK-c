/*
 * externalbroker_import_into_edm_v1_response.h
 *
 * Response for POST /1/object/externalbroker/{pkiExternalbrokerID}/importIntoEDM
 */

#ifndef _externalbroker_import_into_edm_v1_response_H_
#define _externalbroker_import_into_edm_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct externalbroker_import_into_edm_v1_response_t externalbroker_import_into_edm_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "externalbroker_import_into_edm_v1_response_m_payload.h"



typedef struct externalbroker_import_into_edm_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct externalbroker_import_into_edm_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} externalbroker_import_into_edm_v1_response_t;

__attribute__((deprecated)) externalbroker_import_into_edm_v1_response_t *externalbroker_import_into_edm_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    externalbroker_import_into_edm_v1_response_m_payload_t *m_payload
);

void externalbroker_import_into_edm_v1_response_free(externalbroker_import_into_edm_v1_response_t *externalbroker_import_into_edm_v1_response);

externalbroker_import_into_edm_v1_response_t *externalbroker_import_into_edm_v1_response_parseFromJSON(cJSON *externalbroker_import_into_edm_v1_responseJSON);

cJSON *externalbroker_import_into_edm_v1_response_convertToJSON(externalbroker_import_into_edm_v1_response_t *externalbroker_import_into_edm_v1_response);

#endif /* _externalbroker_import_into_edm_v1_response_H_ */

