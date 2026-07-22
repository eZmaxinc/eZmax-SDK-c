#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inscriptionnotauthenticated_response.h"



static inscriptionnotauthenticated_response_t *inscriptionnotauthenticated_response_create_internal(
    int *pki_inscriptionnotauthenticated_id,
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
    ) {
    inscriptionnotauthenticated_response_t *inscriptionnotauthenticated_response_local_var = malloc(sizeof(inscriptionnotauthenticated_response_t));
    if (!inscriptionnotauthenticated_response_local_var) {
        return NULL;
    }
    memset(inscriptionnotauthenticated_response_local_var, 0, sizeof(inscriptionnotauthenticated_response_t));
    inscriptionnotauthenticated_response_local_var->_library_owned = 1;
    inscriptionnotauthenticated_response_local_var->pki_inscriptionnotauthenticated_id = pki_inscriptionnotauthenticated_id;
    inscriptionnotauthenticated_response_local_var->fki_inscription_id = fki_inscription_id;
    inscriptionnotauthenticated_response_local_var->fki_department_id = fki_department_id;
    inscriptionnotauthenticated_response_local_var->s_department_name_x = s_department_name_x;
    inscriptionnotauthenticated_response_local_var->fki_financialinstitution_id = fki_financialinstitution_id;
    inscriptionnotauthenticated_response_local_var->s_financialinstitution_name_x = s_financialinstitution_name_x;
    inscriptionnotauthenticated_response_local_var->fki_buyercontract_id = fki_buyercontract_id;
    inscriptionnotauthenticated_response_local_var->s_buyercontract_contract = s_buyercontract_contract;
    inscriptionnotauthenticated_response_local_var->fki_mortgagesupplier_id = fki_mortgagesupplier_id;
    inscriptionnotauthenticated_response_local_var->s_mortgagesupplier_name_x = s_mortgagesupplier_name_x;
    inscriptionnotauthenticated_response_local_var->fki_taxassignment_id = fki_taxassignment_id;
    inscriptionnotauthenticated_response_local_var->s_taxassignment_description_x = s_taxassignment_description_x;
    inscriptionnotauthenticated_response_local_var->dt_inscriptionnotauthenticated_transactiondate = dt_inscriptionnotauthenticated_transactiondate;
    inscriptionnotauthenticated_response_local_var->dt_inscriptionnotauthenticated_transactiondate_real = dt_inscriptionnotauthenticated_transactiondate_real;
    inscriptionnotauthenticated_response_local_var->dt_inscriptionnotauthenticated_depositdate = dt_inscriptionnotauthenticated_depositdate;
    inscriptionnotauthenticated_response_local_var->e_inscriptionnotauthenticated_type = e_inscriptionnotauthenticated_type;
    inscriptionnotauthenticated_response_local_var->d_inscriptionnotauthenticated_mortgageloan = d_inscriptionnotauthenticated_mortgageloan;
    inscriptionnotauthenticated_response_local_var->et_inscriptionnotauthenticated_mortgagetype = et_inscriptionnotauthenticated_mortgagetype;
    inscriptionnotauthenticated_response_local_var->d_inscriptionnotauthenticated_transactionprice = d_inscriptionnotauthenticated_transactionprice;
    inscriptionnotauthenticated_response_local_var->e_inscriptionnotauthenticated_remunerationtype = e_inscriptionnotauthenticated_remunerationtype;
    inscriptionnotauthenticated_response_local_var->d_inscriptionnotauthenticated_remuneration = d_inscriptionnotauthenticated_remuneration;
    inscriptionnotauthenticated_response_local_var->d_inscriptionnotauthenticated_remunerationsubtotal = d_inscriptionnotauthenticated_remunerationsubtotal;
    inscriptionnotauthenticated_response_local_var->d_inscriptionnotauthenticated_remunerationtotal = d_inscriptionnotauthenticated_remunerationtotal;
    inscriptionnotauthenticated_response_local_var->dt_inscriptionnotauthenticated_cancellationdate = dt_inscriptionnotauthenticated_cancellationdate;
    inscriptionnotauthenticated_response_local_var->dt_inscriptionnotauthenticated_possessiondate = dt_inscriptionnotauthenticated_possessiondate;
    inscriptionnotauthenticated_response_local_var->s_inscriptionnotauthenticated_offertopurchasenumber = s_inscriptionnotauthenticated_offertopurchasenumber;
    inscriptionnotauthenticated_response_local_var->dt_inscriptionnotauthenticated_notaryscheduledate = dt_inscriptionnotauthenticated_notaryscheduledate;
    inscriptionnotauthenticated_response_local_var->dt_inscriptionnotauthenticated_financingscheduledate = dt_inscriptionnotauthenticated_financingscheduledate;
    inscriptionnotauthenticated_response_local_var->b_inscriptionnotauthenticated_conditional = b_inscriptionnotauthenticated_conditional;
    inscriptionnotauthenticated_response_local_var->b_inscriptionnotauthenticated_mortgageisreferenced = b_inscriptionnotauthenticated_mortgageisreferenced;
    inscriptionnotauthenticated_response_local_var->b_inscriptionnotauthenticated_homeowner = b_inscriptionnotauthenticated_homeowner;
    inscriptionnotauthenticated_response_local_var->t_inscriptionnotauthenticated_conditions = t_inscriptionnotauthenticated_conditions;
    inscriptionnotauthenticated_response_local_var->dt_inscriptionnotauthenticated_conditiondeadlinedate = dt_inscriptionnotauthenticated_conditiondeadlinedate;
    inscriptionnotauthenticated_response_local_var->i_inscriptionnotauthenticated_order = i_inscriptionnotauthenticated_order;
    inscriptionnotauthenticated_response_local_var->b_inscriptionnotauthenticated_isactive = b_inscriptionnotauthenticated_isactive;
    inscriptionnotauthenticated_response_local_var->e_inscriptionnotauthenticated_residence_type = e_inscriptionnotauthenticated_residence_type;
    inscriptionnotauthenticated_response_local_var->t_inscriptionnotauthenticated_checklistnote = t_inscriptionnotauthenticated_checklistnote;
    inscriptionnotauthenticated_response_local_var->d_inscriptionnotauthenticated_selleronlyretribution = d_inscriptionnotauthenticated_selleronlyretribution;
    inscriptionnotauthenticated_response_local_var->b_inscriptionnotauthenticated_draft = b_inscriptionnotauthenticated_draft;
    return inscriptionnotauthenticated_response_local_var;
}

__attribute__((deprecated)) inscriptionnotauthenticated_response_t *inscriptionnotauthenticated_response_create(
    int *pki_inscriptionnotauthenticated_id,
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
    ) {
    int *pki_inscriptionnotauthenticated_id_copy = NULL;
    if (pki_inscriptionnotauthenticated_id) {
        pki_inscriptionnotauthenticated_id_copy = malloc(sizeof(int));
        if (pki_inscriptionnotauthenticated_id_copy) *pki_inscriptionnotauthenticated_id_copy = *pki_inscriptionnotauthenticated_id;
    }
    int *fki_inscription_id_copy = NULL;
    if (fki_inscription_id) {
        fki_inscription_id_copy = malloc(sizeof(int));
        if (fki_inscription_id_copy) *fki_inscription_id_copy = *fki_inscription_id;
    }
    int *fki_department_id_copy = NULL;
    if (fki_department_id) {
        fki_department_id_copy = malloc(sizeof(int));
        if (fki_department_id_copy) *fki_department_id_copy = *fki_department_id;
    }
    int *fki_financialinstitution_id_copy = NULL;
    if (fki_financialinstitution_id) {
        fki_financialinstitution_id_copy = malloc(sizeof(int));
        if (fki_financialinstitution_id_copy) *fki_financialinstitution_id_copy = *fki_financialinstitution_id;
    }
    int *fki_buyercontract_id_copy = NULL;
    if (fki_buyercontract_id) {
        fki_buyercontract_id_copy = malloc(sizeof(int));
        if (fki_buyercontract_id_copy) *fki_buyercontract_id_copy = *fki_buyercontract_id;
    }
    int *fki_mortgagesupplier_id_copy = NULL;
    if (fki_mortgagesupplier_id) {
        fki_mortgagesupplier_id_copy = malloc(sizeof(int));
        if (fki_mortgagesupplier_id_copy) *fki_mortgagesupplier_id_copy = *fki_mortgagesupplier_id;
    }
    int *fki_taxassignment_id_copy = NULL;
    if (fki_taxassignment_id) {
        fki_taxassignment_id_copy = malloc(sizeof(int));
        if (fki_taxassignment_id_copy) *fki_taxassignment_id_copy = *fki_taxassignment_id;
    }
    int *b_inscriptionnotauthenticated_conditional_copy = NULL;
    if (b_inscriptionnotauthenticated_conditional) {
        b_inscriptionnotauthenticated_conditional_copy = malloc(sizeof(int));
        if (b_inscriptionnotauthenticated_conditional_copy) *b_inscriptionnotauthenticated_conditional_copy = *b_inscriptionnotauthenticated_conditional;
    }
    int *b_inscriptionnotauthenticated_mortgageisreferenced_copy = NULL;
    if (b_inscriptionnotauthenticated_mortgageisreferenced) {
        b_inscriptionnotauthenticated_mortgageisreferenced_copy = malloc(sizeof(int));
        if (b_inscriptionnotauthenticated_mortgageisreferenced_copy) *b_inscriptionnotauthenticated_mortgageisreferenced_copy = *b_inscriptionnotauthenticated_mortgageisreferenced;
    }
    int *b_inscriptionnotauthenticated_homeowner_copy = NULL;
    if (b_inscriptionnotauthenticated_homeowner) {
        b_inscriptionnotauthenticated_homeowner_copy = malloc(sizeof(int));
        if (b_inscriptionnotauthenticated_homeowner_copy) *b_inscriptionnotauthenticated_homeowner_copy = *b_inscriptionnotauthenticated_homeowner;
    }
    int *i_inscriptionnotauthenticated_order_copy = NULL;
    if (i_inscriptionnotauthenticated_order) {
        i_inscriptionnotauthenticated_order_copy = malloc(sizeof(int));
        if (i_inscriptionnotauthenticated_order_copy) *i_inscriptionnotauthenticated_order_copy = *i_inscriptionnotauthenticated_order;
    }
    int *b_inscriptionnotauthenticated_isactive_copy = NULL;
    if (b_inscriptionnotauthenticated_isactive) {
        b_inscriptionnotauthenticated_isactive_copy = malloc(sizeof(int));
        if (b_inscriptionnotauthenticated_isactive_copy) *b_inscriptionnotauthenticated_isactive_copy = *b_inscriptionnotauthenticated_isactive;
    }
    int *b_inscriptionnotauthenticated_draft_copy = NULL;
    if (b_inscriptionnotauthenticated_draft) {
        b_inscriptionnotauthenticated_draft_copy = malloc(sizeof(int));
        if (b_inscriptionnotauthenticated_draft_copy) *b_inscriptionnotauthenticated_draft_copy = *b_inscriptionnotauthenticated_draft;
    }
    inscriptionnotauthenticated_response_t *result = inscriptionnotauthenticated_response_create_internal (
        pki_inscriptionnotauthenticated_id_copy,
        fki_inscription_id_copy,
        fki_department_id_copy,
        s_department_name_x,
        fki_financialinstitution_id_copy,
        s_financialinstitution_name_x,
        fki_buyercontract_id_copy,
        s_buyercontract_contract,
        fki_mortgagesupplier_id_copy,
        s_mortgagesupplier_name_x,
        fki_taxassignment_id_copy,
        s_taxassignment_description_x,
        dt_inscriptionnotauthenticated_transactiondate,
        dt_inscriptionnotauthenticated_transactiondate_real,
        dt_inscriptionnotauthenticated_depositdate,
        e_inscriptionnotauthenticated_type,
        d_inscriptionnotauthenticated_mortgageloan,
        et_inscriptionnotauthenticated_mortgagetype,
        d_inscriptionnotauthenticated_transactionprice,
        e_inscriptionnotauthenticated_remunerationtype,
        d_inscriptionnotauthenticated_remuneration,
        d_inscriptionnotauthenticated_remunerationsubtotal,
        d_inscriptionnotauthenticated_remunerationtotal,
        dt_inscriptionnotauthenticated_cancellationdate,
        dt_inscriptionnotauthenticated_possessiondate,
        s_inscriptionnotauthenticated_offertopurchasenumber,
        dt_inscriptionnotauthenticated_notaryscheduledate,
        dt_inscriptionnotauthenticated_financingscheduledate,
        b_inscriptionnotauthenticated_conditional_copy,
        b_inscriptionnotauthenticated_mortgageisreferenced_copy,
        b_inscriptionnotauthenticated_homeowner_copy,
        t_inscriptionnotauthenticated_conditions,
        dt_inscriptionnotauthenticated_conditiondeadlinedate,
        i_inscriptionnotauthenticated_order_copy,
        b_inscriptionnotauthenticated_isactive_copy,
        e_inscriptionnotauthenticated_residence_type,
        t_inscriptionnotauthenticated_checklistnote,
        d_inscriptionnotauthenticated_selleronlyretribution,
        b_inscriptionnotauthenticated_draft_copy
        );
    if (!result) {
        free(pki_inscriptionnotauthenticated_id_copy);
        free(fki_inscription_id_copy);
        free(fki_department_id_copy);
        free(fki_financialinstitution_id_copy);
        free(fki_buyercontract_id_copy);
        free(fki_mortgagesupplier_id_copy);
        free(fki_taxassignment_id_copy);
        free(b_inscriptionnotauthenticated_conditional_copy);
        free(b_inscriptionnotauthenticated_mortgageisreferenced_copy);
        free(b_inscriptionnotauthenticated_homeowner_copy);
        free(i_inscriptionnotauthenticated_order_copy);
        free(b_inscriptionnotauthenticated_isactive_copy);
        free(b_inscriptionnotauthenticated_draft_copy);
    }
    return result;
}

void inscriptionnotauthenticated_response_free(inscriptionnotauthenticated_response_t *inscriptionnotauthenticated_response) {
    if(NULL == inscriptionnotauthenticated_response){
        return ;
    }
    if(inscriptionnotauthenticated_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "inscriptionnotauthenticated_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (inscriptionnotauthenticated_response->pki_inscriptionnotauthenticated_id) {
        free(inscriptionnotauthenticated_response->pki_inscriptionnotauthenticated_id);
        inscriptionnotauthenticated_response->pki_inscriptionnotauthenticated_id = NULL;
    }
    if (inscriptionnotauthenticated_response->fki_inscription_id) {
        free(inscriptionnotauthenticated_response->fki_inscription_id);
        inscriptionnotauthenticated_response->fki_inscription_id = NULL;
    }
    if (inscriptionnotauthenticated_response->fki_department_id) {
        free(inscriptionnotauthenticated_response->fki_department_id);
        inscriptionnotauthenticated_response->fki_department_id = NULL;
    }
    if (inscriptionnotauthenticated_response->s_department_name_x) {
        free(inscriptionnotauthenticated_response->s_department_name_x);
        inscriptionnotauthenticated_response->s_department_name_x = NULL;
    }
    if (inscriptionnotauthenticated_response->fki_financialinstitution_id) {
        free(inscriptionnotauthenticated_response->fki_financialinstitution_id);
        inscriptionnotauthenticated_response->fki_financialinstitution_id = NULL;
    }
    if (inscriptionnotauthenticated_response->s_financialinstitution_name_x) {
        free(inscriptionnotauthenticated_response->s_financialinstitution_name_x);
        inscriptionnotauthenticated_response->s_financialinstitution_name_x = NULL;
    }
    if (inscriptionnotauthenticated_response->fki_buyercontract_id) {
        free(inscriptionnotauthenticated_response->fki_buyercontract_id);
        inscriptionnotauthenticated_response->fki_buyercontract_id = NULL;
    }
    if (inscriptionnotauthenticated_response->s_buyercontract_contract) {
        free(inscriptionnotauthenticated_response->s_buyercontract_contract);
        inscriptionnotauthenticated_response->s_buyercontract_contract = NULL;
    }
    if (inscriptionnotauthenticated_response->fki_mortgagesupplier_id) {
        free(inscriptionnotauthenticated_response->fki_mortgagesupplier_id);
        inscriptionnotauthenticated_response->fki_mortgagesupplier_id = NULL;
    }
    if (inscriptionnotauthenticated_response->s_mortgagesupplier_name_x) {
        free(inscriptionnotauthenticated_response->s_mortgagesupplier_name_x);
        inscriptionnotauthenticated_response->s_mortgagesupplier_name_x = NULL;
    }
    if (inscriptionnotauthenticated_response->fki_taxassignment_id) {
        free(inscriptionnotauthenticated_response->fki_taxassignment_id);
        inscriptionnotauthenticated_response->fki_taxassignment_id = NULL;
    }
    if (inscriptionnotauthenticated_response->s_taxassignment_description_x) {
        free(inscriptionnotauthenticated_response->s_taxassignment_description_x);
        inscriptionnotauthenticated_response->s_taxassignment_description_x = NULL;
    }
    if (inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_transactiondate) {
        free(inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_transactiondate);
        inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_transactiondate = NULL;
    }
    if (inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_transactiondate_real) {
        free(inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_transactiondate_real);
        inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_transactiondate_real = NULL;
    }
    if (inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_depositdate) {
        free(inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_depositdate);
        inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_depositdate = NULL;
    }
    if (inscriptionnotauthenticated_response->d_inscriptionnotauthenticated_mortgageloan) {
        free(inscriptionnotauthenticated_response->d_inscriptionnotauthenticated_mortgageloan);
        inscriptionnotauthenticated_response->d_inscriptionnotauthenticated_mortgageloan = NULL;
    }
    if (inscriptionnotauthenticated_response->d_inscriptionnotauthenticated_transactionprice) {
        free(inscriptionnotauthenticated_response->d_inscriptionnotauthenticated_transactionprice);
        inscriptionnotauthenticated_response->d_inscriptionnotauthenticated_transactionprice = NULL;
    }
    if (inscriptionnotauthenticated_response->d_inscriptionnotauthenticated_remuneration) {
        free(inscriptionnotauthenticated_response->d_inscriptionnotauthenticated_remuneration);
        inscriptionnotauthenticated_response->d_inscriptionnotauthenticated_remuneration = NULL;
    }
    if (inscriptionnotauthenticated_response->d_inscriptionnotauthenticated_remunerationsubtotal) {
        free(inscriptionnotauthenticated_response->d_inscriptionnotauthenticated_remunerationsubtotal);
        inscriptionnotauthenticated_response->d_inscriptionnotauthenticated_remunerationsubtotal = NULL;
    }
    if (inscriptionnotauthenticated_response->d_inscriptionnotauthenticated_remunerationtotal) {
        free(inscriptionnotauthenticated_response->d_inscriptionnotauthenticated_remunerationtotal);
        inscriptionnotauthenticated_response->d_inscriptionnotauthenticated_remunerationtotal = NULL;
    }
    if (inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_cancellationdate) {
        free(inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_cancellationdate);
        inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_cancellationdate = NULL;
    }
    if (inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_possessiondate) {
        free(inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_possessiondate);
        inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_possessiondate = NULL;
    }
    if (inscriptionnotauthenticated_response->s_inscriptionnotauthenticated_offertopurchasenumber) {
        free(inscriptionnotauthenticated_response->s_inscriptionnotauthenticated_offertopurchasenumber);
        inscriptionnotauthenticated_response->s_inscriptionnotauthenticated_offertopurchasenumber = NULL;
    }
    if (inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_notaryscheduledate) {
        free(inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_notaryscheduledate);
        inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_notaryscheduledate = NULL;
    }
    if (inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_financingscheduledate) {
        free(inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_financingscheduledate);
        inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_financingscheduledate = NULL;
    }
    if (inscriptionnotauthenticated_response->b_inscriptionnotauthenticated_conditional) {
        free(inscriptionnotauthenticated_response->b_inscriptionnotauthenticated_conditional);
        inscriptionnotauthenticated_response->b_inscriptionnotauthenticated_conditional = NULL;
    }
    if (inscriptionnotauthenticated_response->b_inscriptionnotauthenticated_mortgageisreferenced) {
        free(inscriptionnotauthenticated_response->b_inscriptionnotauthenticated_mortgageisreferenced);
        inscriptionnotauthenticated_response->b_inscriptionnotauthenticated_mortgageisreferenced = NULL;
    }
    if (inscriptionnotauthenticated_response->b_inscriptionnotauthenticated_homeowner) {
        free(inscriptionnotauthenticated_response->b_inscriptionnotauthenticated_homeowner);
        inscriptionnotauthenticated_response->b_inscriptionnotauthenticated_homeowner = NULL;
    }
    if (inscriptionnotauthenticated_response->t_inscriptionnotauthenticated_conditions) {
        free(inscriptionnotauthenticated_response->t_inscriptionnotauthenticated_conditions);
        inscriptionnotauthenticated_response->t_inscriptionnotauthenticated_conditions = NULL;
    }
    if (inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_conditiondeadlinedate) {
        free(inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_conditiondeadlinedate);
        inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_conditiondeadlinedate = NULL;
    }
    if (inscriptionnotauthenticated_response->i_inscriptionnotauthenticated_order) {
        free(inscriptionnotauthenticated_response->i_inscriptionnotauthenticated_order);
        inscriptionnotauthenticated_response->i_inscriptionnotauthenticated_order = NULL;
    }
    if (inscriptionnotauthenticated_response->b_inscriptionnotauthenticated_isactive) {
        free(inscriptionnotauthenticated_response->b_inscriptionnotauthenticated_isactive);
        inscriptionnotauthenticated_response->b_inscriptionnotauthenticated_isactive = NULL;
    }
    if (inscriptionnotauthenticated_response->t_inscriptionnotauthenticated_checklistnote) {
        free(inscriptionnotauthenticated_response->t_inscriptionnotauthenticated_checklistnote);
        inscriptionnotauthenticated_response->t_inscriptionnotauthenticated_checklistnote = NULL;
    }
    if (inscriptionnotauthenticated_response->d_inscriptionnotauthenticated_selleronlyretribution) {
        free(inscriptionnotauthenticated_response->d_inscriptionnotauthenticated_selleronlyretribution);
        inscriptionnotauthenticated_response->d_inscriptionnotauthenticated_selleronlyretribution = NULL;
    }
    if (inscriptionnotauthenticated_response->b_inscriptionnotauthenticated_draft) {
        free(inscriptionnotauthenticated_response->b_inscriptionnotauthenticated_draft);
        inscriptionnotauthenticated_response->b_inscriptionnotauthenticated_draft = NULL;
    }
    free(inscriptionnotauthenticated_response);
}

cJSON *inscriptionnotauthenticated_response_convertToJSON(inscriptionnotauthenticated_response_t *inscriptionnotauthenticated_response) {
    cJSON *item = cJSON_CreateObject();

    // inscriptionnotauthenticated_response->pki_inscriptionnotauthenticated_id
    if (!inscriptionnotauthenticated_response->pki_inscriptionnotauthenticated_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiInscriptionnotauthenticatedID", *inscriptionnotauthenticated_response->pki_inscriptionnotauthenticated_id) == NULL) {
    goto fail; //Numeric
    }


    // inscriptionnotauthenticated_response->fki_inscription_id
    if (!inscriptionnotauthenticated_response->fki_inscription_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiInscriptionID", *inscriptionnotauthenticated_response->fki_inscription_id) == NULL) {
    goto fail; //Numeric
    }


    // inscriptionnotauthenticated_response->fki_department_id
    if(inscriptionnotauthenticated_response->fki_department_id) {
    if(cJSON_AddNumberToObject(item, "fkiDepartmentID", *inscriptionnotauthenticated_response->fki_department_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // inscriptionnotauthenticated_response->s_department_name_x
    if(inscriptionnotauthenticated_response->s_department_name_x) {
    if(cJSON_AddStringToObject(item, "sDepartmentNameX", inscriptionnotauthenticated_response->s_department_name_x) == NULL) {
    goto fail; //String
    }
    }


    // inscriptionnotauthenticated_response->fki_financialinstitution_id
    if(inscriptionnotauthenticated_response->fki_financialinstitution_id) {
    if(cJSON_AddNumberToObject(item, "fkiFinancialinstitutionID", *inscriptionnotauthenticated_response->fki_financialinstitution_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // inscriptionnotauthenticated_response->s_financialinstitution_name_x
    if(inscriptionnotauthenticated_response->s_financialinstitution_name_x) {
    if(cJSON_AddStringToObject(item, "sFinancialinstitutionNameX", inscriptionnotauthenticated_response->s_financialinstitution_name_x) == NULL) {
    goto fail; //String
    }
    }


    // inscriptionnotauthenticated_response->fki_buyercontract_id
    if(inscriptionnotauthenticated_response->fki_buyercontract_id) {
    if(cJSON_AddNumberToObject(item, "fkiBuyercontractID", *inscriptionnotauthenticated_response->fki_buyercontract_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // inscriptionnotauthenticated_response->s_buyercontract_contract
    if(inscriptionnotauthenticated_response->s_buyercontract_contract) {
    if(cJSON_AddStringToObject(item, "sBuyercontractContract", inscriptionnotauthenticated_response->s_buyercontract_contract) == NULL) {
    goto fail; //String
    }
    }


    // inscriptionnotauthenticated_response->fki_mortgagesupplier_id
    if(inscriptionnotauthenticated_response->fki_mortgagesupplier_id) {
    if(cJSON_AddNumberToObject(item, "fkiMortgagesupplierID", *inscriptionnotauthenticated_response->fki_mortgagesupplier_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // inscriptionnotauthenticated_response->s_mortgagesupplier_name_x
    if(inscriptionnotauthenticated_response->s_mortgagesupplier_name_x) {
    if(cJSON_AddStringToObject(item, "sMortgagesupplierNameX", inscriptionnotauthenticated_response->s_mortgagesupplier_name_x) == NULL) {
    goto fail; //String
    }
    }


    // inscriptionnotauthenticated_response->fki_taxassignment_id
    if (!inscriptionnotauthenticated_response->fki_taxassignment_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiTaxassignmentID", *inscriptionnotauthenticated_response->fki_taxassignment_id) == NULL) {
    goto fail; //Numeric
    }


    // inscriptionnotauthenticated_response->s_taxassignment_description_x
    if(inscriptionnotauthenticated_response->s_taxassignment_description_x) {
    if(cJSON_AddStringToObject(item, "sTaxassignmentDescriptionX", inscriptionnotauthenticated_response->s_taxassignment_description_x) == NULL) {
    goto fail; //String
    }
    }


    // inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_transactiondate
    if(inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_transactiondate) {
    if(cJSON_AddStringToObject(item, "dtInscriptionnotauthenticatedTransactiondate", inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_transactiondate) == NULL) {
    goto fail; //String
    }
    }


    // inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_transactiondate_real
    if(inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_transactiondate_real) {
    if(cJSON_AddStringToObject(item, "dtInscriptionnotauthenticatedTransactiondateReal", inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_transactiondate_real) == NULL) {
    goto fail; //String
    }
    }


    // inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_depositdate
    if(inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_depositdate) {
    if(cJSON_AddStringToObject(item, "dtInscriptionnotauthenticatedDepositdate", inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_depositdate) == NULL) {
    goto fail; //String
    }
    }


    // inscriptionnotauthenticated_response->e_inscriptionnotauthenticated_type
    if (ezmax_api_definition__full_field_e_inscriptionnotauthenticated_type__NULL == inscriptionnotauthenticated_response->e_inscriptionnotauthenticated_type) {
        goto fail;
    }
    cJSON *e_inscriptionnotauthenticated_type_local_JSON = field_e_inscriptionnotauthenticated_type_convertToJSON(inscriptionnotauthenticated_response->e_inscriptionnotauthenticated_type);
    if(e_inscriptionnotauthenticated_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eInscriptionnotauthenticatedType", e_inscriptionnotauthenticated_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // inscriptionnotauthenticated_response->d_inscriptionnotauthenticated_mortgageloan
    if (!inscriptionnotauthenticated_response->d_inscriptionnotauthenticated_mortgageloan) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dInscriptionnotauthenticatedMortgageloan", inscriptionnotauthenticated_response->d_inscriptionnotauthenticated_mortgageloan) == NULL) {
    goto fail; //String
    }


    // inscriptionnotauthenticated_response->et_inscriptionnotauthenticated_mortgagetype
    if (ezmax_api_definition__full_field_et_inscriptionnotauthenticated_mortgagetype__NULL == inscriptionnotauthenticated_response->et_inscriptionnotauthenticated_mortgagetype) {
        goto fail;
    }
    cJSON *et_inscriptionnotauthenticated_mortgagetype_local_JSON = field_et_inscriptionnotauthenticated_mortgagetype_convertToJSON(inscriptionnotauthenticated_response->et_inscriptionnotauthenticated_mortgagetype);
    if(et_inscriptionnotauthenticated_mortgagetype_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "etInscriptionnotauthenticatedMortgagetype", et_inscriptionnotauthenticated_mortgagetype_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // inscriptionnotauthenticated_response->d_inscriptionnotauthenticated_transactionprice
    if (!inscriptionnotauthenticated_response->d_inscriptionnotauthenticated_transactionprice) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dInscriptionnotauthenticatedTransactionprice", inscriptionnotauthenticated_response->d_inscriptionnotauthenticated_transactionprice) == NULL) {
    goto fail; //String
    }


    // inscriptionnotauthenticated_response->e_inscriptionnotauthenticated_remunerationtype
    if (ezmax_api_definition__full_field_e_inscriptionnotauthenticated_remunerationtype__NULL == inscriptionnotauthenticated_response->e_inscriptionnotauthenticated_remunerationtype) {
        goto fail;
    }
    cJSON *e_inscriptionnotauthenticated_remunerationtype_local_JSON = field_e_inscriptionnotauthenticated_remunerationtype_convertToJSON(inscriptionnotauthenticated_response->e_inscriptionnotauthenticated_remunerationtype);
    if(e_inscriptionnotauthenticated_remunerationtype_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eInscriptionnotauthenticatedRemunerationtype", e_inscriptionnotauthenticated_remunerationtype_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // inscriptionnotauthenticated_response->d_inscriptionnotauthenticated_remuneration
    if (!inscriptionnotauthenticated_response->d_inscriptionnotauthenticated_remuneration) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dInscriptionnotauthenticatedRemuneration", inscriptionnotauthenticated_response->d_inscriptionnotauthenticated_remuneration) == NULL) {
    goto fail; //String
    }


    // inscriptionnotauthenticated_response->d_inscriptionnotauthenticated_remunerationsubtotal
    if (!inscriptionnotauthenticated_response->d_inscriptionnotauthenticated_remunerationsubtotal) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dInscriptionnotauthenticatedRemunerationsubtotal", inscriptionnotauthenticated_response->d_inscriptionnotauthenticated_remunerationsubtotal) == NULL) {
    goto fail; //String
    }


    // inscriptionnotauthenticated_response->d_inscriptionnotauthenticated_remunerationtotal
    if (!inscriptionnotauthenticated_response->d_inscriptionnotauthenticated_remunerationtotal) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dInscriptionnotauthenticatedRemunerationtotal", inscriptionnotauthenticated_response->d_inscriptionnotauthenticated_remunerationtotal) == NULL) {
    goto fail; //String
    }


    // inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_cancellationdate
    if(inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_cancellationdate) {
    if(cJSON_AddStringToObject(item, "dtInscriptionnotauthenticatedCancellationdate", inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_cancellationdate) == NULL) {
    goto fail; //String
    }
    }


    // inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_possessiondate
    if(inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_possessiondate) {
    if(cJSON_AddStringToObject(item, "dtInscriptionnotauthenticatedPossessiondate", inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_possessiondate) == NULL) {
    goto fail; //String
    }
    }


    // inscriptionnotauthenticated_response->s_inscriptionnotauthenticated_offertopurchasenumber
    if (!inscriptionnotauthenticated_response->s_inscriptionnotauthenticated_offertopurchasenumber) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sInscriptionnotauthenticatedOffertopurchasenumber", inscriptionnotauthenticated_response->s_inscriptionnotauthenticated_offertopurchasenumber) == NULL) {
    goto fail; //String
    }


    // inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_notaryscheduledate
    if(inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_notaryscheduledate) {
    if(cJSON_AddStringToObject(item, "dtInscriptionnotauthenticatedNotaryscheduledate", inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_notaryscheduledate) == NULL) {
    goto fail; //String
    }
    }


    // inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_financingscheduledate
    if(inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_financingscheduledate) {
    if(cJSON_AddStringToObject(item, "dtInscriptionnotauthenticatedFinancingscheduledate", inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_financingscheduledate) == NULL) {
    goto fail; //String
    }
    }


    // inscriptionnotauthenticated_response->b_inscriptionnotauthenticated_conditional
    if (!inscriptionnotauthenticated_response->b_inscriptionnotauthenticated_conditional) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bInscriptionnotauthenticatedConditional", *inscriptionnotauthenticated_response->b_inscriptionnotauthenticated_conditional) == NULL) {
    goto fail; //Bool
    }


    // inscriptionnotauthenticated_response->b_inscriptionnotauthenticated_mortgageisreferenced
    if (!inscriptionnotauthenticated_response->b_inscriptionnotauthenticated_mortgageisreferenced) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bInscriptionnotauthenticatedMortgageisreferenced", *inscriptionnotauthenticated_response->b_inscriptionnotauthenticated_mortgageisreferenced) == NULL) {
    goto fail; //Bool
    }


    // inscriptionnotauthenticated_response->b_inscriptionnotauthenticated_homeowner
    if (!inscriptionnotauthenticated_response->b_inscriptionnotauthenticated_homeowner) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bInscriptionnotauthenticatedHomeowner", *inscriptionnotauthenticated_response->b_inscriptionnotauthenticated_homeowner) == NULL) {
    goto fail; //Bool
    }


    // inscriptionnotauthenticated_response->t_inscriptionnotauthenticated_conditions
    if (!inscriptionnotauthenticated_response->t_inscriptionnotauthenticated_conditions) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tInscriptionnotauthenticatedConditions", inscriptionnotauthenticated_response->t_inscriptionnotauthenticated_conditions) == NULL) {
    goto fail; //String
    }


    // inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_conditiondeadlinedate
    if(inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_conditiondeadlinedate) {
    if(cJSON_AddStringToObject(item, "dtInscriptionnotauthenticatedConditiondeadlinedate", inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_conditiondeadlinedate) == NULL) {
    goto fail; //String
    }
    }


    // inscriptionnotauthenticated_response->i_inscriptionnotauthenticated_order
    if (!inscriptionnotauthenticated_response->i_inscriptionnotauthenticated_order) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iInscriptionnotauthenticatedOrder", *inscriptionnotauthenticated_response->i_inscriptionnotauthenticated_order) == NULL) {
    goto fail; //Numeric
    }


    // inscriptionnotauthenticated_response->b_inscriptionnotauthenticated_isactive
    if (!inscriptionnotauthenticated_response->b_inscriptionnotauthenticated_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bInscriptionnotauthenticatedIsactive", *inscriptionnotauthenticated_response->b_inscriptionnotauthenticated_isactive) == NULL) {
    goto fail; //Bool
    }


    // inscriptionnotauthenticated_response->e_inscriptionnotauthenticated_residence_type
    if (ezmax_api_definition__full_field_e_inscriptionnotauthenticated_residence_type__NULL == inscriptionnotauthenticated_response->e_inscriptionnotauthenticated_residence_type) {
        goto fail;
    }
    cJSON *e_inscriptionnotauthenticated_residence_type_local_JSON = field_e_inscriptionnotauthenticated_residence_type_convertToJSON(inscriptionnotauthenticated_response->e_inscriptionnotauthenticated_residence_type);
    if(e_inscriptionnotauthenticated_residence_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eInscriptionnotauthenticatedResidenceType", e_inscriptionnotauthenticated_residence_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // inscriptionnotauthenticated_response->t_inscriptionnotauthenticated_checklistnote
    if (!inscriptionnotauthenticated_response->t_inscriptionnotauthenticated_checklistnote) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tInscriptionnotauthenticatedChecklistnote", inscriptionnotauthenticated_response->t_inscriptionnotauthenticated_checklistnote) == NULL) {
    goto fail; //String
    }


    // inscriptionnotauthenticated_response->d_inscriptionnotauthenticated_selleronlyretribution
    if (!inscriptionnotauthenticated_response->d_inscriptionnotauthenticated_selleronlyretribution) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dInscriptionnotauthenticatedSelleronlyretribution", inscriptionnotauthenticated_response->d_inscriptionnotauthenticated_selleronlyretribution) == NULL) {
    goto fail; //String
    }


    // inscriptionnotauthenticated_response->b_inscriptionnotauthenticated_draft
    if (!inscriptionnotauthenticated_response->b_inscriptionnotauthenticated_draft) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bInscriptionnotauthenticatedDraft", *inscriptionnotauthenticated_response->b_inscriptionnotauthenticated_draft) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inscriptionnotauthenticated_response_t *inscriptionnotauthenticated_response_parseFromJSON(cJSON *inscriptionnotauthenticated_responseJSON){

    inscriptionnotauthenticated_response_t *inscriptionnotauthenticated_response_local_var = NULL;

    // define the local variable for inscriptionnotauthenticated_response->pki_inscriptionnotauthenticated_id
    int *pki_inscriptionnotauthenticated_id_local_var = NULL;

    // define the local variable for inscriptionnotauthenticated_response->fki_inscription_id
    int *fki_inscription_id_local_var = NULL;

    // define the local variable for inscriptionnotauthenticated_response->fki_department_id
    int *fki_department_id_local_var = NULL;

    char *s_department_name_x_local_str = NULL;

    // define the local variable for inscriptionnotauthenticated_response->fki_financialinstitution_id
    int *fki_financialinstitution_id_local_var = NULL;

    char *s_financialinstitution_name_x_local_str = NULL;

    // define the local variable for inscriptionnotauthenticated_response->fki_buyercontract_id
    int *fki_buyercontract_id_local_var = NULL;

    char *s_buyercontract_contract_local_str = NULL;

    // define the local variable for inscriptionnotauthenticated_response->fki_mortgagesupplier_id
    int *fki_mortgagesupplier_id_local_var = NULL;

    char *s_mortgagesupplier_name_x_local_str = NULL;

    // define the local variable for inscriptionnotauthenticated_response->fki_taxassignment_id
    int *fki_taxassignment_id_local_var = NULL;

    char *s_taxassignment_description_x_local_str = NULL;

    char *dt_inscriptionnotauthenticated_transactiondate_local_str = NULL;

    char *dt_inscriptionnotauthenticated_transactiondate_real_local_str = NULL;

    char *dt_inscriptionnotauthenticated_depositdate_local_str = NULL;

    // define the local variable for inscriptionnotauthenticated_response->e_inscriptionnotauthenticated_type
    ezmax_api_definition__full_field_e_inscriptionnotauthenticated_type__e e_inscriptionnotauthenticated_type_local_nonprim = 0;

    char *d_inscriptionnotauthenticated_mortgageloan_local_str = NULL;

    // define the local variable for inscriptionnotauthenticated_response->et_inscriptionnotauthenticated_mortgagetype
    ezmax_api_definition__full_field_et_inscriptionnotauthenticated_mortgagetype__e et_inscriptionnotauthenticated_mortgagetype_local_nonprim = 0;

    char *d_inscriptionnotauthenticated_transactionprice_local_str = NULL;

    // define the local variable for inscriptionnotauthenticated_response->e_inscriptionnotauthenticated_remunerationtype
    ezmax_api_definition__full_field_e_inscriptionnotauthenticated_remunerationtype__e e_inscriptionnotauthenticated_remunerationtype_local_nonprim = 0;

    char *d_inscriptionnotauthenticated_remuneration_local_str = NULL;

    char *d_inscriptionnotauthenticated_remunerationsubtotal_local_str = NULL;

    char *d_inscriptionnotauthenticated_remunerationtotal_local_str = NULL;

    char *dt_inscriptionnotauthenticated_cancellationdate_local_str = NULL;

    char *dt_inscriptionnotauthenticated_possessiondate_local_str = NULL;

    char *s_inscriptionnotauthenticated_offertopurchasenumber_local_str = NULL;

    char *dt_inscriptionnotauthenticated_notaryscheduledate_local_str = NULL;

    char *dt_inscriptionnotauthenticated_financingscheduledate_local_str = NULL;

    // define the local variable for inscriptionnotauthenticated_response->b_inscriptionnotauthenticated_conditional
    int *b_inscriptionnotauthenticated_conditional_local_var = NULL;

    // define the local variable for inscriptionnotauthenticated_response->b_inscriptionnotauthenticated_mortgageisreferenced
    int *b_inscriptionnotauthenticated_mortgageisreferenced_local_var = NULL;

    // define the local variable for inscriptionnotauthenticated_response->b_inscriptionnotauthenticated_homeowner
    int *b_inscriptionnotauthenticated_homeowner_local_var = NULL;

    char *t_inscriptionnotauthenticated_conditions_local_str = NULL;

    char *dt_inscriptionnotauthenticated_conditiondeadlinedate_local_str = NULL;

    // define the local variable for inscriptionnotauthenticated_response->i_inscriptionnotauthenticated_order
    int *i_inscriptionnotauthenticated_order_local_var = NULL;

    // define the local variable for inscriptionnotauthenticated_response->b_inscriptionnotauthenticated_isactive
    int *b_inscriptionnotauthenticated_isactive_local_var = NULL;

    // define the local variable for inscriptionnotauthenticated_response->e_inscriptionnotauthenticated_residence_type
    ezmax_api_definition__full_field_e_inscriptionnotauthenticated_residence_type__e e_inscriptionnotauthenticated_residence_type_local_nonprim = 0;

    char *t_inscriptionnotauthenticated_checklistnote_local_str = NULL;

    char *d_inscriptionnotauthenticated_selleronlyretribution_local_str = NULL;

    // define the local variable for inscriptionnotauthenticated_response->b_inscriptionnotauthenticated_draft
    int *b_inscriptionnotauthenticated_draft_local_var = NULL;

    // inscriptionnotauthenticated_response->pki_inscriptionnotauthenticated_id
    cJSON *pki_inscriptionnotauthenticated_id = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_responseJSON, "pkiInscriptionnotauthenticatedID");
    if (cJSON_IsNull(pki_inscriptionnotauthenticated_id)) {
        pki_inscriptionnotauthenticated_id = NULL;
    }
    if (!pki_inscriptionnotauthenticated_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_inscriptionnotauthenticated_id))
    {
    goto end; //Numeric
    }
    pki_inscriptionnotauthenticated_id_local_var = malloc(sizeof(int));
    if(!pki_inscriptionnotauthenticated_id_local_var)
    {
        goto end;
    }
    *pki_inscriptionnotauthenticated_id_local_var = pki_inscriptionnotauthenticated_id->valuedouble;

    // inscriptionnotauthenticated_response->fki_inscription_id
    cJSON *fki_inscription_id = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_responseJSON, "fkiInscriptionID");
    if (cJSON_IsNull(fki_inscription_id)) {
        fki_inscription_id = NULL;
    }
    if (!fki_inscription_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_inscription_id))
    {
    goto end; //Numeric
    }
    fki_inscription_id_local_var = malloc(sizeof(int));
    if(!fki_inscription_id_local_var)
    {
        goto end;
    }
    *fki_inscription_id_local_var = fki_inscription_id->valuedouble;

    // inscriptionnotauthenticated_response->fki_department_id
    cJSON *fki_department_id = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_responseJSON, "fkiDepartmentID");
    if (cJSON_IsNull(fki_department_id)) {
        fki_department_id = NULL;
    }
    if (fki_department_id) { 
    if(!cJSON_IsNumber(fki_department_id))
    {
    goto end; //Numeric
    }
    fki_department_id_local_var = malloc(sizeof(int));
    if(!fki_department_id_local_var)
    {
        goto end;
    }
    *fki_department_id_local_var = fki_department_id->valuedouble;
    }

    // inscriptionnotauthenticated_response->s_department_name_x
    cJSON *s_department_name_x = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_responseJSON, "sDepartmentNameX");
    if (cJSON_IsNull(s_department_name_x)) {
        s_department_name_x = NULL;
    }
    if (s_department_name_x) { 
    if(!cJSON_IsString(s_department_name_x) && !cJSON_IsNull(s_department_name_x))
    {
    goto end; //String
    }
    }

    // inscriptionnotauthenticated_response->fki_financialinstitution_id
    cJSON *fki_financialinstitution_id = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_responseJSON, "fkiFinancialinstitutionID");
    if (cJSON_IsNull(fki_financialinstitution_id)) {
        fki_financialinstitution_id = NULL;
    }
    if (fki_financialinstitution_id) { 
    if(!cJSON_IsNumber(fki_financialinstitution_id))
    {
    goto end; //Numeric
    }
    fki_financialinstitution_id_local_var = malloc(sizeof(int));
    if(!fki_financialinstitution_id_local_var)
    {
        goto end;
    }
    *fki_financialinstitution_id_local_var = fki_financialinstitution_id->valuedouble;
    }

    // inscriptionnotauthenticated_response->s_financialinstitution_name_x
    cJSON *s_financialinstitution_name_x = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_responseJSON, "sFinancialinstitutionNameX");
    if (cJSON_IsNull(s_financialinstitution_name_x)) {
        s_financialinstitution_name_x = NULL;
    }
    if (s_financialinstitution_name_x) { 
    if(!cJSON_IsString(s_financialinstitution_name_x) && !cJSON_IsNull(s_financialinstitution_name_x))
    {
    goto end; //String
    }
    }

    // inscriptionnotauthenticated_response->fki_buyercontract_id
    cJSON *fki_buyercontract_id = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_responseJSON, "fkiBuyercontractID");
    if (cJSON_IsNull(fki_buyercontract_id)) {
        fki_buyercontract_id = NULL;
    }
    if (fki_buyercontract_id) { 
    if(!cJSON_IsNumber(fki_buyercontract_id))
    {
    goto end; //Numeric
    }
    fki_buyercontract_id_local_var = malloc(sizeof(int));
    if(!fki_buyercontract_id_local_var)
    {
        goto end;
    }
    *fki_buyercontract_id_local_var = fki_buyercontract_id->valuedouble;
    }

    // inscriptionnotauthenticated_response->s_buyercontract_contract
    cJSON *s_buyercontract_contract = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_responseJSON, "sBuyercontractContract");
    if (cJSON_IsNull(s_buyercontract_contract)) {
        s_buyercontract_contract = NULL;
    }
    if (s_buyercontract_contract) { 
    if(!cJSON_IsString(s_buyercontract_contract) && !cJSON_IsNull(s_buyercontract_contract))
    {
    goto end; //String
    }
    }

    // inscriptionnotauthenticated_response->fki_mortgagesupplier_id
    cJSON *fki_mortgagesupplier_id = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_responseJSON, "fkiMortgagesupplierID");
    if (cJSON_IsNull(fki_mortgagesupplier_id)) {
        fki_mortgagesupplier_id = NULL;
    }
    if (fki_mortgagesupplier_id) { 
    if(!cJSON_IsNumber(fki_mortgagesupplier_id))
    {
    goto end; //Numeric
    }
    fki_mortgagesupplier_id_local_var = malloc(sizeof(int));
    if(!fki_mortgagesupplier_id_local_var)
    {
        goto end;
    }
    *fki_mortgagesupplier_id_local_var = fki_mortgagesupplier_id->valuedouble;
    }

    // inscriptionnotauthenticated_response->s_mortgagesupplier_name_x
    cJSON *s_mortgagesupplier_name_x = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_responseJSON, "sMortgagesupplierNameX");
    if (cJSON_IsNull(s_mortgagesupplier_name_x)) {
        s_mortgagesupplier_name_x = NULL;
    }
    if (s_mortgagesupplier_name_x) { 
    if(!cJSON_IsString(s_mortgagesupplier_name_x) && !cJSON_IsNull(s_mortgagesupplier_name_x))
    {
    goto end; //String
    }
    }

    // inscriptionnotauthenticated_response->fki_taxassignment_id
    cJSON *fki_taxassignment_id = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_responseJSON, "fkiTaxassignmentID");
    if (cJSON_IsNull(fki_taxassignment_id)) {
        fki_taxassignment_id = NULL;
    }
    if (!fki_taxassignment_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_taxassignment_id))
    {
    goto end; //Numeric
    }
    fki_taxassignment_id_local_var = malloc(sizeof(int));
    if(!fki_taxassignment_id_local_var)
    {
        goto end;
    }
    *fki_taxassignment_id_local_var = fki_taxassignment_id->valuedouble;

    // inscriptionnotauthenticated_response->s_taxassignment_description_x
    cJSON *s_taxassignment_description_x = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_responseJSON, "sTaxassignmentDescriptionX");
    if (cJSON_IsNull(s_taxassignment_description_x)) {
        s_taxassignment_description_x = NULL;
    }
    if (s_taxassignment_description_x) { 
    if(!cJSON_IsString(s_taxassignment_description_x) && !cJSON_IsNull(s_taxassignment_description_x))
    {
    goto end; //String
    }
    }

    // inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_transactiondate
    cJSON *dt_inscriptionnotauthenticated_transactiondate = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_responseJSON, "dtInscriptionnotauthenticatedTransactiondate");
    if (cJSON_IsNull(dt_inscriptionnotauthenticated_transactiondate)) {
        dt_inscriptionnotauthenticated_transactiondate = NULL;
    }
    if (dt_inscriptionnotauthenticated_transactiondate) { 
    if(!cJSON_IsString(dt_inscriptionnotauthenticated_transactiondate) && !cJSON_IsNull(dt_inscriptionnotauthenticated_transactiondate))
    {
    goto end; //String
    }
    }

    // inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_transactiondate_real
    cJSON *dt_inscriptionnotauthenticated_transactiondate_real = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_responseJSON, "dtInscriptionnotauthenticatedTransactiondateReal");
    if (cJSON_IsNull(dt_inscriptionnotauthenticated_transactiondate_real)) {
        dt_inscriptionnotauthenticated_transactiondate_real = NULL;
    }
    if (dt_inscriptionnotauthenticated_transactiondate_real) { 
    if(!cJSON_IsString(dt_inscriptionnotauthenticated_transactiondate_real) && !cJSON_IsNull(dt_inscriptionnotauthenticated_transactiondate_real))
    {
    goto end; //String
    }
    }

    // inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_depositdate
    cJSON *dt_inscriptionnotauthenticated_depositdate = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_responseJSON, "dtInscriptionnotauthenticatedDepositdate");
    if (cJSON_IsNull(dt_inscriptionnotauthenticated_depositdate)) {
        dt_inscriptionnotauthenticated_depositdate = NULL;
    }
    if (dt_inscriptionnotauthenticated_depositdate) { 
    if(!cJSON_IsString(dt_inscriptionnotauthenticated_depositdate) && !cJSON_IsNull(dt_inscriptionnotauthenticated_depositdate))
    {
    goto end; //String
    }
    }

    // inscriptionnotauthenticated_response->e_inscriptionnotauthenticated_type
    cJSON *e_inscriptionnotauthenticated_type = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_responseJSON, "eInscriptionnotauthenticatedType");
    if (cJSON_IsNull(e_inscriptionnotauthenticated_type)) {
        e_inscriptionnotauthenticated_type = NULL;
    }
    if (!e_inscriptionnotauthenticated_type) {
        goto end;
    }

    
    e_inscriptionnotauthenticated_type_local_nonprim = field_e_inscriptionnotauthenticated_type_parseFromJSON(e_inscriptionnotauthenticated_type); //custom

    // inscriptionnotauthenticated_response->d_inscriptionnotauthenticated_mortgageloan
    cJSON *d_inscriptionnotauthenticated_mortgageloan = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_responseJSON, "dInscriptionnotauthenticatedMortgageloan");
    if (cJSON_IsNull(d_inscriptionnotauthenticated_mortgageloan)) {
        d_inscriptionnotauthenticated_mortgageloan = NULL;
    }
    if (!d_inscriptionnotauthenticated_mortgageloan) {
        goto end;
    }

    
    if(!cJSON_IsString(d_inscriptionnotauthenticated_mortgageloan))
    {
    goto end; //String
    }

    // inscriptionnotauthenticated_response->et_inscriptionnotauthenticated_mortgagetype
    cJSON *et_inscriptionnotauthenticated_mortgagetype = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_responseJSON, "etInscriptionnotauthenticatedMortgagetype");
    if (cJSON_IsNull(et_inscriptionnotauthenticated_mortgagetype)) {
        et_inscriptionnotauthenticated_mortgagetype = NULL;
    }
    if (!et_inscriptionnotauthenticated_mortgagetype) {
        goto end;
    }

    
    et_inscriptionnotauthenticated_mortgagetype_local_nonprim = field_et_inscriptionnotauthenticated_mortgagetype_parseFromJSON(et_inscriptionnotauthenticated_mortgagetype); //custom

    // inscriptionnotauthenticated_response->d_inscriptionnotauthenticated_transactionprice
    cJSON *d_inscriptionnotauthenticated_transactionprice = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_responseJSON, "dInscriptionnotauthenticatedTransactionprice");
    if (cJSON_IsNull(d_inscriptionnotauthenticated_transactionprice)) {
        d_inscriptionnotauthenticated_transactionprice = NULL;
    }
    if (!d_inscriptionnotauthenticated_transactionprice) {
        goto end;
    }

    
    if(!cJSON_IsString(d_inscriptionnotauthenticated_transactionprice))
    {
    goto end; //String
    }

    // inscriptionnotauthenticated_response->e_inscriptionnotauthenticated_remunerationtype
    cJSON *e_inscriptionnotauthenticated_remunerationtype = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_responseJSON, "eInscriptionnotauthenticatedRemunerationtype");
    if (cJSON_IsNull(e_inscriptionnotauthenticated_remunerationtype)) {
        e_inscriptionnotauthenticated_remunerationtype = NULL;
    }
    if (!e_inscriptionnotauthenticated_remunerationtype) {
        goto end;
    }

    
    e_inscriptionnotauthenticated_remunerationtype_local_nonprim = field_e_inscriptionnotauthenticated_remunerationtype_parseFromJSON(e_inscriptionnotauthenticated_remunerationtype); //custom

    // inscriptionnotauthenticated_response->d_inscriptionnotauthenticated_remuneration
    cJSON *d_inscriptionnotauthenticated_remuneration = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_responseJSON, "dInscriptionnotauthenticatedRemuneration");
    if (cJSON_IsNull(d_inscriptionnotauthenticated_remuneration)) {
        d_inscriptionnotauthenticated_remuneration = NULL;
    }
    if (!d_inscriptionnotauthenticated_remuneration) {
        goto end;
    }

    
    if(!cJSON_IsString(d_inscriptionnotauthenticated_remuneration))
    {
    goto end; //String
    }

    // inscriptionnotauthenticated_response->d_inscriptionnotauthenticated_remunerationsubtotal
    cJSON *d_inscriptionnotauthenticated_remunerationsubtotal = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_responseJSON, "dInscriptionnotauthenticatedRemunerationsubtotal");
    if (cJSON_IsNull(d_inscriptionnotauthenticated_remunerationsubtotal)) {
        d_inscriptionnotauthenticated_remunerationsubtotal = NULL;
    }
    if (!d_inscriptionnotauthenticated_remunerationsubtotal) {
        goto end;
    }

    
    if(!cJSON_IsString(d_inscriptionnotauthenticated_remunerationsubtotal))
    {
    goto end; //String
    }

    // inscriptionnotauthenticated_response->d_inscriptionnotauthenticated_remunerationtotal
    cJSON *d_inscriptionnotauthenticated_remunerationtotal = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_responseJSON, "dInscriptionnotauthenticatedRemunerationtotal");
    if (cJSON_IsNull(d_inscriptionnotauthenticated_remunerationtotal)) {
        d_inscriptionnotauthenticated_remunerationtotal = NULL;
    }
    if (!d_inscriptionnotauthenticated_remunerationtotal) {
        goto end;
    }

    
    if(!cJSON_IsString(d_inscriptionnotauthenticated_remunerationtotal))
    {
    goto end; //String
    }

    // inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_cancellationdate
    cJSON *dt_inscriptionnotauthenticated_cancellationdate = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_responseJSON, "dtInscriptionnotauthenticatedCancellationdate");
    if (cJSON_IsNull(dt_inscriptionnotauthenticated_cancellationdate)) {
        dt_inscriptionnotauthenticated_cancellationdate = NULL;
    }
    if (dt_inscriptionnotauthenticated_cancellationdate) { 
    if(!cJSON_IsString(dt_inscriptionnotauthenticated_cancellationdate) && !cJSON_IsNull(dt_inscriptionnotauthenticated_cancellationdate))
    {
    goto end; //String
    }
    }

    // inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_possessiondate
    cJSON *dt_inscriptionnotauthenticated_possessiondate = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_responseJSON, "dtInscriptionnotauthenticatedPossessiondate");
    if (cJSON_IsNull(dt_inscriptionnotauthenticated_possessiondate)) {
        dt_inscriptionnotauthenticated_possessiondate = NULL;
    }
    if (dt_inscriptionnotauthenticated_possessiondate) { 
    if(!cJSON_IsString(dt_inscriptionnotauthenticated_possessiondate) && !cJSON_IsNull(dt_inscriptionnotauthenticated_possessiondate))
    {
    goto end; //String
    }
    }

    // inscriptionnotauthenticated_response->s_inscriptionnotauthenticated_offertopurchasenumber
    cJSON *s_inscriptionnotauthenticated_offertopurchasenumber = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_responseJSON, "sInscriptionnotauthenticatedOffertopurchasenumber");
    if (cJSON_IsNull(s_inscriptionnotauthenticated_offertopurchasenumber)) {
        s_inscriptionnotauthenticated_offertopurchasenumber = NULL;
    }
    if (!s_inscriptionnotauthenticated_offertopurchasenumber) {
        goto end;
    }

    
    if(!cJSON_IsString(s_inscriptionnotauthenticated_offertopurchasenumber))
    {
    goto end; //String
    }

    // inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_notaryscheduledate
    cJSON *dt_inscriptionnotauthenticated_notaryscheduledate = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_responseJSON, "dtInscriptionnotauthenticatedNotaryscheduledate");
    if (cJSON_IsNull(dt_inscriptionnotauthenticated_notaryscheduledate)) {
        dt_inscriptionnotauthenticated_notaryscheduledate = NULL;
    }
    if (dt_inscriptionnotauthenticated_notaryscheduledate) { 
    if(!cJSON_IsString(dt_inscriptionnotauthenticated_notaryscheduledate) && !cJSON_IsNull(dt_inscriptionnotauthenticated_notaryscheduledate))
    {
    goto end; //String
    }
    }

    // inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_financingscheduledate
    cJSON *dt_inscriptionnotauthenticated_financingscheduledate = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_responseJSON, "dtInscriptionnotauthenticatedFinancingscheduledate");
    if (cJSON_IsNull(dt_inscriptionnotauthenticated_financingscheduledate)) {
        dt_inscriptionnotauthenticated_financingscheduledate = NULL;
    }
    if (dt_inscriptionnotauthenticated_financingscheduledate) { 
    if(!cJSON_IsString(dt_inscriptionnotauthenticated_financingscheduledate) && !cJSON_IsNull(dt_inscriptionnotauthenticated_financingscheduledate))
    {
    goto end; //String
    }
    }

    // inscriptionnotauthenticated_response->b_inscriptionnotauthenticated_conditional
    cJSON *b_inscriptionnotauthenticated_conditional = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_responseJSON, "bInscriptionnotauthenticatedConditional");
    if (cJSON_IsNull(b_inscriptionnotauthenticated_conditional)) {
        b_inscriptionnotauthenticated_conditional = NULL;
    }
    if (!b_inscriptionnotauthenticated_conditional) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_inscriptionnotauthenticated_conditional))
    {
    goto end; //Bool
    }
    b_inscriptionnotauthenticated_conditional_local_var = malloc(sizeof(int));
    if(!b_inscriptionnotauthenticated_conditional_local_var)
    {
        goto end;
    }
    *b_inscriptionnotauthenticated_conditional_local_var = b_inscriptionnotauthenticated_conditional->valueint;

    // inscriptionnotauthenticated_response->b_inscriptionnotauthenticated_mortgageisreferenced
    cJSON *b_inscriptionnotauthenticated_mortgageisreferenced = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_responseJSON, "bInscriptionnotauthenticatedMortgageisreferenced");
    if (cJSON_IsNull(b_inscriptionnotauthenticated_mortgageisreferenced)) {
        b_inscriptionnotauthenticated_mortgageisreferenced = NULL;
    }
    if (!b_inscriptionnotauthenticated_mortgageisreferenced) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_inscriptionnotauthenticated_mortgageisreferenced))
    {
    goto end; //Bool
    }
    b_inscriptionnotauthenticated_mortgageisreferenced_local_var = malloc(sizeof(int));
    if(!b_inscriptionnotauthenticated_mortgageisreferenced_local_var)
    {
        goto end;
    }
    *b_inscriptionnotauthenticated_mortgageisreferenced_local_var = b_inscriptionnotauthenticated_mortgageisreferenced->valueint;

    // inscriptionnotauthenticated_response->b_inscriptionnotauthenticated_homeowner
    cJSON *b_inscriptionnotauthenticated_homeowner = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_responseJSON, "bInscriptionnotauthenticatedHomeowner");
    if (cJSON_IsNull(b_inscriptionnotauthenticated_homeowner)) {
        b_inscriptionnotauthenticated_homeowner = NULL;
    }
    if (!b_inscriptionnotauthenticated_homeowner) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_inscriptionnotauthenticated_homeowner))
    {
    goto end; //Bool
    }
    b_inscriptionnotauthenticated_homeowner_local_var = malloc(sizeof(int));
    if(!b_inscriptionnotauthenticated_homeowner_local_var)
    {
        goto end;
    }
    *b_inscriptionnotauthenticated_homeowner_local_var = b_inscriptionnotauthenticated_homeowner->valueint;

    // inscriptionnotauthenticated_response->t_inscriptionnotauthenticated_conditions
    cJSON *t_inscriptionnotauthenticated_conditions = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_responseJSON, "tInscriptionnotauthenticatedConditions");
    if (cJSON_IsNull(t_inscriptionnotauthenticated_conditions)) {
        t_inscriptionnotauthenticated_conditions = NULL;
    }
    if (!t_inscriptionnotauthenticated_conditions) {
        goto end;
    }

    
    if(!cJSON_IsString(t_inscriptionnotauthenticated_conditions))
    {
    goto end; //String
    }

    // inscriptionnotauthenticated_response->dt_inscriptionnotauthenticated_conditiondeadlinedate
    cJSON *dt_inscriptionnotauthenticated_conditiondeadlinedate = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_responseJSON, "dtInscriptionnotauthenticatedConditiondeadlinedate");
    if (cJSON_IsNull(dt_inscriptionnotauthenticated_conditiondeadlinedate)) {
        dt_inscriptionnotauthenticated_conditiondeadlinedate = NULL;
    }
    if (dt_inscriptionnotauthenticated_conditiondeadlinedate) { 
    if(!cJSON_IsString(dt_inscriptionnotauthenticated_conditiondeadlinedate) && !cJSON_IsNull(dt_inscriptionnotauthenticated_conditiondeadlinedate))
    {
    goto end; //String
    }
    }

    // inscriptionnotauthenticated_response->i_inscriptionnotauthenticated_order
    cJSON *i_inscriptionnotauthenticated_order = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_responseJSON, "iInscriptionnotauthenticatedOrder");
    if (cJSON_IsNull(i_inscriptionnotauthenticated_order)) {
        i_inscriptionnotauthenticated_order = NULL;
    }
    if (!i_inscriptionnotauthenticated_order) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_inscriptionnotauthenticated_order))
    {
    goto end; //Numeric
    }
    i_inscriptionnotauthenticated_order_local_var = malloc(sizeof(int));
    if(!i_inscriptionnotauthenticated_order_local_var)
    {
        goto end;
    }
    *i_inscriptionnotauthenticated_order_local_var = i_inscriptionnotauthenticated_order->valuedouble;

    // inscriptionnotauthenticated_response->b_inscriptionnotauthenticated_isactive
    cJSON *b_inscriptionnotauthenticated_isactive = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_responseJSON, "bInscriptionnotauthenticatedIsactive");
    if (cJSON_IsNull(b_inscriptionnotauthenticated_isactive)) {
        b_inscriptionnotauthenticated_isactive = NULL;
    }
    if (!b_inscriptionnotauthenticated_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_inscriptionnotauthenticated_isactive))
    {
    goto end; //Bool
    }
    b_inscriptionnotauthenticated_isactive_local_var = malloc(sizeof(int));
    if(!b_inscriptionnotauthenticated_isactive_local_var)
    {
        goto end;
    }
    *b_inscriptionnotauthenticated_isactive_local_var = b_inscriptionnotauthenticated_isactive->valueint;

    // inscriptionnotauthenticated_response->e_inscriptionnotauthenticated_residence_type
    cJSON *e_inscriptionnotauthenticated_residence_type = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_responseJSON, "eInscriptionnotauthenticatedResidenceType");
    if (cJSON_IsNull(e_inscriptionnotauthenticated_residence_type)) {
        e_inscriptionnotauthenticated_residence_type = NULL;
    }
    if (!e_inscriptionnotauthenticated_residence_type) {
        goto end;
    }

    
    e_inscriptionnotauthenticated_residence_type_local_nonprim = field_e_inscriptionnotauthenticated_residence_type_parseFromJSON(e_inscriptionnotauthenticated_residence_type); //custom

    // inscriptionnotauthenticated_response->t_inscriptionnotauthenticated_checklistnote
    cJSON *t_inscriptionnotauthenticated_checklistnote = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_responseJSON, "tInscriptionnotauthenticatedChecklistnote");
    if (cJSON_IsNull(t_inscriptionnotauthenticated_checklistnote)) {
        t_inscriptionnotauthenticated_checklistnote = NULL;
    }
    if (!t_inscriptionnotauthenticated_checklistnote) {
        goto end;
    }

    
    if(!cJSON_IsString(t_inscriptionnotauthenticated_checklistnote))
    {
    goto end; //String
    }

    // inscriptionnotauthenticated_response->d_inscriptionnotauthenticated_selleronlyretribution
    cJSON *d_inscriptionnotauthenticated_selleronlyretribution = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_responseJSON, "dInscriptionnotauthenticatedSelleronlyretribution");
    if (cJSON_IsNull(d_inscriptionnotauthenticated_selleronlyretribution)) {
        d_inscriptionnotauthenticated_selleronlyretribution = NULL;
    }
    if (!d_inscriptionnotauthenticated_selleronlyretribution) {
        goto end;
    }

    
    if(!cJSON_IsString(d_inscriptionnotauthenticated_selleronlyretribution))
    {
    goto end; //String
    }

    // inscriptionnotauthenticated_response->b_inscriptionnotauthenticated_draft
    cJSON *b_inscriptionnotauthenticated_draft = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_responseJSON, "bInscriptionnotauthenticatedDraft");
    if (cJSON_IsNull(b_inscriptionnotauthenticated_draft)) {
        b_inscriptionnotauthenticated_draft = NULL;
    }
    if (!b_inscriptionnotauthenticated_draft) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_inscriptionnotauthenticated_draft))
    {
    goto end; //Bool
    }
    b_inscriptionnotauthenticated_draft_local_var = malloc(sizeof(int));
    if(!b_inscriptionnotauthenticated_draft_local_var)
    {
        goto end;
    }
    *b_inscriptionnotauthenticated_draft_local_var = b_inscriptionnotauthenticated_draft->valueint;


    if (s_department_name_x && !cJSON_IsNull(s_department_name_x)) s_department_name_x_local_str = strdup(s_department_name_x->valuestring);
    if (s_financialinstitution_name_x && !cJSON_IsNull(s_financialinstitution_name_x)) s_financialinstitution_name_x_local_str = strdup(s_financialinstitution_name_x->valuestring);
    if (s_buyercontract_contract && !cJSON_IsNull(s_buyercontract_contract)) s_buyercontract_contract_local_str = strdup(s_buyercontract_contract->valuestring);
    if (s_mortgagesupplier_name_x && !cJSON_IsNull(s_mortgagesupplier_name_x)) s_mortgagesupplier_name_x_local_str = strdup(s_mortgagesupplier_name_x->valuestring);
    if (s_taxassignment_description_x && !cJSON_IsNull(s_taxassignment_description_x)) s_taxassignment_description_x_local_str = strdup(s_taxassignment_description_x->valuestring);
    if (dt_inscriptionnotauthenticated_transactiondate && !cJSON_IsNull(dt_inscriptionnotauthenticated_transactiondate)) dt_inscriptionnotauthenticated_transactiondate_local_str = strdup(dt_inscriptionnotauthenticated_transactiondate->valuestring);
    if (dt_inscriptionnotauthenticated_transactiondate_real && !cJSON_IsNull(dt_inscriptionnotauthenticated_transactiondate_real)) dt_inscriptionnotauthenticated_transactiondate_real_local_str = strdup(dt_inscriptionnotauthenticated_transactiondate_real->valuestring);
    if (dt_inscriptionnotauthenticated_depositdate && !cJSON_IsNull(dt_inscriptionnotauthenticated_depositdate)) dt_inscriptionnotauthenticated_depositdate_local_str = strdup(dt_inscriptionnotauthenticated_depositdate->valuestring);
    if (d_inscriptionnotauthenticated_mortgageloan && !cJSON_IsNull(d_inscriptionnotauthenticated_mortgageloan)) d_inscriptionnotauthenticated_mortgageloan_local_str = strdup(d_inscriptionnotauthenticated_mortgageloan->valuestring);
    if (d_inscriptionnotauthenticated_transactionprice && !cJSON_IsNull(d_inscriptionnotauthenticated_transactionprice)) d_inscriptionnotauthenticated_transactionprice_local_str = strdup(d_inscriptionnotauthenticated_transactionprice->valuestring);
    if (d_inscriptionnotauthenticated_remuneration && !cJSON_IsNull(d_inscriptionnotauthenticated_remuneration)) d_inscriptionnotauthenticated_remuneration_local_str = strdup(d_inscriptionnotauthenticated_remuneration->valuestring);
    if (d_inscriptionnotauthenticated_remunerationsubtotal && !cJSON_IsNull(d_inscriptionnotauthenticated_remunerationsubtotal)) d_inscriptionnotauthenticated_remunerationsubtotal_local_str = strdup(d_inscriptionnotauthenticated_remunerationsubtotal->valuestring);
    if (d_inscriptionnotauthenticated_remunerationtotal && !cJSON_IsNull(d_inscriptionnotauthenticated_remunerationtotal)) d_inscriptionnotauthenticated_remunerationtotal_local_str = strdup(d_inscriptionnotauthenticated_remunerationtotal->valuestring);
    if (dt_inscriptionnotauthenticated_cancellationdate && !cJSON_IsNull(dt_inscriptionnotauthenticated_cancellationdate)) dt_inscriptionnotauthenticated_cancellationdate_local_str = strdup(dt_inscriptionnotauthenticated_cancellationdate->valuestring);
    if (dt_inscriptionnotauthenticated_possessiondate && !cJSON_IsNull(dt_inscriptionnotauthenticated_possessiondate)) dt_inscriptionnotauthenticated_possessiondate_local_str = strdup(dt_inscriptionnotauthenticated_possessiondate->valuestring);
    if (s_inscriptionnotauthenticated_offertopurchasenumber && !cJSON_IsNull(s_inscriptionnotauthenticated_offertopurchasenumber)) s_inscriptionnotauthenticated_offertopurchasenumber_local_str = strdup(s_inscriptionnotauthenticated_offertopurchasenumber->valuestring);
    if (dt_inscriptionnotauthenticated_notaryscheduledate && !cJSON_IsNull(dt_inscriptionnotauthenticated_notaryscheduledate)) dt_inscriptionnotauthenticated_notaryscheduledate_local_str = strdup(dt_inscriptionnotauthenticated_notaryscheduledate->valuestring);
    if (dt_inscriptionnotauthenticated_financingscheduledate && !cJSON_IsNull(dt_inscriptionnotauthenticated_financingscheduledate)) dt_inscriptionnotauthenticated_financingscheduledate_local_str = strdup(dt_inscriptionnotauthenticated_financingscheduledate->valuestring);
    if (t_inscriptionnotauthenticated_conditions && !cJSON_IsNull(t_inscriptionnotauthenticated_conditions)) t_inscriptionnotauthenticated_conditions_local_str = strdup(t_inscriptionnotauthenticated_conditions->valuestring);
    if (dt_inscriptionnotauthenticated_conditiondeadlinedate && !cJSON_IsNull(dt_inscriptionnotauthenticated_conditiondeadlinedate)) dt_inscriptionnotauthenticated_conditiondeadlinedate_local_str = strdup(dt_inscriptionnotauthenticated_conditiondeadlinedate->valuestring);
    if (t_inscriptionnotauthenticated_checklistnote && !cJSON_IsNull(t_inscriptionnotauthenticated_checklistnote)) t_inscriptionnotauthenticated_checklistnote_local_str = strdup(t_inscriptionnotauthenticated_checklistnote->valuestring);
    if (d_inscriptionnotauthenticated_selleronlyretribution && !cJSON_IsNull(d_inscriptionnotauthenticated_selleronlyretribution)) d_inscriptionnotauthenticated_selleronlyretribution_local_str = strdup(d_inscriptionnotauthenticated_selleronlyretribution->valuestring);

    inscriptionnotauthenticated_response_local_var = inscriptionnotauthenticated_response_create_internal (
        pki_inscriptionnotauthenticated_id_local_var,
        fki_inscription_id_local_var,
        fki_department_id_local_var,
        s_department_name_x_local_str,
        fki_financialinstitution_id_local_var,
        s_financialinstitution_name_x_local_str,
        fki_buyercontract_id_local_var,
        s_buyercontract_contract_local_str,
        fki_mortgagesupplier_id_local_var,
        s_mortgagesupplier_name_x_local_str,
        fki_taxassignment_id_local_var,
        s_taxassignment_description_x_local_str,
        dt_inscriptionnotauthenticated_transactiondate_local_str,
        dt_inscriptionnotauthenticated_transactiondate_real_local_str,
        dt_inscriptionnotauthenticated_depositdate_local_str,
        e_inscriptionnotauthenticated_type_local_nonprim,
        d_inscriptionnotauthenticated_mortgageloan_local_str,
        et_inscriptionnotauthenticated_mortgagetype_local_nonprim,
        d_inscriptionnotauthenticated_transactionprice_local_str,
        e_inscriptionnotauthenticated_remunerationtype_local_nonprim,
        d_inscriptionnotauthenticated_remuneration_local_str,
        d_inscriptionnotauthenticated_remunerationsubtotal_local_str,
        d_inscriptionnotauthenticated_remunerationtotal_local_str,
        dt_inscriptionnotauthenticated_cancellationdate_local_str,
        dt_inscriptionnotauthenticated_possessiondate_local_str,
        s_inscriptionnotauthenticated_offertopurchasenumber_local_str,
        dt_inscriptionnotauthenticated_notaryscheduledate_local_str,
        dt_inscriptionnotauthenticated_financingscheduledate_local_str,
        b_inscriptionnotauthenticated_conditional_local_var,
        b_inscriptionnotauthenticated_mortgageisreferenced_local_var,
        b_inscriptionnotauthenticated_homeowner_local_var,
        t_inscriptionnotauthenticated_conditions_local_str,
        dt_inscriptionnotauthenticated_conditiondeadlinedate_local_str,
        i_inscriptionnotauthenticated_order_local_var,
        b_inscriptionnotauthenticated_isactive_local_var,
        e_inscriptionnotauthenticated_residence_type_local_nonprim,
        t_inscriptionnotauthenticated_checklistnote_local_str,
        d_inscriptionnotauthenticated_selleronlyretribution_local_str,
        b_inscriptionnotauthenticated_draft_local_var
        );

    if (!inscriptionnotauthenticated_response_local_var) {
        goto end;
    }

    return inscriptionnotauthenticated_response_local_var;
end:
    if (pki_inscriptionnotauthenticated_id_local_var) {
        free(pki_inscriptionnotauthenticated_id_local_var);
        pki_inscriptionnotauthenticated_id_local_var = NULL;
    }
    if (fki_inscription_id_local_var) {
        free(fki_inscription_id_local_var);
        fki_inscription_id_local_var = NULL;
    }
    if (fki_department_id_local_var) {
        free(fki_department_id_local_var);
        fki_department_id_local_var = NULL;
    }
    if (s_department_name_x_local_str) {
        free(s_department_name_x_local_str);
        s_department_name_x_local_str = NULL;
    }
    if (fki_financialinstitution_id_local_var) {
        free(fki_financialinstitution_id_local_var);
        fki_financialinstitution_id_local_var = NULL;
    }
    if (s_financialinstitution_name_x_local_str) {
        free(s_financialinstitution_name_x_local_str);
        s_financialinstitution_name_x_local_str = NULL;
    }
    if (fki_buyercontract_id_local_var) {
        free(fki_buyercontract_id_local_var);
        fki_buyercontract_id_local_var = NULL;
    }
    if (s_buyercontract_contract_local_str) {
        free(s_buyercontract_contract_local_str);
        s_buyercontract_contract_local_str = NULL;
    }
    if (fki_mortgagesupplier_id_local_var) {
        free(fki_mortgagesupplier_id_local_var);
        fki_mortgagesupplier_id_local_var = NULL;
    }
    if (s_mortgagesupplier_name_x_local_str) {
        free(s_mortgagesupplier_name_x_local_str);
        s_mortgagesupplier_name_x_local_str = NULL;
    }
    if (fki_taxassignment_id_local_var) {
        free(fki_taxassignment_id_local_var);
        fki_taxassignment_id_local_var = NULL;
    }
    if (s_taxassignment_description_x_local_str) {
        free(s_taxassignment_description_x_local_str);
        s_taxassignment_description_x_local_str = NULL;
    }
    if (dt_inscriptionnotauthenticated_transactiondate_local_str) {
        free(dt_inscriptionnotauthenticated_transactiondate_local_str);
        dt_inscriptionnotauthenticated_transactiondate_local_str = NULL;
    }
    if (dt_inscriptionnotauthenticated_transactiondate_real_local_str) {
        free(dt_inscriptionnotauthenticated_transactiondate_real_local_str);
        dt_inscriptionnotauthenticated_transactiondate_real_local_str = NULL;
    }
    if (dt_inscriptionnotauthenticated_depositdate_local_str) {
        free(dt_inscriptionnotauthenticated_depositdate_local_str);
        dt_inscriptionnotauthenticated_depositdate_local_str = NULL;
    }
    if (e_inscriptionnotauthenticated_type_local_nonprim) {
        e_inscriptionnotauthenticated_type_local_nonprim = 0;
    }
    if (d_inscriptionnotauthenticated_mortgageloan_local_str) {
        free(d_inscriptionnotauthenticated_mortgageloan_local_str);
        d_inscriptionnotauthenticated_mortgageloan_local_str = NULL;
    }
    if (et_inscriptionnotauthenticated_mortgagetype_local_nonprim) {
        et_inscriptionnotauthenticated_mortgagetype_local_nonprim = 0;
    }
    if (d_inscriptionnotauthenticated_transactionprice_local_str) {
        free(d_inscriptionnotauthenticated_transactionprice_local_str);
        d_inscriptionnotauthenticated_transactionprice_local_str = NULL;
    }
    if (e_inscriptionnotauthenticated_remunerationtype_local_nonprim) {
        e_inscriptionnotauthenticated_remunerationtype_local_nonprim = 0;
    }
    if (d_inscriptionnotauthenticated_remuneration_local_str) {
        free(d_inscriptionnotauthenticated_remuneration_local_str);
        d_inscriptionnotauthenticated_remuneration_local_str = NULL;
    }
    if (d_inscriptionnotauthenticated_remunerationsubtotal_local_str) {
        free(d_inscriptionnotauthenticated_remunerationsubtotal_local_str);
        d_inscriptionnotauthenticated_remunerationsubtotal_local_str = NULL;
    }
    if (d_inscriptionnotauthenticated_remunerationtotal_local_str) {
        free(d_inscriptionnotauthenticated_remunerationtotal_local_str);
        d_inscriptionnotauthenticated_remunerationtotal_local_str = NULL;
    }
    if (dt_inscriptionnotauthenticated_cancellationdate_local_str) {
        free(dt_inscriptionnotauthenticated_cancellationdate_local_str);
        dt_inscriptionnotauthenticated_cancellationdate_local_str = NULL;
    }
    if (dt_inscriptionnotauthenticated_possessiondate_local_str) {
        free(dt_inscriptionnotauthenticated_possessiondate_local_str);
        dt_inscriptionnotauthenticated_possessiondate_local_str = NULL;
    }
    if (s_inscriptionnotauthenticated_offertopurchasenumber_local_str) {
        free(s_inscriptionnotauthenticated_offertopurchasenumber_local_str);
        s_inscriptionnotauthenticated_offertopurchasenumber_local_str = NULL;
    }
    if (dt_inscriptionnotauthenticated_notaryscheduledate_local_str) {
        free(dt_inscriptionnotauthenticated_notaryscheduledate_local_str);
        dt_inscriptionnotauthenticated_notaryscheduledate_local_str = NULL;
    }
    if (dt_inscriptionnotauthenticated_financingscheduledate_local_str) {
        free(dt_inscriptionnotauthenticated_financingscheduledate_local_str);
        dt_inscriptionnotauthenticated_financingscheduledate_local_str = NULL;
    }
    if (b_inscriptionnotauthenticated_conditional_local_var) {
        free(b_inscriptionnotauthenticated_conditional_local_var);
        b_inscriptionnotauthenticated_conditional_local_var = NULL;
    }
    if (b_inscriptionnotauthenticated_mortgageisreferenced_local_var) {
        free(b_inscriptionnotauthenticated_mortgageisreferenced_local_var);
        b_inscriptionnotauthenticated_mortgageisreferenced_local_var = NULL;
    }
    if (b_inscriptionnotauthenticated_homeowner_local_var) {
        free(b_inscriptionnotauthenticated_homeowner_local_var);
        b_inscriptionnotauthenticated_homeowner_local_var = NULL;
    }
    if (t_inscriptionnotauthenticated_conditions_local_str) {
        free(t_inscriptionnotauthenticated_conditions_local_str);
        t_inscriptionnotauthenticated_conditions_local_str = NULL;
    }
    if (dt_inscriptionnotauthenticated_conditiondeadlinedate_local_str) {
        free(dt_inscriptionnotauthenticated_conditiondeadlinedate_local_str);
        dt_inscriptionnotauthenticated_conditiondeadlinedate_local_str = NULL;
    }
    if (i_inscriptionnotauthenticated_order_local_var) {
        free(i_inscriptionnotauthenticated_order_local_var);
        i_inscriptionnotauthenticated_order_local_var = NULL;
    }
    if (b_inscriptionnotauthenticated_isactive_local_var) {
        free(b_inscriptionnotauthenticated_isactive_local_var);
        b_inscriptionnotauthenticated_isactive_local_var = NULL;
    }
    if (e_inscriptionnotauthenticated_residence_type_local_nonprim) {
        e_inscriptionnotauthenticated_residence_type_local_nonprim = 0;
    }
    if (t_inscriptionnotauthenticated_checklistnote_local_str) {
        free(t_inscriptionnotauthenticated_checklistnote_local_str);
        t_inscriptionnotauthenticated_checklistnote_local_str = NULL;
    }
    if (d_inscriptionnotauthenticated_selleronlyretribution_local_str) {
        free(d_inscriptionnotauthenticated_selleronlyretribution_local_str);
        d_inscriptionnotauthenticated_selleronlyretribution_local_str = NULL;
    }
    if (b_inscriptionnotauthenticated_draft_local_var) {
        free(b_inscriptionnotauthenticated_draft_local_var);
        b_inscriptionnotauthenticated_draft_local_var = NULL;
    }
    return NULL;

}
