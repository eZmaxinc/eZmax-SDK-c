/*
 * ezsigntemplatesignature_create_object_v2_response_m_payload.h
 *
 * Payload for POST /2/object/ezsigntemplatesignature
 */

#ifndef _ezsigntemplatesignature_create_object_v2_response_m_payload_H_
#define _ezsigntemplatesignature_create_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatesignature_create_object_v2_response_m_payload_t ezsigntemplatesignature_create_object_v2_response_m_payload_t;




typedef struct ezsigntemplatesignature_create_object_v2_response_m_payload_t {
    list_t *a_pki_ezsigntemplatesignature_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatesignature_create_object_v2_response_m_payload_t;

__attribute__((deprecated)) ezsigntemplatesignature_create_object_v2_response_m_payload_t *ezsigntemplatesignature_create_object_v2_response_m_payload_create(
    list_t *a_pki_ezsigntemplatesignature_id
);

void ezsigntemplatesignature_create_object_v2_response_m_payload_free(ezsigntemplatesignature_create_object_v2_response_m_payload_t *ezsigntemplatesignature_create_object_v2_response_m_payload);

ezsigntemplatesignature_create_object_v2_response_m_payload_t *ezsigntemplatesignature_create_object_v2_response_m_payload_parseFromJSON(cJSON *ezsigntemplatesignature_create_object_v2_response_m_payloadJSON);

cJSON *ezsigntemplatesignature_create_object_v2_response_m_payload_convertToJSON(ezsigntemplatesignature_create_object_v2_response_m_payload_t *ezsigntemplatesignature_create_object_v2_response_m_payload);

#endif /* _ezsigntemplatesignature_create_object_v2_response_m_payload_H_ */

