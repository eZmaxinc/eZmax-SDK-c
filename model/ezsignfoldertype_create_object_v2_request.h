/*
 * ezsignfoldertype_create_object_v2_request.h
 *
 * Request for POST /2/object/ezsignfoldertype
 */

#ifndef _ezsignfoldertype_create_object_v2_request_H_
#define _ezsignfoldertype_create_object_v2_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfoldertype_create_object_v2_request_t ezsignfoldertype_create_object_v2_request_t;

#include "ezsignfoldertype_request_compound_v2.h"



typedef struct ezsignfoldertype_create_object_v2_request_t {
    list_t *a_obj_ezsignfoldertype; //nonprimitive container

} ezsignfoldertype_create_object_v2_request_t;

ezsignfoldertype_create_object_v2_request_t *ezsignfoldertype_create_object_v2_request_create(
    list_t *a_obj_ezsignfoldertype
);

void ezsignfoldertype_create_object_v2_request_free(ezsignfoldertype_create_object_v2_request_t *ezsignfoldertype_create_object_v2_request);

ezsignfoldertype_create_object_v2_request_t *ezsignfoldertype_create_object_v2_request_parseFromJSON(cJSON *ezsignfoldertype_create_object_v2_requestJSON);

cJSON *ezsignfoldertype_create_object_v2_request_convertToJSON(ezsignfoldertype_create_object_v2_request_t *ezsignfoldertype_create_object_v2_request);

#endif /* _ezsignfoldertype_create_object_v2_request_H_ */

