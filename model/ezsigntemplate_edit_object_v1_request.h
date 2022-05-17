/*
 * ezsigntemplate_edit_object_v1_request.h
 *
 * Request for PUT /1/object/ezsigntemplate/{pkiEzsigntemplateID}
 */

#ifndef _ezsigntemplate_edit_object_v1_request_H_
#define _ezsigntemplate_edit_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplate_edit_object_v1_request_t ezsigntemplate_edit_object_v1_request_t;

#include "ezsigntemplate_request_compound.h"



typedef struct ezsigntemplate_edit_object_v1_request_t {
    struct ezsigntemplate_request_compound_t *obj_ezsigntemplate; //model

} ezsigntemplate_edit_object_v1_request_t;

ezsigntemplate_edit_object_v1_request_t *ezsigntemplate_edit_object_v1_request_create(
    ezsigntemplate_request_compound_t *obj_ezsigntemplate
);

void ezsigntemplate_edit_object_v1_request_free(ezsigntemplate_edit_object_v1_request_t *ezsigntemplate_edit_object_v1_request);

ezsigntemplate_edit_object_v1_request_t *ezsigntemplate_edit_object_v1_request_parseFromJSON(cJSON *ezsigntemplate_edit_object_v1_requestJSON);

cJSON *ezsigntemplate_edit_object_v1_request_convertToJSON(ezsigntemplate_edit_object_v1_request_t *ezsigntemplate_edit_object_v1_request);

#endif /* _ezsigntemplate_edit_object_v1_request_H_ */

