/*
 * commissionadvance_import_into_edm_v1_response_m_payload.h
 *
 * Payload for POST /1/object/commissionadvance/{pkiCommissionadvanceID}/importIntoEDM
 */

#ifndef _commissionadvance_import_into_edm_v1_response_m_payload_H_
#define _commissionadvance_import_into_edm_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct commissionadvance_import_into_edm_v1_response_m_payload_t commissionadvance_import_into_edm_v1_response_m_payload_t;

#include "custom_attachment_import_into_edm_response.h"



typedef struct commissionadvance_import_into_edm_v1_response_m_payload_t {
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} commissionadvance_import_into_edm_v1_response_m_payload_t;

__attribute__((deprecated)) commissionadvance_import_into_edm_v1_response_m_payload_t *commissionadvance_import_into_edm_v1_response_m_payload_create(
    list_t *a_obj_attachment
);

void commissionadvance_import_into_edm_v1_response_m_payload_free(commissionadvance_import_into_edm_v1_response_m_payload_t *commissionadvance_import_into_edm_v1_response_m_payload);

commissionadvance_import_into_edm_v1_response_m_payload_t *commissionadvance_import_into_edm_v1_response_m_payload_parseFromJSON(cJSON *commissionadvance_import_into_edm_v1_response_m_payloadJSON);

cJSON *commissionadvance_import_into_edm_v1_response_m_payload_convertToJSON(commissionadvance_import_into_edm_v1_response_m_payload_t *commissionadvance_import_into_edm_v1_response_m_payload);

#endif /* _commissionadvance_import_into_edm_v1_response_m_payload_H_ */

