/*
 * ezsigntemplateformfieldgroup_create_object_v1_response.h
 *
 * Response for POST /1/object/ezsigntemplateformfieldgroup
 */

#ifndef _ezsigntemplateformfieldgroup_create_object_v1_response_H_
#define _ezsigntemplateformfieldgroup_create_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplateformfieldgroup_create_object_v1_response_t ezsigntemplateformfieldgroup_create_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsigntemplateformfieldgroup_create_object_v1_response_m_payload.h"



typedef struct ezsigntemplateformfieldgroup_create_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezsigntemplateformfieldgroup_create_object_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplateformfieldgroup_create_object_v1_response_t;

__attribute__((deprecated)) ezsigntemplateformfieldgroup_create_object_v1_response_t *ezsigntemplateformfieldgroup_create_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsigntemplateformfieldgroup_create_object_v1_response_m_payload_t *m_payload
);

void ezsigntemplateformfieldgroup_create_object_v1_response_free(ezsigntemplateformfieldgroup_create_object_v1_response_t *ezsigntemplateformfieldgroup_create_object_v1_response);

ezsigntemplateformfieldgroup_create_object_v1_response_t *ezsigntemplateformfieldgroup_create_object_v1_response_parseFromJSON(cJSON *ezsigntemplateformfieldgroup_create_object_v1_responseJSON);

cJSON *ezsigntemplateformfieldgroup_create_object_v1_response_convertToJSON(ezsigntemplateformfieldgroup_create_object_v1_response_t *ezsigntemplateformfieldgroup_create_object_v1_response);

#endif /* _ezsigntemplateformfieldgroup_create_object_v1_response_H_ */

