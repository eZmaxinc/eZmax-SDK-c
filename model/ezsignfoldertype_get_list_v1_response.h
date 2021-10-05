/*
 * ezsignfoldertype_get_list_v1_response.h
 *
 * Response for the /1/object/ezsignfoldertype/getList API Request
 */

#ifndef _ezsignfoldertype_get_list_v1_response_H_
#define _ezsignfoldertype_get_list_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfoldertype_get_list_v1_response_t ezsignfoldertype_get_list_v1_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsignfoldertype_get_list_v1_response_all_of.h"
#include "ezsignfoldertype_get_list_v1_response_m_payload.h"



typedef struct ezsignfoldertype_get_list_v1_response_t {
    struct ezsignfoldertype_get_list_v1_response_m_payload_t *m_payload; //model
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} ezsignfoldertype_get_list_v1_response_t;

ezsignfoldertype_get_list_v1_response_t *ezsignfoldertype_get_list_v1_response_create(
    ezsignfoldertype_get_list_v1_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsignfoldertype_get_list_v1_response_free(ezsignfoldertype_get_list_v1_response_t *ezsignfoldertype_get_list_v1_response);

ezsignfoldertype_get_list_v1_response_t *ezsignfoldertype_get_list_v1_response_parseFromJSON(cJSON *ezsignfoldertype_get_list_v1_responseJSON);

cJSON *ezsignfoldertype_get_list_v1_response_convertToJSON(ezsignfoldertype_get_list_v1_response_t *ezsignfoldertype_get_list_v1_response);

#endif /* _ezsignfoldertype_get_list_v1_response_H_ */

