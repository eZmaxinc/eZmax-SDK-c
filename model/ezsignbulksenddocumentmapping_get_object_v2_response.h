/*
 * ezsignbulksenddocumentmapping_get_object_v2_response.h
 *
 * Response for GET /2/object/ezsignbulksenddocumentmapping/{pkiEzsignbulksenddocumentmappingID}
 */

#ifndef _ezsignbulksenddocumentmapping_get_object_v2_response_H_
#define _ezsignbulksenddocumentmapping_get_object_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksenddocumentmapping_get_object_v2_response_t ezsignbulksenddocumentmapping_get_object_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsignbulksenddocumentmapping_get_object_v2_response_m_payload.h"



typedef struct ezsignbulksenddocumentmapping_get_object_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezsignbulksenddocumentmapping_get_object_v2_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignbulksenddocumentmapping_get_object_v2_response_t;

__attribute__((deprecated)) ezsignbulksenddocumentmapping_get_object_v2_response_t *ezsignbulksenddocumentmapping_get_object_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsignbulksenddocumentmapping_get_object_v2_response_m_payload_t *m_payload
);

void ezsignbulksenddocumentmapping_get_object_v2_response_free(ezsignbulksenddocumentmapping_get_object_v2_response_t *ezsignbulksenddocumentmapping_get_object_v2_response);

ezsignbulksenddocumentmapping_get_object_v2_response_t *ezsignbulksenddocumentmapping_get_object_v2_response_parseFromJSON(cJSON *ezsignbulksenddocumentmapping_get_object_v2_responseJSON);

cJSON *ezsignbulksenddocumentmapping_get_object_v2_response_convertToJSON(ezsignbulksenddocumentmapping_get_object_v2_response_t *ezsignbulksenddocumentmapping_get_object_v2_response);

#endif /* _ezsignbulksenddocumentmapping_get_object_v2_response_H_ */

