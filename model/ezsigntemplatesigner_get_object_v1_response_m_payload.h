/*
 * ezsigntemplatesigner_get_object_v1_response_m_payload.h
 *
 * Payload for GET /1/object/ezsigntemplatesigner/{pkiEzsigntemplatesignerID}
 */

#ifndef _ezsigntemplatesigner_get_object_v1_response_m_payload_H_
#define _ezsigntemplatesigner_get_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatesigner_get_object_v1_response_m_payload_t ezsigntemplatesigner_get_object_v1_response_m_payload_t;




typedef struct ezsigntemplatesigner_get_object_v1_response_m_payload_t {
    int pki_ezsigntemplatesigner_id; //numeric
    int fki_ezsigntemplate_id; //numeric
    char *s_ezsigntemplatesigner_description; // string

} ezsigntemplatesigner_get_object_v1_response_m_payload_t;

ezsigntemplatesigner_get_object_v1_response_m_payload_t *ezsigntemplatesigner_get_object_v1_response_m_payload_create(
    int pki_ezsigntemplatesigner_id,
    int fki_ezsigntemplate_id,
    char *s_ezsigntemplatesigner_description
);

void ezsigntemplatesigner_get_object_v1_response_m_payload_free(ezsigntemplatesigner_get_object_v1_response_m_payload_t *ezsigntemplatesigner_get_object_v1_response_m_payload);

ezsigntemplatesigner_get_object_v1_response_m_payload_t *ezsigntemplatesigner_get_object_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatesigner_get_object_v1_response_m_payloadJSON);

cJSON *ezsigntemplatesigner_get_object_v1_response_m_payload_convertToJSON(ezsigntemplatesigner_get_object_v1_response_m_payload_t *ezsigntemplatesigner_get_object_v1_response_m_payload);

#endif /* _ezsigntemplatesigner_get_object_v1_response_m_payload_H_ */

