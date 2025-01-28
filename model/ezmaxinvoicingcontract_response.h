/*
 * ezmaxinvoicingcontract_response.h
 *
 * A Ezmaxinvoicingcontract Object
 */

#ifndef _ezmaxinvoicingcontract_response_H_
#define _ezmaxinvoicingcontract_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxinvoicingcontract_response_t ezmaxinvoicingcontract_response_t;

#include "common_audit.h"
#include "field_e_ezmaxinvoicingcontract_paymenttype.h"



typedef struct ezmaxinvoicingcontract_response_t {
    int pki_ezmaxinvoicingcontract_id; //numeric
    ezmax_api_definition__full_field_e_ezmaxinvoicingcontract_paymenttype__e e_ezmaxinvoicingcontract_paymenttype; //referenced enum
    int i_ezmaxinvoicingcontract_length; //numeric
    char *dt_ezmaxinvoicingcontract_start; // string
    char *dt_ezmaxinvoicingcontract_end; // string
    char *d_ezmaxinvoicingcontract_license; // string
    char *d_ezmaxinvoicingcontract121qa; // string
    int b_ezmaxinvoicingcontract_ezsignallagents; //boolean
    struct common_audit_t *obj_audit; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezmaxinvoicingcontract_response_t;

__attribute__((deprecated)) ezmaxinvoicingcontract_response_t *ezmaxinvoicingcontract_response_create(
    int pki_ezmaxinvoicingcontract_id,
    ezmax_api_definition__full_field_e_ezmaxinvoicingcontract_paymenttype__e e_ezmaxinvoicingcontract_paymenttype,
    int i_ezmaxinvoicingcontract_length,
    char *dt_ezmaxinvoicingcontract_start,
    char *dt_ezmaxinvoicingcontract_end,
    char *d_ezmaxinvoicingcontract_license,
    char *d_ezmaxinvoicingcontract121qa,
    int b_ezmaxinvoicingcontract_ezsignallagents,
    common_audit_t *obj_audit
);

void ezmaxinvoicingcontract_response_free(ezmaxinvoicingcontract_response_t *ezmaxinvoicingcontract_response);

ezmaxinvoicingcontract_response_t *ezmaxinvoicingcontract_response_parseFromJSON(cJSON *ezmaxinvoicingcontract_responseJSON);

cJSON *ezmaxinvoicingcontract_response_convertToJSON(ezmaxinvoicingcontract_response_t *ezmaxinvoicingcontract_response);

#endif /* _ezmaxinvoicingcontract_response_H_ */

