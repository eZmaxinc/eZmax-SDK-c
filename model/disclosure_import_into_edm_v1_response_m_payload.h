/*
 * disclosure_import_into_edm_v1_response_m_payload.h
 *
 * Payload for POST /1/object/disclosure/{pkiDisclosureID}/importIntoEDM
 */

#ifndef _disclosure_import_into_edm_v1_response_m_payload_H_
#define _disclosure_import_into_edm_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct disclosure_import_into_edm_v1_response_m_payload_t disclosure_import_into_edm_v1_response_m_payload_t;

#include "custom_attachment_import_into_edm_response.h"



typedef struct disclosure_import_into_edm_v1_response_m_payload_t {
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} disclosure_import_into_edm_v1_response_m_payload_t;

__attribute__((deprecated)) disclosure_import_into_edm_v1_response_m_payload_t *disclosure_import_into_edm_v1_response_m_payload_create(
    list_t *a_obj_attachment
);

void disclosure_import_into_edm_v1_response_m_payload_free(disclosure_import_into_edm_v1_response_m_payload_t *disclosure_import_into_edm_v1_response_m_payload);

disclosure_import_into_edm_v1_response_m_payload_t *disclosure_import_into_edm_v1_response_m_payload_parseFromJSON(cJSON *disclosure_import_into_edm_v1_response_m_payloadJSON);

cJSON *disclosure_import_into_edm_v1_response_m_payload_convertToJSON(disclosure_import_into_edm_v1_response_m_payload_t *disclosure_import_into_edm_v1_response_m_payload);

#endif /* _disclosure_import_into_edm_v1_response_m_payload_H_ */

