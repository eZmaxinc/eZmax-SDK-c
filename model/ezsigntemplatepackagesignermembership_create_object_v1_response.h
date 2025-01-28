/*
 * ezsigntemplatepackagesignermembership_create_object_v1_response.h
 *
 * Response for POST /1/object/ezsigntemplatepackagesignermembership
 */

#ifndef _ezsigntemplatepackagesignermembership_create_object_v1_response_H_
#define _ezsigntemplatepackagesignermembership_create_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackagesignermembership_create_object_v1_response_t ezsigntemplatepackagesignermembership_create_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsigntemplatepackagesignermembership_create_object_v1_response_m_payload.h"



typedef struct ezsigntemplatepackagesignermembership_create_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezsigntemplatepackagesignermembership_create_object_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatepackagesignermembership_create_object_v1_response_t;

__attribute__((deprecated)) ezsigntemplatepackagesignermembership_create_object_v1_response_t *ezsigntemplatepackagesignermembership_create_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsigntemplatepackagesignermembership_create_object_v1_response_m_payload_t *m_payload
);

void ezsigntemplatepackagesignermembership_create_object_v1_response_free(ezsigntemplatepackagesignermembership_create_object_v1_response_t *ezsigntemplatepackagesignermembership_create_object_v1_response);

ezsigntemplatepackagesignermembership_create_object_v1_response_t *ezsigntemplatepackagesignermembership_create_object_v1_response_parseFromJSON(cJSON *ezsigntemplatepackagesignermembership_create_object_v1_responseJSON);

cJSON *ezsigntemplatepackagesignermembership_create_object_v1_response_convertToJSON(ezsigntemplatepackagesignermembership_create_object_v1_response_t *ezsigntemplatepackagesignermembership_create_object_v1_response);

#endif /* _ezsigntemplatepackagesignermembership_create_object_v1_response_H_ */

