/*
 * ezsigntemplatepublic_create_object_v1_request.h
 *
 * Request for POST /1/object/ezsigntemplatepublic
 */

#ifndef _ezsigntemplatepublic_create_object_v1_request_H_
#define _ezsigntemplatepublic_create_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepublic_create_object_v1_request_t ezsigntemplatepublic_create_object_v1_request_t;

#include "ezsigntemplatepublic_request_compound.h"



typedef struct ezsigntemplatepublic_create_object_v1_request_t {
    list_t *a_obj_ezsigntemplatepublic; //nonprimitive container

} ezsigntemplatepublic_create_object_v1_request_t;

ezsigntemplatepublic_create_object_v1_request_t *ezsigntemplatepublic_create_object_v1_request_create(
    list_t *a_obj_ezsigntemplatepublic
);

void ezsigntemplatepublic_create_object_v1_request_free(ezsigntemplatepublic_create_object_v1_request_t *ezsigntemplatepublic_create_object_v1_request);

ezsigntemplatepublic_create_object_v1_request_t *ezsigntemplatepublic_create_object_v1_request_parseFromJSON(cJSON *ezsigntemplatepublic_create_object_v1_requestJSON);

cJSON *ezsigntemplatepublic_create_object_v1_request_convertToJSON(ezsigntemplatepublic_create_object_v1_request_t *ezsigntemplatepublic_create_object_v1_request);

#endif /* _ezsigntemplatepublic_create_object_v1_request_H_ */

