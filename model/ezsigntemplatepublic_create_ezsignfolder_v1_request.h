/*
 * ezsigntemplatepublic_create_ezsignfolder_v1_request.h
 *
 * Request for POST /1/object/ezsigntemplatepublic/createEzsignfolder
 */

#ifndef _ezsigntemplatepublic_create_ezsignfolder_v1_request_H_
#define _ezsigntemplatepublic_create_ezsignfolder_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepublic_create_ezsignfolder_v1_request_t ezsigntemplatepublic_create_ezsignfolder_v1_request_t;

#include "ezsignsigner_request_compound.h"



typedef struct ezsigntemplatepublic_create_ezsignfolder_v1_request_t {
    char *pks_ezmaxcustomer_code; // string
    char *s_ezsigntemplatepublic_referenceid; // string
    list_t *a_s_ezsigntemplatesigner_description; //primitive container
    list_t *a_obj_ezsignsigner; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatepublic_create_ezsignfolder_v1_request_t;

__attribute__((deprecated)) ezsigntemplatepublic_create_ezsignfolder_v1_request_t *ezsigntemplatepublic_create_ezsignfolder_v1_request_create(
    char *pks_ezmaxcustomer_code,
    char *s_ezsigntemplatepublic_referenceid,
    list_t *a_s_ezsigntemplatesigner_description,
    list_t *a_obj_ezsignsigner
);

void ezsigntemplatepublic_create_ezsignfolder_v1_request_free(ezsigntemplatepublic_create_ezsignfolder_v1_request_t *ezsigntemplatepublic_create_ezsignfolder_v1_request);

ezsigntemplatepublic_create_ezsignfolder_v1_request_t *ezsigntemplatepublic_create_ezsignfolder_v1_request_parseFromJSON(cJSON *ezsigntemplatepublic_create_ezsignfolder_v1_requestJSON);

cJSON *ezsigntemplatepublic_create_ezsignfolder_v1_request_convertToJSON(ezsigntemplatepublic_create_ezsignfolder_v1_request_t *ezsigntemplatepublic_create_ezsignfolder_v1_request);

#endif /* _ezsigntemplatepublic_create_ezsignfolder_v1_request_H_ */

