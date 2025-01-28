/*
 * ezsignfolder_reorder_v2_request.h
 *
 * Request for POST /2/object/ezsignfolder/{pkiEzsignfolderID}/reorder
 */

#ifndef _ezsignfolder_reorder_v2_request_H_
#define _ezsignfolder_reorder_v2_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfolder_reorder_v2_request_t ezsignfolder_reorder_v2_request_t;

#include "custom_ezsigndocument_request.h"
#include "field_e_ezsignfolder_documentdependency.h"



typedef struct ezsignfolder_reorder_v2_request_t {
    ezmax_api_definition__full_field_e_ezsignfolder_documentdependency__e e_ezsignfolder_documentdependency; //referenced enum
    list_t *a_obj_ezsigndocument; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignfolder_reorder_v2_request_t;

__attribute__((deprecated)) ezsignfolder_reorder_v2_request_t *ezsignfolder_reorder_v2_request_create(
    ezmax_api_definition__full_field_e_ezsignfolder_documentdependency__e e_ezsignfolder_documentdependency,
    list_t *a_obj_ezsigndocument
);

void ezsignfolder_reorder_v2_request_free(ezsignfolder_reorder_v2_request_t *ezsignfolder_reorder_v2_request);

ezsignfolder_reorder_v2_request_t *ezsignfolder_reorder_v2_request_parseFromJSON(cJSON *ezsignfolder_reorder_v2_requestJSON);

cJSON *ezsignfolder_reorder_v2_request_convertToJSON(ezsignfolder_reorder_v2_request_t *ezsignfolder_reorder_v2_request);

#endif /* _ezsignfolder_reorder_v2_request_H_ */

