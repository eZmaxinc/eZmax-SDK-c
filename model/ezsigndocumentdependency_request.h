/*
 * ezsigndocumentdependency_request.h
 *
 * An Ezsigndocumentdependency Object
 */

#ifndef _ezsigndocumentdependency_request_H_
#define _ezsigndocumentdependency_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndocumentdependency_request_t ezsigndocumentdependency_request_t;




typedef struct ezsigndocumentdependency_request_t {
    int pki_ezsigndocumentdependency_id; //numeric
    int fki_ezsigndocument_i_ddependency; //numeric

} ezsigndocumentdependency_request_t;

ezsigndocumentdependency_request_t *ezsigndocumentdependency_request_create(
    int pki_ezsigndocumentdependency_id,
    int fki_ezsigndocument_i_ddependency
);

void ezsigndocumentdependency_request_free(ezsigndocumentdependency_request_t *ezsigndocumentdependency_request);

ezsigndocumentdependency_request_t *ezsigndocumentdependency_request_parseFromJSON(cJSON *ezsigndocumentdependency_requestJSON);

cJSON *ezsigndocumentdependency_request_convertToJSON(ezsigndocumentdependency_request_t *ezsigndocumentdependency_request);

#endif /* _ezsigndocumentdependency_request_H_ */

