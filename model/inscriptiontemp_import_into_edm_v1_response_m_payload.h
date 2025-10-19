/*
 * inscriptiontemp_import_into_edm_v1_response_m_payload.h
 *
 * Payload for POST/1/object/inscriptiontemp/{pkiInscriptiontempID}/importIntoEDM
 */

#ifndef _inscriptiontemp_import_into_edm_v1_response_m_payload_H_
#define _inscriptiontemp_import_into_edm_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inscriptiontemp_import_into_edm_v1_response_m_payload_t inscriptiontemp_import_into_edm_v1_response_m_payload_t;

#include "custom_attachment_import_into_edm_response.h"



typedef struct inscriptiontemp_import_into_edm_v1_response_m_payload_t {
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} inscriptiontemp_import_into_edm_v1_response_m_payload_t;

__attribute__((deprecated)) inscriptiontemp_import_into_edm_v1_response_m_payload_t *inscriptiontemp_import_into_edm_v1_response_m_payload_create(
    list_t *a_obj_attachment
);

void inscriptiontemp_import_into_edm_v1_response_m_payload_free(inscriptiontemp_import_into_edm_v1_response_m_payload_t *inscriptiontemp_import_into_edm_v1_response_m_payload);

inscriptiontemp_import_into_edm_v1_response_m_payload_t *inscriptiontemp_import_into_edm_v1_response_m_payload_parseFromJSON(cJSON *inscriptiontemp_import_into_edm_v1_response_m_payloadJSON);

cJSON *inscriptiontemp_import_into_edm_v1_response_m_payload_convertToJSON(inscriptiontemp_import_into_edm_v1_response_m_payload_t *inscriptiontemp_import_into_edm_v1_response_m_payload);

#endif /* _inscriptiontemp_import_into_edm_v1_response_m_payload_H_ */

