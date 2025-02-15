/*
 * ezsigntemplatepackagesigner_delete_object_v1_response.h
 *
 * Response for DELETE /1/object/ezsigntemplatepackagesigner/{pkiEzsigntemplatepackagesignerID}
 */

#ifndef _ezsigntemplatepackagesigner_delete_object_v1_response_H_
#define _ezsigntemplatepackagesigner_delete_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackagesigner_delete_object_v1_response_t ezsigntemplatepackagesigner_delete_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsigntemplatepackagesigner_delete_object_v1_response_m_payload.h"



typedef struct ezsigntemplatepackagesigner_delete_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatepackagesigner_delete_object_v1_response_t;

__attribute__((deprecated)) ezsigntemplatepackagesigner_delete_object_v1_response_t *ezsigntemplatepackagesigner_delete_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_t *m_payload
);

void ezsigntemplatepackagesigner_delete_object_v1_response_free(ezsigntemplatepackagesigner_delete_object_v1_response_t *ezsigntemplatepackagesigner_delete_object_v1_response);

ezsigntemplatepackagesigner_delete_object_v1_response_t *ezsigntemplatepackagesigner_delete_object_v1_response_parseFromJSON(cJSON *ezsigntemplatepackagesigner_delete_object_v1_responseJSON);

cJSON *ezsigntemplatepackagesigner_delete_object_v1_response_convertToJSON(ezsigntemplatepackagesigner_delete_object_v1_response_t *ezsigntemplatepackagesigner_delete_object_v1_response);

#endif /* _ezsigntemplatepackagesigner_delete_object_v1_response_H_ */

