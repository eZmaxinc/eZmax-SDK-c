/*
 * ezmaxinvoicingsummaryexternaldetail_response.h
 *
 * A Ezmaxinvoicingsummaryexternaldetail Object
 */

#ifndef _ezmaxinvoicingsummaryexternaldetail_response_H_
#define _ezmaxinvoicingsummaryexternaldetail_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxinvoicingsummaryexternaldetail_response_t ezmaxinvoicingsummaryexternaldetail_response_t;




typedef struct ezmaxinvoicingsummaryexternaldetail_response_t {
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

} ezmaxinvoicingsummaryexternaldetail_response_t;

ezmaxinvoicingsummaryexternaldetail_response_t *ezmaxinvoicingsummaryexternaldetail_response_create(
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

void ezmaxinvoicingsummaryexternaldetail_response_free(ezmaxinvoicingsummaryexternaldetail_response_t *ezmaxinvoicingsummaryexternaldetail_response);

ezmaxinvoicingsummaryexternaldetail_response_t *ezmaxinvoicingsummaryexternaldetail_response_parseFromJSON(cJSON *ezmaxinvoicingsummaryexternaldetail_responseJSON);

cJSON *ezmaxinvoicingsummaryexternaldetail_response_convertToJSON(ezmaxinvoicingsummaryexternaldetail_response_t *ezmaxinvoicingsummaryexternaldetail_response);

#endif /* _ezmaxinvoicingsummaryexternaldetail_response_H_ */

