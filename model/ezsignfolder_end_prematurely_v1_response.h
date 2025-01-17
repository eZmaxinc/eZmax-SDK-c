/*
 * ezsignfolder_end_prematurely_v1_response.h
 *
 * Response for POST /1/object/ezsignfolder/{pkiEzsignfolderID}/endPrematurely
 */

#ifndef _ezsignfolder_end_prematurely_v1_response_H_
#define _ezsignfolder_end_prematurely_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfolder_end_prematurely_v1_response_t ezsignfolder_end_prematurely_v1_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct ezsignfolder_end_prematurely_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} ezsignfolder_end_prematurely_v1_response_t;

ezsignfolder_end_prematurely_v1_response_t *ezsignfolder_end_prematurely_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsignfolder_end_prematurely_v1_response_free(ezsignfolder_end_prematurely_v1_response_t *ezsignfolder_end_prematurely_v1_response);

ezsignfolder_end_prematurely_v1_response_t *ezsignfolder_end_prematurely_v1_response_parseFromJSON(cJSON *ezsignfolder_end_prematurely_v1_responseJSON);

cJSON *ezsignfolder_end_prematurely_v1_response_convertToJSON(ezsignfolder_end_prematurely_v1_response_t *ezsignfolder_end_prematurely_v1_response);

#endif /* _ezsignfolder_end_prematurely_v1_response_H_ */

