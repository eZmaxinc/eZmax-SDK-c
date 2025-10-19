/*
 * lead_import_into_edm_v1_response_m_payload.h
 *
 * Payload for POST /1/object/lead/{pkiLeadID}/importIntoEDM
 */

#ifndef _lead_import_into_edm_v1_response_m_payload_H_
#define _lead_import_into_edm_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct lead_import_into_edm_v1_response_m_payload_t lead_import_into_edm_v1_response_m_payload_t;

#include "custom_attachment_import_into_edm_response.h"



typedef struct lead_import_into_edm_v1_response_m_payload_t {
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} lead_import_into_edm_v1_response_m_payload_t;

__attribute__((deprecated)) lead_import_into_edm_v1_response_m_payload_t *lead_import_into_edm_v1_response_m_payload_create(
    list_t *a_obj_attachment
);

void lead_import_into_edm_v1_response_m_payload_free(lead_import_into_edm_v1_response_m_payload_t *lead_import_into_edm_v1_response_m_payload);

lead_import_into_edm_v1_response_m_payload_t *lead_import_into_edm_v1_response_m_payload_parseFromJSON(cJSON *lead_import_into_edm_v1_response_m_payloadJSON);

cJSON *lead_import_into_edm_v1_response_m_payload_convertToJSON(lead_import_into_edm_v1_response_m_payload_t *lead_import_into_edm_v1_response_m_payload);

#endif /* _lead_import_into_edm_v1_response_m_payload_H_ */

