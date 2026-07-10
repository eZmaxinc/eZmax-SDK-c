/*
 * inscriptionnotauthenticated_response.h
 *
 * A Inscriptionnotauthenticated Object
 */

#ifndef _inscriptionnotauthenticated_response_H_
#define _inscriptionnotauthenticated_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inscriptionnotauthenticated_response_t inscriptionnotauthenticated_response_t;

#include "field_e_inscriptionnotauthenticated_remunerationtype.h"
#include "field_e_inscriptionnotauthenticated_residence_type.h"
#include "field_e_inscriptionnotauthenticated_type.h"
#include "field_et_inscriptionnotauthenticated_mortgagetype.h"



typedef struct inscriptionnotauthenticated_response_t {
    int *pki_inscriptionnotauthenticated_id; //numeric
    int *fki_company_id; //numeric
    char *s_company_name_x; // string
    int *fki_inscription_id; //numeric
    int *fki_department_id; //numeric
    char *s_department_name_x; // string
    int *fki_financialinstitution_id; //numeric
    char *s_financialinstitution_name_x; // string
    int *fki_buyercontract_id; //numeric
    char *s_buyercontract_contract; // string
    int *fki_mortgagesupplier_id; //numeric
    char *s_mortgagesupplier_name_x; // string
    int *fki_taxassignment_id; //numeric
    char *s_taxassignment_description_x; // string
    char *dt_inscriptionnotauthenticated_transactiondate; // string
    char *dt_inscriptionnotauthenticated_transactiondate_real; // string
    char *dt_inscriptionnotauthenticated_depositdate; // string
    ezmax_api_definition__full_field_e_inscriptionnotauthenticated_type__e e_inscriptionnotauthenticated_type; //referenced enum
    char *d_inscriptionnotauthenticated_mortgageloan; // string
    ezmax_api_definition__full_field_et_inscriptionnotauthenticated_mortgagetype__e et_inscriptionnotauthenticated_mortgagetype; //referenced enum
    char *d_inscriptionnotauthenticated_transactionprice; // string
    ezmax_api_definition__full_field_e_inscriptionnotauthenticated_remunerationtype__e e_inscriptionnotauthenticated_remunerationtype; //referenced enum
    char *d_inscriptionnotauthenticated_remuneration; // string
    char *d_inscriptionnotauthenticated_remunerationsubtotal; // string
    char *d_inscriptionnotauthenticated_remunerationtotal; // string
    char *dt_inscriptionnotauthenticated_cancellationdate; // string
    char *dt_inscriptionnotauthenticated_possessiondate; // string
    char *s_inscriptionnotauthenticated_offertopurchasenumber; // string
    char *dt_inscriptionnotauthenticated_notaryscheduledate; // string
    char *dt_inscriptionnotauthenticated_financingscheduledate; // string
    int *b_inscriptionnotauthenticated_conditional; //boolean
    int *b_inscriptionnotauthenticated_mortgageisreferenced; //boolean
    int *b_inscriptionnotauthenticated_homeowner; //boolean
    char *t_inscriptionnotauthenticated_conditions; // string
    char *dt_inscriptionnotauthenticated_conditiondeadlinedate; // string
    int *i_inscriptionnotauthenticated_order; //numeric
    int *b_inscriptionnotauthenticated_isactive; //boolean
    ezmax_api_definition__full_field_e_inscriptionnotauthenticated_residence_type__e e_inscriptionnotauthenticated_residence_type; //referenced enum
    char *t_inscriptionnotauthenticated_checklistnote; // string
    char *d_inscriptionnotauthenticated_selleronlyretribution; // string
    int *b_inscriptionnotauthenticated_draft; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} inscriptionnotauthenticated_response_t;

__attribute__((deprecated)) inscriptionnotauthenticated_response_t *inscriptionnotauthenticated_response_create(
    int *pki_inscriptionnotauthenticated_id,
    int *fki_company_id,
    char *s_company_name_x,
    int *fki_inscription_id,
    int *fki_department_id,
    char *s_department_name_x,
    int *fki_financialinstitution_id,
    char *s_financialinstitution_name_x,
    int *fki_buyercontract_id,
    char *s_buyercontract_contract,
    int *fki_mortgagesupplier_id,
    char *s_mortgagesupplier_name_x,
    int *fki_taxassignment_id,
    char *s_taxassignment_description_x,
    char *dt_inscriptionnotauthenticated_transactiondate,
    char *dt_inscriptionnotauthenticated_transactiondate_real,
    char *dt_inscriptionnotauthenticated_depositdate,
    ezmax_api_definition__full_field_e_inscriptionnotauthenticated_type__e e_inscriptionnotauthenticated_type,
    char *d_inscriptionnotauthenticated_mortgageloan,
    ezmax_api_definition__full_field_et_inscriptionnotauthenticated_mortgagetype__e et_inscriptionnotauthenticated_mortgagetype,
    char *d_inscriptionnotauthenticated_transactionprice,
    ezmax_api_definition__full_field_e_inscriptionnotauthenticated_remunerationtype__e e_inscriptionnotauthenticated_remunerationtype,
    char *d_inscriptionnotauthenticated_remuneration,
    char *d_inscriptionnotauthenticated_remunerationsubtotal,
    char *d_inscriptionnotauthenticated_remunerationtotal,
    char *dt_inscriptionnotauthenticated_cancellationdate,
    char *dt_inscriptionnotauthenticated_possessiondate,
    char *s_inscriptionnotauthenticated_offertopurchasenumber,
    char *dt_inscriptionnotauthenticated_notaryscheduledate,
    char *dt_inscriptionnotauthenticated_financingscheduledate,
    int *b_inscriptionnotauthenticated_conditional,
    int *b_inscriptionnotauthenticated_mortgageisreferenced,
    int *b_inscriptionnotauthenticated_homeowner,
    char *t_inscriptionnotauthenticated_conditions,
    char *dt_inscriptionnotauthenticated_conditiondeadlinedate,
    int *i_inscriptionnotauthenticated_order,
    int *b_inscriptionnotauthenticated_isactive,
    ezmax_api_definition__full_field_e_inscriptionnotauthenticated_residence_type__e e_inscriptionnotauthenticated_residence_type,
    char *t_inscriptionnotauthenticated_checklistnote,
    char *d_inscriptionnotauthenticated_selleronlyretribution,
    int *b_inscriptionnotauthenticated_draft
);

void inscriptionnotauthenticated_response_free(inscriptionnotauthenticated_response_t *inscriptionnotauthenticated_response);

inscriptionnotauthenticated_response_t *inscriptionnotauthenticated_response_parseFromJSON(cJSON *inscriptionnotauthenticated_responseJSON);

cJSON *inscriptionnotauthenticated_response_convertToJSON(inscriptionnotauthenticated_response_t *inscriptionnotauthenticated_response);

#endif /* _inscriptionnotauthenticated_response_H_ */

