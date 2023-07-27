/*
 * custom_ezsignfoldersignerassociation_actionable_element_response.h
 *
 * A Ezsignfoldersignerassociation Object with actionable elements
 */

#ifndef _custom_ezsignfoldersignerassociation_actionable_element_response_H_
#define _custom_ezsignfoldersignerassociation_actionable_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_ezsignfoldersignerassociation_actionable_element_response_t custom_ezsignfoldersignerassociation_actionable_element_response_t;

#include "ezsignfoldersignerassociation_response_compound_user.h"
#include "ezsignsigner_response_compound.h"
#include "ezsignsignergroup_response_compound.h"



typedef struct custom_ezsignfoldersignerassociation_actionable_element_response_t {
    int pki_ezsignfoldersignerassociation_id; //numeric
    int fki_ezsignfolder_id; //numeric
    int b_ezsignfoldersignerassociation_delayedsend; //boolean
    int b_ezsignfoldersignerassociation_receivecopy; //boolean
    char *t_ezsignfoldersignerassociation_message; // string
    struct ezsignsignergroup_response_compound_t *obj_ezsignsignergroup; //model
    struct ezsignfoldersignerassociation_response_compound_user_t *obj_user; //model
    struct ezsignsigner_response_compound_t *obj_ezsignsigner; //model
    int b_ezsignfoldersignerassociation_hasactionableelements_current; //boolean
    int b_ezsignfoldersignerassociation_hasactionableelements_future; //boolean

} custom_ezsignfoldersignerassociation_actionable_element_response_t;

custom_ezsignfoldersignerassociation_actionable_element_response_t *custom_ezsignfoldersignerassociation_actionable_element_response_create(
    int pki_ezsignfoldersignerassociation_id,
    int fki_ezsignfolder_id,
    int b_ezsignfoldersignerassociation_delayedsend,
    int b_ezsignfoldersignerassociation_receivecopy,
    char *t_ezsignfoldersignerassociation_message,
    ezsignsignergroup_response_compound_t *obj_ezsignsignergroup,
    ezsignfoldersignerassociation_response_compound_user_t *obj_user,
    ezsignsigner_response_compound_t *obj_ezsignsigner,
    int b_ezsignfoldersignerassociation_hasactionableelements_current,
    int b_ezsignfoldersignerassociation_hasactionableelements_future
);

void custom_ezsignfoldersignerassociation_actionable_element_response_free(custom_ezsignfoldersignerassociation_actionable_element_response_t *custom_ezsignfoldersignerassociation_actionable_element_response);

custom_ezsignfoldersignerassociation_actionable_element_response_t *custom_ezsignfoldersignerassociation_actionable_element_response_parseFromJSON(cJSON *custom_ezsignfoldersignerassociation_actionable_element_responseJSON);

cJSON *custom_ezsignfoldersignerassociation_actionable_element_response_convertToJSON(custom_ezsignfoldersignerassociation_actionable_element_response_t *custom_ezsignfoldersignerassociation_actionable_element_response);

#endif /* _custom_ezsignfoldersignerassociation_actionable_element_response_H_ */

