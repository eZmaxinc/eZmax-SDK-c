/*
 * ezsignfolder_reorder_v2_response.h
 *
 * Response for POST /2/object/ezsignfolder/{pkiEzsignfolderID}/reorder
 */

#ifndef _ezsignfolder_reorder_v2_response_H_
#define _ezsignfolder_reorder_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfolder_reorder_v2_response_t ezsignfolder_reorder_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct ezsignfolder_reorder_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignfolder_reorder_v2_response_t;

__attribute__((deprecated)) ezsignfolder_reorder_v2_response_t *ezsignfolder_reorder_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsignfolder_reorder_v2_response_free(ezsignfolder_reorder_v2_response_t *ezsignfolder_reorder_v2_response);

ezsignfolder_reorder_v2_response_t *ezsignfolder_reorder_v2_response_parseFromJSON(cJSON *ezsignfolder_reorder_v2_responseJSON);

cJSON *ezsignfolder_reorder_v2_response_convertToJSON(ezsignfolder_reorder_v2_response_t *ezsignfolder_reorder_v2_response);

#endif /* _ezsignfolder_reorder_v2_response_H_ */

