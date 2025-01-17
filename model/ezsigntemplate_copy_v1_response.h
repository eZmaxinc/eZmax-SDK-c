/*
 * ezsigntemplate_copy_v1_response.h
 *
 * Response for POST /1/object/ezsigntemplate/{pkiEzsigntemplateID}/copy
 */

#ifndef _ezsigntemplate_copy_v1_response_H_
#define _ezsigntemplate_copy_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplate_copy_v1_response_t ezsigntemplate_copy_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsigntemplate_copy_v1_response_m_payload.h"



typedef struct ezsigntemplate_copy_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezsigntemplate_copy_v1_response_m_payload_t *m_payload; //model

} ezsigntemplate_copy_v1_response_t;

ezsigntemplate_copy_v1_response_t *ezsigntemplate_copy_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsigntemplate_copy_v1_response_m_payload_t *m_payload
);

void ezsigntemplate_copy_v1_response_free(ezsigntemplate_copy_v1_response_t *ezsigntemplate_copy_v1_response);

ezsigntemplate_copy_v1_response_t *ezsigntemplate_copy_v1_response_parseFromJSON(cJSON *ezsigntemplate_copy_v1_responseJSON);

cJSON *ezsigntemplate_copy_v1_response_convertToJSON(ezsigntemplate_copy_v1_response_t *ezsigntemplate_copy_v1_response);

#endif /* _ezsigntemplate_copy_v1_response_H_ */

