/*
 * ezsignbulksenddocumentmapping_get_object_v2_response_m_payload.h
 *
 * Payload for GET /2/object/ezsignbulksenddocumentmapping/{pkiEzsignbulksenddocumentmappingID}
 */

#ifndef _ezsignbulksenddocumentmapping_get_object_v2_response_m_payload_H_
#define _ezsignbulksenddocumentmapping_get_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksenddocumentmapping_get_object_v2_response_m_payload_t ezsignbulksenddocumentmapping_get_object_v2_response_m_payload_t;

#include "ezsignbulksenddocumentmapping_response_compound.h"



typedef struct ezsignbulksenddocumentmapping_get_object_v2_response_m_payload_t {
    struct ezsignbulksenddocumentmapping_response_compound_t *obj_ezsignbulksenddocumentmapping; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignbulksenddocumentmapping_get_object_v2_response_m_payload_t;

__attribute__((deprecated)) ezsignbulksenddocumentmapping_get_object_v2_response_m_payload_t *ezsignbulksenddocumentmapping_get_object_v2_response_m_payload_create(
    ezsignbulksenddocumentmapping_response_compound_t *obj_ezsignbulksenddocumentmapping
);

void ezsignbulksenddocumentmapping_get_object_v2_response_m_payload_free(ezsignbulksenddocumentmapping_get_object_v2_response_m_payload_t *ezsignbulksenddocumentmapping_get_object_v2_response_m_payload);

ezsignbulksenddocumentmapping_get_object_v2_response_m_payload_t *ezsignbulksenddocumentmapping_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsignbulksenddocumentmapping_get_object_v2_response_m_payloadJSON);

cJSON *ezsignbulksenddocumentmapping_get_object_v2_response_m_payload_convertToJSON(ezsignbulksenddocumentmapping_get_object_v2_response_m_payload_t *ezsignbulksenddocumentmapping_get_object_v2_response_m_payload);

#endif /* _ezsignbulksenddocumentmapping_get_object_v2_response_m_payload_H_ */

