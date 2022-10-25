/*
 * ezmaxinvoicing_response.h
 *
 * A Ezmaxinvoicing Object
 */

#ifndef _ezmaxinvoicing_response_H_
#define _ezmaxinvoicing_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxinvoicing_response_t ezmaxinvoicing_response_t;

#include "common_audit.h"
#include "field_e_ezmaxinvoicing_paymenttype.h"

// Enum  for ezmaxinvoicing_response

typedef enum  { ezmax_api_definition__full_ezmaxinvoicing_response__NULL = 0, ezmax_api_definition__full_ezmaxinvoicing_response__Cheque, ezmax_api_definition__full_ezmaxinvoicing_response__CreditCard, ezmax_api_definition__full_ezmaxinvoicing_response__DirectDebit } ezmax_api_definition__full_ezmaxinvoicing_response__e;

char* ezmaxinvoicing_response_e_ezmaxinvoicing_paymenttype_ToString(ezmax_api_definition__full_ezmaxinvoicing_response__e e_ezmaxinvoicing_paymenttype);

ezmax_api_definition__full_ezmaxinvoicing_response__e ezmaxinvoicing_response_e_ezmaxinvoicing_paymenttype_FromString(char* e_ezmaxinvoicing_paymenttype);



typedef struct ezmaxinvoicing_response_t {
    int pki_ezmaxinvoicing_id; //numeric
    int fki_ezmaxinvoicingcontract_id; //numeric
    int fki_ezmaxpricing_id; //numeric
    int fki_systemconfigurationtype_id; //numeric
    char *s_systemconfigurationtype_description_x; // string
    char *yyyymm_ezmaxinvoicing; // string
    int i_ezmaxinvoicing_days; //numeric
    field_e_ezmaxinvoicing_paymenttype_t *e_ezmaxinvoicing_paymenttype; // custom
    char *d_ezmaxinvoicing_rebatepaymenttype; // string
    int i_ezmaxinvoicing_contractlength; //numeric
    char *d_ezmaxinvoicing_rebatecontractlength; // string
    int b_ezmaxinvoicing_rebate_ezsignallagents; //boolean
    struct common_audit_t *obj_audit; //model

} ezmaxinvoicing_response_t;

ezmaxinvoicing_response_t *ezmaxinvoicing_response_create(
    int pki_ezmaxinvoicing_id,
    int fki_ezmaxinvoicingcontract_id,
    int fki_ezmaxpricing_id,
    int fki_systemconfigurationtype_id,
    char *s_systemconfigurationtype_description_x,
    char *yyyymm_ezmaxinvoicing,
    int i_ezmaxinvoicing_days,
    field_e_ezmaxinvoicing_paymenttype_t *e_ezmaxinvoicing_paymenttype,
    char *d_ezmaxinvoicing_rebatepaymenttype,
    int i_ezmaxinvoicing_contractlength,
    char *d_ezmaxinvoicing_rebatecontractlength,
    int b_ezmaxinvoicing_rebate_ezsignallagents,
    common_audit_t *obj_audit
);

void ezmaxinvoicing_response_free(ezmaxinvoicing_response_t *ezmaxinvoicing_response);

ezmaxinvoicing_response_t *ezmaxinvoicing_response_parseFromJSON(cJSON *ezmaxinvoicing_responseJSON);

cJSON *ezmaxinvoicing_response_convertToJSON(ezmaxinvoicing_response_t *ezmaxinvoicing_response);

#endif /* _ezmaxinvoicing_response_H_ */

