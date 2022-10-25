/*
 * ezmaxinvoicingagent_response_compound_all_of.h
 *
 * 
 */

#ifndef _ezmaxinvoicingagent_response_compound_all_of_H_
#define _ezmaxinvoicingagent_response_compound_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxinvoicingagent_response_compound_all_of_t ezmaxinvoicingagent_response_compound_all_of_t;

#include "custom_contact_name_response.h"



typedef struct ezmaxinvoicingagent_response_compound_all_of_t {
    struct custom_contact_name_response_t *obj_contact_name; //model

} ezmaxinvoicingagent_response_compound_all_of_t;

ezmaxinvoicingagent_response_compound_all_of_t *ezmaxinvoicingagent_response_compound_all_of_create(
    custom_contact_name_response_t *obj_contact_name
);

void ezmaxinvoicingagent_response_compound_all_of_free(ezmaxinvoicingagent_response_compound_all_of_t *ezmaxinvoicingagent_response_compound_all_of);

ezmaxinvoicingagent_response_compound_all_of_t *ezmaxinvoicingagent_response_compound_all_of_parseFromJSON(cJSON *ezmaxinvoicingagent_response_compound_all_ofJSON);

cJSON *ezmaxinvoicingagent_response_compound_all_of_convertToJSON(ezmaxinvoicingagent_response_compound_all_of_t *ezmaxinvoicingagent_response_compound_all_of);

#endif /* _ezmaxinvoicingagent_response_compound_all_of_H_ */

