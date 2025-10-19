/*
 * ezsigntemplatesignaturepaymentdetail_request_compound.h
 *
 * An Ezsigntemplatesignaturepaymentdetail Object and children to create a complete structure
 */

#ifndef _ezsigntemplatesignaturepaymentdetail_request_compound_H_
#define _ezsigntemplatesignaturepaymentdetail_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatesignaturepaymentdetail_request_compound_t ezsigntemplatesignaturepaymentdetail_request_compound_t;

#include "field_e_ezsigntemplatesignaturepaymentdetail_taxable.h"



typedef struct ezsigntemplatesignaturepaymentdetail_request_compound_t {
    int pki_ezsigntemplatesignaturepaymentdetail_id; //numeric
    int fki_glaccountcontainer_id; //numeric
    char *t_ezsigntemplatesignaturepaymentdetail_description; // string
    char *d_ezsigntemplatesignaturepaymentdetail_amount; // string
    ezmax_api_definition__full_field_e_ezsigntemplatesignaturepaymentdetail_taxable__e e_ezsigntemplatesignaturepaymentdetail_taxable; //referenced enum

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatesignaturepaymentdetail_request_compound_t;

__attribute__((deprecated)) ezsigntemplatesignaturepaymentdetail_request_compound_t *ezsigntemplatesignaturepaymentdetail_request_compound_create(
    int pki_ezsigntemplatesignaturepaymentdetail_id,
    int fki_glaccountcontainer_id,
    char *t_ezsigntemplatesignaturepaymentdetail_description,
    char *d_ezsigntemplatesignaturepaymentdetail_amount,
    ezmax_api_definition__full_field_e_ezsigntemplatesignaturepaymentdetail_taxable__e e_ezsigntemplatesignaturepaymentdetail_taxable
);

void ezsigntemplatesignaturepaymentdetail_request_compound_free(ezsigntemplatesignaturepaymentdetail_request_compound_t *ezsigntemplatesignaturepaymentdetail_request_compound);

ezsigntemplatesignaturepaymentdetail_request_compound_t *ezsigntemplatesignaturepaymentdetail_request_compound_parseFromJSON(cJSON *ezsigntemplatesignaturepaymentdetail_request_compoundJSON);

cJSON *ezsigntemplatesignaturepaymentdetail_request_compound_convertToJSON(ezsigntemplatesignaturepaymentdetail_request_compound_t *ezsigntemplatesignaturepaymentdetail_request_compound);

#endif /* _ezsigntemplatesignaturepaymentdetail_request_compound_H_ */

