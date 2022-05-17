/*
 * ezsigntemplatepackagesigner_response.h
 *
 * A Ezsigntemplatepackagesigner Object
 */

#ifndef _ezsigntemplatepackagesigner_response_H_
#define _ezsigntemplatepackagesigner_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackagesigner_response_t ezsigntemplatepackagesigner_response_t;




typedef struct ezsigntemplatepackagesigner_response_t {
    int pki_ezsigntemplatepackagesigner_id; //numeric
    int fki_ezsigntemplatepackage_id; //numeric
    char *s_ezsigntemplatepackagesigner_description; // string

} ezsigntemplatepackagesigner_response_t;

ezsigntemplatepackagesigner_response_t *ezsigntemplatepackagesigner_response_create(
    int pki_ezsigntemplatepackagesigner_id,
    int fki_ezsigntemplatepackage_id,
    char *s_ezsigntemplatepackagesigner_description
);

void ezsigntemplatepackagesigner_response_free(ezsigntemplatepackagesigner_response_t *ezsigntemplatepackagesigner_response);

ezsigntemplatepackagesigner_response_t *ezsigntemplatepackagesigner_response_parseFromJSON(cJSON *ezsigntemplatepackagesigner_responseJSON);

cJSON *ezsigntemplatepackagesigner_response_convertToJSON(ezsigntemplatepackagesigner_response_t *ezsigntemplatepackagesigner_response);

#endif /* _ezsigntemplatepackagesigner_response_H_ */

