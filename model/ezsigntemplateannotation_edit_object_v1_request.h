/*
 * ezsigntemplateannotation_edit_object_v1_request.h
 *
 * Request for PUT /1/object/ezsigntemplateannotation/{pkiEzsigntemplateannotationID}
 */

#ifndef _ezsigntemplateannotation_edit_object_v1_request_H_
#define _ezsigntemplateannotation_edit_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplateannotation_edit_object_v1_request_t ezsigntemplateannotation_edit_object_v1_request_t;

#include "ezsigntemplateannotation_request_compound.h"



typedef struct ezsigntemplateannotation_edit_object_v1_request_t {
    struct ezsigntemplateannotation_request_compound_t *obj_ezsigntemplateannotation; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplateannotation_edit_object_v1_request_t;

__attribute__((deprecated)) ezsigntemplateannotation_edit_object_v1_request_t *ezsigntemplateannotation_edit_object_v1_request_create(
    ezsigntemplateannotation_request_compound_t *obj_ezsigntemplateannotation
);

void ezsigntemplateannotation_edit_object_v1_request_free(ezsigntemplateannotation_edit_object_v1_request_t *ezsigntemplateannotation_edit_object_v1_request);

ezsigntemplateannotation_edit_object_v1_request_t *ezsigntemplateannotation_edit_object_v1_request_parseFromJSON(cJSON *ezsigntemplateannotation_edit_object_v1_requestJSON);

cJSON *ezsigntemplateannotation_edit_object_v1_request_convertToJSON(ezsigntemplateannotation_edit_object_v1_request_t *ezsigntemplateannotation_edit_object_v1_request);

#endif /* _ezsigntemplateannotation_edit_object_v1_request_H_ */

