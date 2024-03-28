/*
 * ezsigntemplateglobalsigner_response.h
 *
 * A Ezsigntemplateglobalsigner Object
 */

#ifndef _ezsigntemplateglobalsigner_response_H_
#define _ezsigntemplateglobalsigner_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplateglobalsigner_response_t ezsigntemplateglobalsigner_response_t;




typedef struct ezsigntemplateglobalsigner_response_t {
    int pki_ezsigntemplateglobalsigner_id; //numeric
    int fki_ezsigntemplateglobal_id; //numeric
    char *s_ezsigntemplateglobalsigner_description; // string

} ezsigntemplateglobalsigner_response_t;

ezsigntemplateglobalsigner_response_t *ezsigntemplateglobalsigner_response_create(
    int pki_ezsigntemplateglobalsigner_id,
    int fki_ezsigntemplateglobal_id,
    char *s_ezsigntemplateglobalsigner_description
);

void ezsigntemplateglobalsigner_response_free(ezsigntemplateglobalsigner_response_t *ezsigntemplateglobalsigner_response);

ezsigntemplateglobalsigner_response_t *ezsigntemplateglobalsigner_response_parseFromJSON(cJSON *ezsigntemplateglobalsigner_responseJSON);

cJSON *ezsigntemplateglobalsigner_response_convertToJSON(ezsigntemplateglobalsigner_response_t *ezsigntemplateglobalsigner_response);

#endif /* _ezsigntemplateglobalsigner_response_H_ */

