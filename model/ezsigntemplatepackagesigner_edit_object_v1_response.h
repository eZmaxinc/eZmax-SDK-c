/*
 * ezsigntemplatepackagesigner_edit_object_v1_response.h
 *
 * Response for PUT /1/object/ezsigntemplatepackagesigner/{pkiEzsigntemplatepackagesignerID}
 */

#ifndef _ezsigntemplatepackagesigner_edit_object_v1_response_H_
#define _ezsigntemplatepackagesigner_edit_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackagesigner_edit_object_v1_response_t ezsigntemplatepackagesigner_edit_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct ezsigntemplatepackagesigner_edit_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} ezsigntemplatepackagesigner_edit_object_v1_response_t;

ezsigntemplatepackagesigner_edit_object_v1_response_t *ezsigntemplatepackagesigner_edit_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsigntemplatepackagesigner_edit_object_v1_response_free(ezsigntemplatepackagesigner_edit_object_v1_response_t *ezsigntemplatepackagesigner_edit_object_v1_response);

ezsigntemplatepackagesigner_edit_object_v1_response_t *ezsigntemplatepackagesigner_edit_object_v1_response_parseFromJSON(cJSON *ezsigntemplatepackagesigner_edit_object_v1_responseJSON);

cJSON *ezsigntemplatepackagesigner_edit_object_v1_response_convertToJSON(ezsigntemplatepackagesigner_edit_object_v1_response_t *ezsigntemplatepackagesigner_edit_object_v1_response);

#endif /* _ezsigntemplatepackagesigner_edit_object_v1_response_H_ */

