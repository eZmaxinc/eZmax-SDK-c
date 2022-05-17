/*
 * ezsigntemplatepackage_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/ezsigntemplatepackage/getList
 */

#ifndef _ezsigntemplatepackage_get_list_v1_response_m_payload_H_
#define _ezsigntemplatepackage_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackage_get_list_v1_response_m_payload_t ezsigntemplatepackage_get_list_v1_response_m_payload_t;

#include "common_get_list_v1_response_m_payload.h"
#include "ezsigntemplatepackage_get_list_v1_response_m_payload_all_of.h"
#include "ezsigntemplatepackage_list_element.h"



typedef struct ezsigntemplatepackage_get_list_v1_response_m_payload_t {
    list_t *a_obj_ezsigntemplatepackage; //nonprimitive container
    int i_row_returned; //numeric
    int i_row_filtered; //numeric

} ezsigntemplatepackage_get_list_v1_response_m_payload_t;

ezsigntemplatepackage_get_list_v1_response_m_payload_t *ezsigntemplatepackage_get_list_v1_response_m_payload_create(
    list_t *a_obj_ezsigntemplatepackage,
    int i_row_returned,
    int i_row_filtered
);

void ezsigntemplatepackage_get_list_v1_response_m_payload_free(ezsigntemplatepackage_get_list_v1_response_m_payload_t *ezsigntemplatepackage_get_list_v1_response_m_payload);

ezsigntemplatepackage_get_list_v1_response_m_payload_t *ezsigntemplatepackage_get_list_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatepackage_get_list_v1_response_m_payloadJSON);

cJSON *ezsigntemplatepackage_get_list_v1_response_m_payload_convertToJSON(ezsigntemplatepackage_get_list_v1_response_m_payload_t *ezsigntemplatepackage_get_list_v1_response_m_payload);

#endif /* _ezsigntemplatepackage_get_list_v1_response_m_payload_H_ */

