/*
 * ezsigntemplate_create_object_v2_request.h
 *
 * Request for POST /2/object/ezsigntemplate
 */

#ifndef _ezsigntemplate_create_object_v2_request_H_
#define _ezsigntemplate_create_object_v2_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplate_create_object_v2_request_t ezsigntemplate_create_object_v2_request_t;

#include "ezsigntemplate_request_compound_v2.h"



typedef struct ezsigntemplate_create_object_v2_request_t {
    list_t *a_obj_ezsigntemplate; //nonprimitive container

} ezsigntemplate_create_object_v2_request_t;

ezsigntemplate_create_object_v2_request_t *ezsigntemplate_create_object_v2_request_create(
    list_t *a_obj_ezsigntemplate
);

void ezsigntemplate_create_object_v2_request_free(ezsigntemplate_create_object_v2_request_t *ezsigntemplate_create_object_v2_request);

ezsigntemplate_create_object_v2_request_t *ezsigntemplate_create_object_v2_request_parseFromJSON(cJSON *ezsigntemplate_create_object_v2_requestJSON);

cJSON *ezsigntemplate_create_object_v2_request_convertToJSON(ezsigntemplate_create_object_v2_request_t *ezsigntemplate_create_object_v2_request);

#endif /* _ezsigntemplate_create_object_v2_request_H_ */
