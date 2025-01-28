/*
 * custom_ezsignfoldersignerassociationstatus_response.h
 *
 * A Ezsignfoldersignerassociationstatus Object and children to create a complete structure
 */

#ifndef _custom_ezsignfoldersignerassociationstatus_response_H_
#define _custom_ezsignfoldersignerassociationstatus_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_ezsignfoldersignerassociationstatus_response_t custom_ezsignfoldersignerassociationstatus_response_t;

#include "custom_ezsignsignaturestatus_response.h"



typedef struct custom_ezsignfoldersignerassociationstatus_response_t {
    int fki_ezsignfoldersignerassociation_id; //numeric
    char *s_ezsignfoldersignerassociationstatus_lastname; // string
    char *s_ezsignfoldersignerassociationstatus_firstname; // string
    char *s_ezsignfoldersignerassociationstatus_description_x; // string
    list_t *a_obj_ezsignsignaturestatus; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} custom_ezsignfoldersignerassociationstatus_response_t;

__attribute__((deprecated)) custom_ezsignfoldersignerassociationstatus_response_t *custom_ezsignfoldersignerassociationstatus_response_create(
    int fki_ezsignfoldersignerassociation_id,
    char *s_ezsignfoldersignerassociationstatus_lastname,
    char *s_ezsignfoldersignerassociationstatus_firstname,
    char *s_ezsignfoldersignerassociationstatus_description_x,
    list_t *a_obj_ezsignsignaturestatus
);

void custom_ezsignfoldersignerassociationstatus_response_free(custom_ezsignfoldersignerassociationstatus_response_t *custom_ezsignfoldersignerassociationstatus_response);

custom_ezsignfoldersignerassociationstatus_response_t *custom_ezsignfoldersignerassociationstatus_response_parseFromJSON(cJSON *custom_ezsignfoldersignerassociationstatus_responseJSON);

cJSON *custom_ezsignfoldersignerassociationstatus_response_convertToJSON(custom_ezsignfoldersignerassociationstatus_response_t *custom_ezsignfoldersignerassociationstatus_response);

#endif /* _custom_ezsignfoldersignerassociationstatus_response_H_ */

