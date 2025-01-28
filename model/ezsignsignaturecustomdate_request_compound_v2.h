/*
 * ezsignsignaturecustomdate_request_compound_v2.h
 *
 * An Ezsignsignaturecustomdate Object and children to create a complete structure
 */

#ifndef _ezsignsignaturecustomdate_request_compound_v2_H_
#define _ezsignsignaturecustomdate_request_compound_v2_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignaturecustomdate_request_compound_v2_t ezsignsignaturecustomdate_request_compound_v2_t;




typedef struct ezsignsignaturecustomdate_request_compound_v2_t {
    int pki_ezsignsignaturecustomdate_id; //numeric
    int i_ezsignsignaturecustomdate_offsetx; //numeric
    int i_ezsignsignaturecustomdate_offsety; //numeric
    char *s_ezsignsignaturecustomdate_format; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignsignaturecustomdate_request_compound_v2_t;

__attribute__((deprecated)) ezsignsignaturecustomdate_request_compound_v2_t *ezsignsignaturecustomdate_request_compound_v2_create(
    int pki_ezsignsignaturecustomdate_id,
    int i_ezsignsignaturecustomdate_offsetx,
    int i_ezsignsignaturecustomdate_offsety,
    char *s_ezsignsignaturecustomdate_format
);

void ezsignsignaturecustomdate_request_compound_v2_free(ezsignsignaturecustomdate_request_compound_v2_t *ezsignsignaturecustomdate_request_compound_v2);

ezsignsignaturecustomdate_request_compound_v2_t *ezsignsignaturecustomdate_request_compound_v2_parseFromJSON(cJSON *ezsignsignaturecustomdate_request_compound_v2JSON);

cJSON *ezsignsignaturecustomdate_request_compound_v2_convertToJSON(ezsignsignaturecustomdate_request_compound_v2_t *ezsignsignaturecustomdate_request_compound_v2);

#endif /* _ezsignsignaturecustomdate_request_compound_v2_H_ */

