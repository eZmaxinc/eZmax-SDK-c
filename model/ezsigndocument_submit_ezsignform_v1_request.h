/*
 * ezsigndocument_submit_ezsignform_v1_request.h
 *
 * Request for POST /1/object/ezsigndocument/{pkiEzsigndocumentID}/submitEzsignform
 */

#ifndef _ezsigndocument_submit_ezsignform_v1_request_H_
#define _ezsigndocument_submit_ezsignform_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndocument_submit_ezsignform_v1_request_t ezsigndocument_submit_ezsignform_v1_request_t;

#include "custom_ezsignformfieldgroup_request.h"



typedef struct ezsigndocument_submit_ezsignform_v1_request_t {
    int b_ezsignform_isdraft; //boolean
    list_t *a_obj_ezsignformfieldgroup; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigndocument_submit_ezsignform_v1_request_t;

__attribute__((deprecated)) ezsigndocument_submit_ezsignform_v1_request_t *ezsigndocument_submit_ezsignform_v1_request_create(
    int b_ezsignform_isdraft,
    list_t *a_obj_ezsignformfieldgroup
);

void ezsigndocument_submit_ezsignform_v1_request_free(ezsigndocument_submit_ezsignform_v1_request_t *ezsigndocument_submit_ezsignform_v1_request);

ezsigndocument_submit_ezsignform_v1_request_t *ezsigndocument_submit_ezsignform_v1_request_parseFromJSON(cJSON *ezsigndocument_submit_ezsignform_v1_requestJSON);

cJSON *ezsigndocument_submit_ezsignform_v1_request_convertToJSON(ezsigndocument_submit_ezsignform_v1_request_t *ezsigndocument_submit_ezsignform_v1_request);

#endif /* _ezsigndocument_submit_ezsignform_v1_request_H_ */

