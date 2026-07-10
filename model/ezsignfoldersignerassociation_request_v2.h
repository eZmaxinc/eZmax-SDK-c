/*
 * ezsignfoldersignerassociation_request_v2.h
 *
 * An Ezsignfoldersignerassociation Object
 */

#ifndef _ezsignfoldersignerassociation_request_v2_H_
#define _ezsignfoldersignerassociation_request_v2_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfoldersignerassociation_request_v2_t ezsignfoldersignerassociation_request_v2_t;

#include "field_e_ezsignfoldersignerassociation_role.h"



typedef struct ezsignfoldersignerassociation_request_v2_t {
    int *pki_ezsignfoldersignerassociation_id; //numeric
    int *fki_user_id; //numeric
    int *fki_ezsignsignergroup_id; //numeric
    int *fki_ezsignfolder_id; //numeric
    ezmax_api_definition__full_field_e_ezsignfoldersignerassociation_role__e e_ezsignfoldersignerassociation_role; //referenced enum
    char *t_ezsignfoldersignerassociation_message; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignfoldersignerassociation_request_v2_t;

__attribute__((deprecated)) ezsignfoldersignerassociation_request_v2_t *ezsignfoldersignerassociation_request_v2_create(
    int *pki_ezsignfoldersignerassociation_id,
    int *fki_user_id,
    int *fki_ezsignsignergroup_id,
    int *fki_ezsignfolder_id,
    ezmax_api_definition__full_field_e_ezsignfoldersignerassociation_role__e e_ezsignfoldersignerassociation_role,
    char *t_ezsignfoldersignerassociation_message
);

void ezsignfoldersignerassociation_request_v2_free(ezsignfoldersignerassociation_request_v2_t *ezsignfoldersignerassociation_request_v2);

ezsignfoldersignerassociation_request_v2_t *ezsignfoldersignerassociation_request_v2_parseFromJSON(cJSON *ezsignfoldersignerassociation_request_v2JSON);

cJSON *ezsignfoldersignerassociation_request_v2_convertToJSON(ezsignfoldersignerassociation_request_v2_t *ezsignfoldersignerassociation_request_v2);

#endif /* _ezsignfoldersignerassociation_request_v2_H_ */

