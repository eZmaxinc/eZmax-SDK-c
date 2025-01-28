/*
 * ezsignfolder_create_object_v2_request.h
 *
 * Request for POST /2/object/ezsignfolder
 */

#ifndef _ezsignfolder_create_object_v2_request_H_
#define _ezsignfolder_create_object_v2_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfolder_create_object_v2_request_t ezsignfolder_create_object_v2_request_t;

#include "ezsignfolder_request_compound.h"



typedef struct ezsignfolder_create_object_v2_request_t {
    list_t *a_obj_ezsignfolder; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignfolder_create_object_v2_request_t;

__attribute__((deprecated)) ezsignfolder_create_object_v2_request_t *ezsignfolder_create_object_v2_request_create(
    list_t *a_obj_ezsignfolder
);

void ezsignfolder_create_object_v2_request_free(ezsignfolder_create_object_v2_request_t *ezsignfolder_create_object_v2_request);

ezsignfolder_create_object_v2_request_t *ezsignfolder_create_object_v2_request_parseFromJSON(cJSON *ezsignfolder_create_object_v2_requestJSON);

cJSON *ezsignfolder_create_object_v2_request_convertToJSON(ezsignfolder_create_object_v2_request_t *ezsignfolder_create_object_v2_request);

#endif /* _ezsignfolder_create_object_v2_request_H_ */

