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
    int i_ezsigntemplatesignaturecustomdate_offsetx; //numeric
    int i_ezsigntemplatesignaturecustomdate_offsety; //numeric
    char *s_ezsigntemplatesignaturecustomdate_format; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatesignaturecustomdate_request_compound_t;

__attribute__((deprecated)) ezsigntemplatesignaturecustomdate_request_compound_t *ezsigntemplatesignaturecustomdate_request_compound_create(
    int pki_ezsigntemplatesignaturecustomdate_id,
    int i_ezsigntemplatesignaturecustomdate_x,
    int i_ezsigntemplatesignaturecustomdate_y,
    int i_ezsigntemplatesignaturecustomdate_offsetx,
    int i_ezsigntemplatesignaturecustomdate_offsety,
    char *s_ezsigntemplatesignaturecustomdate_format
);

void ezsigntemplatesignaturecustomdate_request_compound_free(ezsigntemplatesignaturecustomdate_request_compound_t *ezsigntemplatesignaturecustomdate_request_compound);

ezsigntemplatesignaturecustomdate_request_compound_t *ezsigntemplatesignaturecustomdate_request_compound_parseFromJSON(cJSON *ezsigntemplatesignaturecustomdate_request_compoundJSON);

cJSON *ezsigntemplatesignaturecustomdate_request_compound_convertToJSON(ezsigntemplatesignaturecustomdate_request_compound_t *ezsigntemplatesignaturecustomdate_request_compound);

#endif /* _ezsigntemplatesignaturecustomdate_request_compound_H_ */

