/*
 * inscriptionnotauthenticated_import_into_edm_v1_response.h
 *
 * Response for POST /1/object/inscriptionnotauthenticated/{pkiInscriptionnotauthenticatedID}/importIntoEDM
 */

#ifndef _inscriptionnotauthenticated_import_into_edm_v1_response_H_
#define _inscriptionnotauthenticated_import_into_edm_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inscriptionnotauthenticated_import_into_edm_v1_response_t inscriptionnotauthenticated_import_into_edm_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "inscriptionnotauthenticated_import_into_edm_v1_response_m_payload.h"



typedef struct inscriptionnotauthenticated_import_into_edm_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct inscriptionnotauthenticated_import_into_edm_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} inscriptionnotauthenticated_import_into_edm_v1_response_t;

__attribute__((deprecated)) inscriptionnotauthenticated_import_into_edm_v1_response_t *inscriptionnotauthenticated_import_into_edm_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    inscriptionnotauthenticated_import_into_edm_v1_response_m_payload_t *m_payload
);

void inscriptionnotauthenticated_import_into_edm_v1_response_free(inscriptionnotauthenticated_import_into_edm_v1_response_t *inscriptionnotauthenticated_import_into_edm_v1_response);

inscriptionnotauthenticated_import_into_edm_v1_response_t *inscriptionnotauthenticated_import_into_edm_v1_response_parseFromJSON(cJSON *inscriptionnotauthenticated_import_into_edm_v1_responseJSON);

cJSON *inscriptionnotauthenticated_import_into_edm_v1_response_convertToJSON(inscriptionnotauthenticated_import_into_edm_v1_response_t *inscriptionnotauthenticated_import_into_edm_v1_response);

#endif /* _inscriptionnotauthenticated_import_into_edm_v1_response_H_ */

