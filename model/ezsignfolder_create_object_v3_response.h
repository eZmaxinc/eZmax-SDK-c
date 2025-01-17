/*
 * ezsignfolder_create_object_v3_response.h
 *
 * Response for POST /3/object/ezsignfolder
 */

#ifndef _ezsignfolder_create_object_v3_response_H_
#define _ezsignfolder_create_object_v3_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfolder_create_object_v3_response_t ezsignfolder_create_object_v3_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsignfolder_create_object_v3_response_m_payload.h"



typedef struct ezsignfolder_create_object_v3_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezsignfolder_create_object_v3_response_m_payload_t *m_payload; //model

} ezsignfolder_create_object_v3_response_t;

ezsignfolder_create_object_v3_response_t *ezsignfolder_create_object_v3_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsignfolder_create_object_v3_response_m_payload_t *m_payload
);

void ezsignfolder_create_object_v3_response_free(ezsignfolder_create_object_v3_response_t *ezsignfolder_create_object_v3_response);

ezsignfolder_create_object_v3_response_t *ezsignfolder_create_object_v3_response_parseFromJSON(cJSON *ezsignfolder_create_object_v3_responseJSON);

cJSON *ezsignfolder_create_object_v3_response_convertToJSON(ezsignfolder_create_object_v3_response_t *ezsignfolder_create_object_v3_response);

#endif /* _ezsignfolder_create_object_v3_response_H_ */

