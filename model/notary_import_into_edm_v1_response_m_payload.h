/*
 * notary_import_into_edm_v1_response_m_payload.h
 *
 * Payload for POST /1/object/notary/{pkiNotaryID}/importIntoEDM
 */

#ifndef _notary_import_into_edm_v1_response_m_payload_H_
#define _notary_import_into_edm_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct notary_import_into_edm_v1_response_m_payload_t notary_import_into_edm_v1_response_m_payload_t;

#include "custom_attachment_import_into_edm_response.h"



typedef struct notary_import_into_edm_v1_response_m_payload_t {
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} notary_import_into_edm_v1_response_m_payload_t;

__attribute__((deprecated)) notary_import_into_edm_v1_response_m_payload_t *notary_import_into_edm_v1_response_m_payload_create(
    list_t *a_obj_attachment
);

void notary_import_into_edm_v1_response_m_payload_free(notary_import_into_edm_v1_response_m_payload_t *notary_import_into_edm_v1_response_m_payload);

notary_import_into_edm_v1_response_m_payload_t *notary_import_into_edm_v1_response_m_payload_parseFromJSON(cJSON *notary_import_into_edm_v1_response_m_payloadJSON);

cJSON *notary_import_into_edm_v1_response_m_payload_convertToJSON(notary_import_into_edm_v1_response_m_payload_t *notary_import_into_edm_v1_response_m_payload);

#endif /* _notary_import_into_edm_v1_response_m_payload_H_ */

