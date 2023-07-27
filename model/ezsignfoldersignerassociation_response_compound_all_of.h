/*
 * ezsignfoldersignerassociation_response_compound_all_of.h
 *
 * 
 */

#ifndef _ezsignfoldersignerassociation_response_compound_all_of_H_
#define _ezsignfoldersignerassociation_response_compound_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfoldersignerassociation_response_compound_all_of_t ezsignfoldersignerassociation_response_compound_all_of_t;

#include "ezsignfoldersignerassociation_response_compound_user.h"
#include "ezsignsigner_response_compound.h"
#include "ezsignsignergroup_response_compound.h"



typedef struct ezsignfoldersignerassociation_response_compound_all_of_t {
    struct ezsignsignergroup_response_compound_t *obj_ezsignsignergroup; //model
    struct ezsignfoldersignerassociation_response_compound_user_t *obj_user; //model
    struct ezsignsigner_response_compound_t *obj_ezsignsigner; //model

} ezsignfoldersignerassociation_response_compound_all_of_t;

ezsignfoldersignerassociation_response_compound_all_of_t *ezsignfoldersignerassociation_response_compound_all_of_create(
    ezsignsignergroup_response_compound_t *obj_ezsignsignergroup,
    ezsignfoldersignerassociation_response_compound_user_t *obj_user,
    ezsignsigner_response_compound_t *obj_ezsignsigner
);

void ezsignfoldersignerassociation_response_compound_all_of_free(ezsignfoldersignerassociation_response_compound_all_of_t *ezsignfoldersignerassociation_response_compound_all_of);

ezsignfoldersignerassociation_response_compound_all_of_t *ezsignfoldersignerassociation_response_compound_all_of_parseFromJSON(cJSON *ezsignfoldersignerassociation_response_compound_all_ofJSON);

cJSON *ezsignfoldersignerassociation_response_compound_all_of_convertToJSON(ezsignfoldersignerassociation_response_compound_all_of_t *ezsignfoldersignerassociation_response_compound_all_of);

#endif /* _ezsignfoldersignerassociation_response_compound_all_of_H_ */

