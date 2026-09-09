/*
 * buyercontract_response.h
 *
 * A Buyercontract Object
 */

#ifndef _buyercontract_response_H_
#define _buyercontract_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct buyercontract_response_t buyercontract_response_t;

#include "field_e_buyercontract_remunerationtype.h"
#include "field_e_buyercontract_step.h"
#include "field_e_buyercontract_type.h"



typedef struct buyercontract_response_t {
    int *pki_buyercontract_id; //numeric
    int *fki_inscriptiontype_id; //numeric
    ezmax_api_definition__full_field_e_buyercontract_step__e e_buyercontract_step; //referenced enum
    char *d_buyercontract_minimumprice; // string
    char *d_buyercontract_maximumprice; // string
    ezmax_api_definition__full_field_e_buyercontract_type__e e_buyercontract_type; //referenced enum
    char *s_buyercontract_contract; // string
    char *dt_buyercontract_date; // string
    char *dt_buyercontract_expirationdate; // string
    char *d_buyercontract_remuneration; // string
    ezmax_api_definition__full_field_e_buyercontract_remunerationtype__e e_buyercontract_remunerationtype; //referenced enum
    int *b_buyercontract_litigation; //boolean
    int *b_buyercontract_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} buyercontract_response_t;

__attribute__((deprecated)) buyercontract_response_t *buyercontract_response_create(
    int *pki_buyercontract_id,
    int *fki_inscriptiontype_id,
    ezmax_api_definition__full_field_e_buyercontract_step__e e_buyercontract_step,
    char *d_buyercontract_minimumprice,
    char *d_buyercontract_maximumprice,
    ezmax_api_definition__full_field_e_buyercontract_type__e e_buyercontract_type,
    char *s_buyercontract_contract,
    char *dt_buyercontract_date,
    char *dt_buyercontract_expirationdate,
    char *d_buyercontract_remuneration,
    ezmax_api_definition__full_field_e_buyercontract_remunerationtype__e e_buyercontract_remunerationtype,
    int *b_buyercontract_litigation,
    int *b_buyercontract_isactive
);

void buyercontract_response_free(buyercontract_response_t *buyercontract_response);

buyercontract_response_t *buyercontract_response_parseFromJSON(cJSON *buyercontract_responseJSON);

cJSON *buyercontract_response_convertToJSON(buyercontract_response_t *buyercontract_response);

#endif /* _buyercontract_response_H_ */

