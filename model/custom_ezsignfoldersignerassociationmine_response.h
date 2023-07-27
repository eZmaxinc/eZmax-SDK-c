/*
 * custom_ezsignfoldersignerassociationmine_response.h
 *
 * A custom Ezsignfoldersignerassociation Object
 */

#ifndef _custom_ezsignfoldersignerassociationmine_response_H_
#define _custom_ezsignfoldersignerassociationmine_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_ezsignfoldersignerassociationmine_response_t custom_ezsignfoldersignerassociationmine_response_t;




typedef struct custom_ezsignfoldersignerassociationmine_response_t {
    int pki_ezsignfoldersignerassociation_id; //numeric
    int fki_ezsignfolder_id; //numeric

} custom_ezsignfoldersignerassociationmine_response_t;

custom_ezsignfoldersignerassociationmine_response_t *custom_ezsignfoldersignerassociationmine_response_create(
    int pki_ezsignfoldersignerassociation_id,
    int fki_ezsignfolder_id
);

void custom_ezsignfoldersignerassociationmine_response_free(custom_ezsignfoldersignerassociationmine_response_t *custom_ezsignfoldersignerassociationmine_response);

custom_ezsignfoldersignerassociationmine_response_t *custom_ezsignfoldersignerassociationmine_response_parseFromJSON(cJSON *custom_ezsignfoldersignerassociationmine_responseJSON);

cJSON *custom_ezsignfoldersignerassociationmine_response_convertToJSON(custom_ezsignfoldersignerassociationmine_response_t *custom_ezsignfoldersignerassociationmine_response);

#endif /* _custom_ezsignfoldersignerassociationmine_response_H_ */

