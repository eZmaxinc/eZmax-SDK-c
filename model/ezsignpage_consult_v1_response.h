/*
 * ezsignpage_consult_v1_response.h
 *
 * Response for POST /1/object/ezsignpage/{pkiEzsignpageID}/consult
 */

#ifndef _ezsignpage_consult_v1_response_H_
#define _ezsignpage_consult_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignpage_consult_v1_response_t ezsignpage_consult_v1_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct ezsignpage_consult_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} ezsignpage_consult_v1_response_t;

ezsignpage_consult_v1_response_t *ezsignpage_consult_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsignpage_consult_v1_response_free(ezsignpage_consult_v1_response_t *ezsignpage_consult_v1_response);

ezsignpage_consult_v1_response_t *ezsignpage_consult_v1_response_parseFromJSON(cJSON *ezsignpage_consult_v1_responseJSON);

cJSON *ezsignpage_consult_v1_response_convertToJSON(ezsignpage_consult_v1_response_t *ezsignpage_consult_v1_response);

#endif /* _ezsignpage_consult_v1_response_H_ */

