/*
 * ezsignsignaturecustomdate_response_compound.h
 *
 * An Ezsignsignaturecustomdate Object and children to create a complete structure
 */

#ifndef _ezsignsignaturecustomdate_response_compound_H_
#define _ezsignsignaturecustomdate_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignaturecustomdate_response_compound_t ezsignsignaturecustomdate_response_compound_t;




typedef struct ezsignsignaturecustomdate_response_compound_t {
    int pki_ezsignsignaturecustomdate_id; //numeric
    int i_ezsignsignaturecustomdate_x; //numeric
    int i_ezsignsignaturecustomdate_y; //numeric
    int i_ezsignsignaturecustomdate_offsetx; //numeric
    int i_ezsignsignaturecustomdate_offsety; //numeric
    char *s_ezsignsignaturecustomdate_format; // string

} ezsignsignaturecustomdate_response_compound_t;

ezsignsignaturecustomdate_response_compound_t *ezsignsignaturecustomdate_response_compound_create(
    int pki_ezsignsignaturecustomdate_id,
    int i_ezsignsignaturecustomdate_x,
    int i_ezsignsignaturecustomdate_y,
    int i_ezsignsignaturecustomdate_offsetx,
    int i_ezsignsignaturecustomdate_offsety,
    char *s_ezsignsignaturecustomdate_format
);

void ezsignsignaturecustomdate_response_compound_free(ezsignsignaturecustomdate_response_compound_t *ezsignsignaturecustomdate_response_compound);

ezsignsignaturecustomdate_response_compound_t *ezsignsignaturecustomdate_response_compound_parseFromJSON(cJSON *ezsignsignaturecustomdate_response_compoundJSON);

cJSON *ezsignsignaturecustomdate_response_compound_convertToJSON(ezsignsignaturecustomdate_response_compound_t *ezsignsignaturecustomdate_response_compound);

#endif /* _ezsignsignaturecustomdate_response_compound_H_ */

