/*
 * ezsigntemplate_edit_object_v2_request.h
 *
 * Request for PUT /2/object/ezsigntemplate/{pkiEzsigntemplateID}
 */

#ifndef _ezsigntemplate_edit_object_v2_request_H_
#define _ezsigntemplate_edit_object_v2_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplate_edit_object_v2_request_t ezsigntemplate_edit_object_v2_request_t;

#include "ezsigntemplate_request_compound_v2.h"



typedef struct ezsigntemplate_edit_object_v2_request_t {
    struct ezsigntemplate_request_compound_v2_t *obj_ezsigntemplate; //model

} ezsigntemplate_edit_object_v2_request_t;

ezsigntemplate_edit_object_v2_request_t *ezsigntemplate_edit_object_v2_request_create(
    ezsigntemplate_request_compound_v2_t *obj_ezsigntemplate
);

void ezsigntemplate_edit_object_v2_request_free(ezsigntemplate_edit_object_v2_request_t *ezsigntemplate_edit_object_v2_request);

ezsigntemplate_edit_object_v2_request_t *ezsigntemplate_edit_object_v2_request_parseFromJSON(cJSON *ezsigntemplate_edit_object_v2_requestJSON);

cJSON *ezsigntemplate_edit_object_v2_request_convertToJSON(ezsigntemplate_edit_object_v2_request_t *ezsigntemplate_edit_object_v2_request);

#endif /* _ezsigntemplate_edit_object_v2_request_H_ */

