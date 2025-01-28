/*
 * ezmaxinvoicingsummaryexternaldetail_response_compound.h
 *
 * A Ezmaxinvoicingsummaryexternaldetail Object
 */

#ifndef _ezmaxinvoicingsummaryexternaldetail_response_compound_H_
#define _ezmaxinvoicingsummaryexternaldetail_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxinvoicingsummaryexternaldetail_response_compound_t ezmaxinvoicingsummaryexternaldetail_response_compound_t;




typedef struct ezmaxinvoicingsummaryexternaldetail_response_compound_t {
    int pki_ezmaxinvoicingsummaryexternaldetail_id; //numeric
    int fki_ezmaxinvoicingsummaryexternal_id; //numeric
    int fki_ezmaxproduct_id; //numeric
    char *s_ezmaxproduct_description_x; // string
    char *d_ezmaxinvoicingsummaryexternaldetail_countreal; // string
    char *d_ezmaxinvoicingsummaryexternaldetail_subtotal; // string
    char *d_ezmaxinvoicingsummaryexternaldetail_rebate; // string
    char *d_ezmaxinvoicingsummaryexternaldetail_total; // string
    int b_ezmaxinvoicingsummaryexternaldetail_adjustment; //boolean
    char *t_ezmaxproduct_help_x; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ezmaxinvoicingsummaryexternaldetail_response_compound_t;

__attribute__((deprecated)) ezmaxinvoicingsummaryexternaldetail_response_compound_t *ezmaxinvoicingsummaryexternaldetail_response_compound_create(
    int pki_ezmaxinvoicingsummaryexternaldetail_id,
    int fki_ezmaxinvoicingsummaryexternal_id,
    int fki_ezmaxproduct_id,
    char *s_ezmaxproduct_description_x,
    char *d_ezmaxinvoicingsummaryexternaldetail_countreal,
    char *d_ezmaxinvoicingsummaryexternaldetail_subtotal,
    char *d_ezmaxinvoicingsummaryexternaldetail_rebate,
    char *d_ezmaxinvoicingsummaryexternaldetail_total,
    int b_ezmaxinvoicingsummaryexternaldetail_adjustment,
    char *t_ezmaxproduct_help_x
);

void ezmaxinvoicingsummaryexternaldetail_response_compound_free(ezmaxinvoicingsummaryexternaldetail_response_compound_t *ezmaxinvoicingsummaryexternaldetail_response_compound);

ezmaxinvoicingsummaryexternaldetail_response_compound_t *ezmaxinvoicingsummaryexternaldetail_response_compound_parseFromJSON(cJSON *ezmaxinvoicingsummaryexternaldetail_response_compoundJSON);

cJSON *ezmaxinvoicingsummaryexternaldetail_response_compound_convertToJSON(ezmaxinvoicingsummaryexternaldetail_response_compound_t *ezmaxinvoicingsummaryexternaldetail_response_compound);

#endif /* _ezmaxinvoicingsummaryexternaldetail_response_compound_H_ */

