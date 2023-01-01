/*
 * ezsignbulksendsignermapping_get_object_v1_response_m_payload.h
 *
 * Payload for GET /1/object/ezsignbulksendsignermapping/{pkiEzsignbulksendsignermappingID}
 */

#ifndef _ezsignbulksendsignermapping_get_object_v1_response_m_payload_H_
#define _ezsignbulksendsignermapping_get_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksendsignermapping_get_object_v1_response_m_payload_t ezsignbulksendsignermapping_get_object_v1_response_m_payload_t;




typedef struct ezsignbulksendsignermapping_get_object_v1_response_m_payload_t {
    int pki_ezsignbulksendsignermapping_id; //numeric
    int fki_ezsignbulksend_id; //numeric
    int fki_user_id; //numeric
    char *s_ezsignbulksendsignermapping_description; // string

} ezsignbulksendsignermapping_get_object_v1_response_m_payload_t;

ezsignbulksendsignermapping_get_object_v1_response_m_payload_t *ezsignbulksendsignermapping_get_object_v1_response_m_payload_create(
    int pki_ezsignbulksendsignermapping_id,
    int fki_ezsignbulksend_id,
    int fki_user_id,
    char *s_ezsignbulksendsignermapping_description
);

void ezsignbulksendsignermapping_get_object_v1_response_m_payload_free(ezsignbulksendsignermapping_get_object_v1_response_m_payload_t *ezsignbulksendsignermapping_get_object_v1_response_m_payload);

ezsignbulksendsignermapping_get_object_v1_response_m_payload_t *ezsignbulksendsignermapping_get_object_v1_response_m_payload_parseFromJSON(cJSON *ezsignbulksendsignermapping_get_object_v1_response_m_payloadJSON);

cJSON *ezsignbulksendsignermapping_get_object_v1_response_m_payload_convertToJSON(ezsignbulksendsignermapping_get_object_v1_response_m_payload_t *ezsignbulksendsignermapping_get_object_v1_response_m_payload);

#endif /* _ezsignbulksendsignermapping_get_object_v1_response_m_payload_H_ */

