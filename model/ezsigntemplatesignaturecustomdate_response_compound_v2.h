/*
 * ezsigntemplatesignaturecustomdate_response_compound_v2.h
 *
 * An Ezsigntemplatesignaturecustomdate Object and children to create a complete structure
 */

#ifndef _ezsigntemplatesignaturecustomdate_response_compound_v2_H_
#define _ezsigntemplatesignaturecustomdate_response_compound_v2_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatesignaturecustomdate_response_compound_v2_t ezsigntemplatesignaturecustomdate_response_compound_v2_t;




typedef struct ezsigntemplatesignaturecustomdate_response_compound_v2_t {
    int pki_ezsigntemplatesignaturecustomdate_id; //numeric
    int i_ezsigntemplatesignaturecustomdate_offsetx; //numeric
    int i_ezsigntemplatesignaturecustomdate_offsety; //numeric
    char *s_ezsigntemplatesignaturecustomdate_format; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatesignaturecustomdate_response_compound_v2_t;

__attribute__((deprecated)) ezsigntemplatesignaturecustomdate_response_compound_v2_t *ezsigntemplatesignaturecustomdate_response_compound_v2_create(
    int pki_ezsigntemplatesignaturecustomdate_id,
    int i_ezsigntemplatesignaturecustomdate_offsetx,
    int i_ezsigntemplatesignaturecustomdate_offsety,
    char *s_ezsigntemplatesignaturecustomdate_format
);

void ezsigntemplatesignaturecustomdate_response_compound_v2_free(ezsigntemplatesignaturecustomdate_response_compound_v2_t *ezsigntemplatesignaturecustomdate_response_compound_v2);

ezsigntemplatesignaturecustomdate_response_compound_v2_t *ezsigntemplatesignaturecustomdate_response_compound_v2_parseFromJSON(cJSON *ezsigntemplatesignaturecustomdate_response_compound_v2JSON);

cJSON *ezsigntemplatesignaturecustomdate_response_compound_v2_convertToJSON(ezsigntemplatesignaturecustomdate_response_compound_v2_t *ezsigntemplatesignaturecustomdate_response_compound_v2);

#endif /* _ezsigntemplatesignaturecustomdate_response_compound_v2_H_ */

