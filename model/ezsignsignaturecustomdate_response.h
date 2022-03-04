/*
 * ezsignsignaturecustomdate_response.h
 *
 * An Ezsignsignaturecustomdate Object
 */

#ifndef _ezsignsignaturecustomdate_response_H_
#define _ezsignsignaturecustomdate_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignaturecustomdate_response_t ezsignsignaturecustomdate_response_t;




typedef struct ezsignsignaturecustomdate_response_t {
    int pki_ezsignsignaturecustomdate_id; //numeric
    int i_ezsignsignaturecustomdate_x; //numeric
    int i_ezsignsignaturecustomdate_y; //numeric
    char *s_ezsignsignaturecustomdate_format; // string

} ezsignsignaturecustomdate_response_t;

ezsignsignaturecustomdate_response_t *ezsignsignaturecustomdate_response_create(
    int pki_ezsignsignaturecustomdate_id,
    int i_ezsignsignaturecustomdate_x,
    int i_ezsignsignaturecustomdate_y,
    char *s_ezsignsignaturecustomdate_format
);

void ezsignsignaturecustomdate_response_free(ezsignsignaturecustomdate_response_t *ezsignsignaturecustomdate_response);

ezsignsignaturecustomdate_response_t *ezsignsignaturecustomdate_response_parseFromJSON(cJSON *ezsignsignaturecustomdate_responseJSON);

cJSON *ezsignsignaturecustomdate_response_convertToJSON(ezsignsignaturecustomdate_response_t *ezsignsignaturecustomdate_response);

#endif /* _ezsignsignaturecustomdate_response_H_ */

