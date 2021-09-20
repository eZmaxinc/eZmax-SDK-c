/*
 * ezsignfoldersignerassociation_request_compound_all_of.h
 *
 * 
 */

#ifndef _ezsignfoldersignerassociation_request_compound_all_of_H_
#define _ezsignfoldersignerassociation_request_compound_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfoldersignerassociation_request_compound_all_of_t ezsignfoldersignerassociation_request_compound_all_of_t;

#include "ezsignsigner_request_compound.h"



typedef struct ezsignfoldersignerassociation_request_compound_all_of_t {
    struct ezsignsigner_request_compound_t *obj_ezsignsigner; //model

} ezsignfoldersignerassociation_request_compound_all_of_t;

ezsignfoldersignerassociation_request_compound_all_of_t *ezsignfoldersignerassociation_request_compound_all_of_create(
    ezsignsigner_request_compound_t *obj_ezsignsigner
);

void ezsignfoldersignerassociation_request_compound_all_of_free(ezsignfoldersignerassociation_request_compound_all_of_t *ezsignfoldersignerassociation_request_compound_all_of);

ezsignfoldersignerassociation_request_compound_all_of_t *ezsignfoldersignerassociation_request_compound_all_of_parseFromJSON(cJSON *ezsignfoldersignerassociation_request_compound_all_ofJSON);

cJSON *ezsignfoldersignerassociation_request_compound_all_of_convertToJSON(ezsignfoldersignerassociation_request_compound_all_of_t *ezsignfoldersignerassociation_request_compound_all_of);

#endif /* _ezsignfoldersignerassociation_request_compound_all_of_H_ */

