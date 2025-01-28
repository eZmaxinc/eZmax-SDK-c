/*
 * ezsigntemplatesignaturecustomdate_response.h
 *
 * An Ezsigntemplatesignaturecustomdate Object
 */

#ifndef _ezsigntemplatesignaturecustomdate_response_H_
#define _ezsigntemplatesignaturecustomdate_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatesignaturecustomdate_response_t ezsigntemplatesignaturecustomdate_response_t;




typedef struct ezsigntemplatesignaturecustomdate_response_t {
    int pki_ezsigntemplatesignaturecustomdate_id; //numeric
    int i_ezsigntemplatesignaturecustomdate_x; //numeric
    int i_ezsigntemplatesignaturecustomdate_y; //numeric
    int i_ezsigntemplatesignaturecustomdate_offsetx; //numeric
    int i_ezsigntemplatesignaturecustomdate_offsety; //numeric
    char *s_ezsigntemplatesignaturecustomdate_format; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatesignaturecustomdate_response_t;

__attribute__((deprecated)) ezsigntemplatesignaturecustomdate_response_t *ezsigntemplatesignaturecustomdate_response_create(
    int pki_ezsigntemplatesignaturecustomdate_id,
    int i_ezsigntemplatesignaturecustomdate_x,
    int i_ezsigntemplatesignaturecustomdate_y,
    int i_ezsigntemplatesignaturecustomdate_offsetx,
    int i_ezsigntemplatesignaturecustomdate_offsety,
    char *s_ezsigntemplatesignaturecustomdate_format
);

void ezsigntemplatesignaturecustomdate_response_free(ezsigntemplatesignaturecustomdate_response_t *ezsigntemplatesignaturecustomdate_response);

ezsigntemplatesignaturecustomdate_response_t *ezsigntemplatesignaturecustomdate_response_parseFromJSON(cJSON *ezsigntemplatesignaturecustomdate_responseJSON);

cJSON *ezsigntemplatesignaturecustomdate_response_convertToJSON(ezsigntemplatesignaturecustomdate_response_t *ezsigntemplatesignaturecustomdate_response);

#endif /* _ezsigntemplatesignaturecustomdate_response_H_ */

