/*
 * ezsignfolder_create_object_v3_request.h
 *
 * Request for POST /3/object/ezsignfolder
 */

#ifndef _ezsignfolder_create_object_v3_request_H_
#define _ezsignfolder_create_object_v3_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfolder_create_object_v3_request_t ezsignfolder_create_object_v3_request_t;

#include "ezsignfolder_request_v3.h"



typedef struct ezsignfolder_create_object_v3_request_t {
    list_t *a_obj_ezsignfolder; //nonprimitive container

} ezsignfolder_create_object_v3_request_t;

ezsignfolder_create_object_v3_request_t *ezsignfolder_create_object_v3_request_create(
    list_t *a_obj_ezsignfolder
);

void ezsignfolder_create_object_v3_request_free(ezsignfolder_create_object_v3_request_t *ezsignfolder_create_object_v3_request);

ezsignfolder_create_object_v3_request_t *ezsignfolder_create_object_v3_request_parseFromJSON(cJSON *ezsignfolder_create_object_v3_requestJSON);

cJSON *ezsignfolder_create_object_v3_request_convertToJSON(ezsignfolder_create_object_v3_request_t *ezsignfolder_create_object_v3_request);

#endif /* _ezsignfolder_create_object_v3_request_H_ */

