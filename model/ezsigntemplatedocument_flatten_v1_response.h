/*
 * ezsigntemplatedocument_flatten_v1_response.h
 *
 * Response for POST /1/object/ezsigntemplatedocument/{pkiEzsigntemplatedocument}/flatten
 */

#ifndef _ezsigntemplatedocument_flatten_v1_response_H_
#define _ezsigntemplatedocument_flatten_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatedocument_flatten_v1_response_t ezsigntemplatedocument_flatten_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct ezsigntemplatedocument_flatten_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} ezsigntemplatedocument_flatten_v1_response_t;

ezsigntemplatedocument_flatten_v1_response_t *ezsigntemplatedocument_flatten_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsigntemplatedocument_flatten_v1_response_free(ezsigntemplatedocument_flatten_v1_response_t *ezsigntemplatedocument_flatten_v1_response);

ezsigntemplatedocument_flatten_v1_response_t *ezsigntemplatedocument_flatten_v1_response_parseFromJSON(cJSON *ezsigntemplatedocument_flatten_v1_responseJSON);

cJSON *ezsigntemplatedocument_flatten_v1_response_convertToJSON(ezsigntemplatedocument_flatten_v1_response_t *ezsigntemplatedocument_flatten_v1_response);

#endif /* _ezsigntemplatedocument_flatten_v1_response_H_ */

