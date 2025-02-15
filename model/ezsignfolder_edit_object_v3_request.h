/*
 * ezsignfolder_edit_object_v3_request.h
 *
 * Request for PUT /3/object/ezsignfolder/{pkiEzsignfolderID}
 */

#ifndef _ezsignfolder_edit_object_v3_request_H_
#define _ezsignfolder_edit_object_v3_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfolder_edit_object_v3_request_t ezsignfolder_edit_object_v3_request_t;

#include "ezsignfolder_request_compound_v3.h"



typedef struct ezsignfolder_edit_object_v3_request_t {
    struct ezsignfolder_request_compound_v3_t *obj_ezsignfolder; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignfolder_edit_object_v3_request_t;

__attribute__((deprecated)) ezsignfolder_edit_object_v3_request_t *ezsignfolder_edit_object_v3_request_create(
    ezsignfolder_request_compound_v3_t *obj_ezsignfolder
);

void ezsignfolder_edit_object_v3_request_free(ezsignfolder_edit_object_v3_request_t *ezsignfolder_edit_object_v3_request);

ezsignfolder_edit_object_v3_request_t *ezsignfolder_edit_object_v3_request_parseFromJSON(cJSON *ezsignfolder_edit_object_v3_requestJSON);

cJSON *ezsignfolder_edit_object_v3_request_convertToJSON(ezsignfolder_edit_object_v3_request_t *ezsignfolder_edit_object_v3_request);

#endif /* _ezsignfolder_edit_object_v3_request_H_ */

