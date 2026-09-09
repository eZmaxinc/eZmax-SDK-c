/*
 * notary_import_into_edm_v1_response.h
 *
 * Response for POST /1/object/notary/{pkiNotaryID}/importIntoEDM
 */

#ifndef _notary_import_into_edm_v1_response_H_
#define _notary_import_into_edm_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct notary_import_into_edm_v1_response_t notary_import_into_edm_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "notary_import_into_edm_v1_response_m_payload.h"



typedef struct notary_import_into_edm_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct notary_import_into_edm_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} notary_import_into_edm_v1_response_t;

__attribute__((deprecated)) notary_import_into_edm_v1_response_t *notary_import_into_edm_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    notary_import_into_edm_v1_response_m_payload_t *m_payload
);

void notary_import_into_edm_v1_response_free(notary_import_into_edm_v1_response_t *notary_import_into_edm_v1_response);

notary_import_into_edm_v1_response_t *notary_import_into_edm_v1_response_parseFromJSON(cJSON *notary_import_into_edm_v1_responseJSON);

cJSON *notary_import_into_edm_v1_response_convertToJSON(notary_import_into_edm_v1_response_t *notary_import_into_edm_v1_response);

#endif /* _notary_import_into_edm_v1_response_H_ */

