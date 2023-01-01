/*
 * ezmaxinvoicingcommission_response_compound.h
 *
 * A Ezmaxinvoicingcommission Object
 */

#ifndef _ezmaxinvoicingcommission_response_compound_H_
#define _ezmaxinvoicingcommission_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxinvoicingcommission_response_compound_t ezmaxinvoicingcommission_response_compound_t;

#include "custom_contact_name_response.h"



typedef struct ezmaxinvoicingcommission_response_compound_t {
    int pki_ezmaxinvoicingcommission_id; //numeric
    int fki_ezmaxinvoicingsummaryglobal_id; //numeric
    int fki_ezmaxpartner_id; //numeric
    int fki_ezmaxrepresentative_id; //numeric
    char *dt_ezmaxinvoicingcommission_start; // string
    char *dt_ezmaxinvoicingcommission_end; // string
    int i_ezmaxinvoicingcommission_days; //numeric
    char *d_ezmaxinvoicingcommission_amount; // string
    struct custom_contact_name_response_t *obj_contact_name; //model

} ezmaxinvoicingcommission_response_compound_t;

ezmaxinvoicingcommission_response_compound_t *ezmaxinvoicingcommission_response_compound_create(
    int pki_ezmaxinvoicingcommission_id,
    int fki_ezmaxinvoicingsummaryglobal_id,
    int fki_ezmaxpartner_id,
    int fki_ezmaxrepresentative_id,
    char *dt_ezmaxinvoicingcommission_start,
    char *dt_ezmaxinvoicingcommission_end,
    int i_ezmaxinvoicingcommission_days,
    char *d_ezmaxinvoicingcommission_amount,
    custom_contact_name_response_t *obj_contact_name
);

void ezmaxinvoicingcommission_response_compound_free(ezmaxinvoicingcommission_response_compound_t *ezmaxinvoicingcommission_response_compound);

ezmaxinvoicingcommission_response_compound_t *ezmaxinvoicingcommission_response_compound_parseFromJSON(cJSON *ezmaxinvoicingcommission_response_compoundJSON);

cJSON *ezmaxinvoicingcommission_response_compound_convertToJSON(ezmaxinvoicingcommission_response_compound_t *ezmaxinvoicingcommission_response_compound);

#endif /* _ezmaxinvoicingcommission_response_compound_H_ */

