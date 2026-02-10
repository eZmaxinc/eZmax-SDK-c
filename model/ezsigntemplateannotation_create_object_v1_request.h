/*
 * ezsigntemplateannotation_create_object_v1_request.h
 *
 * Request for POST /1/object/ezsigntemplateannotation
 */

#ifndef _ezsigntemplateannotation_create_object_v1_request_H_
#define _ezsigntemplateannotation_create_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplateannotation_create_object_v1_request_t ezsigntemplateannotation_create_object_v1_request_t;

#include "ezsigntemplateannotation_request_compound.h"



typedef struct ezsigntemplateannotation_create_object_v1_request_t {
    list_t *a_obj_ezsigntemplateannotation; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplateannotation_create_object_v1_request_t;

__attribute__((deprecated)) ezsigntemplateannotation_create_object_v1_request_t *ezsigntemplateannotation_create_object_v1_request_create(
    list_t *a_obj_ezsigntemplateannotation
);

void ezsigntemplateannotation_create_object_v1_request_free(ezsigntemplateannotation_create_object_v1_request_t *ezsigntemplateannotation_create_object_v1_request);

ezsigntemplateannotation_create_object_v1_request_t *ezsigntemplateannotation_create_object_v1_request_parseFromJSON(cJSON *ezsigntemplateannotation_create_object_v1_requestJSON);

cJSON *ezsigntemplateannotation_create_object_v1_request_convertToJSON(ezsigntemplateannotation_create_object_v1_request_t *ezsigntemplateannotation_create_object_v1_request);

#endif /* _ezsigntemplateannotation_create_object_v1_request_H_ */

