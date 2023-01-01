/*
 * ezsigntemplatepackagemembership_get_object_v2_response.h
 *
 * Response for GET /2/object/ezsigntemplatepackagemembership/{pkiEzsigntemplatepackagemembershipID}
 */

#ifndef _ezsigntemplatepackagemembership_get_object_v2_response_H_
#define _ezsigntemplatepackagemembership_get_object_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackagemembership_get_object_v2_response_t ezsigntemplatepackagemembership_get_object_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsigntemplatepackagemembership_get_object_v2_response_m_payload.h"



typedef struct ezsigntemplatepackagemembership_get_object_v2_response_t {
    struct ezsigntemplatepackagemembership_get_object_v2_response_m_payload_t *m_payload; //model
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} ezsigntemplatepackagemembership_get_object_v2_response_t;

ezsigntemplatepackagemembership_get_object_v2_response_t *ezsigntemplatepackagemembership_get_object_v2_response_create(
    ezsigntemplatepackagemembership_get_object_v2_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsigntemplatepackagemembership_get_object_v2_response_free(ezsigntemplatepackagemembership_get_object_v2_response_t *ezsigntemplatepackagemembership_get_object_v2_response);

ezsigntemplatepackagemembership_get_object_v2_response_t *ezsigntemplatepackagemembership_get_object_v2_response_parseFromJSON(cJSON *ezsigntemplatepackagemembership_get_object_v2_responseJSON);

cJSON *ezsigntemplatepackagemembership_get_object_v2_response_convertToJSON(ezsigntemplatepackagemembership_get_object_v2_response_t *ezsigntemplatepackagemembership_get_object_v2_response);

#endif /* _ezsigntemplatepackagemembership_get_object_v2_response_H_ */

