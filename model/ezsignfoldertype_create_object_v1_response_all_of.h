/*
 * ezsignfoldertype_create_object_v1_response_all_of.h
 *
 * 
 */

#ifndef _ezsignfoldertype_create_object_v1_response_all_of_H_
#define _ezsignfoldertype_create_object_v1_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfoldertype_create_object_v1_response_all_of_t ezsignfoldertype_create_object_v1_response_all_of_t;

#include "ezsignfoldertype_create_object_v1_response_m_payload.h"



typedef struct ezsignfoldertype_create_object_v1_response_all_of_t {
    struct ezsignfoldertype_create_object_v1_response_m_payload_t *m_payload; //model

} ezsignfoldertype_create_object_v1_response_all_of_t;

ezsignfoldertype_create_object_v1_response_all_of_t *ezsignfoldertype_create_object_v1_response_all_of_create(
    ezsignfoldertype_create_object_v1_response_m_payload_t *m_payload
);

void ezsignfoldertype_create_object_v1_response_all_of_free(ezsignfoldertype_create_object_v1_response_all_of_t *ezsignfoldertype_create_object_v1_response_all_of);

ezsignfoldertype_create_object_v1_response_all_of_t *ezsignfoldertype_create_object_v1_response_all_of_parseFromJSON(cJSON *ezsignfoldertype_create_object_v1_response_all_ofJSON);

cJSON *ezsignfoldertype_create_object_v1_response_all_of_convertToJSON(ezsignfoldertype_create_object_v1_response_all_of_t *ezsignfoldertype_create_object_v1_response_all_of);

#endif /* _ezsignfoldertype_create_object_v1_response_all_of_H_ */

