/*
 * ezmaxinvoicingsummaryinternal_response_compound.h
 *
 * A Ezmaxinvoicingsummaryinternal Object
 */

#ifndef _ezmaxinvoicingsummaryinternal_response_compound_H_
#define _ezmaxinvoicingsummaryinternal_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxinvoicingsummaryinternal_response_compound_t ezmaxinvoicingsummaryinternal_response_compound_t;

#include "ezmaxinvoicingsummaryinternaldetail_response_compound.h"
#include "multilingual_ezmaxinvoicingsummaryinternal_description.h"



typedef struct ezmaxinvoicingsummaryinternal_response_compound_t {
    int pki_ezmaxinvoicingsummaryinternal_id; //numeric
    struct multilingual_ezmaxinvoicingsummaryinternal_description_t *obj_ezmaxinvoicingsummaryinternal_description; //model
    char *s_ezmaxinvoicingsummaryinternal_description_x; // string
    int fki_ezmaxinvoicing_id; //numeric
    int fki_billingentityinternal_id; //numeric
    char *s_billingentityinternal_description_x; // string
    list_t *a_obj_ezmaxinvoicingsummaryinternaldetail; //nonprimitive container

} ezmaxinvoicingsummaryinternal_response_compound_t;

ezmaxinvoicingsummaryinternal_response_compound_t *ezmaxinvoicingsummaryinternal_response_compound_create(
    int pki_ezmaxinvoicingsummaryinternal_id,
    multilingual_ezmaxinvoicingsummaryinternal_description_t *obj_ezmaxinvoicingsummaryinternal_description,
    char *s_ezmaxinvoicingsummaryinternal_description_x,
    int fki_ezmaxinvoicing_id,
    int fki_billingentityinternal_id,
    char *s_billingentityinternal_description_x,
    list_t *a_obj_ezmaxinvoicingsummaryinternaldetail
);

void ezmaxinvoicingsummaryinternal_response_compound_free(ezmaxinvoicingsummaryinternal_response_compound_t *ezmaxinvoicingsummaryinternal_response_compound);

ezmaxinvoicingsummaryinternal_response_compound_t *ezmaxinvoicingsummaryinternal_response_compound_parseFromJSON(cJSON *ezmaxinvoicingsummaryinternal_response_compoundJSON);

cJSON *ezmaxinvoicingsummaryinternal_response_compound_convertToJSON(ezmaxinvoicingsummaryinternal_response_compound_t *ezmaxinvoicingsummaryinternal_response_compound);

#endif /* _ezmaxinvoicingsummaryinternal_response_compound_H_ */

