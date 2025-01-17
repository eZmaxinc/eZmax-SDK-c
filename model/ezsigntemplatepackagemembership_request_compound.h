/*
 * ezsigntemplatepackagemembership_request_compound.h
 *
 * A Ezsigntemplatepackagemembership Object and children
 */

#ifndef _ezsigntemplatepackagemembership_request_compound_H_
#define _ezsigntemplatepackagemembership_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackagemembership_request_compound_t ezsigntemplatepackagemembership_request_compound_t;




typedef struct ezsigntemplatepackagemembership_request_compound_t {
    int pki_ezsigntemplatepackagemembership_id; //numeric
    int fki_ezsigntemplatepackage_id; //numeric
    int fki_ezsigntemplate_id; //numeric

} ezsigntemplatepackagemembership_request_compound_t;

ezsigntemplatepackagemembership_request_compound_t *ezsigntemplatepackagemembership_request_compound_create(
    int pki_ezsigntemplatepackagemembership_id,
    int fki_ezsigntemplatepackage_id,
    int fki_ezsigntemplate_id
);

void ezsigntemplatepackagemembership_request_compound_free(ezsigntemplatepackagemembership_request_compound_t *ezsigntemplatepackagemembership_request_compound);

ezsigntemplatepackagemembership_request_compound_t *ezsigntemplatepackagemembership_request_compound_parseFromJSON(cJSON *ezsigntemplatepackagemembership_request_compoundJSON);

cJSON *ezsigntemplatepackagemembership_request_compound_convertToJSON(ezsigntemplatepackagemembership_request_compound_t *ezsigntemplatepackagemembership_request_compound);

#endif /* _ezsigntemplatepackagemembership_request_compound_H_ */

