/*
 * ezmaxinvoicingsummaryexternal_response_compound.h
 *
 * A Ezmaxinvoicingsummaryexternal Object
 */

#ifndef _ezmaxinvoicingsummaryexternal_response_compound_H_
#define _ezmaxinvoicingsummaryexternal_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxinvoicingsummaryexternal_response_compound_t ezmaxinvoicingsummaryexternal_response_compound_t;

#include "ezmaxinvoicingsummaryexternal_response.h"
#include "ezmaxinvoicingsummaryexternaldetail_response_compound.h"



typedef struct ezmaxinvoicingsummaryexternal_response_compound_t {
    int pki_ezmaxinvoicingsummaryexternal_id; //numeric
    int fki_ezmaxinvoicing_id; //numeric
    int fki_billingentityexternal_id; //numeric
    char *s_billingentityexternal_description; // string
    char *s_ezmaxinvoicingsummaryexternal_description; // string
    list_t *a_obj_ezmaxinvoicingsummaryexternaldetail; //nonprimitive container

} ezmaxinvoicingsummaryexternal_response_compound_t;

ezmaxinvoicingsummaryexternal_response_compound_t *ezmaxinvoicingsummaryexternal_response_compound_create(
    int pki_ezmaxinvoicingsummaryexternal_id,
    int fki_ezmaxinvoicing_id,
    int fki_billingentityexternal_id,
    char *s_billingentityexternal_description,
    char *s_ezmaxinvoicingsummaryexternal_description,
    list_t *a_obj_ezmaxinvoicingsummaryexternaldetail
);

void ezmaxinvoicingsummaryexternal_response_compound_free(ezmaxinvoicingsummaryexternal_response_compound_t *ezmaxinvoicingsummaryexternal_response_compound);

ezmaxinvoicingsummaryexternal_response_compound_t *ezmaxinvoicingsummaryexternal_response_compound_parseFromJSON(cJSON *ezmaxinvoicingsummaryexternal_response_compoundJSON);

cJSON *ezmaxinvoicingsummaryexternal_response_compound_convertToJSON(ezmaxinvoicingsummaryexternal_response_compound_t *ezmaxinvoicingsummaryexternal_response_compound);

#endif /* _ezmaxinvoicingsummaryexternal_response_compound_H_ */

