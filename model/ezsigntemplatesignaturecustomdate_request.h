/*
 * ezsigntemplatesignaturecustomdate_request.h
 *
 * An Ezsigntemplatesignaturecustomdate Object
 */

#ifndef _ezsigntemplatesignaturecustomdate_request_H_
#define _ezsigntemplatesignaturecustomdate_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatesignaturecustomdate_request_t ezsigntemplatesignaturecustomdate_request_t;




typedef struct ezsigntemplatesignaturecustomdate_request_t {
    int pki_ezsigntemplatesignaturecustomdate_id; //numeric
    int i_ezsigntemplatesignaturecustomdate_x; //numeric
    int i_ezsigntemplatesignaturecustomdate_y; //numeric
    int i_ezsigntemplatesignaturecustomdate_offsetx; //numeric
    int i_ezsigntemplatesignaturecustomdate_offsety; //numeric
    char *s_ezsigntemplatesignaturecustomdate_format; // string

} ezsigntemplatesignaturecustomdate_request_t;

ezsigntemplatesignaturecustomdate_request_t *ezsigntemplatesignaturecustomdate_request_create(
    int pki_ezsigntemplatesignaturecustomdate_id,
    int i_ezsigntemplatesignaturecustomdate_x,
    int i_ezsigntemplatesignaturecustomdate_y,
    int i_ezsigntemplatesignaturecustomdate_offsetx,
    int i_ezsigntemplatesignaturecustomdate_offsety,
    char *s_ezsigntemplatesignaturecustomdate_format
);

void ezsigntemplatesignaturecustomdate_request_free(ezsigntemplatesignaturecustomdate_request_t *ezsigntemplatesignaturecustomdate_request);

ezsigntemplatesignaturecustomdate_request_t *ezsigntemplatesignaturecustomdate_request_parseFromJSON(cJSON *ezsigntemplatesignaturecustomdate_requestJSON);

cJSON *ezsigntemplatesignaturecustomdate_request_convertToJSON(ezsigntemplatesignaturecustomdate_request_t *ezsigntemplatesignaturecustomdate_request);

#endif /* _ezsigntemplatesignaturecustomdate_request_H_ */

