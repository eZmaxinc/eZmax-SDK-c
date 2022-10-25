/*
 * ezmaxinvoicingsummaryglobal_response_compound_all_of.h
 *
 * 
 */

#ifndef _ezmaxinvoicingsummaryglobal_response_compound_all_of_H_
#define _ezmaxinvoicingsummaryglobal_response_compound_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxinvoicingsummaryglobal_response_compound_all_of_t ezmaxinvoicingsummaryglobal_response_compound_all_of_t;

#include "ezmaxinvoicingcommission_response_compound.h"



typedef struct ezmaxinvoicingsummaryglobal_response_compound_all_of_t {
    list_t *a_obj_ezmaxinvoicingcommission; //nonprimitive container

} ezmaxinvoicingsummaryglobal_response_compound_all_of_t;

ezmaxinvoicingsummaryglobal_response_compound_all_of_t *ezmaxinvoicingsummaryglobal_response_compound_all_of_create(
    list_t *a_obj_ezmaxinvoicingcommission
);

void ezmaxinvoicingsummaryglobal_response_compound_all_of_free(ezmaxinvoicingsummaryglobal_response_compound_all_of_t *ezmaxinvoicingsummaryglobal_response_compound_all_of);

ezmaxinvoicingsummaryglobal_response_compound_all_of_t *ezmaxinvoicingsummaryglobal_response_compound_all_of_parseFromJSON(cJSON *ezmaxinvoicingsummaryglobal_response_compound_all_ofJSON);

cJSON *ezmaxinvoicingsummaryglobal_response_compound_all_of_convertToJSON(ezmaxinvoicingsummaryglobal_response_compound_all_of_t *ezmaxinvoicingsummaryglobal_response_compound_all_of);

#endif /* _ezmaxinvoicingsummaryglobal_response_compound_all_of_H_ */

