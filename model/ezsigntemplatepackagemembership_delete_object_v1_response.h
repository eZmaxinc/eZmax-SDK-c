/*
 * ezsigntemplatepackagemembership_delete_object_v1_response.h
 *
 * Response for DELETE /1/object/ezsigntemplatepackagemembership/{pkiEzsigntemplatepackagemembershipID}
 */

#ifndef _ezsigntemplatepackagemembership_delete_object_v1_response_H_
#define _ezsigntemplatepackagemembership_delete_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackagemembership_delete_object_v1_response_t ezsigntemplatepackagemembership_delete_object_v1_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct ezsigntemplatepackagemembership_delete_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} ezsigntemplatepackagemembership_delete_object_v1_response_t;

ezsigntemplatepackagemembership_delete_object_v1_response_t *ezsigntemplatepackagemembership_delete_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsigntemplatepackagemembership_delete_object_v1_response_free(ezsigntemplatepackagemembership_delete_object_v1_response_t *ezsigntemplatepackagemembership_delete_object_v1_response);

ezsigntemplatepackagemembership_delete_object_v1_response_t *ezsigntemplatepackagemembership_delete_object_v1_response_parseFromJSON(cJSON *ezsigntemplatepackagemembership_delete_object_v1_responseJSON);

cJSON *ezsigntemplatepackagemembership_delete_object_v1_response_convertToJSON(ezsigntemplatepackagemembership_delete_object_v1_response_t *ezsigntemplatepackagemembership_delete_object_v1_response);

#endif /* _ezsigntemplatepackagemembership_delete_object_v1_response_H_ */

