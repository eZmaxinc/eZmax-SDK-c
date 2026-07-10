/*
 * custom_ezsignfoldersignerassociation_actionable_element_response_v2.h
 *
 * A Ezsignfoldersignerassociation Object with actionable elements
 */

#ifndef _custom_ezsignfoldersignerassociation_actionable_element_response_v2_H_
#define _custom_ezsignfoldersignerassociation_actionable_element_response_v2_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_ezsignfoldersignerassociation_actionable_element_response_v2_t custom_ezsignfoldersignerassociation_actionable_element_response_v2_t;

#include "ezsignfoldersignerassociation_response_compound_user.h"
#include "ezsignsigner_response_compound.h"
#include "ezsignsignergroup_response_compound.h"
#include "field_e_ezsignfoldersignerassociation_role.h"



typedef struct custom_ezsignfoldersignerassociation_actionable_element_response_v2_t {
    int *pki_ezsignfoldersignerassociation_id; //numeric
    int *fki_ezsignfolder_id; //numeric
    int *b_ezsignfoldersignerassociation_delayedsend; //boolean
    ezmax_api_definition__full_field_e_ezsignfoldersignerassociation_role__e e_ezsignfoldersignerassociation_role; //referenced enum
    char *t_ezsignfoldersignerassociation_message; // string
    int *b_ezsignfoldersignerassociation_allowsigninginperson; //boolean
    struct ezsignsignergroup_response_compound_t *obj_ezsignsignergroup; //model
    struct ezsignfoldersignerassociation_response_compound_user_t *obj_user; //model
    struct ezsignsigner_response_compound_t *obj_ezsignsigner; //model
    int *b_ezsignfoldersignerassociation_hasactionableelements_current; //boolean
    int *b_ezsignfoldersignerassociation_hasactionableelements_future; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} custom_ezsignfoldersignerassociation_actionable_element_response_v2_t;

__attribute__((deprecated)) custom_ezsignfoldersignerassociation_actionable_element_response_v2_t *custom_ezsignfoldersignerassociation_actionable_element_response_v2_create(
    int *pki_ezsignfoldersignerassociation_id,
    int *fki_ezsignfolder_id,
    int *b_ezsignfoldersignerassociation_delayedsend,
    ezmax_api_definition__full_field_e_ezsignfoldersignerassociation_role__e e_ezsignfoldersignerassociation_role,
    char *t_ezsignfoldersignerassociation_message,
    int *b_ezsignfoldersignerassociation_allowsigninginperson,
    ezsignsignergroup_response_compound_t *obj_ezsignsignergroup,
    ezsignfoldersignerassociation_response_compound_user_t *obj_user,
    ezsignsigner_response_compound_t *obj_ezsignsigner,
    int *b_ezsignfoldersignerassociation_hasactionableelements_current,
    int *b_ezsignfoldersignerassociation_hasactionableelements_future
);

void custom_ezsignfoldersignerassociation_actionable_element_response_v2_free(custom_ezsignfoldersignerassociation_actionable_element_response_v2_t *custom_ezsignfoldersignerassociation_actionable_element_response_v2);

custom_ezsignfoldersignerassociation_actionable_element_response_v2_t *custom_ezsignfoldersignerassociation_actionable_element_response_v2_parseFromJSON(cJSON *custom_ezsignfoldersignerassociation_actionable_element_response_v2JSON);

cJSON *custom_ezsignfoldersignerassociation_actionable_element_response_v2_convertToJSON(custom_ezsignfoldersignerassociation_actionable_element_response_v2_t *custom_ezsignfoldersignerassociation_actionable_element_response_v2);

#endif /* _custom_ezsignfoldersignerassociation_actionable_element_response_v2_H_ */

