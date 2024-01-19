/*
 * ezsigntemplatesignaturecustomdate_response_compound.h
 *
 * An Ezsigntemplatesignaturecustomdate Object and children to create a complete structure
 */

#ifndef _ezsigntemplatesignaturecustomdate_response_compound_H_
#define _ezsigntemplatesignaturecustomdate_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatesignaturecustomdate_response_compound_t ezsigntemplatesignaturecustomdate_response_compound_t;




typedef struct ezsigntemplatesignaturecustomdate_response_compound_t {
    int pki_ezsigntemplatesignaturecustomdate_id; //numeric
    int i_ezsigntemplatesignaturecustomdate_x; //numeric
    int i_ezsigntemplatesignaturecustomdate_y; //numeric
    int i_ezsigntemplatesignaturecustomdate_offsetx; //numeric
    int i_ezsigntemplatesignaturecustomdate_offsety; //numeric
    char *s_ezsigntemplatesignaturecustomdate_format; // string

} ezsigntemplatesignaturecustomdate_response_compound_t;

ezsigntemplatesignaturecustomdate_response_compound_t *ezsigntemplatesignaturecustomdate_response_compound_create(
    int pki_ezsigntemplatesignaturecustomdate_id,
    int i_ezsigntemplatesignaturecustomdate_x,
    int i_ezsigntemplatesignaturecustomdate_y,
    int i_ezsigntemplatesignaturecustomdate_offsetx,
    int i_ezsigntemplatesignaturecustomdate_offsety,
    char *s_ezsigntemplatesignaturecustomdate_format
);

void ezsigntemplatesignaturecustomdate_response_compound_free(ezsigntemplatesignaturecustomdate_response_compound_t *ezsigntemplatesignaturecustomdate_response_compound);

ezsigntemplatesignaturecustomdate_response_compound_t *ezsigntemplatesignaturecustomdate_response_compound_parseFromJSON(cJSON *ezsigntemplatesignaturecustomdate_response_compoundJSON);

cJSON *ezsigntemplatesignaturecustomdate_response_compound_convertToJSON(ezsigntemplatesignaturecustomdate_response_compound_t *ezsigntemplatesignaturecustomdate_response_compound);

#endif /* _ezsigntemplatesignaturecustomdate_response_compound_H_ */

