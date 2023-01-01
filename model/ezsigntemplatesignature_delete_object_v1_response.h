/*
 * ezsigntemplatesignature_delete_object_v1_response.h
 *
 * Response for DELETE /1/object/ezsigntemplatesignature/{pkiEzsigntemplatesignatureID}
 */

#ifndef _ezsigntemplatesignature_delete_object_v1_response_H_
#define _ezsigntemplatesignature_delete_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatesignature_delete_object_v1_response_t ezsigntemplatesignature_delete_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct ezsigntemplatesignature_delete_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} ezsigntemplatesignature_delete_object_v1_response_t;

ezsigntemplatesignature_delete_object_v1_response_t *ezsigntemplatesignature_delete_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsigntemplatesignature_delete_object_v1_response_free(ezsigntemplatesignature_delete_object_v1_response_t *ezsigntemplatesignature_delete_object_v1_response);

ezsigntemplatesignature_delete_object_v1_response_t *ezsigntemplatesignature_delete_object_v1_response_parseFromJSON(cJSON *ezsigntemplatesignature_delete_object_v1_responseJSON);

cJSON *ezsigntemplatesignature_delete_object_v1_response_convertToJSON(ezsigntemplatesignature_delete_object_v1_response_t *ezsigntemplatesignature_delete_object_v1_response);

#endif /* _ezsigntemplatesignature_delete_object_v1_response_H_ */

