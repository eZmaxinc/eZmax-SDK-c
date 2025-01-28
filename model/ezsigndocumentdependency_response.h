/*
 * ezsigndocumentdependency_response.h
 *
 * An Ezsigndocumentdependency Object
 */

#ifndef _ezsigndocumentdependency_response_H_
#define _ezsigndocumentdependency_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndocumentdependency_response_t ezsigndocumentdependency_response_t;




typedef struct ezsigndocumentdependency_response_t {
    int pki_ezsigndocumentdependency_id; //numeric
    int fki_ezsigndocument_i_ddependency; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigndocumentdependency_response_t;

__attribute__((deprecated)) ezsigndocumentdependency_response_t *ezsigndocumentdependency_response_create(
    int pki_ezsigndocumentdependency_id,
    int fki_ezsigndocument_i_ddependency
);

void ezsigndocumentdependency_response_free(ezsigndocumentdependency_response_t *ezsigndocumentdependency_response);

ezsigndocumentdependency_response_t *ezsigndocumentdependency_response_parseFromJSON(cJSON *ezsigndocumentdependency_responseJSON);

cJSON *ezsigndocumentdependency_response_convertToJSON(ezsigndocumentdependency_response_t *ezsigndocumentdependency_response);

#endif /* _ezsigndocumentdependency_response_H_ */

