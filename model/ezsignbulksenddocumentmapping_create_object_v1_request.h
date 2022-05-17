/*
 * ezsignbulksenddocumentmapping_create_object_v1_request.h
 *
 * Request for POST /1/object/ezsignbulksenddocumentmapping
 */

#ifndef _ezsignbulksenddocumentmapping_create_object_v1_request_H_
#define _ezsignbulksenddocumentmapping_create_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksenddocumentmapping_create_object_v1_request_t ezsignbulksenddocumentmapping_create_object_v1_request_t;

#include "ezsignbulksenddocumentmapping_request_compound.h"



typedef struct ezsignbulksenddocumentmapping_create_object_v1_request_t {
    list_t *a_obj_ezsignbulksenddocumentmapping; //nonprimitive container

} ezsignbulksenddocumentmapping_create_object_v1_request_t;

ezsignbulksenddocumentmapping_create_object_v1_request_t *ezsignbulksenddocumentmapping_create_object_v1_request_create(
    list_t *a_obj_ezsignbulksenddocumentmapping
);

void ezsignbulksenddocumentmapping_create_object_v1_request_free(ezsignbulksenddocumentmapping_create_object_v1_request_t *ezsignbulksenddocumentmapping_create_object_v1_request);

ezsignbulksenddocumentmapping_create_object_v1_request_t *ezsignbulksenddocumentmapping_create_object_v1_request_parseFromJSON(cJSON *ezsignbulksenddocumentmapping_create_object_v1_requestJSON);

cJSON *ezsignbulksenddocumentmapping_create_object_v1_request_convertToJSON(ezsignbulksenddocumentmapping_create_object_v1_request_t *ezsignbulksenddocumentmapping_create_object_v1_request);

#endif /* _ezsignbulksenddocumentmapping_create_object_v1_request_H_ */

