/*
 * ezsigntemplatepackagemembership_response.h
 *
 * A Ezsigntemplatepackagemembership Object
 */

#ifndef _ezsigntemplatepackagemembership_response_H_
#define _ezsigntemplatepackagemembership_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackagemembership_response_t ezsigntemplatepackagemembership_response_t;




typedef struct ezsigntemplatepackagemembership_response_t {
    int pki_ezsigntemplatepackagemembership_id; //numeric
    int fki_ezsigntemplatepackage_id; //numeric
    int fki_ezsigntemplate_id; //numeric
    int i_ezsigntemplatepackagemembership_order; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatepackagemembership_response_t;

__attribute__((deprecated)) ezsigntemplatepackagemembership_response_t *ezsigntemplatepackagemembership_response_create(
    int pki_ezsigntemplatepackagemembership_id,
    int fki_ezsigntemplatepackage_id,
    int fki_ezsigntemplate_id,
    int i_ezsigntemplatepackagemembership_order
);

void ezsigntemplatepackagemembership_response_free(ezsigntemplatepackagemembership_response_t *ezsigntemplatepackagemembership_response);

ezsigntemplatepackagemembership_response_t *ezsigntemplatepackagemembership_response_parseFromJSON(cJSON *ezsigntemplatepackagemembership_responseJSON);

cJSON *ezsigntemplatepackagemembership_response_convertToJSON(ezsigntemplatepackagemembership_response_t *ezsigntemplatepackagemembership_response);

#endif /* _ezsigntemplatepackagemembership_response_H_ */

