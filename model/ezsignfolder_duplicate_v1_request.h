/*
 * ezsignfolder_duplicate_v1_request.h
 *
 * 
 */

#ifndef _ezsignfolder_duplicate_v1_request_H_
#define _ezsignfolder_duplicate_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfolder_duplicate_v1_request_t ezsignfolder_duplicate_v1_request_t;

#include "custom_ezsigndocument_duplicate_request.h"



typedef struct ezsignfolder_duplicate_v1_request_t {
    char *s_ezsignfolder_description; // string
    list_t *a_fki_ezsignfoldersignerassociation_id; //primitive container
    list_t *a_obj_ezsigndocument; //nonprimitive container
    char *t_ezsignfolder_note; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignfolder_duplicate_v1_request_t;

__attribute__((deprecated)) ezsignfolder_duplicate_v1_request_t *ezsignfolder_duplicate_v1_request_create(
    char *s_ezsignfolder_description,
    list_t *a_fki_ezsignfoldersignerassociation_id,
    list_t *a_obj_ezsigndocument,
    char *t_ezsignfolder_note
);

void ezsignfolder_duplicate_v1_request_free(ezsignfolder_duplicate_v1_request_t *ezsignfolder_duplicate_v1_request);

ezsignfolder_duplicate_v1_request_t *ezsignfolder_duplicate_v1_request_parseFromJSON(cJSON *ezsignfolder_duplicate_v1_requestJSON);

cJSON *ezsignfolder_duplicate_v1_request_convertToJSON(ezsignfolder_duplicate_v1_request_t *ezsignfolder_duplicate_v1_request);

#endif /* _ezsignfolder_duplicate_v1_request_H_ */

