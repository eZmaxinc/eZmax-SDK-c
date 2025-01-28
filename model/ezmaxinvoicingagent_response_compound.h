/*
 * ezmaxinvoicingagent_response_compound.h
 *
 * A Ezmaxinvoicingagent Object
 */

#ifndef _ezmaxinvoicingagent_response_compound_H_
#define _ezmaxinvoicingagent_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxinvoicingagent_response_compound_t ezmaxinvoicingagent_response_compound_t;

#include "custom_contact_name_response.h"
#include "field_e_ezmaxinvoicingagent_variationezmax.h"
#include "field_e_ezmaxinvoicingagent_variationezsign.h"



typedef struct ezmaxinvoicingagent_response_compound_t {
    int pki_ezmaxinvoicingagent_id; //numeric
    int fki_ezmaxinvoicing_id; //numeric
    int fki_billingentityinternal_id; //numeric
    char *s_billingentityinternal_description_x; // string
    int fki_agent_id; //numeric
    int fki_broker_id; //numeric
    int i_ezmaxinvoicingagent_session; //numeric
    int i_ezmaxinvoicingagent_cloned; //numeric
    int i_ezmaxinvoicingagent_invoice; //numeric
    int i_ezmaxinvoicingagent_inscription; //numeric
    int i_ezmaxinvoicingagent_inscriptionactive; //numeric
    int i_ezmaxinvoicingagent_sale; //numeric
    int i_ezmaxinvoicingagent_otherincome; //numeric
    int i_ezmaxinvoicingagent_commissioncalculation; //numeric
    int i_ezmaxinvoicingagent_ezsigndocument; //numeric
    int b_ezmaxinvoicingagent_ezsignaccount; //boolean
    int b_ezmaxinvoicingagent_billableezmax; //boolean
    ezmax_api_definition__full_field_e_ezmaxinvoicingagent_variationezmax__e e_ezmaxinvoicingagent_variationezmax; //referenced enum
    int b_ezmaxinvoicingagent_billableezsign; //boolean
    ezmax_api_definition__full_field_e_ezmaxinvoicingagent_variationezsign__e e_ezmaxinvoicingagent_variationezsign; //referenced enum
    struct custom_contact_name_response_t *obj_contact_name; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezmaxinvoicingagent_response_compound_t;

__attribute__((deprecated)) ezmaxinvoicingagent_response_compound_t *ezmaxinvoicingagent_response_compound_create(
    int pki_ezmaxinvoicingagent_id,
    int fki_ezmaxinvoicing_id,
    int fki_billingentityinternal_id,
    char *s_billingentityinternal_description_x,
    int fki_agent_id,
    int fki_broker_id,
    int i_ezmaxinvoicingagent_session,
    int i_ezmaxinvoicingagent_cloned,
    int i_ezmaxinvoicingagent_invoice,
    int i_ezmaxinvoicingagent_inscription,
    int i_ezmaxinvoicingagent_inscriptionactive,
    int i_ezmaxinvoicingagent_sale,
    int i_ezmaxinvoicingagent_otherincome,
    int i_ezmaxinvoicingagent_commissioncalculation,
    int i_ezmaxinvoicingagent_ezsigndocument,
    int b_ezmaxinvoicingagent_ezsignaccount,
    int b_ezmaxinvoicingagent_billableezmax,
    ezmax_api_definition__full_field_e_ezmaxinvoicingagent_variationezmax__e e_ezmaxinvoicingagent_variationezmax,
    int b_ezmaxinvoicingagent_billableezsign,
    ezmax_api_definition__full_field_e_ezmaxinvoicingagent_variationezsign__e e_ezmaxinvoicingagent_variationezsign,
    custom_contact_name_response_t *obj_contact_name
);

void ezmaxinvoicingagent_response_compound_free(ezmaxinvoicingagent_response_compound_t *ezmaxinvoicingagent_response_compound);

ezmaxinvoicingagent_response_compound_t *ezmaxinvoicingagent_response_compound_parseFromJSON(cJSON *ezmaxinvoicingagent_response_compoundJSON);

cJSON *ezmaxinvoicingagent_response_compound_convertToJSON(ezmaxinvoicingagent_response_compound_t *ezmaxinvoicingagent_response_compound);

#endif /* _ezmaxinvoicingagent_response_compound_H_ */

