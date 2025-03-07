/*
 * ezsigndocument_prefill_ezsignform_v1_request.h
 *
 * Request for POST /1/object/ezsigndocument/{pkiEzsigndocumentID}/prefillEzsignform
 */

#ifndef _ezsigndocument_prefill_ezsignform_v1_request_H_
#define _ezsigndocument_prefill_ezsignform_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndocument_prefill_ezsignform_v1_request_t ezsigndocument_prefill_ezsignform_v1_request_t;

#include "custom_prefill_ezsignform_value_request.h"



typedef struct ezsigndocument_prefill_ezsignform_v1_request_t {
    list_t *a_obj_prefillezsignformvalue; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigndocument_prefill_ezsignform_v1_request_t;

__attribute__((deprecated)) ezsigndocument_prefill_ezsignform_v1_request_t *ezsigndocument_prefill_ezsignform_v1_request_create(
    list_t *a_obj_prefillezsignformvalue
);

void ezsigndocument_prefill_ezsignform_v1_request_free(ezsigndocument_prefill_ezsignform_v1_request_t *ezsigndocument_prefill_ezsignform_v1_request);

ezsigndocument_prefill_ezsignform_v1_request_t *ezsigndocument_prefill_ezsignform_v1_request_parseFromJSON(cJSON *ezsigndocument_prefill_ezsignform_v1_requestJSON);

cJSON *ezsigndocument_prefill_ezsignform_v1_request_convertToJSON(ezsigndocument_prefill_ezsignform_v1_request_t *ezsigndocument_prefill_ezsignform_v1_request);

#endif /* _ezsigndocument_prefill_ezsignform_v1_request_H_ */

