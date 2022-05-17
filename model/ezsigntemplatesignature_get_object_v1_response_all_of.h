/*
 * ezsigntemplatesignature_get_object_v1_response_all_of.h
 *
 * 
 */

#ifndef _ezsigntemplatesignature_get_object_v1_response_all_of_H_
#define _ezsigntemplatesignature_get_object_v1_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatesignature_get_object_v1_response_all_of_t ezsigntemplatesignature_get_object_v1_response_all_of_t;

#include "ezsigntemplatesignature_get_object_v1_response_m_payload.h"



typedef struct ezsigntemplatesignature_get_object_v1_response_all_of_t {
    struct ezsigntemplatesignature_get_object_v1_response_m_payload_t *m_payload; //model

} ezsigntemplatesignature_get_object_v1_response_all_of_t;

ezsigntemplatesignature_get_object_v1_response_all_of_t *ezsigntemplatesignature_get_object_v1_response_all_of_create(
    ezsigntemplatesignature_get_object_v1_response_m_payload_t *m_payload
);

void ezsigntemplatesignature_get_object_v1_response_all_of_free(ezsigntemplatesignature_get_object_v1_response_all_of_t *ezsigntemplatesignature_get_object_v1_response_all_of);

ezsigntemplatesignature_get_object_v1_response_all_of_t *ezsigntemplatesignature_get_object_v1_response_all_of_parseFromJSON(cJSON *ezsigntemplatesignature_get_object_v1_response_all_ofJSON);

cJSON *ezsigntemplatesignature_get_object_v1_response_all_of_convertToJSON(ezsigntemplatesignature_get_object_v1_response_all_of_t *ezsigntemplatesignature_get_object_v1_response_all_of);

#endif /* _ezsigntemplatesignature_get_object_v1_response_all_of_H_ */

