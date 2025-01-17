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
#include "ezmaxinvoicingagent_response.h"
#include "field_e_ezmaxinvoicingagent_variationezmax.h"
#include "field_e_ezmaxinvoicingagent_variationezsign.h"

// Enum  for ezmaxinvoicingagent_response_compound

typedef enum  { ezmax_api_definition__full_ezmaxinvoicingagent_response_compound__NULL = 0, ezmax_api_definition__full_ezmaxinvoicingagent_response_compound__Charge, ezmax_api_definition__full_ezmaxinvoicingagent_response_compound__Refund, ezmax_api_definition__full_ezmaxinvoicingagent_response_compound__Same } ezmax_api_definition__full_ezmaxinvoicingagent_response_compound__e;

char* ezmaxinvoicingagent_response_compound_e_ezmaxinvoicingagent_variationezmax_ToString(ezmax_api_definition__full_ezmaxinvoicingagent_response_compound__e e_ezmaxinvoicingagent_variationezmax);

ezmax_api_definition__full_ezmaxinvoicingagent_response_compound__e ezmaxinvoicingagent_response_compound_e_ezmaxinvoicingagent_variationezmax_FromString(char* e_ezmaxinvoicingagent_variationezmax);

// Enum  for ezmaxinvoicingagent_response_compound

typedef enum  { ezmax_api_definition__full_ezmaxinvoicingagent_response_compound__NULL = 0, ezmax_api_definition__full_ezmaxinvoicingagent_response_compound__Charge, ezmax_api_definition__full_ezmaxinvoicingagent_response_compound__Refund, ezmax_api_definition__full_ezmaxinvoicingagent_response_compound__Same } ezmax_api_definition__full_ezmaxinvoicingagent_response_compound__e;

char* ezmaxinvoicingagent_response_compound_e_ezmaxinvoicingagent_variationezsign_ToString(ezmax_api_definition__full_ezmaxinvoicingagent_response_compound__e e_ezmaxinvoicingagent_variationezsign);

ezmax_api_definition__full_ezmaxinvoicingagent_response_compound__e ezmaxinvoicingagent_response_compound_e_ezmaxinvoicingagent_variationezsign_FromString(char* e_ezmaxinvoicingagent_variationezsign);



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
    field_e_ezmaxinvoicingagent_variationezmax_t *e_ezmaxinvoicingagent_variationezmax; // custom
    int b_ezmaxinvoicingagent_billableezsign; //boolean
    field_e_ezmaxinvoicingagent_variationezsign_t *e_ezmaxinvoicingagent_variationezsign; // custom
    struct custom_contact_name_response_t *obj_contact_name; //model

} ezmaxinvoicingagent_response_compound_t;

ezmaxinvoicingagent_response_compound_t *ezmaxinvoicingagent_response_compound_create(
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
    field_e_ezmaxinvoicingagent_variationezmax_t *e_ezmaxinvoicingagent_variationezmax,
    int b_ezmaxinvoicingagent_billableezsign,
    field_e_ezmaxinvoicingagent_variationezsign_t *e_ezmaxinvoicingagent_variationezsign,
    custom_contact_name_response_t *obj_contact_name
);

void ezmaxinvoicingagent_response_compound_free(ezmaxinvoicingagent_response_compound_t *ezmaxinvoicingagent_response_compound);

ezmaxinvoicingagent_response_compound_t *ezmaxinvoicingagent_response_compound_parseFromJSON(cJSON *ezmaxinvoicingagent_response_compoundJSON);

cJSON *ezmaxinvoicingagent_response_compound_convertToJSON(ezmaxinvoicingagent_response_compound_t *ezmaxinvoicingagent_response_compound);

#endif /* _ezmaxinvoicingagent_response_compound_H_ */

