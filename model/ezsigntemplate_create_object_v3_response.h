/*
 * ezsigntemplate_create_object_v3_response.h
 *
 * Response for POST /3/object/ezsigntemplate
 */

#ifndef _ezsigntemplate_create_object_v3_response_H_
#define _ezsigntemplate_create_object_v3_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplate_create_object_v3_response_t ezsigntemplate_create_object_v3_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsigntemplate_create_object_v3_response_m_payload.h"



typedef struct ezsigntemplate_create_object_v3_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezsigntemplate_create_object_v3_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplate_create_object_v3_response_t;

__attribute__((deprecated)) ezsigntemplate_create_object_v3_response_t *ezsigntemplate_create_object_v3_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsigntemplate_create_object_v3_response_m_payload_t *m_payload
);

void ezsigntemplate_create_object_v3_response_free(ezsigntemplate_create_object_v3_response_t *ezsigntemplate_create_object_v3_response);

ezsigntemplate_create_object_v3_response_t *ezsigntemplate_create_object_v3_response_parseFromJSON(cJSON *ezsigntemplate_create_object_v3_responseJSON);

cJSON *ezsigntemplate_create_object_v3_response_convertToJSON(ezsigntemplate_create_object_v3_response_t *ezsigntemplate_create_object_v3_response);

#endif /* _ezsigntemplate_create_object_v3_response_H_ */

