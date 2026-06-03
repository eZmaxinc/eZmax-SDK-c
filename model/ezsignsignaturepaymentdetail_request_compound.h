/*
 * ezsignsignaturepaymentdetail_request_compound.h
 *
 * An Ezsignsignaturepaymentdetail Object and children to create a complete structure
 */

#ifndef _ezsignsignaturepaymentdetail_request_compound_H_
#define _ezsignsignaturepaymentdetail_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignaturepaymentdetail_request_compound_t ezsignsignaturepaymentdetail_request_compound_t;

#include "field_e_ezsignsignaturepaymentdetail_taxable.h"



typedef struct ezsignsignaturepaymentdetail_request_compound_t {
    int *pki_ezsignsignaturepaymentdetail_id; //numeric
    int *fki_glaccountcontainer_id; //numeric
    char *t_ezsignsignaturepaymentdetail_description; // string
    char *d_ezsignsignaturepaymentdetail_amount; // string
    ezmax_api_definition__full_field_e_ezsignsignaturepaymentdetail_taxable__e e_ezsignsignaturepaymentdetail_taxable; //referenced enum

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignsignaturepaymentdetail_request_compound_t;

__attribute__((deprecated)) ezsignsignaturepaymentdetail_request_compound_t *ezsignsignaturepaymentdetail_request_compound_create(
    int *pki_ezsignsignaturepaymentdetail_id,
    int *fki_glaccountcontainer_id,
    char *t_ezsignsignaturepaymentdetail_description,
    char *d_ezsignsignaturepaymentdetail_amount,
    ezmax_api_definition__full_field_e_ezsignsignaturepaymentdetail_taxable__e e_ezsignsignaturepaymentdetail_taxable
);

void ezsignsignaturepaymentdetail_request_compound_free(ezsignsignaturepaymentdetail_request_compound_t *ezsignsignaturepaymentdetail_request_compound);

ezsignsignaturepaymentdetail_request_compound_t *ezsignsignaturepaymentdetail_request_compound_parseFromJSON(cJSON *ezsignsignaturepaymentdetail_request_compoundJSON);

cJSON *ezsignsignaturepaymentdetail_request_compound_convertToJSON(ezsignsignaturepaymentdetail_request_compound_t *ezsignsignaturepaymentdetail_request_compound);

#endif /* _ezsignsignaturepaymentdetail_request_compound_H_ */

