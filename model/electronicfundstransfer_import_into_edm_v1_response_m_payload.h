/*
 * electronicfundstransfer_import_into_edm_v1_response_m_payload.h
 *
 * Payload for POST /1/object/electronicfundstransfer/{pkiElectronicfundstransferID}/importIntoEDM
 */

#ifndef _electronicfundstransfer_import_into_edm_v1_response_m_payload_H_
#define _electronicfundstransfer_import_into_edm_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct electronicfundstransfer_import_into_edm_v1_response_m_payload_t electronicfundstransfer_import_into_edm_v1_response_m_payload_t;

#include "custom_attachment_import_into_edm_response.h"



typedef struct electronicfundstransfer_import_into_edm_v1_response_m_payload_t {
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} electronicfundstransfer_import_into_edm_v1_response_m_payload_t;

__attribute__((deprecated)) electronicfundstransfer_import_into_edm_v1_response_m_payload_t *electronicfundstransfer_import_into_edm_v1_response_m_payload_create(
    list_t *a_obj_attachment
);

void electronicfundstransfer_import_into_edm_v1_response_m_payload_free(electronicfundstransfer_import_into_edm_v1_response_m_payload_t *electronicfundstransfer_import_into_edm_v1_response_m_payload);

electronicfundstransfer_import_into_edm_v1_response_m_payload_t *electronicfundstransfer_import_into_edm_v1_response_m_payload_parseFromJSON(cJSON *electronicfundstransfer_import_into_edm_v1_response_m_payloadJSON);

cJSON *electronicfundstransfer_import_into_edm_v1_response_m_payload_convertToJSON(electronicfundstransfer_import_into_edm_v1_response_m_payload_t *electronicfundstransfer_import_into_edm_v1_response_m_payload);

#endif /* _electronicfundstransfer_import_into_edm_v1_response_m_payload_H_ */

