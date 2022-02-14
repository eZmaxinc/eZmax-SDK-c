/*
 * ezsignsignature_edit_object_v1_request.h
 *
 * Request for the /1/object/ezsignsignature/editObject API Request
 */

#ifndef _ezsignsignature_edit_object_v1_request_H_
#define _ezsignsignature_edit_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignature_edit_object_v1_request_t ezsignsignature_edit_object_v1_request_t;

#include "ezsignsignature_request_compound.h"



typedef struct ezsignsignature_edit_object_v1_request_t {
    struct ezsignsignature_request_compound_t *obj_ezsignsignature; //model

} ezsignsignature_edit_object_v1_request_t;

ezsignsignature_edit_object_v1_request_t *ezsignsignature_edit_object_v1_request_create(
    ezsignsignature_request_compound_t *obj_ezsignsignature
);

void ezsignsignature_edit_object_v1_request_free(ezsignsignature_edit_object_v1_request_t *ezsignsignature_edit_object_v1_request);

ezsignsignature_edit_object_v1_request_t *ezsignsignature_edit_object_v1_request_parseFromJSON(cJSON *ezsignsignature_edit_object_v1_requestJSON);

cJSON *ezsignsignature_edit_object_v1_request_convertToJSON(ezsignsignature_edit_object_v1_request_t *ezsignsignature_edit_object_v1_request);

#endif /* _ezsignsignature_edit_object_v1_request_H_ */

