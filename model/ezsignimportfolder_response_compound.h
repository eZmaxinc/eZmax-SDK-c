/*
 * ezsignimportfolder_response_compound.h
 *
 * A Ezsignimportfolder Object
 */

#ifndef _ezsignimportfolder_response_compound_H_
#define _ezsignimportfolder_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignimportfolder_response_compound_t ezsignimportfolder_response_compound_t;

#include "custom_ezsignimportdocument_response.h"



typedef struct ezsignimportfolder_response_compound_t {
    int pki_ezsignimportfolder_id; //numeric
    char *s_ezsignimportfolder_name; // string
    list_t *a_obj_ezsignimportdocument; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignimportfolder_response_compound_t;

__attribute__((deprecated)) ezsignimportfolder_response_compound_t *ezsignimportfolder_response_compound_create(
    int pki_ezsignimportfolder_id,
    char *s_ezsignimportfolder_name,
    list_t *a_obj_ezsignimportdocument
);

void ezsignimportfolder_response_compound_free(ezsignimportfolder_response_compound_t *ezsignimportfolder_response_compound);

ezsignimportfolder_response_compound_t *ezsignimportfolder_response_compound_parseFromJSON(cJSON *ezsignimportfolder_response_compoundJSON);

cJSON *ezsignimportfolder_response_compound_convertToJSON(ezsignimportfolder_response_compound_t *ezsignimportfolder_response_compound);

#endif /* _ezsignimportfolder_response_compound_H_ */

