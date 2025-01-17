/*
 * ezmaxinvoicingsummaryinternaldetail_response_compound.h
 *
 * A Ezmaxinvoicingsummaryinternaldetail Object
 */

#ifndef _ezmaxinvoicingsummaryinternaldetail_response_compound_H_
#define _ezmaxinvoicingsummaryinternaldetail_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxinvoicingsummaryinternaldetail_response_compound_t ezmaxinvoicingsummaryinternaldetail_response_compound_t;

#include "ezmaxinvoicingsummaryinternaldetail_response.h"



typedef struct ezmaxinvoicingsummaryinternaldetail_response_compound_t {
    int pki_ezmaxinvoicingsummaryinternaldetail_id; //numeric
    int fki_ezmaxinvoicingsummaryinternal_id; //numeric
    int fki_ezmaxproduct_id; //numeric
    char *s_ezmaxproduct_description_x; // string
    int fki_billingentityexternal_id; //numeric
    char *s_billingentityexternal_description; // string
    char *d_ezmaxinvoicingsummaryinternaldetail_countreal; // string
    char *d_ezmaxinvoicingsummaryinternaldetail_subtotal; // string
    char *d_ezmaxinvoicingsummaryinternaldetail_rebate; // string
    char *d_ezmaxinvoicingsummaryinternaldetail_total; // string
    int b_ezmaxinvoicingsummaryinternaldetail_adjustment; //boolean
    char *t_ezmaxproduct_help_x; // string

} ezmaxinvoicingsummaryinternaldetail_response_compound_t;

ezmaxinvoicingsummaryinternaldetail_response_compound_t *ezmaxinvoicingsummaryinternaldetail_response_compound_create(
    int pki_ezmaxinvoicingsummaryinternaldetail_id,
    int fki_ezmaxinvoicingsummaryinternal_id,
    int fki_ezmaxproduct_id,
    char *s_ezmaxproduct_description_x,
    int fki_billingentityexternal_id,
    char *s_billingentityexternal_description,
    char *d_ezmaxinvoicingsummaryinternaldetail_countreal,
    char *d_ezmaxinvoicingsummaryinternaldetail_subtotal,
    char *d_ezmaxinvoicingsummaryinternaldetail_rebate,
    char *d_ezmaxinvoicingsummaryinternaldetail_total,
    int b_ezmaxinvoicingsummaryinternaldetail_adjustment,
    char *t_ezmaxproduct_help_x
);

void ezmaxinvoicingsummaryinternaldetail_response_compound_free(ezmaxinvoicingsummaryinternaldetail_response_compound_t *ezmaxinvoicingsummaryinternaldetail_response_compound);

ezmaxinvoicingsummaryinternaldetail_response_compound_t *ezmaxinvoicingsummaryinternaldetail_response_compound_parseFromJSON(cJSON *ezmaxinvoicingsummaryinternaldetail_response_compoundJSON);

cJSON *ezmaxinvoicingsummaryinternaldetail_response_compound_convertToJSON(ezmaxinvoicingsummaryinternaldetail_response_compound_t *ezmaxinvoicingsummaryinternaldetail_response_compound);

#endif /* _ezmaxinvoicingsummaryinternaldetail_response_compound_H_ */

