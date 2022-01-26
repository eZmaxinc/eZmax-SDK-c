/*
 * ezsignsignaturecustomdate_request.h
 *
 * An Ezsignsignaturecustomdate Object
 */

#ifndef _ezsignsignaturecustomdate_request_H_
#define _ezsignsignaturecustomdate_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignaturecustomdate_request_t ezsignsignaturecustomdate_request_t;




typedef struct ezsignsignaturecustomdate_request_t {
    int i_ezsignsignaturecustomdate_x; //numeric
    int i_ezsignsignaturecustomdate_y; //numeric
    char *s_ezsignsignaturecustomdate_format; // string

} ezsignsignaturecustomdate_request_t;

ezsignsignaturecustomdate_request_t *ezsignsignaturecustomdate_request_create(
    int i_ezsignsignaturecustomdate_x,
    int i_ezsignsignaturecustomdate_y,
    char *s_ezsignsignaturecustomdate_format
);

void ezsignsignaturecustomdate_request_free(ezsignsignaturecustomdate_request_t *ezsignsignaturecustomdate_request);

ezsignsignaturecustomdate_request_t *ezsignsignaturecustomdate_request_parseFromJSON(cJSON *ezsignsignaturecustomdate_requestJSON);

cJSON *ezsignsignaturecustomdate_request_convertToJSON(ezsignsignaturecustomdate_request_t *ezsignsignaturecustomdate_request);

#endif /* _ezsignsignaturecustomdate_request_H_ */

