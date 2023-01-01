/*
 * ezsigntemplate_get_object_v2_response.h
 *
 * Response for GET /2/object/ezsigntemplate/{pkiEzsigntemplateID}
 */

#ifndef _ezsigntemplate_get_object_v2_response_H_
#define _ezsigntemplate_get_object_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplate_get_object_v2_response_t ezsigntemplate_get_object_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsigntemplate_get_object_v2_response_m_payload.h"



typedef struct ezsigntemplate_get_object_v2_response_t {
    struct ezsigntemplate_get_object_v2_response_m_payload_t *m_payload; //model
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} ezsigntemplate_get_object_v2_response_t;

ezsigntemplate_get_object_v2_response_t *ezsigntemplate_get_object_v2_response_create(
    ezsigntemplate_get_object_v2_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsigntemplate_get_object_v2_response_free(ezsigntemplate_get_object_v2_response_t *ezsigntemplate_get_object_v2_response);

ezsigntemplate_get_object_v2_response_t *ezsigntemplate_get_object_v2_response_parseFromJSON(cJSON *ezsigntemplate_get_object_v2_responseJSON);

cJSON *ezsigntemplate_get_object_v2_response_convertToJSON(ezsigntemplate_get_object_v2_response_t *ezsigntemplate_get_object_v2_response);

#endif /* _ezsigntemplate_get_object_v2_response_H_ */

