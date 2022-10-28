/*
 * ezsigntemplatedocument_get_object_v2_response.h
 *
 * Response for GET /2/object/ezsigntemplatedocument/{pkiEzsigntemplatedocumentID}
 */

#ifndef _ezsigntemplatedocument_get_object_v2_response_H_
#define _ezsigntemplatedocument_get_object_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatedocument_get_object_v2_response_t ezsigntemplatedocument_get_object_v2_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsigntemplatedocument_get_object_v2_response_all_of.h"
#include "ezsigntemplatedocument_get_object_v2_response_m_payload.h"



typedef struct ezsigntemplatedocument_get_object_v2_response_t {
    struct ezsigntemplatedocument_get_object_v2_response_m_payload_t *m_payload; //model
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} ezsigntemplatedocument_get_object_v2_response_t;

ezsigntemplatedocument_get_object_v2_response_t *ezsigntemplatedocument_get_object_v2_response_create(
    ezsigntemplatedocument_get_object_v2_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsigntemplatedocument_get_object_v2_response_free(ezsigntemplatedocument_get_object_v2_response_t *ezsigntemplatedocument_get_object_v2_response);

ezsigntemplatedocument_get_object_v2_response_t *ezsigntemplatedocument_get_object_v2_response_parseFromJSON(cJSON *ezsigntemplatedocument_get_object_v2_responseJSON);

cJSON *ezsigntemplatedocument_get_object_v2_response_convertToJSON(ezsigntemplatedocument_get_object_v2_response_t *ezsigntemplatedocument_get_object_v2_response);

#endif /* _ezsigntemplatedocument_get_object_v2_response_H_ */

