/*
 * ezsigntemplatepackagesignermembership_response.h
 *
 * A Ezsigntemplatepackagesignermembership Object
 */

#ifndef _ezsigntemplatepackagesignermembership_response_H_
#define _ezsigntemplatepackagesignermembership_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackagesignermembership_response_t ezsigntemplatepackagesignermembership_response_t;




typedef struct ezsigntemplatepackagesignermembership_response_t {
    int pki_ezsigntemplatepackagesignermembership_id; //numeric
    int fki_ezsigntemplatepackagemembership_id; //numeric
    int fki_ezsigntemplatepackagesigner_id; //numeric
    int fki_ezsigntemplatesigner_id; //numeric
    int i_ezsigntemplatepackagesignermembership_copy; //numeric

} ezsigntemplatepackagesignermembership_response_t;

ezsigntemplatepackagesignermembership_response_t *ezsigntemplatepackagesignermembership_response_create(
    int pki_ezsigntemplatepackagesignermembership_id,
    int fki_ezsigntemplatepackagemembership_id,
    int fki_ezsigntemplatepackagesigner_id,
    int fki_ezsigntemplatesigner_id,
    int i_ezsigntemplatepackagesignermembership_copy
);

void ezsigntemplatepackagesignermembership_response_free(ezsigntemplatepackagesignermembership_response_t *ezsigntemplatepackagesignermembership_response);

ezsigntemplatepackagesignermembership_response_t *ezsigntemplatepackagesignermembership_response_parseFromJSON(cJSON *ezsigntemplatepackagesignermembership_responseJSON);

cJSON *ezsigntemplatepackagesignermembership_response_convertToJSON(ezsigntemplatepackagesignermembership_response_t *ezsigntemplatepackagesignermembership_response);

#endif /* _ezsigntemplatepackagesignermembership_response_H_ */

