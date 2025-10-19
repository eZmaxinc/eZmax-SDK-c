/*
 * inscriptionnotauthenticated_import_into_edm_v1_response_m_payload.h
 *
 * Payload for POST /1/object/inscriptionnotauthenticated/{pkiInscriptionnotauthenticatedID}/importIntoEDM
 */

#ifndef _inscriptionnotauthenticated_import_into_edm_v1_response_m_payload_H_
#define _inscriptionnotauthenticated_import_into_edm_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inscriptionnotauthenticated_import_into_edm_v1_response_m_payload_t inscriptionnotauthenticated_import_into_edm_v1_response_m_payload_t;

#include "custom_attachment_import_into_edm_response.h"



typedef struct inscriptionnotauthenticated_import_into_edm_v1_response_m_payload_t {
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} inscriptionnotauthenticated_import_into_edm_v1_response_m_payload_t;

__attribute__((deprecated)) inscriptionnotauthenticated_import_into_edm_v1_response_m_payload_t *inscriptionnotauthenticated_import_into_edm_v1_response_m_payload_create(
    list_t *a_obj_attachment
);

void inscriptionnotauthenticated_import_into_edm_v1_response_m_payload_free(inscriptionnotauthenticated_import_into_edm_v1_response_m_payload_t *inscriptionnotauthenticated_import_into_edm_v1_response_m_payload);

inscriptionnotauthenticated_import_into_edm_v1_response_m_payload_t *inscriptionnotauthenticated_import_into_edm_v1_response_m_payload_parseFromJSON(cJSON *inscriptionnotauthenticated_import_into_edm_v1_response_m_payloadJSON);

cJSON *inscriptionnotauthenticated_import_into_edm_v1_response_m_payload_convertToJSON(inscriptionnotauthenticated_import_into_edm_v1_response_m_payload_t *inscriptionnotauthenticated_import_into_edm_v1_response_m_payload);

#endif /* _inscriptionnotauthenticated_import_into_edm_v1_response_m_payload_H_ */

