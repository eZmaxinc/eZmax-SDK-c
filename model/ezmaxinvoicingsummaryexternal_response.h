/*
 * ezmaxinvoicingsummaryexternal_response.h
 *
 * A Ezmaxinvoicingsummaryexternal Object
 */

#ifndef _ezmaxinvoicingsummaryexternal_response_H_
#define _ezmaxinvoicingsummaryexternal_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxinvoicingsummaryexternal_response_t ezmaxinvoicingsummaryexternal_response_t;




typedef struct ezmaxinvoicingsummaryexternal_response_t {
    int pki_ezmaxinvoicingsummaryexternal_id; //numeric
    int fki_ezmaxinvoicing_id; //numeric
    int fki_billingentityexternal_id; //numeric
    char *s_billingentityexternal_description; // string
    char *s_ezmaxinvoicingsummaryexternal_description; // string

} ezmaxinvoicingsummaryexternal_response_t;

ezmaxinvoicingsummaryexternal_response_t *ezmaxinvoicingsummaryexternal_response_create(
    int pki_ezmaxinvoicingsummaryexternal_id,
    int fki_ezmaxinvoicing_id,
    int fki_billingentityexternal_id,
    char *s_billingentityexternal_description,
    char *s_ezmaxinvoicingsummaryexternal_description
);

void ezmaxinvoicingsummaryexternal_response_free(ezmaxinvoicingsummaryexternal_response_t *ezmaxinvoicingsummaryexternal_response);

ezmaxinvoicingsummaryexternal_response_t *ezmaxinvoicingsummaryexternal_response_parseFromJSON(cJSON *ezmaxinvoicingsummaryexternal_responseJSON);

cJSON *ezmaxinvoicingsummaryexternal_response_convertToJSON(ezmaxinvoicingsummaryexternal_response_t *ezmaxinvoicingsummaryexternal_response);

#endif /* _ezmaxinvoicingsummaryexternal_response_H_ */

