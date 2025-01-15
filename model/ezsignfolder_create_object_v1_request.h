/*
 * ezsignfolder_create_object_v1_request.h
 *
 * Request for POST /1/object/ezsignfolder
 */

#ifndef _ezsignfolder_create_object_v1_request_H_
#define _ezsignfolder_create_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfolder_create_object_v1_request_t ezsignfolder_create_object_v1_request_t;

#include "ezsignfolder_request.h"



typedef struct ezsignfolder_create_object_v1_request_t {
    struct ezsignfolder_request_t *obj_ezsignfolder; //model
    struct ezsignfolder_request_t *obj_ezsignfolder_compound; //model

} ezsignfolder_create_object_v1_request_t;

ezsignfolder_create_object_v1_request_t *ezsignfolder_create_object_v1_request_create(
    ezsignfolder_request_t *obj_ezsignfolder,
    ezsignfolder_request_t *obj_ezsignfolder_compound
);

void ezsignfolder_create_object_v1_request_free(ezsignfolder_create_object_v1_request_t *ezsignfolder_create_object_v1_request);

ezsignfolder_create_object_v1_request_t *ezsignfolder_create_object_v1_request_parseFromJSON(cJSON *ezsignfolder_create_object_v1_requestJSON);

cJSON *ezsignfolder_create_object_v1_request_convertToJSON(ezsignfolder_create_object_v1_request_t *ezsignfolder_create_object_v1_request);

#endif /* _ezsignfolder_create_object_v1_request_H_ */

