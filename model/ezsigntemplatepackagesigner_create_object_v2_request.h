/*
 * ezsigntemplatepackagesigner_create_object_v2_request.h
 *
 * Request for POST /2/object/ezsigntemplatepackagesigner
 */

#ifndef _ezsigntemplatepackagesigner_create_object_v2_request_H_
#define _ezsigntemplatepackagesigner_create_object_v2_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackagesigner_create_object_v2_request_t ezsigntemplatepackagesigner_create_object_v2_request_t;

#include "ezsigntemplatepackagesigner_request_compound_v2.h"



typedef struct ezsigntemplatepackagesigner_create_object_v2_request_t {
    list_t *a_obj_ezsigntemplatepackagesigner; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatepackagesigner_create_object_v2_request_t;

__attribute__((deprecated)) ezsigntemplatepackagesigner_create_object_v2_request_t *ezsigntemplatepackagesigner_create_object_v2_request_create(
    list_t *a_obj_ezsigntemplatepackagesigner
);

void ezsigntemplatepackagesigner_create_object_v2_request_free(ezsigntemplatepackagesigner_create_object_v2_request_t *ezsigntemplatepackagesigner_create_object_v2_request);

ezsigntemplatepackagesigner_create_object_v2_request_t *ezsigntemplatepackagesigner_create_object_v2_request_parseFromJSON(cJSON *ezsigntemplatepackagesigner_create_object_v2_requestJSON);

cJSON *ezsigntemplatepackagesigner_create_object_v2_request_convertToJSON(ezsigntemplatepackagesigner_create_object_v2_request_t *ezsigntemplatepackagesigner_create_object_v2_request);

#endif /* _ezsigntemplatepackagesigner_create_object_v2_request_H_ */

