/*
 * ezsigntemplatesigner_create_object_v1_response_m_payload.h
 *
 * Payload for POST /1/object/ezsigntemplatesigner
 */

#ifndef _ezsigntemplatesigner_create_object_v1_response_m_payload_H_
#define _ezsigntemplatesigner_create_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatesigner_create_object_v1_response_m_payload_t ezsigntemplatesigner_create_object_v1_response_m_payload_t;




typedef struct ezsigntemplatesigner_create_object_v1_response_m_payload_t {
    list_t *a_pki_ezsigntemplatesigner_id; //primitive container
    int b_ezsigntemplatepackage_needvalidation; //boolean
    int b_ezsignbulksend_needvalidation; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatesigner_create_object_v1_response_m_payload_t;

__attribute__((deprecated)) ezsigntemplatesigner_create_object_v1_response_m_payload_t *ezsigntemplatesigner_create_object_v1_response_m_payload_create(
    list_t *a_pki_ezsigntemplatesigner_id,
    int b_ezsigntemplatepackage_needvalidation,
    int b_ezsignbulksend_needvalidation
);

void ezsigntemplatesigner_create_object_v1_response_m_payload_free(ezsigntemplatesigner_create_object_v1_response_m_payload_t *ezsigntemplatesigner_create_object_v1_response_m_payload);

ezsigntemplatesigner_create_object_v1_response_m_payload_t *ezsigntemplatesigner_create_object_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatesigner_create_object_v1_response_m_payloadJSON);

cJSON *ezsigntemplatesigner_create_object_v1_response_m_payload_convertToJSON(ezsigntemplatesigner_create_object_v1_response_m_payload_t *ezsigntemplatesigner_create_object_v1_response_m_payload);

#endif /* _ezsigntemplatesigner_create_object_v1_response_m_payload_H_ */

