/*
 * ezsigntemplatedocument_response_compound.h
 *
 * A Ezsigntemplatedocument Object
 */

#ifndef _ezsigntemplatedocument_response_compound_H_
#define _ezsigntemplatedocument_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatedocument_response_compound_t ezsigntemplatedocument_response_compound_t;

#include "ezsigntemplatedocument_response.h"



typedef struct ezsigntemplatedocument_response_compound_t {
    int pki_ezsigntemplatedocument_id; //numeric
    int fki_ezsigntemplate_id; //numeric
    char *s_ezsigntemplatedocument_name; // string
    int i_ezsigntemplatedocument_pagetotal; //numeric
    int i_ezsigntemplatedocument_signaturetotal; //numeric

} ezsigntemplatedocument_response_compound_t;

ezsigntemplatedocument_response_compound_t *ezsigntemplatedocument_response_compound_create(
    int pki_ezsigntemplatedocument_id,
    int fki_ezsigntemplate_id,
    char *s_ezsigntemplatedocument_name,
    int i_ezsigntemplatedocument_pagetotal,
    int i_ezsigntemplatedocument_signaturetotal
);

void ezsigntemplatedocument_response_compound_free(ezsigntemplatedocument_response_compound_t *ezsigntemplatedocument_response_compound);

ezsigntemplatedocument_response_compound_t *ezsigntemplatedocument_response_compound_parseFromJSON(cJSON *ezsigntemplatedocument_response_compoundJSON);

cJSON *ezsigntemplatedocument_response_compound_convertToJSON(ezsigntemplatedocument_response_compound_t *ezsigntemplatedocument_response_compound);

#endif /* _ezsigntemplatedocument_response_compound_H_ */

