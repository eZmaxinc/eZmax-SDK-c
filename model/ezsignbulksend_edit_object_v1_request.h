/*
 * ezsignbulksend_edit_object_v1_request.h
 *
 * Request for PUT /1/object/ezsignbulksend/{pkiEzsignbulksendID}
 */

#ifndef _ezsignbulksend_edit_object_v1_request_H_
#define _ezsignbulksend_edit_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksend_edit_object_v1_request_t ezsignbulksend_edit_object_v1_request_t;

#include "ezsignbulksend_request_compound.h"



typedef struct ezsignbulksend_edit_object_v1_request_t {
    struct ezsignbulksend_request_compound_t *obj_ezsignbulksend; //model

} ezsignbulksend_edit_object_v1_request_t;

ezsignbulksend_edit_object_v1_request_t *ezsignbulksend_edit_object_v1_request_create(
    ezsignbulksend_request_compound_t *obj_ezsignbulksend
);

void ezsignbulksend_edit_object_v1_request_free(ezsignbulksend_edit_object_v1_request_t *ezsignbulksend_edit_object_v1_request);

ezsignbulksend_edit_object_v1_request_t *ezsignbulksend_edit_object_v1_request_parseFromJSON(cJSON *ezsignbulksend_edit_object_v1_requestJSON);

cJSON *ezsignbulksend_edit_object_v1_request_convertToJSON(ezsignbulksend_edit_object_v1_request_t *ezsignbulksend_edit_object_v1_request);

#endif /* _ezsignbulksend_edit_object_v1_request_H_ */

