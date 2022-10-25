/*
 * ezmaxinvoicingcommission_response_compound_all_of.h
 *
 * 
 */

#ifndef _ezmaxinvoicingcommission_response_compound_all_of_H_
#define _ezmaxinvoicingcommission_response_compound_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxinvoicingcommission_response_compound_all_of_t ezmaxinvoicingcommission_response_compound_all_of_t;

#include "custom_contact_name_response.h"



typedef struct ezmaxinvoicingcommission_response_compound_all_of_t {
    struct custom_contact_name_response_t *obj_contact_name; //model

} ezmaxinvoicingcommission_response_compound_all_of_t;

ezmaxinvoicingcommission_response_compound_all_of_t *ezmaxinvoicingcommission_response_compound_all_of_create(
    custom_contact_name_response_t *obj_contact_name
);

void ezmaxinvoicingcommission_response_compound_all_of_free(ezmaxinvoicingcommission_response_compound_all_of_t *ezmaxinvoicingcommission_response_compound_all_of);

ezmaxinvoicingcommission_response_compound_all_of_t *ezmaxinvoicingcommission_response_compound_all_of_parseFromJSON(cJSON *ezmaxinvoicingcommission_response_compound_all_ofJSON);

cJSON *ezmaxinvoicingcommission_response_compound_all_of_convertToJSON(ezmaxinvoicingcommission_response_compound_all_of_t *ezmaxinvoicingcommission_response_compound_all_of);

#endif /* _ezmaxinvoicingcommission_response_compound_all_of_H_ */

