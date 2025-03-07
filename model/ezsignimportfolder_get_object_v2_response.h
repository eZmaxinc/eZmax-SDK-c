/*
 * ezsignimportfolder_get_object_v2_response.h
 *
 * Response for GET /2/object/ezsignimportfolder/{pkiEzsignimportfolderID}
 */

#ifndef _ezsignimportfolder_get_object_v2_response_H_
#define _ezsignimportfolder_get_object_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignimportfolder_get_object_v2_response_t ezsignimportfolder_get_object_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsignimportfolder_get_object_v2_response_m_payload.h"



typedef struct ezsignimportfolder_get_object_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezsignimportfolder_get_object_v2_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignimportfolder_get_object_v2_response_t;

__attribute__((deprecated)) ezsignimportfolder_get_object_v2_response_t *ezsignimportfolder_get_object_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsignimportfolder_get_object_v2_response_m_payload_t *m_payload
);

void ezsignimportfolder_get_object_v2_response_free(ezsignimportfolder_get_object_v2_response_t *ezsignimportfolder_get_object_v2_response);

ezsignimportfolder_get_object_v2_response_t *ezsignimportfolder_get_object_v2_response_parseFromJSON(cJSON *ezsignimportfolder_get_object_v2_responseJSON);

cJSON *ezsignimportfolder_get_object_v2_response_convertToJSON(ezsignimportfolder_get_object_v2_response_t *ezsignimportfolder_get_object_v2_response);

#endif /* _ezsignimportfolder_get_object_v2_response_H_ */

