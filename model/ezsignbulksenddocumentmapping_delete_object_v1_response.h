/*
 * ezsignbulksenddocumentmapping_delete_object_v1_response.h
 *
 * Response for DELETE /1/object/ezsignbulksenddocumentmapping/{pkiEzsignbulksenddocumentmappingID}
 */

#ifndef _ezsignbulksenddocumentmapping_delete_object_v1_response_H_
#define _ezsignbulksenddocumentmapping_delete_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksenddocumentmapping_delete_object_v1_response_t ezsignbulksenddocumentmapping_delete_object_v1_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct ezsignbulksenddocumentmapping_delete_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} ezsignbulksenddocumentmapping_delete_object_v1_response_t;

ezsignbulksenddocumentmapping_delete_object_v1_response_t *ezsignbulksenddocumentmapping_delete_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsignbulksenddocumentmapping_delete_object_v1_response_free(ezsignbulksenddocumentmapping_delete_object_v1_response_t *ezsignbulksenddocumentmapping_delete_object_v1_response);

ezsignbulksenddocumentmapping_delete_object_v1_response_t *ezsignbulksenddocumentmapping_delete_object_v1_response_parseFromJSON(cJSON *ezsignbulksenddocumentmapping_delete_object_v1_responseJSON);

cJSON *ezsignbulksenddocumentmapping_delete_object_v1_response_convertToJSON(ezsignbulksenddocumentmapping_delete_object_v1_response_t *ezsignbulksenddocumentmapping_delete_object_v1_response);

#endif /* _ezsignbulksenddocumentmapping_delete_object_v1_response_H_ */

