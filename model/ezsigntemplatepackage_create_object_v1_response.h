/*
 * ezsigntemplatepackage_create_object_v1_response.h
 *
 * Response for POST /1/object/ezsigntemplatepackage
 */

#ifndef _ezsigntemplatepackage_create_object_v1_response_H_
#define _ezsigntemplatepackage_create_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackage_create_object_v1_response_t ezsigntemplatepackage_create_object_v1_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsigntemplatepackage_create_object_v1_response_m_payload.h"



typedef struct ezsigntemplatepackage_create_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezsigntemplatepackage_create_object_v1_response_m_payload_t *m_payload; //model

} ezsigntemplatepackage_create_object_v1_response_t;

ezsigntemplatepackage_create_object_v1_response_t *ezsigntemplatepackage_create_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsigntemplatepackage_create_object_v1_response_m_payload_t *m_payload
);

void ezsigntemplatepackage_create_object_v1_response_free(ezsigntemplatepackage_create_object_v1_response_t *ezsigntemplatepackage_create_object_v1_response);

ezsigntemplatepackage_create_object_v1_response_t *ezsigntemplatepackage_create_object_v1_response_parseFromJSON(cJSON *ezsigntemplatepackage_create_object_v1_responseJSON);

cJSON *ezsigntemplatepackage_create_object_v1_response_convertToJSON(ezsigntemplatepackage_create_object_v1_response_t *ezsigntemplatepackage_create_object_v1_response);

#endif /* _ezsigntemplatepackage_create_object_v1_response_H_ */

