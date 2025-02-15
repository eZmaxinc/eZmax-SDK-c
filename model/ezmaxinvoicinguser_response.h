/*
 * ezmaxinvoicinguser_response.h
 *
 * A Ezmaxinvoicinguser Object
 */

#ifndef _ezmaxinvoicinguser_response_H_
#define _ezmaxinvoicinguser_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxinvoicinguser_response_t ezmaxinvoicinguser_response_t;

#include "field_e_ezmaxinvoicinguser_variationezsign.h"



typedef struct ezmaxinvoicinguser_response_t {
    int pki_ezmaxinvoicinguser_id; //numeric
    int fki_ezmaxinvoicing_id; //numeric
    int fki_billingentityinternal_id; //numeric
    char *s_billingentityinternal_description_x; // string
    int fki_user_id; //numeric
    int i_ezmaxinvoicinguser_ezsigndocument; //numeric
    int b_ezmaxinvoicinguser_ezsignaccount; //boolean
    int b_ezmaxinvoicinguser_billableezsign; //boolean
    ezmax_api_definition__full_field_e_ezmaxinvoicinguser_variationezsign__e e_ezmaxinvoicinguser_variationezsign; //referenced enum

    int _library_owned; // Is the library responsible for freeing this object?
} ezmaxinvoicinguser_response_t;

__attribute__((deprecated)) ezmaxinvoicinguser_response_t *ezmaxinvoicinguser_response_create(
    int pki_ezmaxinvoicinguser_id,
    int fki_ezmaxinvoicing_id,
    int fki_billingentityinternal_id,
    char *s_billingentityinternal_description_x,
    int fki_user_id,
    int i_ezmaxinvoicinguser_ezsigndocument,
    int b_ezmaxinvoicinguser_ezsignaccount,
    int b_ezmaxinvoicinguser_billableezsign,
    ezmax_api_definition__full_field_e_ezmaxinvoicinguser_variationezsign__e e_ezmaxinvoicinguser_variationezsign
);

void ezmaxinvoicinguser_response_free(ezmaxinvoicinguser_response_t *ezmaxinvoicinguser_response);

ezmaxinvoicinguser_response_t *ezmaxinvoicinguser_response_parseFromJSON(cJSON *ezmaxinvoicinguser_responseJSON);

cJSON *ezmaxinvoicinguser_response_convertToJSON(ezmaxinvoicinguser_response_t *ezmaxinvoicinguser_response);

#endif /* _ezmaxinvoicinguser_response_H_ */

