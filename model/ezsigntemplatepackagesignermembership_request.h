/*
 * ezsigntemplatepackagesignermembership_request.h
 *
 * A Ezsigntemplatepackagesignermembership Object
 */

#ifndef _ezsigntemplatepackagesignermembership_request_H_
#define _ezsigntemplatepackagesignermembership_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackagesignermembership_request_t ezsigntemplatepackagesignermembership_request_t;




typedef struct ezsigntemplatepackagesignermembership_request_t {
    int pki_ezsigntemplatepackagesignermembership_id; //numeric
    int fki_ezsigntemplatepackagemembership_id; //numeric
    int fki_ezsigntemplatepackagesigner_id; //numeric
    int fki_ezsigntemplatesigner_id; //numeric
    int i_ezsigntemplatepackagesignermembership_copy; //numeric

} ezsigntemplatepackagesignermembership_request_t;

ezsigntemplatepackagesignermembership_request_t *ezsigntemplatepackagesignermembership_request_create(
    int pki_ezsigntemplatepackagesignermembership_id,
    int fki_ezsigntemplatepackagemembership_id,
    int fki_ezsigntemplatepackagesigner_id,
    int fki_ezsigntemplatesigner_id,
    int i_ezsigntemplatepackagesignermembership_copy
);

void ezsigntemplatepackagesignermembership_request_free(ezsigntemplatepackagesignermembership_request_t *ezsigntemplatepackagesignermembership_request);

ezsigntemplatepackagesignermembership_request_t *ezsigntemplatepackagesignermembership_request_parseFromJSON(cJSON *ezsigntemplatepackagesignermembership_requestJSON);

cJSON *ezsigntemplatepackagesignermembership_request_convertToJSON(ezsigntemplatepackagesignermembership_request_t *ezsigntemplatepackagesignermembership_request);

#endif /* _ezsigntemplatepackagesignermembership_request_H_ */

