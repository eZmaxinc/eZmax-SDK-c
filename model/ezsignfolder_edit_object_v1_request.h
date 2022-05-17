/*
 * ezsignfolder_edit_object_v1_request.h
 *
 * Request for PUT /1/object/ezsignfolder/{pkiEzsignfolderID}
 */

#ifndef _ezsignfolder_edit_object_v1_request_H_
#define _ezsignfolder_edit_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfolder_edit_object_v1_request_t ezsignfolder_edit_object_v1_request_t;

#include "ezsignfolder_request_compound.h"



typedef struct ezsignfolder_edit_object_v1_request_t {
    struct ezsignfolder_request_compound_t *obj_ezsignfolder; //model

} ezsignfolder_edit_object_v1_request_t;

ezsignfolder_edit_object_v1_request_t *ezsignfolder_edit_object_v1_request_create(
    ezsignfolder_request_compound_t *obj_ezsignfolder
);

void ezsignfolder_edit_object_v1_request_free(ezsignfolder_edit_object_v1_request_t *ezsignfolder_edit_object_v1_request);

ezsignfolder_edit_object_v1_request_t *ezsignfolder_edit_object_v1_request_parseFromJSON(cJSON *ezsignfolder_edit_object_v1_requestJSON);

cJSON *ezsignfolder_edit_object_v1_request_convertToJSON(ezsignfolder_edit_object_v1_request_t *ezsignfolder_edit_object_v1_request);

#endif /* _ezsignfolder_edit_object_v1_request_H_ */

