/*
 * ezsigntemplatepackage_delete_object_v1_response.h
 *
 * Response for DELETE /1/object/ezsigntemplatepackage/{pkiEzsigntemplatepackageID}
 */

#ifndef _ezsigntemplatepackage_delete_object_v1_response_H_
#define _ezsigntemplatepackage_delete_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackage_delete_object_v1_response_t ezsigntemplatepackage_delete_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct ezsigntemplatepackage_delete_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} ezsigntemplatepackage_delete_object_v1_response_t;

ezsigntemplatepackage_delete_object_v1_response_t *ezsigntemplatepackage_delete_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsigntemplatepackage_delete_object_v1_response_free(ezsigntemplatepackage_delete_object_v1_response_t *ezsigntemplatepackage_delete_object_v1_response);

ezsigntemplatepackage_delete_object_v1_response_t *ezsigntemplatepackage_delete_object_v1_response_parseFromJSON(cJSON *ezsigntemplatepackage_delete_object_v1_responseJSON);

cJSON *ezsigntemplatepackage_delete_object_v1_response_convertToJSON(ezsigntemplatepackage_delete_object_v1_response_t *ezsigntemplatepackage_delete_object_v1_response);

#endif /* _ezsigntemplatepackage_delete_object_v1_response_H_ */

