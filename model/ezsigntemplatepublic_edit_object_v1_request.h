/*
 * ezsigntemplatepublic_edit_object_v1_request.h
 *
 * Request for PUT /1/object/ezsigntemplatepublic/{pkiEzsigntemplatepublicID}
 */

#ifndef _ezsigntemplatepublic_edit_object_v1_request_H_
#define _ezsigntemplatepublic_edit_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepublic_edit_object_v1_request_t ezsigntemplatepublic_edit_object_v1_request_t;

#include "ezsigntemplatepublic_request_compound.h"



typedef struct ezsigntemplatepublic_edit_object_v1_request_t {
    struct ezsigntemplatepublic_request_compound_t *obj_ezsigntemplatepublic; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatepublic_edit_object_v1_request_t;

__attribute__((deprecated)) ezsigntemplatepublic_edit_object_v1_request_t *ezsigntemplatepublic_edit_object_v1_request_create(
    ezsigntemplatepublic_request_compound_t *obj_ezsigntemplatepublic
);

void ezsigntemplatepublic_edit_object_v1_request_free(ezsigntemplatepublic_edit_object_v1_request_t *ezsigntemplatepublic_edit_object_v1_request);

ezsigntemplatepublic_edit_object_v1_request_t *ezsigntemplatepublic_edit_object_v1_request_parseFromJSON(cJSON *ezsigntemplatepublic_edit_object_v1_requestJSON);

cJSON *ezsigntemplatepublic_edit_object_v1_request_convertToJSON(ezsigntemplatepublic_edit_object_v1_request_t *ezsigntemplatepublic_edit_object_v1_request);

#endif /* _ezsigntemplatepublic_edit_object_v1_request_H_ */

