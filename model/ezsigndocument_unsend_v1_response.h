/*
 * ezsigndocument_unsend_v1_response.h
 *
 * Response for POST /1/object/ezsigndocument/{pkiEzsigndocumentID}/unsend
 */

#ifndef _ezsigndocument_unsend_v1_response_H_
#define _ezsigndocument_unsend_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndocument_unsend_v1_response_t ezsigndocument_unsend_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct ezsigndocument_unsend_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigndocument_unsend_v1_response_t;

__attribute__((deprecated)) ezsigndocument_unsend_v1_response_t *ezsigndocument_unsend_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsigndocument_unsend_v1_response_free(ezsigndocument_unsend_v1_response_t *ezsigndocument_unsend_v1_response);

ezsigndocument_unsend_v1_response_t *ezsigndocument_unsend_v1_response_parseFromJSON(cJSON *ezsigndocument_unsend_v1_responseJSON);

cJSON *ezsigndocument_unsend_v1_response_convertToJSON(ezsigndocument_unsend_v1_response_t *ezsigndocument_unsend_v1_response);

#endif /* _ezsigndocument_unsend_v1_response_H_ */

