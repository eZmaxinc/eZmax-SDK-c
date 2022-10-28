/*
 * ezsigntemplatesigner_get_object_v2_response_all_of.h
 *
 * 
 */

#ifndef _ezsigntemplatesigner_get_object_v2_response_all_of_H_
#define _ezsigntemplatesigner_get_object_v2_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatesigner_get_object_v2_response_all_of_t ezsigntemplatesigner_get_object_v2_response_all_of_t;

#include "ezsigntemplatesigner_get_object_v2_response_m_payload.h"



typedef struct ezsigntemplatesigner_get_object_v2_response_all_of_t {
    struct ezsigntemplatesigner_get_object_v2_response_m_payload_t *m_payload; //model

} ezsigntemplatesigner_get_object_v2_response_all_of_t;

ezsigntemplatesigner_get_object_v2_response_all_of_t *ezsigntemplatesigner_get_object_v2_response_all_of_create(
    ezsigntemplatesigner_get_object_v2_response_m_payload_t *m_payload
);

void ezsigntemplatesigner_get_object_v2_response_all_of_free(ezsigntemplatesigner_get_object_v2_response_all_of_t *ezsigntemplatesigner_get_object_v2_response_all_of);

ezsigntemplatesigner_get_object_v2_response_all_of_t *ezsigntemplatesigner_get_object_v2_response_all_of_parseFromJSON(cJSON *ezsigntemplatesigner_get_object_v2_response_all_ofJSON);

cJSON *ezsigntemplatesigner_get_object_v2_response_all_of_convertToJSON(ezsigntemplatesigner_get_object_v2_response_all_of_t *ezsigntemplatesigner_get_object_v2_response_all_of);

#endif /* _ezsigntemplatesigner_get_object_v2_response_all_of_H_ */

