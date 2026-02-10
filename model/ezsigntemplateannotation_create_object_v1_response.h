/*
 * ezsigntemplateannotation_create_object_v1_response.h
 *
 * Response for POST /1/object/ezsigntemplateannotation
 */

#ifndef _ezsigntemplateannotation_create_object_v1_response_H_
#define _ezsigntemplateannotation_create_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplateannotation_create_object_v1_response_t ezsigntemplateannotation_create_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsigntemplateannotation_create_object_v1_response_m_payload.h"



typedef struct ezsigntemplateannotation_create_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezsigntemplateannotation_create_object_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplateannotation_create_object_v1_response_t;

__attribute__((deprecated)) ezsigntemplateannotation_create_object_v1_response_t *ezsigntemplateannotation_create_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsigntemplateannotation_create_object_v1_response_m_payload_t *m_payload
);

void ezsigntemplateannotation_create_object_v1_response_free(ezsigntemplateannotation_create_object_v1_response_t *ezsigntemplateannotation_create_object_v1_response);

ezsigntemplateannotation_create_object_v1_response_t *ezsigntemplateannotation_create_object_v1_response_parseFromJSON(cJSON *ezsigntemplateannotation_create_object_v1_responseJSON);

cJSON *ezsigntemplateannotation_create_object_v1_response_convertToJSON(ezsigntemplateannotation_create_object_v1_response_t *ezsigntemplateannotation_create_object_v1_response);

#endif /* _ezsigntemplateannotation_create_object_v1_response_H_ */

