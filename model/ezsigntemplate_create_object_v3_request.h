/*
 * ezsigntemplate_create_object_v3_request.h
 *
 * Request for POST /3/object/ezsigntemplate
 */

#ifndef _ezsigntemplate_create_object_v3_request_H_
#define _ezsigntemplate_create_object_v3_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplate_create_object_v3_request_t ezsigntemplate_create_object_v3_request_t;

#include "ezsigntemplate_request_compound_v3.h"



typedef struct ezsigntemplate_create_object_v3_request_t {
    list_t *a_obj_ezsigntemplate; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplate_create_object_v3_request_t;

__attribute__((deprecated)) ezsigntemplate_create_object_v3_request_t *ezsigntemplate_create_object_v3_request_create(
    list_t *a_obj_ezsigntemplate
);

void ezsigntemplate_create_object_v3_request_free(ezsigntemplate_create_object_v3_request_t *ezsigntemplate_create_object_v3_request);

ezsigntemplate_create_object_v3_request_t *ezsigntemplate_create_object_v3_request_parseFromJSON(cJSON *ezsigntemplate_create_object_v3_requestJSON);

cJSON *ezsigntemplate_create_object_v3_request_convertToJSON(ezsigntemplate_create_object_v3_request_t *ezsigntemplate_create_object_v3_request);

#endif /* _ezsigntemplate_create_object_v3_request_H_ */

