/*
 * ezsignsignaturepaymentdetail_request.h
 *
 * An Ezsignsignaturepaymentdetail Object
 */

#ifndef _ezsignsignaturepaymentdetail_request_H_
#define _ezsignsignaturepaymentdetail_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignaturepaymentdetail_request_t ezsignsignaturepaymentdetail_request_t;

#include "field_e_ezsignsignaturepaymentdetail_taxable.h"



typedef struct ezsignsignaturepaymentdetail_request_t {
    int pki_ezsignsignaturepaymentdetail_id; //numeric
    int fki_glaccountcontainer_id; //numeric
    char *t_ezsignsignaturepaymentdetail_description; // string
    char *d_ezsignsignaturepaymentdetail_amount; // string
    ezmax_api_definition__full_field_e_ezsignsignaturepaymentdetail_taxable__e e_ezsignsignaturepaymentdetail_taxable; //referenced enum

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignsignaturepaymentdetail_request_t;

__attribute__((deprecated)) ezsignsignaturepaymentdetail_request_t *ezsignsignaturepaymentdetail_request_create(
    int pki_ezsignsignaturepaymentdetail_id,
    int fki_glaccountcontainer_id,
    char *t_ezsignsignaturepaymentdetail_description,
    char *d_ezsignsignaturepaymentdetail_amount,
    ezmax_api_definition__full_field_e_ezsignsignaturepaymentdetail_taxable__e e_ezsignsignaturepaymentdetail_taxable
);

void ezsignsignaturepaymentdetail_request_free(ezsignsignaturepaymentdetail_request_t *ezsignsignaturepaymentdetail_request);

ezsignsignaturepaymentdetail_request_t *ezsignsignaturepaymentdetail_request_parseFromJSON(cJSON *ezsignsignaturepaymentdetail_requestJSON);

cJSON *ezsignsignaturepaymentdetail_request_convertToJSON(ezsignsignaturepaymentdetail_request_t *ezsignsignaturepaymentdetail_request);

#endif /* _ezsignsignaturepaymentdetail_request_H_ */

