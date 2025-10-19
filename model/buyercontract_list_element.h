/*
 * buyercontract_list_element.h
 *
 * A Buyercontract List Element
 */

#ifndef _buyercontract_list_element_H_
#define _buyercontract_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct buyercontract_list_element_t buyercontract_list_element_t;

#include "field_e_buyercontract_step.h"
#include "field_e_buyercontract_type.h"



typedef struct buyercontract_list_element_t {
    int pki_buyercontract_id; //numeric
    int fki_inscriptiontype_id; //numeric
    char *s_inscriptiontype_name_x; // string
    ezmax_api_definition__full_field_e_buyercontract_step__e e_buyercontract_step; //referenced enum
    char *d_buyercontract_minimumprice; // string
    char *d_buyercontract_maximumprice; // string
    ezmax_api_definition__full_field_e_buyercontract_type__e e_buyercontract_type; //referenced enum
    char *dt_buyercontract_date; // string
    char *dt_buyercontract_expirationdate; // string
    int b_buyercontract_isactive; //boolean
    char *s_buyercontract_brokers; // string
    char *s_buyercontract_buyers; // string

    int _library_owned; // Is the library responsible for freeing this object?
} buyercontract_list_element_t;

__attribute__((deprecated)) buyercontract_list_element_t *buyercontract_list_element_create(
    int pki_buyercontract_id,
    int fki_inscriptiontype_id,
    char *s_inscriptiontype_name_x,
    ezmax_api_definition__full_field_e_buyercontract_step__e e_buyercontract_step,
    char *d_buyercontract_minimumprice,
    char *d_buyercontract_maximumprice,
    ezmax_api_definition__full_field_e_buyercontract_type__e e_buyercontract_type,
    char *dt_buyercontract_date,
    char *dt_buyercontract_expirationdate,
    int b_buyercontract_isactive,
    char *s_buyercontract_brokers,
    char *s_buyercontract_buyers
);

void buyercontract_list_element_free(buyercontract_list_element_t *buyercontract_list_element);

buyercontract_list_element_t *buyercontract_list_element_parseFromJSON(cJSON *buyercontract_list_elementJSON);

cJSON *buyercontract_list_element_convertToJSON(buyercontract_list_element_t *buyercontract_list_element);

#endif /* _buyercontract_list_element_H_ */

