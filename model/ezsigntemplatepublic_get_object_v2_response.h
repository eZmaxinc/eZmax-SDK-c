/*
 * ezsigntemplatepublic_get_object_v2_response.h
 *
 * Response for GET /2/object/ezsigntemplatepublic/{pkiEzsigntemplatepublicID}
 */

#ifndef _ezsigntemplatepublic_get_object_v2_response_H_
#define _ezsigntemplatepublic_get_object_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepublic_get_object_v2_response_t ezsigntemplatepublic_get_object_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsigntemplatepublic_get_object_v2_response_m_payload.h"



typedef struct ezsigntemplatepublic_get_object_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezsigntemplatepublic_get_object_v2_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatepublic_get_object_v2_response_t;

__attribute__((deprecated)) ezsigntemplatepublic_get_object_v2_response_t *ezsigntemplatepublic_get_object_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsigntemplatepublic_get_object_v2_response_m_payload_t *m_payload
);

void ezsigntemplatepublic_get_object_v2_response_free(ezsigntemplatepublic_get_object_v2_response_t *ezsigntemplatepublic_get_object_v2_response);

ezsigntemplatepublic_get_object_v2_response_t *ezsigntemplatepublic_get_object_v2_response_parseFromJSON(cJSON *ezsigntemplatepublic_get_object_v2_responseJSON);

cJSON *ezsigntemplatepublic_get_object_v2_response_convertToJSON(ezsigntemplatepublic_get_object_v2_response_t *ezsigntemplatepublic_get_object_v2_response);

#endif /* _ezsigntemplatepublic_get_object_v2_response_H_ */

