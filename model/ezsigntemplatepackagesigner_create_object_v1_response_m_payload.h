/*
 * ezsigntemplatepackagesigner_create_object_v1_response_m_payload.h
 *
 * Payload for POST /1/object/ezsigntemplatepackagesigner
 */

#ifndef _ezsigntemplatepackagesigner_create_object_v1_response_m_payload_H_
#define _ezsigntemplatepackagesigner_create_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackagesigner_create_object_v1_response_m_payload_t ezsigntemplatepackagesigner_create_object_v1_response_m_payload_t;




typedef struct ezsigntemplatepackagesigner_create_object_v1_response_m_payload_t {
    list_t *a_pki_ezsigntemplatepackagesigner_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatepackagesigner_create_object_v1_response_m_payload_t;

__attribute__((deprecated)) ezsigntemplatepackagesigner_create_object_v1_response_m_payload_t *ezsigntemplatepackagesigner_create_object_v1_response_m_payload_create(
    list_t *a_pki_ezsigntemplatepackagesigner_id
);

void ezsigntemplatepackagesigner_create_object_v1_response_m_payload_free(ezsigntemplatepackagesigner_create_object_v1_response_m_payload_t *ezsigntemplatepackagesigner_create_object_v1_response_m_payload);

ezsigntemplatepackagesigner_create_object_v1_response_m_payload_t *ezsigntemplatepackagesigner_create_object_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatepackagesigner_create_object_v1_response_m_payloadJSON);

cJSON *ezsigntemplatepackagesigner_create_object_v1_response_m_payload_convertToJSON(ezsigntemplatepackagesigner_create_object_v1_response_m_payload_t *ezsigntemplatepackagesigner_create_object_v1_response_m_payload);

#endif /* _ezsigntemplatepackagesigner_create_object_v1_response_m_payload_H_ */

