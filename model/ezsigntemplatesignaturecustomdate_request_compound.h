/*
 * ezsigntemplatesignaturecustomdate_request_compound.h
 *
 * An Ezsigntemplatesignaturecustomdate Object and children to create a complete structure
 */

#ifndef _ezsigntemplatesignaturecustomdate_request_compound_H_
#define _ezsigntemplatesignaturecustomdate_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatesignaturecustomdate_request_compound_t ezsigntemplatesignaturecustomdate_request_compound_t;




typedef struct ezsigntemplatesignaturecustomdate_request_compound_t {
    int pki_ezsigntemplatesignaturecustomdate_id; //numeric
    int i_ezsigntemplatesignaturecustomdate_x; //numeric
    int i_ezsigntemplatesignaturecustomdate_y; //numeric
    char *s_ezsigntemplatesignaturecustomdate_format; // string

} ezsigntemplatesignaturecustomdate_request_compound_t;

ezsigntemplatesignaturecustomdate_request_compound_t *ezsigntemplatesignaturecustomdate_request_compound_create(
    int pki_ezsigntemplatesignaturecustomdate_id,
    int i_ezsigntemplatesignaturecustomdate_x,
    int i_ezsigntemplatesignaturecustomdate_y,
    char *s_ezsigntemplatesignaturecustomdate_format
);

void ezsigntemplatesignaturecustomdate_request_compound_free(ezsigntemplatesignaturecustomdate_request_compound_t *ezsigntemplatesignaturecustomdate_request_compound);

ezsigntemplatesignaturecustomdate_request_compound_t *ezsigntemplatesignaturecustomdate_request_compound_parseFromJSON(cJSON *ezsigntemplatesignaturecustomdate_request_compoundJSON);

cJSON *ezsigntemplatesignaturecustomdate_request_compound_convertToJSON(ezsigntemplatesignaturecustomdate_request_compound_t *ezsigntemplatesignaturecustomdate_request_compound);

#endif /* _ezsigntemplatesignaturecustomdate_request_compound_H_ */

