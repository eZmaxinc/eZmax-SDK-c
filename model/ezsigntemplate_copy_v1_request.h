/*
 * ezsigntemplate_copy_v1_request.h
 *
 * Request for POST /1/object/ezsigntemplate/{pkiEzsigntemplateID}/copy
 */

#ifndef _ezsigntemplate_copy_v1_request_H_
#define _ezsigntemplate_copy_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplate_copy_v1_request_t ezsigntemplate_copy_v1_request_t;




typedef struct ezsigntemplate_copy_v1_request_t {
    list_t *a_fki_ezsignfoldertype_id; //primitive container
    int b_copy_company; //boolean
    int b_copy_user; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplate_copy_v1_request_t;

__attribute__((deprecated)) ezsigntemplate_copy_v1_request_t *ezsigntemplate_copy_v1_request_create(
    list_t *a_fki_ezsignfoldertype_id,
    int b_copy_company,
    int b_copy_user
);

void ezsigntemplate_copy_v1_request_free(ezsigntemplate_copy_v1_request_t *ezsigntemplate_copy_v1_request);

ezsigntemplate_copy_v1_request_t *ezsigntemplate_copy_v1_request_parseFromJSON(cJSON *ezsigntemplate_copy_v1_requestJSON);

cJSON *ezsigntemplate_copy_v1_request_convertToJSON(ezsigntemplate_copy_v1_request_t *ezsigntemplate_copy_v1_request);

#endif /* _ezsigntemplate_copy_v1_request_H_ */

