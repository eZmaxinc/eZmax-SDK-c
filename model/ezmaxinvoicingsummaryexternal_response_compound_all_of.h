/*
 * ezmaxinvoicingsummaryexternal_response_compound_all_of.h
 *
 * 
 */

#ifndef _ezmaxinvoicingsummaryexternal_response_compound_all_of_H_
#define _ezmaxinvoicingsummaryexternal_response_compound_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxinvoicingsummaryexternal_response_compound_all_of_t ezmaxinvoicingsummaryexternal_response_compound_all_of_t;

#include "ezmaxinvoicingsummaryexternaldetail_response_compound.h"



typedef struct ezmaxinvoicingsummaryexternal_response_compound_all_of_t {
    list_t *a_obj_ezmaxinvoicingsummaryexternaldetail; //nonprimitive container

} ezmaxinvoicingsummaryexternal_response_compound_all_of_t;

ezmaxinvoicingsummaryexternal_response_compound_all_of_t *ezmaxinvoicingsummaryexternal_response_compound_all_of_create(
    list_t *a_obj_ezmaxinvoicingsummaryexternaldetail
);

void ezmaxinvoicingsummaryexternal_response_compound_all_of_free(ezmaxinvoicingsummaryexternal_response_compound_all_of_t *ezmaxinvoicingsummaryexternal_response_compound_all_of);

ezmaxinvoicingsummaryexternal_response_compound_all_of_t *ezmaxinvoicingsummaryexternal_response_compound_all_of_parseFromJSON(cJSON *ezmaxinvoicingsummaryexternal_response_compound_all_ofJSON);

cJSON *ezmaxinvoicingsummaryexternal_response_compound_all_of_convertToJSON(ezmaxinvoicingsummaryexternal_response_compound_all_of_t *ezmaxinvoicingsummaryexternal_response_compound_all_of);

#endif /* _ezmaxinvoicingsummaryexternal_response_compound_all_of_H_ */

