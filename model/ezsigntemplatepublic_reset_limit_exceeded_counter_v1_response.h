/*
 * ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response.h
 *
 * Response for POST /1/object/ezsigntemplatepublic/{pkiEzsigntemplatepublicID}/resetLimitExceededCounter
 */

#ifndef _ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_H_
#define _ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_t ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload.h"



typedef struct ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload_t *m_payload; //model

} ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_t;

ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_t *ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload_t *m_payload
);

void ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_free(ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_t *ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response);

ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_t *ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_parseFromJSON(cJSON *ezsigntemplatepublic_reset_limit_exceeded_counter_v1_responseJSON);

cJSON *ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_convertToJSON(ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_t *ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response);

#endif /* _ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_H_ */

