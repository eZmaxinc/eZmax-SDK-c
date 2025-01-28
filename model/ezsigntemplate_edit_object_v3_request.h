/*
 * ezsigntemplate_edit_object_v3_request.h
 *
 * Request for PUT /3/object/ezsigntemplate/{pkiEzsigntemplateID}
 */

#ifndef _ezsigntemplate_edit_object_v3_request_H_
#define _ezsigntemplate_edit_object_v3_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplate_edit_object_v3_request_t ezsigntemplate_edit_object_v3_request_t;

#include "ezsigntemplate_request_compound_v3.h"



typedef struct ezsigntemplate_edit_object_v3_request_t {
    struct ezsigntemplate_request_compound_v3_t *obj_ezsigntemplate; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplate_edit_object_v3_request_t;

__attribute__((deprecated)) ezsigntemplate_edit_object_v3_request_t *ezsigntemplate_edit_object_v3_request_create(
    ezsigntemplate_request_compound_v3_t *obj_ezsigntemplate
);

void ezsigntemplate_edit_object_v3_request_free(ezsigntemplate_edit_object_v3_request_t *ezsigntemplate_edit_object_v3_request);

ezsigntemplate_edit_object_v3_request_t *ezsigntemplate_edit_object_v3_request_parseFromJSON(cJSON *ezsigntemplate_edit_object_v3_requestJSON);

cJSON *ezsigntemplate_edit_object_v3_request_convertToJSON(ezsigntemplate_edit_object_v3_request_t *ezsigntemplate_edit_object_v3_request);

#endif /* _ezsigntemplate_edit_object_v3_request_H_ */

