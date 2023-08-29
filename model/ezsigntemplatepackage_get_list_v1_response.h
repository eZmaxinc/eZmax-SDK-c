/*
 * ezsigntemplatepackage_get_list_v1_response.h
 *
 * Response for GET /1/object/ezsigntemplatepackage/getList
 */

#ifndef _ezsigntemplatepackage_get_list_v1_response_H_
#define _ezsigntemplatepackage_get_list_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackage_get_list_v1_response_t ezsigntemplatepackage_get_list_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload_get_list.h"
#include "ezsigntemplatepackage_get_list_v1_response_m_payload.h"



typedef struct ezsigntemplatepackage_get_list_v1_response_t {
    struct common_response_obj_debug_payload_get_list_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezsigntemplatepackage_get_list_v1_response_m_payload_t *m_payload; //model

} ezsigntemplatepackage_get_list_v1_response_t;

ezsigntemplatepackage_get_list_v1_response_t *ezsigntemplatepackage_get_list_v1_response_create(
    common_response_obj_debug_payload_get_list_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsigntemplatepackage_get_list_v1_response_m_payload_t *m_payload
);

void ezsigntemplatepackage_get_list_v1_response_free(ezsigntemplatepackage_get_list_v1_response_t *ezsigntemplatepackage_get_list_v1_response);

ezsigntemplatepackage_get_list_v1_response_t *ezsigntemplatepackage_get_list_v1_response_parseFromJSON(cJSON *ezsigntemplatepackage_get_list_v1_responseJSON);

cJSON *ezsigntemplatepackage_get_list_v1_response_convertToJSON(ezsigntemplatepackage_get_list_v1_response_t *ezsigntemplatepackage_get_list_v1_response);

#endif /* _ezsigntemplatepackage_get_list_v1_response_H_ */

