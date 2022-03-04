/*
 * ezsignformfieldgroup_create_object_v1_response_all_of.h
 *
 * 
 */

#ifndef _ezsignformfieldgroup_create_object_v1_response_all_of_H_
#define _ezsignformfieldgroup_create_object_v1_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignformfieldgroup_create_object_v1_response_all_of_t ezsignformfieldgroup_create_object_v1_response_all_of_t;

#include "ezsignformfieldgroup_create_object_v1_response_m_payload.h"



typedef struct ezsignformfieldgroup_create_object_v1_response_all_of_t {
    struct ezsignformfieldgroup_create_object_v1_response_m_payload_t *m_payload; //model

} ezsignformfieldgroup_create_object_v1_response_all_of_t;

ezsignformfieldgroup_create_object_v1_response_all_of_t *ezsignformfieldgroup_create_object_v1_response_all_of_create(
    ezsignformfieldgroup_create_object_v1_response_m_payload_t *m_payload
);

void ezsignformfieldgroup_create_object_v1_response_all_of_free(ezsignformfieldgroup_create_object_v1_response_all_of_t *ezsignformfieldgroup_create_object_v1_response_all_of);

ezsignformfieldgroup_create_object_v1_response_all_of_t *ezsignformfieldgroup_create_object_v1_response_all_of_parseFromJSON(cJSON *ezsignformfieldgroup_create_object_v1_response_all_ofJSON);

cJSON *ezsignformfieldgroup_create_object_v1_response_all_of_convertToJSON(ezsignformfieldgroup_create_object_v1_response_all_of_t *ezsignformfieldgroup_create_object_v1_response_all_of);

#endif /* _ezsignformfieldgroup_create_object_v1_response_all_of_H_ */

