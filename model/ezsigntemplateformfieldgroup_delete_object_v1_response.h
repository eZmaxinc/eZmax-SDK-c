/*
 * ezsigntemplateformfieldgroup_delete_object_v1_response.h
 *
 * Response for DELETE /1/object/ezsigntemplateformfieldgroup/{pkiEzsigntemplateformfieldgroupID}
 */

#ifndef _ezsigntemplateformfieldgroup_delete_object_v1_response_H_
#define _ezsigntemplateformfieldgroup_delete_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplateformfieldgroup_delete_object_v1_response_t ezsigntemplateformfieldgroup_delete_object_v1_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct ezsigntemplateformfieldgroup_delete_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} ezsigntemplateformfieldgroup_delete_object_v1_response_t;

ezsigntemplateformfieldgroup_delete_object_v1_response_t *ezsigntemplateformfieldgroup_delete_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsigntemplateformfieldgroup_delete_object_v1_response_free(ezsigntemplateformfieldgroup_delete_object_v1_response_t *ezsigntemplateformfieldgroup_delete_object_v1_response);

ezsigntemplateformfieldgroup_delete_object_v1_response_t *ezsigntemplateformfieldgroup_delete_object_v1_response_parseFromJSON(cJSON *ezsigntemplateformfieldgroup_delete_object_v1_responseJSON);

cJSON *ezsigntemplateformfieldgroup_delete_object_v1_response_convertToJSON(ezsigntemplateformfieldgroup_delete_object_v1_response_t *ezsigntemplateformfieldgroup_delete_object_v1_response);

#endif /* _ezsigntemplateformfieldgroup_delete_object_v1_response_H_ */

