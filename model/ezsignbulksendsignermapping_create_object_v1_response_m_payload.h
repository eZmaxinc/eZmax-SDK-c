/*
 * ezsignbulksendsignermapping_create_object_v1_response_m_payload.h
 *
 * Payload for POST /1/object/ezsignbulksendsignermapping
 */

#ifndef _ezsignbulksendsignermapping_create_object_v1_response_m_payload_H_
#define _ezsignbulksendsignermapping_create_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksendsignermapping_create_object_v1_response_m_payload_t ezsignbulksendsignermapping_create_object_v1_response_m_payload_t;




typedef struct ezsignbulksendsignermapping_create_object_v1_response_m_payload_t {
    list_t *a_pki_ezsignbulksendsignermapping_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignbulksendsignermapping_create_object_v1_response_m_payload_t;

__attribute__((deprecated)) ezsignbulksendsignermapping_create_object_v1_response_m_payload_t *ezsignbulksendsignermapping_create_object_v1_response_m_payload_create(
    list_t *a_pki_ezsignbulksendsignermapping_id
);

void ezsignbulksendsignermapping_create_object_v1_response_m_payload_free(ezsignbulksendsignermapping_create_object_v1_response_m_payload_t *ezsignbulksendsignermapping_create_object_v1_response_m_payload);

ezsignbulksendsignermapping_create_object_v1_response_m_payload_t *ezsignbulksendsignermapping_create_object_v1_response_m_payload_parseFromJSON(cJSON *ezsignbulksendsignermapping_create_object_v1_response_m_payloadJSON);

cJSON *ezsignbulksendsignermapping_create_object_v1_response_m_payload_convertToJSON(ezsignbulksendsignermapping_create_object_v1_response_m_payload_t *ezsignbulksendsignermapping_create_object_v1_response_m_payload);

#endif /* _ezsignbulksendsignermapping_create_object_v1_response_m_payload_H_ */

