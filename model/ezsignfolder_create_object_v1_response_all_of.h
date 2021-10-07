/*
 * ezsignfolder_create_object_v1_response_all_of.h
 *
 * 
 */

#ifndef _ezsignfolder_create_object_v1_response_all_of_H_
#define _ezsignfolder_create_object_v1_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfolder_create_object_v1_response_all_of_t ezsignfolder_create_object_v1_response_all_of_t;

#include "ezsignfolder_create_object_v1_response_m_payload.h"



typedef struct ezsignfolder_create_object_v1_response_all_of_t {
    struct ezsignfolder_create_object_v1_response_m_payload_t *m_payload; //model

} ezsignfolder_create_object_v1_response_all_of_t;

ezsignfolder_create_object_v1_response_all_of_t *ezsignfolder_create_object_v1_response_all_of_create(
    ezsignfolder_create_object_v1_response_m_payload_t *m_payload
);

void ezsignfolder_create_object_v1_response_all_of_free(ezsignfolder_create_object_v1_response_all_of_t *ezsignfolder_create_object_v1_response_all_of);

ezsignfolder_create_object_v1_response_all_of_t *ezsignfolder_create_object_v1_response_all_of_parseFromJSON(cJSON *ezsignfolder_create_object_v1_response_all_ofJSON);

cJSON *ezsignfolder_create_object_v1_response_all_of_convertToJSON(ezsignfolder_create_object_v1_response_all_of_t *ezsignfolder_create_object_v1_response_all_of);

#endif /* _ezsignfolder_create_object_v1_response_all_of_H_ */

