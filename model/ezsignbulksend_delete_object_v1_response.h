/*
 * ezsignbulksend_delete_object_v1_response.h
 *
 * Response for DELETE /1/object/ezsignbulksend/{pkiEzsignbulksendID}
 */

#ifndef _ezsignbulksend_delete_object_v1_response_H_
#define _ezsignbulksend_delete_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksend_delete_object_v1_response_t ezsignbulksend_delete_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct ezsignbulksend_delete_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignbulksend_delete_object_v1_response_t;

__attribute__((deprecated)) ezsignbulksend_delete_object_v1_response_t *ezsignbulksend_delete_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsignbulksend_delete_object_v1_response_free(ezsignbulksend_delete_object_v1_response_t *ezsignbulksend_delete_object_v1_response);

ezsignbulksend_delete_object_v1_response_t *ezsignbulksend_delete_object_v1_response_parseFromJSON(cJSON *ezsignbulksend_delete_object_v1_responseJSON);

cJSON *ezsignbulksend_delete_object_v1_response_convertToJSON(ezsignbulksend_delete_object_v1_response_t *ezsignbulksend_delete_object_v1_response);

#endif /* _ezsignbulksend_delete_object_v1_response_H_ */

