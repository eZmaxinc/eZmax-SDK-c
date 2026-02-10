/*
 * ezsigntemplateannotation_get_object_v2_response.h
 *
 * Response for GET /2/object/ezsigntemplateannotation/{pkiEzsigntemplateannotationID}
 */

#ifndef _ezsigntemplateannotation_get_object_v2_response_H_
#define _ezsigntemplateannotation_get_object_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplateannotation_get_object_v2_response_t ezsigntemplateannotation_get_object_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsigntemplateannotation_get_object_v2_response_m_payload.h"



typedef struct ezsigntemplateannotation_get_object_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezsigntemplateannotation_get_object_v2_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplateannotation_get_object_v2_response_t;

__attribute__((deprecated)) ezsigntemplateannotation_get_object_v2_response_t *ezsigntemplateannotation_get_object_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsigntemplateannotation_get_object_v2_response_m_payload_t *m_payload
);

void ezsigntemplateannotation_get_object_v2_response_free(ezsigntemplateannotation_get_object_v2_response_t *ezsigntemplateannotation_get_object_v2_response);

ezsigntemplateannotation_get_object_v2_response_t *ezsigntemplateannotation_get_object_v2_response_parseFromJSON(cJSON *ezsigntemplateannotation_get_object_v2_responseJSON);

cJSON *ezsigntemplateannotation_get_object_v2_response_convertToJSON(ezsigntemplateannotation_get_object_v2_response_t *ezsigntemplateannotation_get_object_v2_response);

#endif /* _ezsigntemplateannotation_get_object_v2_response_H_ */

