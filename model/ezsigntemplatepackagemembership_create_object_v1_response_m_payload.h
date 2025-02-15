/*
 * ezsigntemplatepackagemembership_create_object_v1_response_m_payload.h
 *
 * Payload for POST /1/object/ezsigntemplatepackagemembership
 */

#ifndef _ezsigntemplatepackagemembership_create_object_v1_response_m_payload_H_
#define _ezsigntemplatepackagemembership_create_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackagemembership_create_object_v1_response_m_payload_t ezsigntemplatepackagemembership_create_object_v1_response_m_payload_t;




typedef struct ezsigntemplatepackagemembership_create_object_v1_response_m_payload_t {
    list_t *a_pki_ezsigntemplatepackagemembership_id; //primitive container
    int b_ezsigntemplatepackage_needvalidation; //boolean
    int b_ezsignbulksend_needvalidation; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatepackagemembership_create_object_v1_response_m_payload_t;

__attribute__((deprecated)) ezsigntemplatepackagemembership_create_object_v1_response_m_payload_t *ezsigntemplatepackagemembership_create_object_v1_response_m_payload_create(
    list_t *a_pki_ezsigntemplatepackagemembership_id,
    int b_ezsigntemplatepackage_needvalidation,
    int b_ezsignbulksend_needvalidation
);

void ezsigntemplatepackagemembership_create_object_v1_response_m_payload_free(ezsigntemplatepackagemembership_create_object_v1_response_m_payload_t *ezsigntemplatepackagemembership_create_object_v1_response_m_payload);

ezsigntemplatepackagemembership_create_object_v1_response_m_payload_t *ezsigntemplatepackagemembership_create_object_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatepackagemembership_create_object_v1_response_m_payloadJSON);

cJSON *ezsigntemplatepackagemembership_create_object_v1_response_m_payload_convertToJSON(ezsigntemplatepackagemembership_create_object_v1_response_m_payload_t *ezsigntemplatepackagemembership_create_object_v1_response_m_payload);

#endif /* _ezsigntemplatepackagemembership_create_object_v1_response_m_payload_H_ */

