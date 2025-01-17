/*
 * ezsigntemplatepublic_edit_object_v1_response.h
 *
 * Response for PUT /1/object/ezsigntemplatepublic/{pkiEzsigntemplatepublicID}
 */

#ifndef _ezsigntemplatepublic_edit_object_v1_response_H_
#define _ezsigntemplatepublic_edit_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepublic_edit_object_v1_response_t ezsigntemplatepublic_edit_object_v1_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct ezsigntemplatepublic_edit_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} ezsigntemplatepublic_edit_object_v1_response_t;

ezsigntemplatepublic_edit_object_v1_response_t *ezsigntemplatepublic_edit_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsigntemplatepublic_edit_object_v1_response_free(ezsigntemplatepublic_edit_object_v1_response_t *ezsigntemplatepublic_edit_object_v1_response);

ezsigntemplatepublic_edit_object_v1_response_t *ezsigntemplatepublic_edit_object_v1_response_parseFromJSON(cJSON *ezsigntemplatepublic_edit_object_v1_responseJSON);

cJSON *ezsigntemplatepublic_edit_object_v1_response_convertToJSON(ezsigntemplatepublic_edit_object_v1_response_t *ezsigntemplatepublic_edit_object_v1_response);

#endif /* _ezsigntemplatepublic_edit_object_v1_response_H_ */

