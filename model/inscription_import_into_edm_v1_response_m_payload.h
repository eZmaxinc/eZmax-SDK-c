/*
 * inscription_import_into_edm_v1_response_m_payload.h
 *
 * Payload for POST /1/object/inscription/{pkiInscriptionID}/importIntoEDM
 */

#ifndef _inscription_import_into_edm_v1_response_m_payload_H_
#define _inscription_import_into_edm_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inscription_import_into_edm_v1_response_m_payload_t inscription_import_into_edm_v1_response_m_payload_t;

#include "custom_attachment_import_into_edm_response.h"



typedef struct inscription_import_into_edm_v1_response_m_payload_t {
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} inscription_import_into_edm_v1_response_m_payload_t;

__attribute__((deprecated)) inscription_import_into_edm_v1_response_m_payload_t *inscription_import_into_edm_v1_response_m_payload_create(
    list_t *a_obj_attachment
);

void inscription_import_into_edm_v1_response_m_payload_free(inscription_import_into_edm_v1_response_m_payload_t *inscription_import_into_edm_v1_response_m_payload);

inscription_import_into_edm_v1_response_m_payload_t *inscription_import_into_edm_v1_response_m_payload_parseFromJSON(cJSON *inscription_import_into_edm_v1_response_m_payloadJSON);

cJSON *inscription_import_into_edm_v1_response_m_payload_convertToJSON(inscription_import_into_edm_v1_response_m_payload_t *inscription_import_into_edm_v1_response_m_payload);

#endif /* _inscription_import_into_edm_v1_response_m_payload_H_ */

