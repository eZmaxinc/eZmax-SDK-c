/*
 * ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_response.h
 *
 * Response for PUT /1/object/ezsigntemplatepackage/{pkiEzsigntemplatepackageID}/editEzsigntemplatepackagesigners
 */

#ifndef _ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_response_H_
#define _ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_response_t ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_response_m_payload.h"



typedef struct ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_response_t;

__attribute__((deprecated)) ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_response_t *ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_response_m_payload_t *m_payload
);

void ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_response_free(ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_response_t *ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_response);

ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_response_t *ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_response_parseFromJSON(cJSON *ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_responseJSON);

cJSON *ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_response_convertToJSON(ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_response_t *ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_response);

#endif /* _ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_response_H_ */

