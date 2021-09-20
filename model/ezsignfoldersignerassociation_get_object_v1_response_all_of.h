/*
 * ezsignfoldersignerassociation_get_object_v1_response_all_of.h
 *
 * 
 */

#ifndef _ezsignfoldersignerassociation_get_object_v1_response_all_of_H_
#define _ezsignfoldersignerassociation_get_object_v1_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfoldersignerassociation_get_object_v1_response_all_of_t ezsignfoldersignerassociation_get_object_v1_response_all_of_t;

#include "object.h"



typedef struct ezsignfoldersignerassociation_get_object_v1_response_all_of_t {
    object_t *m_payload; //object

} ezsignfoldersignerassociation_get_object_v1_response_all_of_t;

ezsignfoldersignerassociation_get_object_v1_response_all_of_t *ezsignfoldersignerassociation_get_object_v1_response_all_of_create(
    object_t *m_payload
);

void ezsignfoldersignerassociation_get_object_v1_response_all_of_free(ezsignfoldersignerassociation_get_object_v1_response_all_of_t *ezsignfoldersignerassociation_get_object_v1_response_all_of);

ezsignfoldersignerassociation_get_object_v1_response_all_of_t *ezsignfoldersignerassociation_get_object_v1_response_all_of_parseFromJSON(cJSON *ezsignfoldersignerassociation_get_object_v1_response_all_ofJSON);

cJSON *ezsignfoldersignerassociation_get_object_v1_response_all_of_convertToJSON(ezsignfoldersignerassociation_get_object_v1_response_all_of_t *ezsignfoldersignerassociation_get_object_v1_response_all_of);

#endif /* _ezsignfoldersignerassociation_get_object_v1_response_all_of_H_ */

