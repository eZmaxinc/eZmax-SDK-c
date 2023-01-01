/*
 * ezmaxinvoicingsummaryglobal_response_compound.h
 *
 * A Ezmaxinvoicingsummaryglobal Object
 */

#ifndef _ezmaxinvoicingsummaryglobal_response_compound_H_
#define _ezmaxinvoicingsummaryglobal_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxinvoicingsummaryglobal_response_compound_t ezmaxinvoicingsummaryglobal_response_compound_t;

#include "ezmaxinvoicingcommission_response_compound.h"



typedef struct ezmaxinvoicingsummaryglobal_response_compound_t {
    int pki_ezmaxinvoicingsummaryglobal_id; //numeric
    int fki_ezmaxinvoicing_id; //numeric
    int fki_ezmaxproduct_id; //numeric
    char *s_ezmaxproduct_description_x; // string
    char *dt_ezmaxinvoicingsummaryglobal_start; // string
    char *dt_ezmaxinvoicingsummaryglobal_end; // string
    int i_ezmaxinvoicingsummaryglobal_days; //numeric
    char *d_ezmaxinvoicingsummaryglobal_countreal; // string
    char *d_ezmaxinvoicingsummaryglobal_countbilled; // string
    char *d_ezmaxinvoicingsummaryglobal_subtotal; // string
    char *d_ezmaxinvoicingsummaryglobal_rebateamount; // string
    char *d_ezmaxinvoicingsummaryglobal_rebatepercent; // string
    char *d_ezmaxinvoicingsummaryglobal_rebatetotal; // string
    char *d_ezmaxinvoicingsummaryglobal_total; // string
    char *d_ezmaxinvoicingsummaryglobal_representative; // string
    char *d_ezmaxinvoicingsummaryglobal_partner; // string
    char *d_ezmaxinvoicingsummaryglobal_net; // string
    int b_ezmaxinvoicingsummaryglobal_adjustment; //boolean
    list_t *a_obj_ezmaxinvoicingcommission; //nonprimitive container

} ezmaxinvoicingsummaryglobal_response_compound_t;

ezmaxinvoicingsummaryglobal_response_compound_t *ezmaxinvoicingsummaryglobal_response_compound_create(
    int pki_ezmaxinvoicingsummaryglobal_id,
    int fki_ezmaxinvoicing_id,
    int fki_ezmaxproduct_id,
    char *s_ezmaxproduct_description_x,
    char *dt_ezmaxinvoicingsummaryglobal_start,
    char *dt_ezmaxinvoicingsummaryglobal_end,
    int i_ezmaxinvoicingsummaryglobal_days,
    char *d_ezmaxinvoicingsummaryglobal_countreal,
    char *d_ezmaxinvoicingsummaryglobal_countbilled,
    char *d_ezmaxinvoicingsummaryglobal_subtotal,
    char *d_ezmaxinvoicingsummaryglobal_rebateamount,
    char *d_ezmaxinvoicingsummaryglobal_rebatepercent,
    char *d_ezmaxinvoicingsummaryglobal_rebatetotal,
    char *d_ezmaxinvoicingsummaryglobal_total,
    char *d_ezmaxinvoicingsummaryglobal_representative,
    char *d_ezmaxinvoicingsummaryglobal_partner,
    char *d_ezmaxinvoicingsummaryglobal_net,
    int b_ezmaxinvoicingsummaryglobal_adjustment,
    list_t *a_obj_ezmaxinvoicingcommission
);

void ezmaxinvoicingsummaryglobal_response_compound_free(ezmaxinvoicingsummaryglobal_response_compound_t *ezmaxinvoicingsummaryglobal_response_compound);

ezmaxinvoicingsummaryglobal_response_compound_t *ezmaxinvoicingsummaryglobal_response_compound_parseFromJSON(cJSON *ezmaxinvoicingsummaryglobal_response_compoundJSON);

cJSON *ezmaxinvoicingsummaryglobal_response_compound_convertToJSON(ezmaxinvoicingsummaryglobal_response_compound_t *ezmaxinvoicingsummaryglobal_response_compound);

#endif /* _ezmaxinvoicingsummaryglobal_response_compound_H_ */

