/*
 * ezsignsignaturepaymentdetail_response.h
 *
 * An Ezsignsignaturepaymentdetail Object
 */

#ifndef _ezsignsignaturepaymentdetail_response_H_
#define _ezsignsignaturepaymentdetail_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignaturepaymentdetail_response_t ezsignsignaturepaymentdetail_response_t;

#include "field_e_ezsignsignaturepaymentdetail_taxable.h"



typedef struct ezsignsignaturepaymentdetail_response_t {
    int pki_ezsignsignaturepaymentdetail_id; //numeric
    int fki_glaccountcontainer_id; //numeric
    char *t_ezsignsignaturepaymentdetail_description; // string
    char *d_ezsignsignaturepaymentdetail_amount; // string
    ezmax_api_definition__full_field_e_ezsignsignaturepaymentdetail_taxable__e e_ezsignsignaturepaymentdetail_taxable; //referenced enum

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignsignaturepaymentdetail_response_t;

__attribute__((deprecated)) ezsignsignaturepaymentdetail_response_t *ezsignsignaturepaymentdetail_response_create(
    int pki_ezsignsignaturepaymentdetail_id,
    int fki_glaccountcontainer_id,
    char *t_ezsignsignaturepaymentdetail_description,
    char *d_ezsignsignaturepaymentdetail_amount,
    ezmax_api_definition__full_field_e_ezsignsignaturepaymentdetail_taxable__e e_ezsignsignaturepaymentdetail_taxable
);

void ezsignsignaturepaymentdetail_response_free(ezsignsignaturepaymentdetail_response_t *ezsignsignaturepaymentdetail_response);

ezsignsignaturepaymentdetail_response_t *ezsignsignaturepaymentdetail_response_parseFromJSON(cJSON *ezsignsignaturepaymentdetail_responseJSON);

cJSON *ezsignsignaturepaymentdetail_response_convertToJSON(ezsignsignaturepaymentdetail_response_t *ezsignsignaturepaymentdetail_response);

#endif /* _ezsignsignaturepaymentdetail_response_H_ */

