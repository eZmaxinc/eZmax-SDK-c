/*
 * supply_edit_object_v1_request.h
 *
 * Request for PUT /1/object/supply/{pkiSupplyID}
 */

#ifndef _supply_edit_object_v1_request_H_
#define _supply_edit_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct supply_edit_object_v1_request_t supply_edit_object_v1_request_t;

#include "supply_request_compound.h"



typedef struct supply_edit_object_v1_request_t {
    struct supply_request_compound_t *obj_supply; //model

    int _library_owned; // Is the library responsible for freeing this object?
} supply_edit_object_v1_request_t;

__attribute__((deprecated)) supply_edit_object_v1_request_t *supply_edit_object_v1_request_create(
    supply_request_compound_t *obj_supply
);

void supply_edit_object_v1_request_free(supply_edit_object_v1_request_t *supply_edit_object_v1_request);

supply_edit_object_v1_request_t *supply_edit_object_v1_request_parseFromJSON(cJSON *supply_edit_object_v1_requestJSON);

cJSON *supply_edit_object_v1_request_convertToJSON(supply_edit_object_v1_request_t *supply_edit_object_v1_request);

#endif /* _supply_edit_object_v1_request_H_ */

