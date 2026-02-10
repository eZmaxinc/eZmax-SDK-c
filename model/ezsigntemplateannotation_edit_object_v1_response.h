/*
 * ezsigntemplateannotation_edit_object_v1_response.h
 *
 * Response for PUT /1/object/ezsigntemplateannotation/{pkiEzsigntemplateannotationID}
 */

#ifndef _ezsigntemplateannotation_edit_object_v1_response_H_
#define _ezsigntemplateannotation_edit_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplateannotation_edit_object_v1_response_t ezsigntemplateannotation_edit_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct ezsigntemplateannotation_edit_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplateannotation_edit_object_v1_response_t;

__attribute__((deprecated)) ezsigntemplateannotation_edit_object_v1_response_t *ezsigntemplateannotation_edit_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsigntemplateannotation_edit_object_v1_response_free(ezsigntemplateannotation_edit_object_v1_response_t *ezsigntemplateannotation_edit_object_v1_response);

ezsigntemplateannotation_edit_object_v1_response_t *ezsigntemplateannotation_edit_object_v1_response_parseFromJSON(cJSON *ezsigntemplateannotation_edit_object_v1_responseJSON);

cJSON *ezsigntemplateannotation_edit_object_v1_response_convertToJSON(ezsigntemplateannotation_edit_object_v1_response_t *ezsigntemplateannotation_edit_object_v1_response);

#endif /* _ezsigntemplateannotation_edit_object_v1_response_H_ */

