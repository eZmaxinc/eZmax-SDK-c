/*
 * ezsigntemplatepackage_create_object_v1_response_m_payload.h
 *
 * Payload for POST /1/object/ezsigntemplatepackage
 */

#ifndef _ezsigntemplatepackage_create_object_v1_response_m_payload_H_
#define _ezsigntemplatepackage_create_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackage_create_object_v1_response_m_payload_t ezsigntemplatepackage_create_object_v1_response_m_payload_t;




typedef struct ezsigntemplatepackage_create_object_v1_response_m_payload_t {
    list_t *a_pki_ezsigntemplatepackage_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatepackage_create_object_v1_response_m_payload_t;

__attribute__((deprecated)) ezsigntemplatepackage_create_object_v1_response_m_payload_t *ezsigntemplatepackage_create_object_v1_response_m_payload_create(
    list_t *a_pki_ezsigntemplatepackage_id
);

void ezsigntemplatepackage_create_object_v1_response_m_payload_free(ezsigntemplatepackage_create_object_v1_response_m_payload_t *ezsigntemplatepackage_create_object_v1_response_m_payload);

ezsigntemplatepackage_create_object_v1_response_m_payload_t *ezsigntemplatepackage_create_object_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatepackage_create_object_v1_response_m_payloadJSON);

cJSON *ezsigntemplatepackage_create_object_v1_response_m_payload_convertToJSON(ezsigntemplatepackage_create_object_v1_response_m_payload_t *ezsigntemplatepackage_create_object_v1_response_m_payload);

#endif /* _ezsigntemplatepackage_create_object_v1_response_m_payload_H_ */

