/*
 * ezsignbulksenddocumentmapping_create_object_v1_response.h
 *
 * Response for POST /1/object/ezsignbulksenddocumentmapping
 */

#ifndef _ezsignbulksenddocumentmapping_create_object_v1_response_H_
#define _ezsignbulksenddocumentmapping_create_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksenddocumentmapping_create_object_v1_response_t ezsignbulksenddocumentmapping_create_object_v1_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsignbulksenddocumentmapping_create_object_v1_response_all_of.h"
#include "ezsignbulksenddocumentmapping_create_object_v1_response_m_payload.h"



typedef struct ezsignbulksenddocumentmapping_create_object_v1_response_t {
    struct ezsignbulksenddocumentmapping_create_object_v1_response_m_payload_t *m_payload; //model
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} ezsignbulksenddocumentmapping_create_object_v1_response_t;

ezsignbulksenddocumentmapping_create_object_v1_response_t *ezsignbulksenddocumentmapping_create_object_v1_response_create(
    ezsignbulksenddocumentmapping_create_object_v1_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsignbulksenddocumentmapping_create_object_v1_response_free(ezsignbulksenddocumentmapping_create_object_v1_response_t *ezsignbulksenddocumentmapping_create_object_v1_response);

ezsignbulksenddocumentmapping_create_object_v1_response_t *ezsignbulksenddocumentmapping_create_object_v1_response_parseFromJSON(cJSON *ezsignbulksenddocumentmapping_create_object_v1_responseJSON);

cJSON *ezsignbulksenddocumentmapping_create_object_v1_response_convertToJSON(ezsignbulksenddocumentmapping_create_object_v1_response_t *ezsignbulksenddocumentmapping_create_object_v1_response);

#endif /* _ezsignbulksenddocumentmapping_create_object_v1_response_H_ */

