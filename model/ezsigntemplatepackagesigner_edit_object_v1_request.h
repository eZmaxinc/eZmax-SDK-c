/*
 * ezsigntemplatepackagesigner_edit_object_v1_request.h
 *
 * Request for PUT /1/object/ezsigntemplatepackagesigner/{pkiEzsigntemplatepackagesignerID}
 */

#ifndef _ezsigntemplatepackagesigner_edit_object_v1_request_H_
#define _ezsigntemplatepackagesigner_edit_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackagesigner_edit_object_v1_request_t ezsigntemplatepackagesigner_edit_object_v1_request_t;

#include "ezsigntemplatepackagesigner_request_compound.h"



typedef struct ezsigntemplatepackagesigner_edit_object_v1_request_t {
    struct ezsigntemplatepackagesigner_request_compound_t *obj_ezsigntemplatepackagesigner; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatepackagesigner_edit_object_v1_request_t;

__attribute__((deprecated)) ezsigntemplatepackagesigner_edit_object_v1_request_t *ezsigntemplatepackagesigner_edit_object_v1_request_create(
    ezsigntemplatepackagesigner_request_compound_t *obj_ezsigntemplatepackagesigner
);

void ezsigntemplatepackagesigner_edit_object_v1_request_free(ezsigntemplatepackagesigner_edit_object_v1_request_t *ezsigntemplatepackagesigner_edit_object_v1_request);

ezsigntemplatepackagesigner_edit_object_v1_request_t *ezsigntemplatepackagesigner_edit_object_v1_request_parseFromJSON(cJSON *ezsigntemplatepackagesigner_edit_object_v1_requestJSON);

cJSON *ezsigntemplatepackagesigner_edit_object_v1_request_convertToJSON(ezsigntemplatepackagesigner_edit_object_v1_request_t *ezsigntemplatepackagesigner_edit_object_v1_request);

#endif /* _ezsigntemplatepackagesigner_edit_object_v1_request_H_ */

