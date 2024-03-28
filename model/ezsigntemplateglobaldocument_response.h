/*
 * ezsigntemplateglobaldocument_response.h
 *
 * A Ezsigntemplateglobaldocument Object
 */

#ifndef _ezsigntemplateglobaldocument_response_H_
#define _ezsigntemplateglobaldocument_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplateglobaldocument_response_t ezsigntemplateglobaldocument_response_t;




typedef struct ezsigntemplateglobaldocument_response_t {
    int pki_ezsigntemplateglobaldocument_id; //numeric
    char *s_ezsigntemplateglobaldocument_name; // string
    int i_ezsigntemplateglobaldocument_pagetotal; //numeric
    int i_ezsigntemplateglobaldocument_signaturetotal; //numeric

} ezsigntemplateglobaldocument_response_t;

ezsigntemplateglobaldocument_response_t *ezsigntemplateglobaldocument_response_create(
    int pki_ezsigntemplateglobaldocument_id,
    char *s_ezsigntemplateglobaldocument_name,
    int i_ezsigntemplateglobaldocument_pagetotal,
    int i_ezsigntemplateglobaldocument_signaturetotal
);

void ezsigntemplateglobaldocument_response_free(ezsigntemplateglobaldocument_response_t *ezsigntemplateglobaldocument_response);

ezsigntemplateglobaldocument_response_t *ezsigntemplateglobaldocument_response_parseFromJSON(cJSON *ezsigntemplateglobaldocument_responseJSON);

cJSON *ezsigntemplateglobaldocument_response_convertToJSON(ezsigntemplateglobaldocument_response_t *ezsigntemplateglobaldocument_response);

#endif /* _ezsigntemplateglobaldocument_response_H_ */

