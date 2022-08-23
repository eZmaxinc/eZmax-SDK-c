/*
 * ezsigntemplateformfieldgroup_create_object_v1_response_all_of.h
 *
 * 
 */

#ifndef _ezsigntemplateformfieldgroup_create_object_v1_response_all_of_H_
#define _ezsigntemplateformfieldgroup_create_object_v1_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplateformfieldgroup_create_object_v1_response_all_of_t ezsigntemplateformfieldgroup_create_object_v1_response_all_of_t;

#include "ezsigntemplateformfieldgroup_create_object_v1_response_m_payload.h"



typedef struct ezsigntemplateformfieldgroup_create_object_v1_response_all_of_t {
    struct ezsigntemplateformfieldgroup_create_object_v1_response_m_payload_t *m_payload; //model

} ezsigntemplateformfieldgroup_create_object_v1_response_all_of_t;

ezsigntemplateformfieldgroup_create_object_v1_response_all_of_t *ezsigntemplateformfieldgroup_create_object_v1_response_all_of_create(
    ezsigntemplateformfieldgroup_create_object_v1_response_m_payload_t *m_payload
);

void ezsigntemplateformfieldgroup_create_object_v1_response_all_of_free(ezsigntemplateformfieldgroup_create_object_v1_response_all_of_t *ezsigntemplateformfieldgroup_create_object_v1_response_all_of);

ezsigntemplateformfieldgroup_create_object_v1_response_all_of_t *ezsigntemplateformfieldgroup_create_object_v1_response_all_of_parseFromJSON(cJSON *ezsigntemplateformfieldgroup_create_object_v1_response_all_ofJSON);

cJSON *ezsigntemplateformfieldgroup_create_object_v1_response_all_of_convertToJSON(ezsigntemplateformfieldgroup_create_object_v1_response_all_of_t *ezsigntemplateformfieldgroup_create_object_v1_response_all_of);

#endif /* _ezsigntemplateformfieldgroup_create_object_v1_response_all_of_H_ */
