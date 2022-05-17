/*
 * ezsign_suggest_templates_v1_response.h
 *
 * Response for GET /1/module/ezsign/suggestTemplates
 */

#ifndef _ezsign_suggest_templates_v1_response_H_
#define _ezsign_suggest_templates_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsign_suggest_templates_v1_response_t ezsign_suggest_templates_v1_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsign_suggest_templates_v1_response_all_of.h"
#include "ezsign_suggest_templates_v1_response_m_payload.h"



typedef struct ezsign_suggest_templates_v1_response_t {
    struct ezsign_suggest_templates_v1_response_m_payload_t *m_payload; //model
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} ezsign_suggest_templates_v1_response_t;

ezsign_suggest_templates_v1_response_t *ezsign_suggest_templates_v1_response_create(
    ezsign_suggest_templates_v1_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsign_suggest_templates_v1_response_free(ezsign_suggest_templates_v1_response_t *ezsign_suggest_templates_v1_response);

ezsign_suggest_templates_v1_response_t *ezsign_suggest_templates_v1_response_parseFromJSON(cJSON *ezsign_suggest_templates_v1_responseJSON);

cJSON *ezsign_suggest_templates_v1_response_convertToJSON(ezsign_suggest_templates_v1_response_t *ezsign_suggest_templates_v1_response);

#endif /* _ezsign_suggest_templates_v1_response_H_ */

