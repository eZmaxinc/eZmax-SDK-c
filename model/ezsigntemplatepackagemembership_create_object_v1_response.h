/*
 * ezsigntemplatepackagemembership_create_object_v1_response.h
 *
 * Response for POST /1/object/ezsigntemplatepackagemembership
 */

#ifndef _ezsigntemplatepackagemembership_create_object_v1_response_H_
#define _ezsigntemplatepackagemembership_create_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackagemembership_create_object_v1_response_t ezsigntemplatepackagemembership_create_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsigntemplatepackagemembership_create_object_v1_response_m_payload.h"



typedef struct ezsigntemplatepackagemembership_create_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezsigntemplatepackagemembership_create_object_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatepackagemembership_create_object_v1_response_t;

__attribute__((deprecated)) ezsigntemplatepackagemembership_create_object_v1_response_t *ezsigntemplatepackagemembership_create_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsigntemplatepackagemembership_create_object_v1_response_m_payload_t *m_payload
);

void ezsigntemplatepackagemembership_create_object_v1_response_free(ezsigntemplatepackagemembership_create_object_v1_response_t *ezsigntemplatepackagemembership_create_object_v1_response);

ezsigntemplatepackagemembership_create_object_v1_response_t *ezsigntemplatepackagemembership_create_object_v1_response_parseFromJSON(cJSON *ezsigntemplatepackagemembership_create_object_v1_responseJSON);

cJSON *ezsigntemplatepackagemembership_create_object_v1_response_convertToJSON(ezsigntemplatepackagemembership_create_object_v1_response_t *ezsigntemplatepackagemembership_create_object_v1_response);

#endif /* _ezsigntemplatepackagemembership_create_object_v1_response_H_ */

