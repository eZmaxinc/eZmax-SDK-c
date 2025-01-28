/*
 * ezsigntemplatepackagemembership_request.h
 *
 * A Ezsigntemplatepackagemembership Object
 */

#ifndef _ezsigntemplatepackagemembership_request_H_
#define _ezsigntemplatepackagemembership_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackagemembership_request_t ezsigntemplatepackagemembership_request_t;




typedef struct ezsigntemplatepackagemembership_request_t {
    int pki_ezsigntemplatepackagemembership_id; //numeric
    int fki_ezsigntemplatepackage_id; //numeric
    int fki_ezsigntemplate_id; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatepackagemembership_request_t;

__attribute__((deprecated)) ezsigntemplatepackagemembership_request_t *ezsigntemplatepackagemembership_request_create(
    int pki_ezsigntemplatepackagemembership_id,
    int fki_ezsigntemplatepackage_id,
    int fki_ezsigntemplate_id
);

void ezsigntemplatepackagemembership_request_free(ezsigntemplatepackagemembership_request_t *ezsigntemplatepackagemembership_request);

ezsigntemplatepackagemembership_request_t *ezsigntemplatepackagemembership_request_parseFromJSON(cJSON *ezsigntemplatepackagemembership_requestJSON);

cJSON *ezsigntemplatepackagemembership_request_convertToJSON(ezsigntemplatepackagemembership_request_t *ezsigntemplatepackagemembership_request);

#endif /* _ezsigntemplatepackagemembership_request_H_ */

