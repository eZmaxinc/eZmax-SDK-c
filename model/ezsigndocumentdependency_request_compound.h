/*
 * ezsigndocumentdependency_request_compound.h
 *
 * An Ezsigndocumentdependency Object
 */

#ifndef _ezsigndocumentdependency_request_compound_H_
#define _ezsigndocumentdependency_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndocumentdependency_request_compound_t ezsigndocumentdependency_request_compound_t;




typedef struct ezsigndocumentdependency_request_compound_t {
    int pki_ezsigndocumentdependency_id; //numeric
    int fki_ezsigndocument_i_ddependency; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigndocumentdependency_request_compound_t;

__attribute__((deprecated)) ezsigndocumentdependency_request_compound_t *ezsigndocumentdependency_request_compound_create(
    int pki_ezsigndocumentdependency_id,
    int fki_ezsigndocument_i_ddependency
);

void ezsigndocumentdependency_request_compound_free(ezsigndocumentdependency_request_compound_t *ezsigndocumentdependency_request_compound);

ezsigndocumentdependency_request_compound_t *ezsigndocumentdependency_request_compound_parseFromJSON(cJSON *ezsigndocumentdependency_request_compoundJSON);

cJSON *ezsigndocumentdependency_request_compound_convertToJSON(ezsigndocumentdependency_request_compound_t *ezsigndocumentdependency_request_compound);

#endif /* _ezsigndocumentdependency_request_compound_H_ */

