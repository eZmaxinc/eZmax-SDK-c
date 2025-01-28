/*
 * ezsignfoldertype_get_list_v1_response.h
 *
 * Response for GET /1/object/ezsignfoldertype/getList
 */

#ifndef _ezsignfoldertype_get_list_v1_response_H_
#define _ezsignfoldertype_get_list_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfoldertype_get_list_v1_response_t ezsignfoldertype_get_list_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload_get_list.h"
#include "ezsignfoldertype_get_list_v1_response_m_payload.h"



typedef struct ezsignfoldertype_get_list_v1_response_t {
    struct common_response_obj_debug_payload_get_list_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezsignfoldertype_get_list_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignfoldertype_get_list_v1_response_t;

__attribute__((deprecated)) ezsignfoldertype_get_list_v1_response_t *ezsignfoldertype_get_list_v1_response_create(
    common_response_obj_debug_payload_get_list_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsignfoldertype_get_list_v1_response_m_payload_t *m_payload
);

void ezsignfoldertype_get_list_v1_response_free(ezsignfoldertype_get_list_v1_response_t *ezsignfoldertype_get_list_v1_response);

ezsignfoldertype_get_list_v1_response_t *ezsignfoldertype_get_list_v1_response_parseFromJSON(cJSON *ezsignfoldertype_get_list_v1_responseJSON);

cJSON *ezsignfoldertype_get_list_v1_response_convertToJSON(ezsignfoldertype_get_list_v1_response_t *ezsignfoldertype_get_list_v1_response);

#endif /* _ezsignfoldertype_get_list_v1_response_H_ */

