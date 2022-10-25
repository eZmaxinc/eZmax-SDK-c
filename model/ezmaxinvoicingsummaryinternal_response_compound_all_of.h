/*
 * ezmaxinvoicingsummaryinternal_response_compound_all_of.h
 *
 * 
 */

#ifndef _ezmaxinvoicingsummaryinternal_response_compound_all_of_H_
#define _ezmaxinvoicingsummaryinternal_response_compound_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxinvoicingsummaryinternal_response_compound_all_of_t ezmaxinvoicingsummaryinternal_response_compound_all_of_t;

#include "ezmaxinvoicingsummaryinternaldetail_response_compound.h"



typedef struct ezmaxinvoicingsummaryinternal_response_compound_all_of_t {
    list_t *a_obj_ezmaxinvoicingsummaryinternaldetail; //nonprimitive container

} ezmaxinvoicingsummaryinternal_response_compound_all_of_t;

ezmaxinvoicingsummaryinternal_response_compound_all_of_t *ezmaxinvoicingsummaryinternal_response_compound_all_of_create(
    list_t *a_obj_ezmaxinvoicingsummaryinternaldetail
);

void ezmaxinvoicingsummaryinternal_response_compound_all_of_free(ezmaxinvoicingsummaryinternal_response_compound_all_of_t *ezmaxinvoicingsummaryinternal_response_compound_all_of);

ezmaxinvoicingsummaryinternal_response_compound_all_of_t *ezmaxinvoicingsummaryinternal_response_compound_all_of_parseFromJSON(cJSON *ezmaxinvoicingsummaryinternal_response_compound_all_ofJSON);

cJSON *ezmaxinvoicingsummaryinternal_response_compound_all_of_convertToJSON(ezmaxinvoicingsummaryinternal_response_compound_all_of_t *ezmaxinvoicingsummaryinternal_response_compound_all_of);

#endif /* _ezmaxinvoicingsummaryinternal_response_compound_all_of_H_ */

