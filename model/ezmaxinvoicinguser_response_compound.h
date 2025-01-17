/*
 * ezmaxinvoicinguser_response_compound.h
 *
 * A Ezmaxinvoicinguser Object
 */

#ifndef _ezmaxinvoicinguser_response_compound_H_
#define _ezmaxinvoicinguser_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxinvoicinguser_response_compound_t ezmaxinvoicinguser_response_compound_t;

#include "custom_contact_name_response.h"
#include "ezmaxinvoicinguser_response.h"
#include "field_e_ezmaxinvoicinguser_variationezsign.h"

// Enum  for ezmaxinvoicinguser_response_compound

typedef enum  { ezmax_api_definition__full_ezmaxinvoicinguser_response_compound__NULL = 0, ezmax_api_definition__full_ezmaxinvoicinguser_response_compound__Charge, ezmax_api_definition__full_ezmaxinvoicinguser_response_compound__Refund, ezmax_api_definition__full_ezmaxinvoicinguser_response_compound__Same } ezmax_api_definition__full_ezmaxinvoicinguser_response_compound__e;

char* ezmaxinvoicinguser_response_compound_e_ezmaxinvoicinguser_variationezsign_ToString(ezmax_api_definition__full_ezmaxinvoicinguser_response_compound__e e_ezmaxinvoicinguser_variationezsign);

ezmax_api_definition__full_ezmaxinvoicinguser_response_compound__e ezmaxinvoicinguser_response_compound_e_ezmaxinvoicinguser_variationezsign_FromString(char* e_ezmaxinvoicinguser_variationezsign);



typedef struct ezmaxinvoicinguser_response_compound_t {
    int pki_ezmaxinvoicinguser_id; //numeric
    int fki_ezmaxinvoicing_id; //numeric
    int fki_billingentityinternal_id; //numeric
    char *s_billingentityinternal_description_x; // string
    int fki_user_id; //numeric
    int i_ezmaxinvoicinguser_ezsigndocument; //numeric
    int b_ezmaxinvoicinguser_ezsignaccount; //boolean
    int b_ezmaxinvoicinguser_billableezsign; //boolean
    field_e_ezmaxinvoicinguser_variationezsign_t *e_ezmaxinvoicinguser_variationezsign; // custom
    struct custom_contact_name_response_t *obj_contact_name; //model

} ezmaxinvoicinguser_response_compound_t;

ezmaxinvoicinguser_response_compound_t *ezmaxinvoicinguser_response_compound_create(
    int pki_ezmaxinvoicinguser_id,
    int fki_ezmaxinvoicing_id,
    int fki_billingentityinternal_id,
    char *s_billingentityinternal_description_x,
    int fki_user_id,
    int i_ezmaxinvoicinguser_ezsigndocument,
    int b_ezmaxinvoicinguser_ezsignaccount,
    int b_ezmaxinvoicinguser_billableezsign,
    field_e_ezmaxinvoicinguser_variationezsign_t *e_ezmaxinvoicinguser_variationezsign,
    custom_contact_name_response_t *obj_contact_name
);

void ezmaxinvoicinguser_response_compound_free(ezmaxinvoicinguser_response_compound_t *ezmaxinvoicinguser_response_compound);

ezmaxinvoicinguser_response_compound_t *ezmaxinvoicinguser_response_compound_parseFromJSON(cJSON *ezmaxinvoicinguser_response_compoundJSON);

cJSON *ezmaxinvoicinguser_response_compound_convertToJSON(ezmaxinvoicinguser_response_compound_t *ezmaxinvoicinguser_response_compound);

#endif /* _ezmaxinvoicinguser_response_compound_H_ */

