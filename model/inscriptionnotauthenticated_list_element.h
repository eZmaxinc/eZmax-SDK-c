/*
 * inscriptionnotauthenticated_list_element.h
 *
 * A Inscriptionnotauthenticated List Element
 */

#ifndef _inscriptionnotauthenticated_list_element_H_
#define _inscriptionnotauthenticated_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inscriptionnotauthenticated_list_element_t inscriptionnotauthenticated_list_element_t;

#include "field_e_inscription_step.h"



typedef struct inscriptionnotauthenticated_list_element_t {
    int *pki_inscription_id; //numeric
    int *pki_inscriptionnotauthenticated_id; //numeric
    int *fki_inscriptiontype_id; //numeric
    int *fki_buyercontract_id; //numeric
    char *s_buyercontract_contract; // string
    char *s_inscriptiontype_name_x; // string
    ezmax_api_definition__full_field_e_inscription_step__e e_inscription_step; //referenced enum
    char *s_inscription_civicend; // string
    char *s_inscription_mls; // string
    char *s_inscription_contract; // string
    char *d_inscription_saleprice; // string
    char *d_inscription_rentprice; // string
    char *dt_inscription_date; // string
    char *dt_inscription_expirationdate; // string
    char *dt_inscription_notarydate; // string
    int *b_inscription_inspection; //boolean
    int *b_inscription_isactive; //boolean
    int *b_inscription_archived; //boolean
    char *dt_inscriptionnotauthenticated_notaryscheduledate; // string
    char *dt_inscriptionnotauthenticated_transactiondate; // string
    char *dt_inscriptionnotauthenticated_transactiondate_real; // string
    int *b_inscriptionnotauthenticated_conditional; //boolean
    int *b_inscriptionnotauthenticated_isactive; //boolean
    char *s_address_civic; // string
    char *s_address_street; // string
    char *s_address_suite; // string
    char *s_address_city; // string
    char *s_address_zip; // string
    int *fki_province_id; //numeric
    char *s_province_name_x; // string
    int *fki_country_id; //numeric
    char *s_country_name_x; // string
    char *s_inscriptionnotauthenticated_offertopurchasenumber; // string

    int _library_owned; // Is the library responsible for freeing this object?
} inscriptionnotauthenticated_list_element_t;

__attribute__((deprecated)) inscriptionnotauthenticated_list_element_t *inscriptionnotauthenticated_list_element_create(
    int *pki_inscription_id,
    int *pki_inscriptionnotauthenticated_id,
    int *fki_inscriptiontype_id,
    int *fki_buyercontract_id,
    char *s_buyercontract_contract,
    char *s_inscriptiontype_name_x,
    ezmax_api_definition__full_field_e_inscription_step__e e_inscription_step,
    char *s_inscription_civicend,
    char *s_inscription_mls,
    char *s_inscription_contract,
    char *d_inscription_saleprice,
    char *d_inscription_rentprice,
    char *dt_inscription_date,
    char *dt_inscription_expirationdate,
    char *dt_inscription_notarydate,
    int *b_inscription_inspection,
    int *b_inscription_isactive,
    int *b_inscription_archived,
    char *dt_inscriptionnotauthenticated_notaryscheduledate,
    char *dt_inscriptionnotauthenticated_transactiondate,
    char *dt_inscriptionnotauthenticated_transactiondate_real,
    int *b_inscriptionnotauthenticated_conditional,
    int *b_inscriptionnotauthenticated_isactive,
    char *s_address_civic,
    char *s_address_street,
    char *s_address_suite,
    char *s_address_city,
    char *s_address_zip,
    int *fki_province_id,
    char *s_province_name_x,
    int *fki_country_id,
    char *s_country_name_x,
    char *s_inscriptionnotauthenticated_offertopurchasenumber
);

void inscriptionnotauthenticated_list_element_free(inscriptionnotauthenticated_list_element_t *inscriptionnotauthenticated_list_element);

inscriptionnotauthenticated_list_element_t *inscriptionnotauthenticated_list_element_parseFromJSON(cJSON *inscriptionnotauthenticated_list_elementJSON);

cJSON *inscriptionnotauthenticated_list_element_convertToJSON(inscriptionnotauthenticated_list_element_t *inscriptionnotauthenticated_list_element);

#endif /* _inscriptionnotauthenticated_list_element_H_ */

