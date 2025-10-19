/*
 * externalbroker_import_into_edm_v1_response_m_payload.h
 *
 * Payload for POST /1/object/externalbroker/{pkiExternalbrokerID}/importIntoEDM
 */

#ifndef _externalbroker_import_into_edm_v1_response_m_payload_H_
#define _externalbroker_import_into_edm_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct externalbroker_import_into_edm_v1_response_m_payload_t externalbroker_import_into_edm_v1_response_m_payload_t;

#include "custom_attachment_import_into_edm_response.h"



typedef struct externalbroker_import_into_edm_v1_response_m_payload_t {
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} externalbroker_import_into_edm_v1_response_m_payload_t;

__attribute__((deprecated)) externalbroker_import_into_edm_v1_response_m_payload_t *externalbroker_import_into_edm_v1_response_m_payload_create(
    list_t *a_obj_attachment
);

void externalbroker_import_into_edm_v1_response_m_payload_free(externalbroker_import_into_edm_v1_response_m_payload_t *externalbroker_import_into_edm_v1_response_m_payload);

externalbroker_import_into_edm_v1_response_m_payload_t *externalbroker_import_into_edm_v1_response_m_payload_parseFromJSON(cJSON *externalbroker_import_into_edm_v1_response_m_payloadJSON);

cJSON *externalbroker_import_into_edm_v1_response_m_payload_convertToJSON(externalbroker_import_into_edm_v1_response_m_payload_t *externalbroker_import_into_edm_v1_response_m_payload);

#endif /* _externalbroker_import_into_edm_v1_response_m_payload_H_ */

