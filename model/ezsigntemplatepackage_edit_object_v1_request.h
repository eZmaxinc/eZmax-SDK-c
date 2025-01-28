/*
 * ezsigntemplatepackage_edit_object_v1_request.h
 *
 * Request for PUT /1/object/ezsigntemplatepackage/{pkiEzsigntemplatepackageID}
 */

#ifndef _ezsigntemplatepackage_edit_object_v1_request_H_
#define _ezsigntemplatepackage_edit_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackage_edit_object_v1_request_t ezsigntemplatepackage_edit_object_v1_request_t;

#include "ezsigntemplatepackage_request_compound.h"



typedef struct ezsigntemplatepackage_edit_object_v1_request_t {
    struct ezsigntemplatepackage_request_compound_t *obj_ezsigntemplatepackage; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatepackage_edit_object_v1_request_t;

__attribute__((deprecated)) ezsigntemplatepackage_edit_object_v1_request_t *ezsigntemplatepackage_edit_object_v1_request_create(
    ezsigntemplatepackage_request_compound_t *obj_ezsigntemplatepackage
);

void ezsigntemplatepackage_edit_object_v1_request_free(ezsigntemplatepackage_edit_object_v1_request_t *ezsigntemplatepackage_edit_object_v1_request);

ezsigntemplatepackage_edit_object_v1_request_t *ezsigntemplatepackage_edit_object_v1_request_parseFromJSON(cJSON *ezsigntemplatepackage_edit_object_v1_requestJSON);

cJSON *ezsigntemplatepackage_edit_object_v1_request_convertToJSON(ezsigntemplatepackage_edit_object_v1_request_t *ezsigntemplatepackage_edit_object_v1_request);

#endif /* _ezsigntemplatepackage_edit_object_v1_request_H_ */

