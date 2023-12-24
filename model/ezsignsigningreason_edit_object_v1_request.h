/*
 * ezsignsigningreason_edit_object_v1_request.h
 *
 * Request for PUT /1/object/ezsignsigningreason/{pkiEzsignsigningreasonID}
 */

#ifndef _ezsignsigningreason_edit_object_v1_request_H_
#define _ezsignsigningreason_edit_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsigningreason_edit_object_v1_request_t ezsignsigningreason_edit_object_v1_request_t;

#include "ezsignsigningreason_request_compound.h"



typedef struct ezsignsigningreason_edit_object_v1_request_t {
    struct ezsignsigningreason_request_compound_t *obj_ezsignsigningreason; //model

} ezsignsigningreason_edit_object_v1_request_t;

ezsignsigningreason_edit_object_v1_request_t *ezsignsigningreason_edit_object_v1_request_create(
    ezsignsigningreason_request_compound_t *obj_ezsignsigningreason
);

void ezsignsigningreason_edit_object_v1_request_free(ezsignsigningreason_edit_object_v1_request_t *ezsignsigningreason_edit_object_v1_request);

ezsignsigningreason_edit_object_v1_request_t *ezsignsigningreason_edit_object_v1_request_parseFromJSON(cJSON *ezsignsigningreason_edit_object_v1_requestJSON);

cJSON *ezsignsigningreason_edit_object_v1_request_convertToJSON(ezsignsigningreason_edit_object_v1_request_t *ezsignsigningreason_edit_object_v1_request);

#endif /* _ezsignsigningreason_edit_object_v1_request_H_ */

