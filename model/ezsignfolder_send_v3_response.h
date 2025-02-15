/*
 * ezsignfolder_send_v3_response.h
 *
 * Response for POST /3/object/ezsignfolder/{pkiEzsignfolderID}/send
 */

#ifndef _ezsignfolder_send_v3_response_H_
#define _ezsignfolder_send_v3_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfolder_send_v3_response_t ezsignfolder_send_v3_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct ezsignfolder_send_v3_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignfolder_send_v3_response_t;

__attribute__((deprecated)) ezsignfolder_send_v3_response_t *ezsignfolder_send_v3_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsignfolder_send_v3_response_free(ezsignfolder_send_v3_response_t *ezsignfolder_send_v3_response);

ezsignfolder_send_v3_response_t *ezsignfolder_send_v3_response_parseFromJSON(cJSON *ezsignfolder_send_v3_responseJSON);

cJSON *ezsignfolder_send_v3_response_convertToJSON(ezsignfolder_send_v3_response_t *ezsignfolder_send_v3_response);

#endif /* _ezsignfolder_send_v3_response_H_ */

