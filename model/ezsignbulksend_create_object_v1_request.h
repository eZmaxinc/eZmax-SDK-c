/*
 * ezsignbulksend_create_object_v1_request.h
 *
 * Request for POST /1/object/ezsignbulksend
 */

#ifndef _ezsignbulksend_create_object_v1_request_H_
#define _ezsignbulksend_create_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksend_create_object_v1_request_t ezsignbulksend_create_object_v1_request_t;

#include "ezsignbulksend_request_compound.h"



typedef struct ezsignbulksend_create_object_v1_request_t {
    list_t *a_obj_ezsignbulksend; //nonprimitive container

} ezsignbulksend_create_object_v1_request_t;

ezsignbulksend_create_object_v1_request_t *ezsignbulksend_create_object_v1_request_create(
    list_t *a_obj_ezsignbulksend
);

void ezsignbulksend_create_object_v1_request_free(ezsignbulksend_create_object_v1_request_t *ezsignbulksend_create_object_v1_request);

ezsignbulksend_create_object_v1_request_t *ezsignbulksend_create_object_v1_request_parseFromJSON(cJSON *ezsignbulksend_create_object_v1_requestJSON);

cJSON *ezsignbulksend_create_object_v1_request_convertToJSON(ezsignbulksend_create_object_v1_request_t *ezsignbulksend_create_object_v1_request);

#endif /* _ezsignbulksend_create_object_v1_request_H_ */

