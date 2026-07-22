#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inscription_response_compound.h"



static inscription_response_compound_t *inscription_response_compound_create_internal(
    int *pki_inscription_id,
    int *fki_department_id,
    char *s_department_name_x,
    int *fki_realestateboard_id,
    char *s_realestateboard_name_x,
    int *fki_address_id,
    address_response_compound_t *obj_address,
    int *fki_inscriptionbuildingtype_id,
    char *s_inscriptionbuildingtype_name_x,
    int *fki_inscriptiontype_id,
    char *s_inscriptiontype_name_x,
    int *fki_inscriptioncategory_id,
    char *s_inscriptioncategory_name_x,
    ezmax_api_definition__full_field_e_inscription_step__e e_inscription_step,
    ezmax_api_definition__full_field_e_inscription_residence_type__e e_inscription_residence_type,
    char *s_inscription_civicend,
    char *s_inscription_mls,
    char *s_inscription_contract,
    int *i_inscription_sellerdeclaration,
    ezmax_api_definition__full_field_e_inscription_type__e e_inscription_type,
    char *d_inscription_initialsaleprice,
    char *d_inscription_saleprice,
    char *d_inscription_rentprice,
    ezmax_api_definition__full_field_e_inscription_remunerationtype__e e_inscription_remunerationtype,
    ezmax_api_definition__full_field_e_inscription_remunerationinscriptorsellertype__e e_inscription_remunerationinscriptorsellertype,
    ezmax_api_definition__full_field_e_inscription_remunerationreferencetype__e e_inscription_remunerationreferencetype,
    ezmax_api_definition__full_field_e_inscription_remunerationtotaltype__e e_inscription_remunerationtotaltype,
    char *d_inscription_remuneration,
    char *d_inscription_remunerationinscriptorseller,
    char *d_inscription_remunerationreference,
    char *d_inscription_remunerationtotal,
    char *d_inscription_mortgagesold,
    char *dt_inscription_date,
    char *dt_inscription_cancellationdate,
    char *dt_inscription_initialexpirationdate,
    char *dt_inscription_expirationdate,
    char *dt_inscription_notarydate,
    char *dt_inscription_notaryentereddate,
    char *t_inscription_cadastre,
    int *b_inscription_reference,
    int *b_inscription_inspection,
    int *b_inscription_isactive,
    char *t_inscription_checklistnote,
    int *b_inscription_new,
    int *b_inscription_homeowner,
    int *b_inscription_archived,
    int *b_inscription_litigation,
    int *b_inscription_repossession,
    int *b_inscription_issolicitation,
    int *b_inscription_salebyowner,
    int *b_inscription_soldwithoutlegalwarranty,
    int *i_inscription_constructionyear,
    int *i_inscription_unit,
    common_audit_t *obj_audit
    ) {
    inscription_response_compound_t *inscription_response_compound_local_var = malloc(sizeof(inscription_response_compound_t));
    if (!inscription_response_compound_local_var) {
        return NULL;
    }
    memset(inscription_response_compound_local_var, 0, sizeof(inscription_response_compound_t));
    inscription_response_compound_local_var->_library_owned = 1;
    inscription_response_compound_local_var->pki_inscription_id = pki_inscription_id;
    inscription_response_compound_local_var->fki_department_id = fki_department_id;
    inscription_response_compound_local_var->s_department_name_x = s_department_name_x;
    inscription_response_compound_local_var->fki_realestateboard_id = fki_realestateboard_id;
    inscription_response_compound_local_var->s_realestateboard_name_x = s_realestateboard_name_x;
    inscription_response_compound_local_var->fki_address_id = fki_address_id;
    inscription_response_compound_local_var->obj_address = obj_address;
    inscription_response_compound_local_var->fki_inscriptionbuildingtype_id = fki_inscriptionbuildingtype_id;
    inscription_response_compound_local_var->s_inscriptionbuildingtype_name_x = s_inscriptionbuildingtype_name_x;
    inscription_response_compound_local_var->fki_inscriptiontype_id = fki_inscriptiontype_id;
    inscription_response_compound_local_var->s_inscriptiontype_name_x = s_inscriptiontype_name_x;
    inscription_response_compound_local_var->fki_inscriptioncategory_id = fki_inscriptioncategory_id;
    inscription_response_compound_local_var->s_inscriptioncategory_name_x = s_inscriptioncategory_name_x;
    inscription_response_compound_local_var->e_inscription_step = e_inscription_step;
    inscription_response_compound_local_var->e_inscription_residence_type = e_inscription_residence_type;
    inscription_response_compound_local_var->s_inscription_civicend = s_inscription_civicend;
    inscription_response_compound_local_var->s_inscription_mls = s_inscription_mls;
    inscription_response_compound_local_var->s_inscription_contract = s_inscription_contract;
    inscription_response_compound_local_var->i_inscription_sellerdeclaration = i_inscription_sellerdeclaration;
    inscription_response_compound_local_var->e_inscription_type = e_inscription_type;
    inscription_response_compound_local_var->d_inscription_initialsaleprice = d_inscription_initialsaleprice;
    inscription_response_compound_local_var->d_inscription_saleprice = d_inscription_saleprice;
    inscription_response_compound_local_var->d_inscription_rentprice = d_inscription_rentprice;
    inscription_response_compound_local_var->e_inscription_remunerationtype = e_inscription_remunerationtype;
    inscription_response_compound_local_var->e_inscription_remunerationinscriptorsellertype = e_inscription_remunerationinscriptorsellertype;
    inscription_response_compound_local_var->e_inscription_remunerationreferencetype = e_inscription_remunerationreferencetype;
    inscription_response_compound_local_var->e_inscription_remunerationtotaltype = e_inscription_remunerationtotaltype;
    inscription_response_compound_local_var->d_inscription_remuneration = d_inscription_remuneration;
    inscription_response_compound_local_var->d_inscription_remunerationinscriptorseller = d_inscription_remunerationinscriptorseller;
    inscription_response_compound_local_var->d_inscription_remunerationreference = d_inscription_remunerationreference;
    inscription_response_compound_local_var->d_inscription_remunerationtotal = d_inscription_remunerationtotal;
    inscription_response_compound_local_var->d_inscription_mortgagesold = d_inscription_mortgagesold;
    inscription_response_compound_local_var->dt_inscription_date = dt_inscription_date;
    inscription_response_compound_local_var->dt_inscription_cancellationdate = dt_inscription_cancellationdate;
    inscription_response_compound_local_var->dt_inscription_initialexpirationdate = dt_inscription_initialexpirationdate;
    inscription_response_compound_local_var->dt_inscription_expirationdate = dt_inscription_expirationdate;
    inscription_response_compound_local_var->dt_inscription_notarydate = dt_inscription_notarydate;
    inscription_response_compound_local_var->dt_inscription_notaryentereddate = dt_inscription_notaryentereddate;
    inscription_response_compound_local_var->t_inscription_cadastre = t_inscription_cadastre;
    inscription_response_compound_local_var->b_inscription_reference = b_inscription_reference;
    inscription_response_compound_local_var->b_inscription_inspection = b_inscription_inspection;
    inscription_response_compound_local_var->b_inscription_isactive = b_inscription_isactive;
    inscription_response_compound_local_var->t_inscription_checklistnote = t_inscription_checklistnote;
    inscription_response_compound_local_var->b_inscription_new = b_inscription_new;
    inscription_response_compound_local_var->b_inscription_homeowner = b_inscription_homeowner;
    inscription_response_compound_local_var->b_inscription_archived = b_inscription_archived;
    inscription_response_compound_local_var->b_inscription_litigation = b_inscription_litigation;
    inscription_response_compound_local_var->b_inscription_repossession = b_inscription_repossession;
    inscription_response_compound_local_var->b_inscription_issolicitation = b_inscription_issolicitation;
    inscription_response_compound_local_var->b_inscription_salebyowner = b_inscription_salebyowner;
    inscription_response_compound_local_var->b_inscription_soldwithoutlegalwarranty = b_inscription_soldwithoutlegalwarranty;
    inscription_response_compound_local_var->i_inscription_constructionyear = i_inscription_constructionyear;
    inscription_response_compound_local_var->i_inscription_unit = i_inscription_unit;
    inscription_response_compound_local_var->obj_audit = obj_audit;
    return inscription_response_compound_local_var;
}

__attribute__((deprecated)) inscription_response_compound_t *inscription_response_compound_create(
    int *pki_inscription_id,
    int *fki_department_id,
    char *s_department_name_x,
    int *fki_realestateboard_id,
    char *s_realestateboard_name_x,
    int *fki_address_id,
    address_response_compound_t *obj_address,
    int *fki_inscriptionbuildingtype_id,
    char *s_inscriptionbuildingtype_name_x,
    int *fki_inscriptiontype_id,
    char *s_inscriptiontype_name_x,
    int *fki_inscriptioncategory_id,
    char *s_inscriptioncategory_name_x,
    ezmax_api_definition__full_field_e_inscription_step__e e_inscription_step,
    ezmax_api_definition__full_field_e_inscription_residence_type__e e_inscription_residence_type,
    char *s_inscription_civicend,
    char *s_inscription_mls,
    char *s_inscription_contract,
    int *i_inscription_sellerdeclaration,
    ezmax_api_definition__full_field_e_inscription_type__e e_inscription_type,
    char *d_inscription_initialsaleprice,
    char *d_inscription_saleprice,
    char *d_inscription_rentprice,
    ezmax_api_definition__full_field_e_inscription_remunerationtype__e e_inscription_remunerationtype,
    ezmax_api_definition__full_field_e_inscription_remunerationinscriptorsellertype__e e_inscription_remunerationinscriptorsellertype,
    ezmax_api_definition__full_field_e_inscription_remunerationreferencetype__e e_inscription_remunerationreferencetype,
    ezmax_api_definition__full_field_e_inscription_remunerationtotaltype__e e_inscription_remunerationtotaltype,
    char *d_inscription_remuneration,
    char *d_inscription_remunerationinscriptorseller,
    char *d_inscription_remunerationreference,
    char *d_inscription_remunerationtotal,
    char *d_inscription_mortgagesold,
    char *dt_inscription_date,
    char *dt_inscription_cancellationdate,
    char *dt_inscription_initialexpirationdate,
    char *dt_inscription_expirationdate,
    char *dt_inscription_notarydate,
    char *dt_inscription_notaryentereddate,
    char *t_inscription_cadastre,
    int *b_inscription_reference,
    int *b_inscription_inspection,
    int *b_inscription_isactive,
    char *t_inscription_checklistnote,
    int *b_inscription_new,
    int *b_inscription_homeowner,
    int *b_inscription_archived,
    int *b_inscription_litigation,
    int *b_inscription_repossession,
    int *b_inscription_issolicitation,
    int *b_inscription_salebyowner,
    int *b_inscription_soldwithoutlegalwarranty,
    int *i_inscription_constructionyear,
    int *i_inscription_unit,
    common_audit_t *obj_audit
    ) {
    int *pki_inscription_id_copy = NULL;
    if (pki_inscription_id) {
        pki_inscription_id_copy = malloc(sizeof(int));
        if (pki_inscription_id_copy) *pki_inscription_id_copy = *pki_inscription_id;
    }
    int *fki_department_id_copy = NULL;
    if (fki_department_id) {
        fki_department_id_copy = malloc(sizeof(int));
        if (fki_department_id_copy) *fki_department_id_copy = *fki_department_id;
    }
    int *fki_realestateboard_id_copy = NULL;
    if (fki_realestateboard_id) {
        fki_realestateboard_id_copy = malloc(sizeof(int));
        if (fki_realestateboard_id_copy) *fki_realestateboard_id_copy = *fki_realestateboard_id;
    }
    int *fki_address_id_copy = NULL;
    if (fki_address_id) {
        fki_address_id_copy = malloc(sizeof(int));
        if (fki_address_id_copy) *fki_address_id_copy = *fki_address_id;
    }
    int *fki_inscriptionbuildingtype_id_copy = NULL;
    if (fki_inscriptionbuildingtype_id) {
        fki_inscriptionbuildingtype_id_copy = malloc(sizeof(int));
        if (fki_inscriptionbuildingtype_id_copy) *fki_inscriptionbuildingtype_id_copy = *fki_inscriptionbuildingtype_id;
    }
    int *fki_inscriptiontype_id_copy = NULL;
    if (fki_inscriptiontype_id) {
        fki_inscriptiontype_id_copy = malloc(sizeof(int));
        if (fki_inscriptiontype_id_copy) *fki_inscriptiontype_id_copy = *fki_inscriptiontype_id;
    }
    int *fki_inscriptioncategory_id_copy = NULL;
    if (fki_inscriptioncategory_id) {
        fki_inscriptioncategory_id_copy = malloc(sizeof(int));
        if (fki_inscriptioncategory_id_copy) *fki_inscriptioncategory_id_copy = *fki_inscriptioncategory_id;
    }
    int *i_inscription_sellerdeclaration_copy = NULL;
    if (i_inscription_sellerdeclaration) {
        i_inscription_sellerdeclaration_copy = malloc(sizeof(int));
        if (i_inscription_sellerdeclaration_copy) *i_inscription_sellerdeclaration_copy = *i_inscription_sellerdeclaration;
    }
    int *b_inscription_reference_copy = NULL;
    if (b_inscription_reference) {
        b_inscription_reference_copy = malloc(sizeof(int));
        if (b_inscription_reference_copy) *b_inscription_reference_copy = *b_inscription_reference;
    }
    int *b_inscription_inspection_copy = NULL;
    if (b_inscription_inspection) {
        b_inscription_inspection_copy = malloc(sizeof(int));
        if (b_inscription_inspection_copy) *b_inscription_inspection_copy = *b_inscription_inspection;
    }
    int *b_inscription_isactive_copy = NULL;
    if (b_inscription_isactive) {
        b_inscription_isactive_copy = malloc(sizeof(int));
        if (b_inscription_isactive_copy) *b_inscription_isactive_copy = *b_inscription_isactive;
    }
    int *b_inscription_new_copy = NULL;
    if (b_inscription_new) {
        b_inscription_new_copy = malloc(sizeof(int));
        if (b_inscription_new_copy) *b_inscription_new_copy = *b_inscription_new;
    }
    int *b_inscription_homeowner_copy = NULL;
    if (b_inscription_homeowner) {
        b_inscription_homeowner_copy = malloc(sizeof(int));
        if (b_inscription_homeowner_copy) *b_inscription_homeowner_copy = *b_inscription_homeowner;
    }
    int *b_inscription_archived_copy = NULL;
    if (b_inscription_archived) {
        b_inscription_archived_copy = malloc(sizeof(int));
        if (b_inscription_archived_copy) *b_inscription_archived_copy = *b_inscription_archived;
    }
    int *b_inscription_litigation_copy = NULL;
    if (b_inscription_litigation) {
        b_inscription_litigation_copy = malloc(sizeof(int));
        if (b_inscription_litigation_copy) *b_inscription_litigation_copy = *b_inscription_litigation;
    }
    int *b_inscription_repossession_copy = NULL;
    if (b_inscription_repossession) {
        b_inscription_repossession_copy = malloc(sizeof(int));
        if (b_inscription_repossession_copy) *b_inscription_repossession_copy = *b_inscription_repossession;
    }
    int *b_inscription_issolicitation_copy = NULL;
    if (b_inscription_issolicitation) {
        b_inscription_issolicitation_copy = malloc(sizeof(int));
        if (b_inscription_issolicitation_copy) *b_inscription_issolicitation_copy = *b_inscription_issolicitation;
    }
    int *b_inscription_salebyowner_copy = NULL;
    if (b_inscription_salebyowner) {
        b_inscription_salebyowner_copy = malloc(sizeof(int));
        if (b_inscription_salebyowner_copy) *b_inscription_salebyowner_copy = *b_inscription_salebyowner;
    }
    int *b_inscription_soldwithoutlegalwarranty_copy = NULL;
    if (b_inscription_soldwithoutlegalwarranty) {
        b_inscription_soldwithoutlegalwarranty_copy = malloc(sizeof(int));
        if (b_inscription_soldwithoutlegalwarranty_copy) *b_inscription_soldwithoutlegalwarranty_copy = *b_inscription_soldwithoutlegalwarranty;
    }
    int *i_inscription_constructionyear_copy = NULL;
    if (i_inscription_constructionyear) {
        i_inscription_constructionyear_copy = malloc(sizeof(int));
        if (i_inscription_constructionyear_copy) *i_inscription_constructionyear_copy = *i_inscription_constructionyear;
    }
    int *i_inscription_unit_copy = NULL;
    if (i_inscription_unit) {
        i_inscription_unit_copy = malloc(sizeof(int));
        if (i_inscription_unit_copy) *i_inscription_unit_copy = *i_inscription_unit;
    }
    inscription_response_compound_t *result = inscription_response_compound_create_internal (
        pki_inscription_id_copy,
        fki_department_id_copy,
        s_department_name_x,
        fki_realestateboard_id_copy,
        s_realestateboard_name_x,
        fki_address_id_copy,
        obj_address,
        fki_inscriptionbuildingtype_id_copy,
        s_inscriptionbuildingtype_name_x,
        fki_inscriptiontype_id_copy,
        s_inscriptiontype_name_x,
        fki_inscriptioncategory_id_copy,
        s_inscriptioncategory_name_x,
        e_inscription_step,
        e_inscription_residence_type,
        s_inscription_civicend,
        s_inscription_mls,
        s_inscription_contract,
        i_inscription_sellerdeclaration_copy,
        e_inscription_type,
        d_inscription_initialsaleprice,
        d_inscription_saleprice,
        d_inscription_rentprice,
        e_inscription_remunerationtype,
        e_inscription_remunerationinscriptorsellertype,
        e_inscription_remunerationreferencetype,
        e_inscription_remunerationtotaltype,
        d_inscription_remuneration,
        d_inscription_remunerationinscriptorseller,
        d_inscription_remunerationreference,
        d_inscription_remunerationtotal,
        d_inscription_mortgagesold,
        dt_inscription_date,
        dt_inscription_cancellationdate,
        dt_inscription_initialexpirationdate,
        dt_inscription_expirationdate,
        dt_inscription_notarydate,
        dt_inscription_notaryentereddate,
        t_inscription_cadastre,
        b_inscription_reference_copy,
        b_inscription_inspection_copy,
        b_inscription_isactive_copy,
        t_inscription_checklistnote,
        b_inscription_new_copy,
        b_inscription_homeowner_copy,
        b_inscription_archived_copy,
        b_inscription_litigation_copy,
        b_inscription_repossession_copy,
        b_inscription_issolicitation_copy,
        b_inscription_salebyowner_copy,
        b_inscription_soldwithoutlegalwarranty_copy,
        i_inscription_constructionyear_copy,
        i_inscription_unit_copy,
        obj_audit
        );
    if (!result) {
        free(pki_inscription_id_copy);
        free(fki_department_id_copy);
        free(fki_realestateboard_id_copy);
        free(fki_address_id_copy);
        free(fki_inscriptionbuildingtype_id_copy);
        free(fki_inscriptiontype_id_copy);
        free(fki_inscriptioncategory_id_copy);
        free(i_inscription_sellerdeclaration_copy);
        free(b_inscription_reference_copy);
        free(b_inscription_inspection_copy);
        free(b_inscription_isactive_copy);
        free(b_inscription_new_copy);
        free(b_inscription_homeowner_copy);
        free(b_inscription_archived_copy);
        free(b_inscription_litigation_copy);
        free(b_inscription_repossession_copy);
        free(b_inscription_issolicitation_copy);
        free(b_inscription_salebyowner_copy);
        free(b_inscription_soldwithoutlegalwarranty_copy);
        free(i_inscription_constructionyear_copy);
        free(i_inscription_unit_copy);
    }
    return result;
}

void inscription_response_compound_free(inscription_response_compound_t *inscription_response_compound) {
    if(NULL == inscription_response_compound){
        return ;
    }
    if(inscription_response_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "inscription_response_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (inscription_response_compound->pki_inscription_id) {
        free(inscription_response_compound->pki_inscription_id);
        inscription_response_compound->pki_inscription_id = NULL;
    }
    if (inscription_response_compound->fki_department_id) {
        free(inscription_response_compound->fki_department_id);
        inscription_response_compound->fki_department_id = NULL;
    }
    if (inscription_response_compound->s_department_name_x) {
        free(inscription_response_compound->s_department_name_x);
        inscription_response_compound->s_department_name_x = NULL;
    }
    if (inscription_response_compound->fki_realestateboard_id) {
        free(inscription_response_compound->fki_realestateboard_id);
        inscription_response_compound->fki_realestateboard_id = NULL;
    }
    if (inscription_response_compound->s_realestateboard_name_x) {
        free(inscription_response_compound->s_realestateboard_name_x);
        inscription_response_compound->s_realestateboard_name_x = NULL;
    }
    if (inscription_response_compound->fki_address_id) {
        free(inscription_response_compound->fki_address_id);
        inscription_response_compound->fki_address_id = NULL;
    }
    if (inscription_response_compound->obj_address) {
        address_response_compound_free(inscription_response_compound->obj_address);
        inscription_response_compound->obj_address = NULL;
    }
    if (inscription_response_compound->fki_inscriptionbuildingtype_id) {
        free(inscription_response_compound->fki_inscriptionbuildingtype_id);
        inscription_response_compound->fki_inscriptionbuildingtype_id = NULL;
    }
    if (inscription_response_compound->s_inscriptionbuildingtype_name_x) {
        free(inscription_response_compound->s_inscriptionbuildingtype_name_x);
        inscription_response_compound->s_inscriptionbuildingtype_name_x = NULL;
    }
    if (inscription_response_compound->fki_inscriptiontype_id) {
        free(inscription_response_compound->fki_inscriptiontype_id);
        inscription_response_compound->fki_inscriptiontype_id = NULL;
    }
    if (inscription_response_compound->s_inscriptiontype_name_x) {
        free(inscription_response_compound->s_inscriptiontype_name_x);
        inscription_response_compound->s_inscriptiontype_name_x = NULL;
    }
    if (inscription_response_compound->fki_inscriptioncategory_id) {
        free(inscription_response_compound->fki_inscriptioncategory_id);
        inscription_response_compound->fki_inscriptioncategory_id = NULL;
    }
    if (inscription_response_compound->s_inscriptioncategory_name_x) {
        free(inscription_response_compound->s_inscriptioncategory_name_x);
        inscription_response_compound->s_inscriptioncategory_name_x = NULL;
    }
    if (inscription_response_compound->s_inscription_civicend) {
        free(inscription_response_compound->s_inscription_civicend);
        inscription_response_compound->s_inscription_civicend = NULL;
    }
    if (inscription_response_compound->s_inscription_mls) {
        free(inscription_response_compound->s_inscription_mls);
        inscription_response_compound->s_inscription_mls = NULL;
    }
    if (inscription_response_compound->s_inscription_contract) {
        free(inscription_response_compound->s_inscription_contract);
        inscription_response_compound->s_inscription_contract = NULL;
    }
    if (inscription_response_compound->i_inscription_sellerdeclaration) {
        free(inscription_response_compound->i_inscription_sellerdeclaration);
        inscription_response_compound->i_inscription_sellerdeclaration = NULL;
    }
    if (inscription_response_compound->d_inscription_initialsaleprice) {
        free(inscription_response_compound->d_inscription_initialsaleprice);
        inscription_response_compound->d_inscription_initialsaleprice = NULL;
    }
    if (inscription_response_compound->d_inscription_saleprice) {
        free(inscription_response_compound->d_inscription_saleprice);
        inscription_response_compound->d_inscription_saleprice = NULL;
    }
    if (inscription_response_compound->d_inscription_rentprice) {
        free(inscription_response_compound->d_inscription_rentprice);
        inscription_response_compound->d_inscription_rentprice = NULL;
    }
    if (inscription_response_compound->d_inscription_remuneration) {
        free(inscription_response_compound->d_inscription_remuneration);
        inscription_response_compound->d_inscription_remuneration = NULL;
    }
    if (inscription_response_compound->d_inscription_remunerationinscriptorseller) {
        free(inscription_response_compound->d_inscription_remunerationinscriptorseller);
        inscription_response_compound->d_inscription_remunerationinscriptorseller = NULL;
    }
    if (inscription_response_compound->d_inscription_remunerationreference) {
        free(inscription_response_compound->d_inscription_remunerationreference);
        inscription_response_compound->d_inscription_remunerationreference = NULL;
    }
    if (inscription_response_compound->d_inscription_remunerationtotal) {
        free(inscription_response_compound->d_inscription_remunerationtotal);
        inscription_response_compound->d_inscription_remunerationtotal = NULL;
    }
    if (inscription_response_compound->d_inscription_mortgagesold) {
        free(inscription_response_compound->d_inscription_mortgagesold);
        inscription_response_compound->d_inscription_mortgagesold = NULL;
    }
    if (inscription_response_compound->dt_inscription_date) {
        free(inscription_response_compound->dt_inscription_date);
        inscription_response_compound->dt_inscription_date = NULL;
    }
    if (inscription_response_compound->dt_inscription_cancellationdate) {
        free(inscription_response_compound->dt_inscription_cancellationdate);
        inscription_response_compound->dt_inscription_cancellationdate = NULL;
    }
    if (inscription_response_compound->dt_inscription_initialexpirationdate) {
        free(inscription_response_compound->dt_inscription_initialexpirationdate);
        inscription_response_compound->dt_inscription_initialexpirationdate = NULL;
    }
    if (inscription_response_compound->dt_inscription_expirationdate) {
        free(inscription_response_compound->dt_inscription_expirationdate);
        inscription_response_compound->dt_inscription_expirationdate = NULL;
    }
    if (inscription_response_compound->dt_inscription_notarydate) {
        free(inscription_response_compound->dt_inscription_notarydate);
        inscription_response_compound->dt_inscription_notarydate = NULL;
    }
    if (inscription_response_compound->dt_inscription_notaryentereddate) {
        free(inscription_response_compound->dt_inscription_notaryentereddate);
        inscription_response_compound->dt_inscription_notaryentereddate = NULL;
    }
    if (inscription_response_compound->t_inscription_cadastre) {
        free(inscription_response_compound->t_inscription_cadastre);
        inscription_response_compound->t_inscription_cadastre = NULL;
    }
    if (inscription_response_compound->b_inscription_reference) {
        free(inscription_response_compound->b_inscription_reference);
        inscription_response_compound->b_inscription_reference = NULL;
    }
    if (inscription_response_compound->b_inscription_inspection) {
        free(inscription_response_compound->b_inscription_inspection);
        inscription_response_compound->b_inscription_inspection = NULL;
    }
    if (inscription_response_compound->b_inscription_isactive) {
        free(inscription_response_compound->b_inscription_isactive);
        inscription_response_compound->b_inscription_isactive = NULL;
    }
    if (inscription_response_compound->t_inscription_checklistnote) {
        free(inscription_response_compound->t_inscription_checklistnote);
        inscription_response_compound->t_inscription_checklistnote = NULL;
    }
    if (inscription_response_compound->b_inscription_new) {
        free(inscription_response_compound->b_inscription_new);
        inscription_response_compound->b_inscription_new = NULL;
    }
    if (inscription_response_compound->b_inscription_homeowner) {
        free(inscription_response_compound->b_inscription_homeowner);
        inscription_response_compound->b_inscription_homeowner = NULL;
    }
    if (inscription_response_compound->b_inscription_archived) {
        free(inscription_response_compound->b_inscription_archived);
        inscription_response_compound->b_inscription_archived = NULL;
    }
    if (inscription_response_compound->b_inscription_litigation) {
        free(inscription_response_compound->b_inscription_litigation);
        inscription_response_compound->b_inscription_litigation = NULL;
    }
    if (inscription_response_compound->b_inscription_repossession) {
        free(inscription_response_compound->b_inscription_repossession);
        inscription_response_compound->b_inscription_repossession = NULL;
    }
    if (inscription_response_compound->b_inscription_issolicitation) {
        free(inscription_response_compound->b_inscription_issolicitation);
        inscription_response_compound->b_inscription_issolicitation = NULL;
    }
    if (inscription_response_compound->b_inscription_salebyowner) {
        free(inscription_response_compound->b_inscription_salebyowner);
        inscription_response_compound->b_inscription_salebyowner = NULL;
    }
    if (inscription_response_compound->b_inscription_soldwithoutlegalwarranty) {
        free(inscription_response_compound->b_inscription_soldwithoutlegalwarranty);
        inscription_response_compound->b_inscription_soldwithoutlegalwarranty = NULL;
    }
    if (inscription_response_compound->i_inscription_constructionyear) {
        free(inscription_response_compound->i_inscription_constructionyear);
        inscription_response_compound->i_inscription_constructionyear = NULL;
    }
    if (inscription_response_compound->i_inscription_unit) {
        free(inscription_response_compound->i_inscription_unit);
        inscription_response_compound->i_inscription_unit = NULL;
    }
    if (inscription_response_compound->obj_audit) {
        common_audit_free(inscription_response_compound->obj_audit);
        inscription_response_compound->obj_audit = NULL;
    }
    free(inscription_response_compound);
}

cJSON *inscription_response_compound_convertToJSON(inscription_response_compound_t *inscription_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // inscription_response_compound->pki_inscription_id
    if (!inscription_response_compound->pki_inscription_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiInscriptionID", *inscription_response_compound->pki_inscription_id) == NULL) {
    goto fail; //Numeric
    }


    // inscription_response_compound->fki_department_id
    if(inscription_response_compound->fki_department_id) {
    if(cJSON_AddNumberToObject(item, "fkiDepartmentID", *inscription_response_compound->fki_department_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // inscription_response_compound->s_department_name_x
    if(inscription_response_compound->s_department_name_x) {
    if(cJSON_AddStringToObject(item, "sDepartmentNameX", inscription_response_compound->s_department_name_x) == NULL) {
    goto fail; //String
    }
    }


    // inscription_response_compound->fki_realestateboard_id
    if (!inscription_response_compound->fki_realestateboard_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiRealestateboardID", *inscription_response_compound->fki_realestateboard_id) == NULL) {
    goto fail; //Numeric
    }


    // inscription_response_compound->s_realestateboard_name_x
    if(inscription_response_compound->s_realestateboard_name_x) {
    if(cJSON_AddStringToObject(item, "sRealestateboardNameX", inscription_response_compound->s_realestateboard_name_x) == NULL) {
    goto fail; //String
    }
    }


    // inscription_response_compound->fki_address_id
    if (!inscription_response_compound->fki_address_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiAddressID", *inscription_response_compound->fki_address_id) == NULL) {
    goto fail; //Numeric
    }


    // inscription_response_compound->obj_address
    if(inscription_response_compound->obj_address) {
    cJSON *obj_address_local_JSON = address_response_compound_convertToJSON(inscription_response_compound->obj_address);
    if(obj_address_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objAddress", obj_address_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // inscription_response_compound->fki_inscriptionbuildingtype_id
    if (!inscription_response_compound->fki_inscriptionbuildingtype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiInscriptionbuildingtypeID", *inscription_response_compound->fki_inscriptionbuildingtype_id) == NULL) {
    goto fail; //Numeric
    }


    // inscription_response_compound->s_inscriptionbuildingtype_name_x
    if(inscription_response_compound->s_inscriptionbuildingtype_name_x) {
    if(cJSON_AddStringToObject(item, "sInscriptionbuildingtypeNameX", inscription_response_compound->s_inscriptionbuildingtype_name_x) == NULL) {
    goto fail; //String
    }
    }


    // inscription_response_compound->fki_inscriptiontype_id
    if (!inscription_response_compound->fki_inscriptiontype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiInscriptiontypeID", *inscription_response_compound->fki_inscriptiontype_id) == NULL) {
    goto fail; //Numeric
    }


    // inscription_response_compound->s_inscriptiontype_name_x
    if(inscription_response_compound->s_inscriptiontype_name_x) {
    if(cJSON_AddStringToObject(item, "sInscriptiontypeNameX", inscription_response_compound->s_inscriptiontype_name_x) == NULL) {
    goto fail; //String
    }
    }


    // inscription_response_compound->fki_inscriptioncategory_id
    if (!inscription_response_compound->fki_inscriptioncategory_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiInscriptioncategoryID", *inscription_response_compound->fki_inscriptioncategory_id) == NULL) {
    goto fail; //Numeric
    }


    // inscription_response_compound->s_inscriptioncategory_name_x
    if(inscription_response_compound->s_inscriptioncategory_name_x) {
    if(cJSON_AddStringToObject(item, "sInscriptioncategoryNameX", inscription_response_compound->s_inscriptioncategory_name_x) == NULL) {
    goto fail; //String
    }
    }


    // inscription_response_compound->e_inscription_step
    if (ezmax_api_definition__full_field_e_inscription_step__NULL == inscription_response_compound->e_inscription_step) {
        goto fail;
    }
    cJSON *e_inscription_step_local_JSON = field_e_inscription_step_convertToJSON(inscription_response_compound->e_inscription_step);
    if(e_inscription_step_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eInscriptionStep", e_inscription_step_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // inscription_response_compound->e_inscription_residence_type
    if (ezmax_api_definition__full_field_e_inscription_residence_type__NULL == inscription_response_compound->e_inscription_residence_type) {
        goto fail;
    }
    cJSON *e_inscription_residence_type_local_JSON = field_e_inscription_residence_type_convertToJSON(inscription_response_compound->e_inscription_residence_type);
    if(e_inscription_residence_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eInscriptionResidenceType", e_inscription_residence_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // inscription_response_compound->s_inscription_civicend
    if (!inscription_response_compound->s_inscription_civicend) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sInscriptionCivicend", inscription_response_compound->s_inscription_civicend) == NULL) {
    goto fail; //String
    }


    // inscription_response_compound->s_inscription_mls
    if(inscription_response_compound->s_inscription_mls) {
    if(cJSON_AddStringToObject(item, "sInscriptionMLS", inscription_response_compound->s_inscription_mls) == NULL) {
    goto fail; //String
    }
    }


    // inscription_response_compound->s_inscription_contract
    if (!inscription_response_compound->s_inscription_contract) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sInscriptionContract", inscription_response_compound->s_inscription_contract) == NULL) {
    goto fail; //String
    }


    // inscription_response_compound->i_inscription_sellerdeclaration
    if (!inscription_response_compound->i_inscription_sellerdeclaration) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iInscriptionSellerdeclaration", *inscription_response_compound->i_inscription_sellerdeclaration) == NULL) {
    goto fail; //Numeric
    }


    // inscription_response_compound->e_inscription_type
    if (ezmax_api_definition__full_field_e_inscription_type__NULL == inscription_response_compound->e_inscription_type) {
        goto fail;
    }
    cJSON *e_inscription_type_local_JSON = field_e_inscription_type_convertToJSON(inscription_response_compound->e_inscription_type);
    if(e_inscription_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eInscriptionType", e_inscription_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // inscription_response_compound->d_inscription_initialsaleprice
    if (!inscription_response_compound->d_inscription_initialsaleprice) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dInscriptionInitialsaleprice", inscription_response_compound->d_inscription_initialsaleprice) == NULL) {
    goto fail; //String
    }


    // inscription_response_compound->d_inscription_saleprice
    if (!inscription_response_compound->d_inscription_saleprice) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dInscriptionSaleprice", inscription_response_compound->d_inscription_saleprice) == NULL) {
    goto fail; //String
    }


    // inscription_response_compound->d_inscription_rentprice
    if (!inscription_response_compound->d_inscription_rentprice) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dInscriptionRentprice", inscription_response_compound->d_inscription_rentprice) == NULL) {
    goto fail; //String
    }


    // inscription_response_compound->e_inscription_remunerationtype
    if (ezmax_api_definition__full_field_e_inscription_remunerationtype__NULL == inscription_response_compound->e_inscription_remunerationtype) {
        goto fail;
    }
    cJSON *e_inscription_remunerationtype_local_JSON = field_e_inscription_remunerationtype_convertToJSON(inscription_response_compound->e_inscription_remunerationtype);
    if(e_inscription_remunerationtype_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eInscriptionRemunerationtype", e_inscription_remunerationtype_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // inscription_response_compound->e_inscription_remunerationinscriptorsellertype
    if (ezmax_api_definition__full_field_e_inscription_remunerationinscriptorsellertype__NULL == inscription_response_compound->e_inscription_remunerationinscriptorsellertype) {
        goto fail;
    }
    cJSON *e_inscription_remunerationinscriptorsellertype_local_JSON = field_e_inscription_remunerationinscriptorsellertype_convertToJSON(inscription_response_compound->e_inscription_remunerationinscriptorsellertype);
    if(e_inscription_remunerationinscriptorsellertype_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eInscriptionRemunerationinscriptorsellertype", e_inscription_remunerationinscriptorsellertype_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // inscription_response_compound->e_inscription_remunerationreferencetype
    if (ezmax_api_definition__full_field_e_inscription_remunerationreferencetype__NULL == inscription_response_compound->e_inscription_remunerationreferencetype) {
        goto fail;
    }
    cJSON *e_inscription_remunerationreferencetype_local_JSON = field_e_inscription_remunerationreferencetype_convertToJSON(inscription_response_compound->e_inscription_remunerationreferencetype);
    if(e_inscription_remunerationreferencetype_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eInscriptionRemunerationreferencetype", e_inscription_remunerationreferencetype_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // inscription_response_compound->e_inscription_remunerationtotaltype
    if (ezmax_api_definition__full_field_e_inscription_remunerationtotaltype__NULL == inscription_response_compound->e_inscription_remunerationtotaltype) {
        goto fail;
    }
    cJSON *e_inscription_remunerationtotaltype_local_JSON = field_e_inscription_remunerationtotaltype_convertToJSON(inscription_response_compound->e_inscription_remunerationtotaltype);
    if(e_inscription_remunerationtotaltype_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eInscriptionRemunerationtotaltype", e_inscription_remunerationtotaltype_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // inscription_response_compound->d_inscription_remuneration
    if (!inscription_response_compound->d_inscription_remuneration) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dInscriptionRemuneration", inscription_response_compound->d_inscription_remuneration) == NULL) {
    goto fail; //String
    }


    // inscription_response_compound->d_inscription_remunerationinscriptorseller
    if (!inscription_response_compound->d_inscription_remunerationinscriptorseller) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dInscriptionRemunerationinscriptorseller", inscription_response_compound->d_inscription_remunerationinscriptorseller) == NULL) {
    goto fail; //String
    }


    // inscription_response_compound->d_inscription_remunerationreference
    if (!inscription_response_compound->d_inscription_remunerationreference) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dInscriptionRemunerationreference", inscription_response_compound->d_inscription_remunerationreference) == NULL) {
    goto fail; //String
    }


    // inscription_response_compound->d_inscription_remunerationtotal
    if (!inscription_response_compound->d_inscription_remunerationtotal) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dInscriptionRemunerationtotal", inscription_response_compound->d_inscription_remunerationtotal) == NULL) {
    goto fail; //String
    }


    // inscription_response_compound->d_inscription_mortgagesold
    if (!inscription_response_compound->d_inscription_mortgagesold) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dInscriptionMortgagesold", inscription_response_compound->d_inscription_mortgagesold) == NULL) {
    goto fail; //String
    }


    // inscription_response_compound->dt_inscription_date
    if(inscription_response_compound->dt_inscription_date) {
    if(cJSON_AddStringToObject(item, "dtInscriptionDate", inscription_response_compound->dt_inscription_date) == NULL) {
    goto fail; //String
    }
    }


    // inscription_response_compound->dt_inscription_cancellationdate
    if(inscription_response_compound->dt_inscription_cancellationdate) {
    if(cJSON_AddStringToObject(item, "dtInscriptionCancellationdate", inscription_response_compound->dt_inscription_cancellationdate) == NULL) {
    goto fail; //String
    }
    }


    // inscription_response_compound->dt_inscription_initialexpirationdate
    if(inscription_response_compound->dt_inscription_initialexpirationdate) {
    if(cJSON_AddStringToObject(item, "dtInscriptionInitialexpirationdate", inscription_response_compound->dt_inscription_initialexpirationdate) == NULL) {
    goto fail; //String
    }
    }


    // inscription_response_compound->dt_inscription_expirationdate
    if(inscription_response_compound->dt_inscription_expirationdate) {
    if(cJSON_AddStringToObject(item, "dtInscriptionExpirationdate", inscription_response_compound->dt_inscription_expirationdate) == NULL) {
    goto fail; //String
    }
    }


    // inscription_response_compound->dt_inscription_notarydate
    if(inscription_response_compound->dt_inscription_notarydate) {
    if(cJSON_AddStringToObject(item, "dtInscriptionNotarydate", inscription_response_compound->dt_inscription_notarydate) == NULL) {
    goto fail; //String
    }
    }


    // inscription_response_compound->dt_inscription_notaryentereddate
    if(inscription_response_compound->dt_inscription_notaryentereddate) {
    if(cJSON_AddStringToObject(item, "dtInscriptionNotaryentereddate", inscription_response_compound->dt_inscription_notaryentereddate) == NULL) {
    goto fail; //String
    }
    }


    // inscription_response_compound->t_inscription_cadastre
    if (!inscription_response_compound->t_inscription_cadastre) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tInscriptionCadastre", inscription_response_compound->t_inscription_cadastre) == NULL) {
    goto fail; //String
    }


    // inscription_response_compound->b_inscription_reference
    if (!inscription_response_compound->b_inscription_reference) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bInscriptionReference", *inscription_response_compound->b_inscription_reference) == NULL) {
    goto fail; //Bool
    }


    // inscription_response_compound->b_inscription_inspection
    if (!inscription_response_compound->b_inscription_inspection) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bInscriptionInspection", *inscription_response_compound->b_inscription_inspection) == NULL) {
    goto fail; //Bool
    }


    // inscription_response_compound->b_inscription_isactive
    if (!inscription_response_compound->b_inscription_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bInscriptionIsactive", *inscription_response_compound->b_inscription_isactive) == NULL) {
    goto fail; //Bool
    }


    // inscription_response_compound->t_inscription_checklistnote
    if (!inscription_response_compound->t_inscription_checklistnote) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tInscriptionChecklistnote", inscription_response_compound->t_inscription_checklistnote) == NULL) {
    goto fail; //String
    }


    // inscription_response_compound->b_inscription_new
    if (!inscription_response_compound->b_inscription_new) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bInscriptionNew", *inscription_response_compound->b_inscription_new) == NULL) {
    goto fail; //Bool
    }


    // inscription_response_compound->b_inscription_homeowner
    if (!inscription_response_compound->b_inscription_homeowner) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bInscriptionHomeowner", *inscription_response_compound->b_inscription_homeowner) == NULL) {
    goto fail; //Bool
    }


    // inscription_response_compound->b_inscription_archived
    if (!inscription_response_compound->b_inscription_archived) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bInscriptionArchived", *inscription_response_compound->b_inscription_archived) == NULL) {
    goto fail; //Bool
    }


    // inscription_response_compound->b_inscription_litigation
    if (!inscription_response_compound->b_inscription_litigation) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bInscriptionLitigation", *inscription_response_compound->b_inscription_litigation) == NULL) {
    goto fail; //Bool
    }


    // inscription_response_compound->b_inscription_repossession
    if (!inscription_response_compound->b_inscription_repossession) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bInscriptionRepossession", *inscription_response_compound->b_inscription_repossession) == NULL) {
    goto fail; //Bool
    }


    // inscription_response_compound->b_inscription_issolicitation
    if (!inscription_response_compound->b_inscription_issolicitation) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bInscriptionIssolicitation", *inscription_response_compound->b_inscription_issolicitation) == NULL) {
    goto fail; //Bool
    }


    // inscription_response_compound->b_inscription_salebyowner
    if (!inscription_response_compound->b_inscription_salebyowner) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bInscriptionSalebyowner", *inscription_response_compound->b_inscription_salebyowner) == NULL) {
    goto fail; //Bool
    }


    // inscription_response_compound->b_inscription_soldwithoutlegalwarranty
    if (!inscription_response_compound->b_inscription_soldwithoutlegalwarranty) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bInscriptionSoldwithoutlegalwarranty", *inscription_response_compound->b_inscription_soldwithoutlegalwarranty) == NULL) {
    goto fail; //Bool
    }


    // inscription_response_compound->i_inscription_constructionyear
    if (!inscription_response_compound->i_inscription_constructionyear) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iInscriptionConstructionyear", *inscription_response_compound->i_inscription_constructionyear) == NULL) {
    goto fail; //Numeric
    }


    // inscription_response_compound->i_inscription_unit
    if (!inscription_response_compound->i_inscription_unit) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iInscriptionUnit", *inscription_response_compound->i_inscription_unit) == NULL) {
    goto fail; //Numeric
    }


    // inscription_response_compound->obj_audit
    if(inscription_response_compound->obj_audit) {
    cJSON *obj_audit_local_JSON = common_audit_convertToJSON(inscription_response_compound->obj_audit);
    if(obj_audit_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objAudit", obj_audit_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inscription_response_compound_t *inscription_response_compound_parseFromJSON(cJSON *inscription_response_compoundJSON){

    inscription_response_compound_t *inscription_response_compound_local_var = NULL;

    // define the local variable for inscription_response_compound->pki_inscription_id
    int *pki_inscription_id_local_var = NULL;

    // define the local variable for inscription_response_compound->fki_department_id
    int *fki_department_id_local_var = NULL;

    char *s_department_name_x_local_str = NULL;

    // define the local variable for inscription_response_compound->fki_realestateboard_id
    int *fki_realestateboard_id_local_var = NULL;

    char *s_realestateboard_name_x_local_str = NULL;

    // define the local variable for inscription_response_compound->fki_address_id
    int *fki_address_id_local_var = NULL;

    // define the local variable for inscription_response_compound->obj_address
    address_response_compound_t *obj_address_local_nonprim = NULL;

    // define the local variable for inscription_response_compound->fki_inscriptionbuildingtype_id
    int *fki_inscriptionbuildingtype_id_local_var = NULL;

    char *s_inscriptionbuildingtype_name_x_local_str = NULL;

    // define the local variable for inscription_response_compound->fki_inscriptiontype_id
    int *fki_inscriptiontype_id_local_var = NULL;

    char *s_inscriptiontype_name_x_local_str = NULL;

    // define the local variable for inscription_response_compound->fki_inscriptioncategory_id
    int *fki_inscriptioncategory_id_local_var = NULL;

    char *s_inscriptioncategory_name_x_local_str = NULL;

    // define the local variable for inscription_response_compound->e_inscription_step
    ezmax_api_definition__full_field_e_inscription_step__e e_inscription_step_local_nonprim = 0;

    // define the local variable for inscription_response_compound->e_inscription_residence_type
    ezmax_api_definition__full_field_e_inscription_residence_type__e e_inscription_residence_type_local_nonprim = 0;

    char *s_inscription_civicend_local_str = NULL;

    char *s_inscription_mls_local_str = NULL;

    char *s_inscription_contract_local_str = NULL;

    // define the local variable for inscription_response_compound->i_inscription_sellerdeclaration
    int *i_inscription_sellerdeclaration_local_var = NULL;

    // define the local variable for inscription_response_compound->e_inscription_type
    ezmax_api_definition__full_field_e_inscription_type__e e_inscription_type_local_nonprim = 0;

    char *d_inscription_initialsaleprice_local_str = NULL;

    char *d_inscription_saleprice_local_str = NULL;

    char *d_inscription_rentprice_local_str = NULL;

    // define the local variable for inscription_response_compound->e_inscription_remunerationtype
    ezmax_api_definition__full_field_e_inscription_remunerationtype__e e_inscription_remunerationtype_local_nonprim = 0;

    // define the local variable for inscription_response_compound->e_inscription_remunerationinscriptorsellertype
    ezmax_api_definition__full_field_e_inscription_remunerationinscriptorsellertype__e e_inscription_remunerationinscriptorsellertype_local_nonprim = 0;

    // define the local variable for inscription_response_compound->e_inscription_remunerationreferencetype
    ezmax_api_definition__full_field_e_inscription_remunerationreferencetype__e e_inscription_remunerationreferencetype_local_nonprim = 0;

    // define the local variable for inscription_response_compound->e_inscription_remunerationtotaltype
    ezmax_api_definition__full_field_e_inscription_remunerationtotaltype__e e_inscription_remunerationtotaltype_local_nonprim = 0;

    char *d_inscription_remuneration_local_str = NULL;

    char *d_inscription_remunerationinscriptorseller_local_str = NULL;

    char *d_inscription_remunerationreference_local_str = NULL;

    char *d_inscription_remunerationtotal_local_str = NULL;

    char *d_inscription_mortgagesold_local_str = NULL;

    char *dt_inscription_date_local_str = NULL;

    char *dt_inscription_cancellationdate_local_str = NULL;

    char *dt_inscription_initialexpirationdate_local_str = NULL;

    char *dt_inscription_expirationdate_local_str = NULL;

    char *dt_inscription_notarydate_local_str = NULL;

    char *dt_inscription_notaryentereddate_local_str = NULL;

    char *t_inscription_cadastre_local_str = NULL;

    // define the local variable for inscription_response_compound->b_inscription_reference
    int *b_inscription_reference_local_var = NULL;

    // define the local variable for inscription_response_compound->b_inscription_inspection
    int *b_inscription_inspection_local_var = NULL;

    // define the local variable for inscription_response_compound->b_inscription_isactive
    int *b_inscription_isactive_local_var = NULL;

    char *t_inscription_checklistnote_local_str = NULL;

    // define the local variable for inscription_response_compound->b_inscription_new
    int *b_inscription_new_local_var = NULL;

    // define the local variable for inscription_response_compound->b_inscription_homeowner
    int *b_inscription_homeowner_local_var = NULL;

    // define the local variable for inscription_response_compound->b_inscription_archived
    int *b_inscription_archived_local_var = NULL;

    // define the local variable for inscription_response_compound->b_inscription_litigation
    int *b_inscription_litigation_local_var = NULL;

    // define the local variable for inscription_response_compound->b_inscription_repossession
    int *b_inscription_repossession_local_var = NULL;

    // define the local variable for inscription_response_compound->b_inscription_issolicitation
    int *b_inscription_issolicitation_local_var = NULL;

    // define the local variable for inscription_response_compound->b_inscription_salebyowner
    int *b_inscription_salebyowner_local_var = NULL;

    // define the local variable for inscription_response_compound->b_inscription_soldwithoutlegalwarranty
    int *b_inscription_soldwithoutlegalwarranty_local_var = NULL;

    // define the local variable for inscription_response_compound->i_inscription_constructionyear
    int *i_inscription_constructionyear_local_var = NULL;

    // define the local variable for inscription_response_compound->i_inscription_unit
    int *i_inscription_unit_local_var = NULL;

    // define the local variable for inscription_response_compound->obj_audit
    common_audit_t *obj_audit_local_nonprim = NULL;

    // inscription_response_compound->pki_inscription_id
    cJSON *pki_inscription_id = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "pkiInscriptionID");
    if (cJSON_IsNull(pki_inscription_id)) {
        pki_inscription_id = NULL;
    }
    if (!pki_inscription_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_inscription_id))
    {
    goto end; //Numeric
    }
    pki_inscription_id_local_var = malloc(sizeof(int));
    if(!pki_inscription_id_local_var)
    {
        goto end;
    }
    *pki_inscription_id_local_var = pki_inscription_id->valuedouble;

    // inscription_response_compound->fki_department_id
    cJSON *fki_department_id = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "fkiDepartmentID");
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

    // inscription_response_compound->s_department_name_x
    cJSON *s_department_name_x = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "sDepartmentNameX");
    if (cJSON_IsNull(s_department_name_x)) {
        s_department_name_x = NULL;
    }
    if (s_department_name_x) { 
    if(!cJSON_IsString(s_department_name_x) && !cJSON_IsNull(s_department_name_x))
    {
    goto end; //String
    }
    }

    // inscription_response_compound->fki_realestateboard_id
    cJSON *fki_realestateboard_id = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "fkiRealestateboardID");
    if (cJSON_IsNull(fki_realestateboard_id)) {
        fki_realestateboard_id = NULL;
    }
    if (!fki_realestateboard_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_realestateboard_id))
    {
    goto end; //Numeric
    }
    fki_realestateboard_id_local_var = malloc(sizeof(int));
    if(!fki_realestateboard_id_local_var)
    {
        goto end;
    }
    *fki_realestateboard_id_local_var = fki_realestateboard_id->valuedouble;

    // inscription_response_compound->s_realestateboard_name_x
    cJSON *s_realestateboard_name_x = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "sRealestateboardNameX");
    if (cJSON_IsNull(s_realestateboard_name_x)) {
        s_realestateboard_name_x = NULL;
    }
    if (s_realestateboard_name_x) { 
    if(!cJSON_IsString(s_realestateboard_name_x) && !cJSON_IsNull(s_realestateboard_name_x))
    {
    goto end; //String
    }
    }

    // inscription_response_compound->fki_address_id
    cJSON *fki_address_id = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "fkiAddressID");
    if (cJSON_IsNull(fki_address_id)) {
        fki_address_id = NULL;
    }
    if (!fki_address_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_address_id))
    {
    goto end; //Numeric
    }
    fki_address_id_local_var = malloc(sizeof(int));
    if(!fki_address_id_local_var)
    {
        goto end;
    }
    *fki_address_id_local_var = fki_address_id->valuedouble;

    // inscription_response_compound->obj_address
    cJSON *obj_address = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "objAddress");
    if (cJSON_IsNull(obj_address)) {
        obj_address = NULL;
    }
    if (obj_address) { 
    obj_address_local_nonprim = address_response_compound_parseFromJSON(obj_address); //nonprimitive
    }

    // inscription_response_compound->fki_inscriptionbuildingtype_id
    cJSON *fki_inscriptionbuildingtype_id = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "fkiInscriptionbuildingtypeID");
    if (cJSON_IsNull(fki_inscriptionbuildingtype_id)) {
        fki_inscriptionbuildingtype_id = NULL;
    }
    if (!fki_inscriptionbuildingtype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_inscriptionbuildingtype_id))
    {
    goto end; //Numeric
    }
    fki_inscriptionbuildingtype_id_local_var = malloc(sizeof(int));
    if(!fki_inscriptionbuildingtype_id_local_var)
    {
        goto end;
    }
    *fki_inscriptionbuildingtype_id_local_var = fki_inscriptionbuildingtype_id->valuedouble;

    // inscription_response_compound->s_inscriptionbuildingtype_name_x
    cJSON *s_inscriptionbuildingtype_name_x = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "sInscriptionbuildingtypeNameX");
    if (cJSON_IsNull(s_inscriptionbuildingtype_name_x)) {
        s_inscriptionbuildingtype_name_x = NULL;
    }
    if (s_inscriptionbuildingtype_name_x) { 
    if(!cJSON_IsString(s_inscriptionbuildingtype_name_x) && !cJSON_IsNull(s_inscriptionbuildingtype_name_x))
    {
    goto end; //String
    }
    }

    // inscription_response_compound->fki_inscriptiontype_id
    cJSON *fki_inscriptiontype_id = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "fkiInscriptiontypeID");
    if (cJSON_IsNull(fki_inscriptiontype_id)) {
        fki_inscriptiontype_id = NULL;
    }
    if (!fki_inscriptiontype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_inscriptiontype_id))
    {
    goto end; //Numeric
    }
    fki_inscriptiontype_id_local_var = malloc(sizeof(int));
    if(!fki_inscriptiontype_id_local_var)
    {
        goto end;
    }
    *fki_inscriptiontype_id_local_var = fki_inscriptiontype_id->valuedouble;

    // inscription_response_compound->s_inscriptiontype_name_x
    cJSON *s_inscriptiontype_name_x = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "sInscriptiontypeNameX");
    if (cJSON_IsNull(s_inscriptiontype_name_x)) {
        s_inscriptiontype_name_x = NULL;
    }
    if (s_inscriptiontype_name_x) { 
    if(!cJSON_IsString(s_inscriptiontype_name_x) && !cJSON_IsNull(s_inscriptiontype_name_x))
    {
    goto end; //String
    }
    }

    // inscription_response_compound->fki_inscriptioncategory_id
    cJSON *fki_inscriptioncategory_id = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "fkiInscriptioncategoryID");
    if (cJSON_IsNull(fki_inscriptioncategory_id)) {
        fki_inscriptioncategory_id = NULL;
    }
    if (!fki_inscriptioncategory_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_inscriptioncategory_id))
    {
    goto end; //Numeric
    }
    fki_inscriptioncategory_id_local_var = malloc(sizeof(int));
    if(!fki_inscriptioncategory_id_local_var)
    {
        goto end;
    }
    *fki_inscriptioncategory_id_local_var = fki_inscriptioncategory_id->valuedouble;

    // inscription_response_compound->s_inscriptioncategory_name_x
    cJSON *s_inscriptioncategory_name_x = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "sInscriptioncategoryNameX");
    if (cJSON_IsNull(s_inscriptioncategory_name_x)) {
        s_inscriptioncategory_name_x = NULL;
    }
    if (s_inscriptioncategory_name_x) { 
    if(!cJSON_IsString(s_inscriptioncategory_name_x) && !cJSON_IsNull(s_inscriptioncategory_name_x))
    {
    goto end; //String
    }
    }

    // inscription_response_compound->e_inscription_step
    cJSON *e_inscription_step = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "eInscriptionStep");
    if (cJSON_IsNull(e_inscription_step)) {
        e_inscription_step = NULL;
    }
    if (!e_inscription_step) {
        goto end;
    }

    
    e_inscription_step_local_nonprim = field_e_inscription_step_parseFromJSON(e_inscription_step); //custom

    // inscription_response_compound->e_inscription_residence_type
    cJSON *e_inscription_residence_type = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "eInscriptionResidenceType");
    if (cJSON_IsNull(e_inscription_residence_type)) {
        e_inscription_residence_type = NULL;
    }
    if (!e_inscription_residence_type) {
        goto end;
    }

    
    e_inscription_residence_type_local_nonprim = field_e_inscription_residence_type_parseFromJSON(e_inscription_residence_type); //custom

    // inscription_response_compound->s_inscription_civicend
    cJSON *s_inscription_civicend = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "sInscriptionCivicend");
    if (cJSON_IsNull(s_inscription_civicend)) {
        s_inscription_civicend = NULL;
    }
    if (!s_inscription_civicend) {
        goto end;
    }

    
    if(!cJSON_IsString(s_inscription_civicend))
    {
    goto end; //String
    }

    // inscription_response_compound->s_inscription_mls
    cJSON *s_inscription_mls = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "sInscriptionMLS");
    if (cJSON_IsNull(s_inscription_mls)) {
        s_inscription_mls = NULL;
    }
    if (s_inscription_mls) { 
    if(!cJSON_IsString(s_inscription_mls) && !cJSON_IsNull(s_inscription_mls))
    {
    goto end; //String
    }
    }

    // inscription_response_compound->s_inscription_contract
    cJSON *s_inscription_contract = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "sInscriptionContract");
    if (cJSON_IsNull(s_inscription_contract)) {
        s_inscription_contract = NULL;
    }
    if (!s_inscription_contract) {
        goto end;
    }

    
    if(!cJSON_IsString(s_inscription_contract))
    {
    goto end; //String
    }

    // inscription_response_compound->i_inscription_sellerdeclaration
    cJSON *i_inscription_sellerdeclaration = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "iInscriptionSellerdeclaration");
    if (cJSON_IsNull(i_inscription_sellerdeclaration)) {
        i_inscription_sellerdeclaration = NULL;
    }
    if (!i_inscription_sellerdeclaration) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_inscription_sellerdeclaration))
    {
    goto end; //Numeric
    }
    i_inscription_sellerdeclaration_local_var = malloc(sizeof(int));
    if(!i_inscription_sellerdeclaration_local_var)
    {
        goto end;
    }
    *i_inscription_sellerdeclaration_local_var = i_inscription_sellerdeclaration->valuedouble;

    // inscription_response_compound->e_inscription_type
    cJSON *e_inscription_type = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "eInscriptionType");
    if (cJSON_IsNull(e_inscription_type)) {
        e_inscription_type = NULL;
    }
    if (!e_inscription_type) {
        goto end;
    }

    
    e_inscription_type_local_nonprim = field_e_inscription_type_parseFromJSON(e_inscription_type); //custom

    // inscription_response_compound->d_inscription_initialsaleprice
    cJSON *d_inscription_initialsaleprice = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "dInscriptionInitialsaleprice");
    if (cJSON_IsNull(d_inscription_initialsaleprice)) {
        d_inscription_initialsaleprice = NULL;
    }
    if (!d_inscription_initialsaleprice) {
        goto end;
    }

    
    if(!cJSON_IsString(d_inscription_initialsaleprice))
    {
    goto end; //String
    }

    // inscription_response_compound->d_inscription_saleprice
    cJSON *d_inscription_saleprice = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "dInscriptionSaleprice");
    if (cJSON_IsNull(d_inscription_saleprice)) {
        d_inscription_saleprice = NULL;
    }
    if (!d_inscription_saleprice) {
        goto end;
    }

    
    if(!cJSON_IsString(d_inscription_saleprice))
    {
    goto end; //String
    }

    // inscription_response_compound->d_inscription_rentprice
    cJSON *d_inscription_rentprice = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "dInscriptionRentprice");
    if (cJSON_IsNull(d_inscription_rentprice)) {
        d_inscription_rentprice = NULL;
    }
    if (!d_inscription_rentprice) {
        goto end;
    }

    
    if(!cJSON_IsString(d_inscription_rentprice))
    {
    goto end; //String
    }

    // inscription_response_compound->e_inscription_remunerationtype
    cJSON *e_inscription_remunerationtype = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "eInscriptionRemunerationtype");
    if (cJSON_IsNull(e_inscription_remunerationtype)) {
        e_inscription_remunerationtype = NULL;
    }
    if (!e_inscription_remunerationtype) {
        goto end;
    }

    
    e_inscription_remunerationtype_local_nonprim = field_e_inscription_remunerationtype_parseFromJSON(e_inscription_remunerationtype); //custom

    // inscription_response_compound->e_inscription_remunerationinscriptorsellertype
    cJSON *e_inscription_remunerationinscriptorsellertype = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "eInscriptionRemunerationinscriptorsellertype");
    if (cJSON_IsNull(e_inscription_remunerationinscriptorsellertype)) {
        e_inscription_remunerationinscriptorsellertype = NULL;
    }
    if (!e_inscription_remunerationinscriptorsellertype) {
        goto end;
    }

    
    e_inscription_remunerationinscriptorsellertype_local_nonprim = field_e_inscription_remunerationinscriptorsellertype_parseFromJSON(e_inscription_remunerationinscriptorsellertype); //custom

    // inscription_response_compound->e_inscription_remunerationreferencetype
    cJSON *e_inscription_remunerationreferencetype = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "eInscriptionRemunerationreferencetype");
    if (cJSON_IsNull(e_inscription_remunerationreferencetype)) {
        e_inscription_remunerationreferencetype = NULL;
    }
    if (!e_inscription_remunerationreferencetype) {
        goto end;
    }

    
    e_inscription_remunerationreferencetype_local_nonprim = field_e_inscription_remunerationreferencetype_parseFromJSON(e_inscription_remunerationreferencetype); //custom

    // inscription_response_compound->e_inscription_remunerationtotaltype
    cJSON *e_inscription_remunerationtotaltype = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "eInscriptionRemunerationtotaltype");
    if (cJSON_IsNull(e_inscription_remunerationtotaltype)) {
        e_inscription_remunerationtotaltype = NULL;
    }
    if (!e_inscription_remunerationtotaltype) {
        goto end;
    }

    
    e_inscription_remunerationtotaltype_local_nonprim = field_e_inscription_remunerationtotaltype_parseFromJSON(e_inscription_remunerationtotaltype); //custom

    // inscription_response_compound->d_inscription_remuneration
    cJSON *d_inscription_remuneration = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "dInscriptionRemuneration");
    if (cJSON_IsNull(d_inscription_remuneration)) {
        d_inscription_remuneration = NULL;
    }
    if (!d_inscription_remuneration) {
        goto end;
    }

    
    if(!cJSON_IsString(d_inscription_remuneration))
    {
    goto end; //String
    }

    // inscription_response_compound->d_inscription_remunerationinscriptorseller
    cJSON *d_inscription_remunerationinscriptorseller = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "dInscriptionRemunerationinscriptorseller");
    if (cJSON_IsNull(d_inscription_remunerationinscriptorseller)) {
        d_inscription_remunerationinscriptorseller = NULL;
    }
    if (!d_inscription_remunerationinscriptorseller) {
        goto end;
    }

    
    if(!cJSON_IsString(d_inscription_remunerationinscriptorseller))
    {
    goto end; //String
    }

    // inscription_response_compound->d_inscription_remunerationreference
    cJSON *d_inscription_remunerationreference = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "dInscriptionRemunerationreference");
    if (cJSON_IsNull(d_inscription_remunerationreference)) {
        d_inscription_remunerationreference = NULL;
    }
    if (!d_inscription_remunerationreference) {
        goto end;
    }

    
    if(!cJSON_IsString(d_inscription_remunerationreference))
    {
    goto end; //String
    }

    // inscription_response_compound->d_inscription_remunerationtotal
    cJSON *d_inscription_remunerationtotal = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "dInscriptionRemunerationtotal");
    if (cJSON_IsNull(d_inscription_remunerationtotal)) {
        d_inscription_remunerationtotal = NULL;
    }
    if (!d_inscription_remunerationtotal) {
        goto end;
    }

    
    if(!cJSON_IsString(d_inscription_remunerationtotal))
    {
    goto end; //String
    }

    // inscription_response_compound->d_inscription_mortgagesold
    cJSON *d_inscription_mortgagesold = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "dInscriptionMortgagesold");
    if (cJSON_IsNull(d_inscription_mortgagesold)) {
        d_inscription_mortgagesold = NULL;
    }
    if (!d_inscription_mortgagesold) {
        goto end;
    }

    
    if(!cJSON_IsString(d_inscription_mortgagesold))
    {
    goto end; //String
    }

    // inscription_response_compound->dt_inscription_date
    cJSON *dt_inscription_date = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "dtInscriptionDate");
    if (cJSON_IsNull(dt_inscription_date)) {
        dt_inscription_date = NULL;
    }
    if (dt_inscription_date) { 
    if(!cJSON_IsString(dt_inscription_date) && !cJSON_IsNull(dt_inscription_date))
    {
    goto end; //String
    }
    }

    // inscription_response_compound->dt_inscription_cancellationdate
    cJSON *dt_inscription_cancellationdate = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "dtInscriptionCancellationdate");
    if (cJSON_IsNull(dt_inscription_cancellationdate)) {
        dt_inscription_cancellationdate = NULL;
    }
    if (dt_inscription_cancellationdate) { 
    if(!cJSON_IsString(dt_inscription_cancellationdate) && !cJSON_IsNull(dt_inscription_cancellationdate))
    {
    goto end; //String
    }
    }

    // inscription_response_compound->dt_inscription_initialexpirationdate
    cJSON *dt_inscription_initialexpirationdate = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "dtInscriptionInitialexpirationdate");
    if (cJSON_IsNull(dt_inscription_initialexpirationdate)) {
        dt_inscription_initialexpirationdate = NULL;
    }
    if (dt_inscription_initialexpirationdate) { 
    if(!cJSON_IsString(dt_inscription_initialexpirationdate) && !cJSON_IsNull(dt_inscription_initialexpirationdate))
    {
    goto end; //String
    }
    }

    // inscription_response_compound->dt_inscription_expirationdate
    cJSON *dt_inscription_expirationdate = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "dtInscriptionExpirationdate");
    if (cJSON_IsNull(dt_inscription_expirationdate)) {
        dt_inscription_expirationdate = NULL;
    }
    if (dt_inscription_expirationdate) { 
    if(!cJSON_IsString(dt_inscription_expirationdate) && !cJSON_IsNull(dt_inscription_expirationdate))
    {
    goto end; //String
    }
    }

    // inscription_response_compound->dt_inscription_notarydate
    cJSON *dt_inscription_notarydate = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "dtInscriptionNotarydate");
    if (cJSON_IsNull(dt_inscription_notarydate)) {
        dt_inscription_notarydate = NULL;
    }
    if (dt_inscription_notarydate) { 
    if(!cJSON_IsString(dt_inscription_notarydate) && !cJSON_IsNull(dt_inscription_notarydate))
    {
    goto end; //String
    }
    }

    // inscription_response_compound->dt_inscription_notaryentereddate
    cJSON *dt_inscription_notaryentereddate = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "dtInscriptionNotaryentereddate");
    if (cJSON_IsNull(dt_inscription_notaryentereddate)) {
        dt_inscription_notaryentereddate = NULL;
    }
    if (dt_inscription_notaryentereddate) { 
    if(!cJSON_IsString(dt_inscription_notaryentereddate) && !cJSON_IsNull(dt_inscription_notaryentereddate))
    {
    goto end; //String
    }
    }

    // inscription_response_compound->t_inscription_cadastre
    cJSON *t_inscription_cadastre = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "tInscriptionCadastre");
    if (cJSON_IsNull(t_inscription_cadastre)) {
        t_inscription_cadastre = NULL;
    }
    if (!t_inscription_cadastre) {
        goto end;
    }

    
    if(!cJSON_IsString(t_inscription_cadastre))
    {
    goto end; //String
    }

    // inscription_response_compound->b_inscription_reference
    cJSON *b_inscription_reference = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "bInscriptionReference");
    if (cJSON_IsNull(b_inscription_reference)) {
        b_inscription_reference = NULL;
    }
    if (!b_inscription_reference) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_inscription_reference))
    {
    goto end; //Bool
    }
    b_inscription_reference_local_var = malloc(sizeof(int));
    if(!b_inscription_reference_local_var)
    {
        goto end;
    }
    *b_inscription_reference_local_var = b_inscription_reference->valueint;

    // inscription_response_compound->b_inscription_inspection
    cJSON *b_inscription_inspection = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "bInscriptionInspection");
    if (cJSON_IsNull(b_inscription_inspection)) {
        b_inscription_inspection = NULL;
    }
    if (!b_inscription_inspection) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_inscription_inspection))
    {
    goto end; //Bool
    }
    b_inscription_inspection_local_var = malloc(sizeof(int));
    if(!b_inscription_inspection_local_var)
    {
        goto end;
    }
    *b_inscription_inspection_local_var = b_inscription_inspection->valueint;

    // inscription_response_compound->b_inscription_isactive
    cJSON *b_inscription_isactive = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "bInscriptionIsactive");
    if (cJSON_IsNull(b_inscription_isactive)) {
        b_inscription_isactive = NULL;
    }
    if (!b_inscription_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_inscription_isactive))
    {
    goto end; //Bool
    }
    b_inscription_isactive_local_var = malloc(sizeof(int));
    if(!b_inscription_isactive_local_var)
    {
        goto end;
    }
    *b_inscription_isactive_local_var = b_inscription_isactive->valueint;

    // inscription_response_compound->t_inscription_checklistnote
    cJSON *t_inscription_checklistnote = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "tInscriptionChecklistnote");
    if (cJSON_IsNull(t_inscription_checklistnote)) {
        t_inscription_checklistnote = NULL;
    }
    if (!t_inscription_checklistnote) {
        goto end;
    }

    
    if(!cJSON_IsString(t_inscription_checklistnote))
    {
    goto end; //String
    }

    // inscription_response_compound->b_inscription_new
    cJSON *b_inscription_new = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "bInscriptionNew");
    if (cJSON_IsNull(b_inscription_new)) {
        b_inscription_new = NULL;
    }
    if (!b_inscription_new) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_inscription_new))
    {
    goto end; //Bool
    }
    b_inscription_new_local_var = malloc(sizeof(int));
    if(!b_inscription_new_local_var)
    {
        goto end;
    }
    *b_inscription_new_local_var = b_inscription_new->valueint;

    // inscription_response_compound->b_inscription_homeowner
    cJSON *b_inscription_homeowner = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "bInscriptionHomeowner");
    if (cJSON_IsNull(b_inscription_homeowner)) {
        b_inscription_homeowner = NULL;
    }
    if (!b_inscription_homeowner) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_inscription_homeowner))
    {
    goto end; //Bool
    }
    b_inscription_homeowner_local_var = malloc(sizeof(int));
    if(!b_inscription_homeowner_local_var)
    {
        goto end;
    }
    *b_inscription_homeowner_local_var = b_inscription_homeowner->valueint;

    // inscription_response_compound->b_inscription_archived
    cJSON *b_inscription_archived = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "bInscriptionArchived");
    if (cJSON_IsNull(b_inscription_archived)) {
        b_inscription_archived = NULL;
    }
    if (!b_inscription_archived) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_inscription_archived))
    {
    goto end; //Bool
    }
    b_inscription_archived_local_var = malloc(sizeof(int));
    if(!b_inscription_archived_local_var)
    {
        goto end;
    }
    *b_inscription_archived_local_var = b_inscription_archived->valueint;

    // inscription_response_compound->b_inscription_litigation
    cJSON *b_inscription_litigation = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "bInscriptionLitigation");
    if (cJSON_IsNull(b_inscription_litigation)) {
        b_inscription_litigation = NULL;
    }
    if (!b_inscription_litigation) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_inscription_litigation))
    {
    goto end; //Bool
    }
    b_inscription_litigation_local_var = malloc(sizeof(int));
    if(!b_inscription_litigation_local_var)
    {
        goto end;
    }
    *b_inscription_litigation_local_var = b_inscription_litigation->valueint;

    // inscription_response_compound->b_inscription_repossession
    cJSON *b_inscription_repossession = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "bInscriptionRepossession");
    if (cJSON_IsNull(b_inscription_repossession)) {
        b_inscription_repossession = NULL;
    }
    if (!b_inscription_repossession) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_inscription_repossession))
    {
    goto end; //Bool
    }
    b_inscription_repossession_local_var = malloc(sizeof(int));
    if(!b_inscription_repossession_local_var)
    {
        goto end;
    }
    *b_inscription_repossession_local_var = b_inscription_repossession->valueint;

    // inscription_response_compound->b_inscription_issolicitation
    cJSON *b_inscription_issolicitation = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "bInscriptionIssolicitation");
    if (cJSON_IsNull(b_inscription_issolicitation)) {
        b_inscription_issolicitation = NULL;
    }
    if (!b_inscription_issolicitation) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_inscription_issolicitation))
    {
    goto end; //Bool
    }
    b_inscription_issolicitation_local_var = malloc(sizeof(int));
    if(!b_inscription_issolicitation_local_var)
    {
        goto end;
    }
    *b_inscription_issolicitation_local_var = b_inscription_issolicitation->valueint;

    // inscription_response_compound->b_inscription_salebyowner
    cJSON *b_inscription_salebyowner = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "bInscriptionSalebyowner");
    if (cJSON_IsNull(b_inscription_salebyowner)) {
        b_inscription_salebyowner = NULL;
    }
    if (!b_inscription_salebyowner) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_inscription_salebyowner))
    {
    goto end; //Bool
    }
    b_inscription_salebyowner_local_var = malloc(sizeof(int));
    if(!b_inscription_salebyowner_local_var)
    {
        goto end;
    }
    *b_inscription_salebyowner_local_var = b_inscription_salebyowner->valueint;

    // inscription_response_compound->b_inscription_soldwithoutlegalwarranty
    cJSON *b_inscription_soldwithoutlegalwarranty = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "bInscriptionSoldwithoutlegalwarranty");
    if (cJSON_IsNull(b_inscription_soldwithoutlegalwarranty)) {
        b_inscription_soldwithoutlegalwarranty = NULL;
    }
    if (!b_inscription_soldwithoutlegalwarranty) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_inscription_soldwithoutlegalwarranty))
    {
    goto end; //Bool
    }
    b_inscription_soldwithoutlegalwarranty_local_var = malloc(sizeof(int));
    if(!b_inscription_soldwithoutlegalwarranty_local_var)
    {
        goto end;
    }
    *b_inscription_soldwithoutlegalwarranty_local_var = b_inscription_soldwithoutlegalwarranty->valueint;

    // inscription_response_compound->i_inscription_constructionyear
    cJSON *i_inscription_constructionyear = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "iInscriptionConstructionyear");
    if (cJSON_IsNull(i_inscription_constructionyear)) {
        i_inscription_constructionyear = NULL;
    }
    if (!i_inscription_constructionyear) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_inscription_constructionyear))
    {
    goto end; //Numeric
    }
    i_inscription_constructionyear_local_var = malloc(sizeof(int));
    if(!i_inscription_constructionyear_local_var)
    {
        goto end;
    }
    *i_inscription_constructionyear_local_var = i_inscription_constructionyear->valuedouble;

    // inscription_response_compound->i_inscription_unit
    cJSON *i_inscription_unit = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "iInscriptionUnit");
    if (cJSON_IsNull(i_inscription_unit)) {
        i_inscription_unit = NULL;
    }
    if (!i_inscription_unit) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_inscription_unit))
    {
    goto end; //Numeric
    }
    i_inscription_unit_local_var = malloc(sizeof(int));
    if(!i_inscription_unit_local_var)
    {
        goto end;
    }
    *i_inscription_unit_local_var = i_inscription_unit->valuedouble;

    // inscription_response_compound->obj_audit
    cJSON *obj_audit = cJSON_GetObjectItemCaseSensitive(inscription_response_compoundJSON, "objAudit");
    if (cJSON_IsNull(obj_audit)) {
        obj_audit = NULL;
    }
    if (obj_audit) { 
    obj_audit_local_nonprim = common_audit_parseFromJSON(obj_audit); //nonprimitive
    }


    if (s_department_name_x && !cJSON_IsNull(s_department_name_x)) s_department_name_x_local_str = strdup(s_department_name_x->valuestring);
    if (s_realestateboard_name_x && !cJSON_IsNull(s_realestateboard_name_x)) s_realestateboard_name_x_local_str = strdup(s_realestateboard_name_x->valuestring);
    if (s_inscriptionbuildingtype_name_x && !cJSON_IsNull(s_inscriptionbuildingtype_name_x)) s_inscriptionbuildingtype_name_x_local_str = strdup(s_inscriptionbuildingtype_name_x->valuestring);
    if (s_inscriptiontype_name_x && !cJSON_IsNull(s_inscriptiontype_name_x)) s_inscriptiontype_name_x_local_str = strdup(s_inscriptiontype_name_x->valuestring);
    if (s_inscriptioncategory_name_x && !cJSON_IsNull(s_inscriptioncategory_name_x)) s_inscriptioncategory_name_x_local_str = strdup(s_inscriptioncategory_name_x->valuestring);
    if (s_inscription_civicend && !cJSON_IsNull(s_inscription_civicend)) s_inscription_civicend_local_str = strdup(s_inscription_civicend->valuestring);
    if (s_inscription_mls && !cJSON_IsNull(s_inscription_mls)) s_inscription_mls_local_str = strdup(s_inscription_mls->valuestring);
    if (s_inscription_contract && !cJSON_IsNull(s_inscription_contract)) s_inscription_contract_local_str = strdup(s_inscription_contract->valuestring);
    if (d_inscription_initialsaleprice && !cJSON_IsNull(d_inscription_initialsaleprice)) d_inscription_initialsaleprice_local_str = strdup(d_inscription_initialsaleprice->valuestring);
    if (d_inscription_saleprice && !cJSON_IsNull(d_inscription_saleprice)) d_inscription_saleprice_local_str = strdup(d_inscription_saleprice->valuestring);
    if (d_inscription_rentprice && !cJSON_IsNull(d_inscription_rentprice)) d_inscription_rentprice_local_str = strdup(d_inscription_rentprice->valuestring);
    if (d_inscription_remuneration && !cJSON_IsNull(d_inscription_remuneration)) d_inscription_remuneration_local_str = strdup(d_inscription_remuneration->valuestring);
    if (d_inscription_remunerationinscriptorseller && !cJSON_IsNull(d_inscription_remunerationinscriptorseller)) d_inscription_remunerationinscriptorseller_local_str = strdup(d_inscription_remunerationinscriptorseller->valuestring);
    if (d_inscription_remunerationreference && !cJSON_IsNull(d_inscription_remunerationreference)) d_inscription_remunerationreference_local_str = strdup(d_inscription_remunerationreference->valuestring);
    if (d_inscription_remunerationtotal && !cJSON_IsNull(d_inscription_remunerationtotal)) d_inscription_remunerationtotal_local_str = strdup(d_inscription_remunerationtotal->valuestring);
    if (d_inscription_mortgagesold && !cJSON_IsNull(d_inscription_mortgagesold)) d_inscription_mortgagesold_local_str = strdup(d_inscription_mortgagesold->valuestring);
    if (dt_inscription_date && !cJSON_IsNull(dt_inscription_date)) dt_inscription_date_local_str = strdup(dt_inscription_date->valuestring);
    if (dt_inscription_cancellationdate && !cJSON_IsNull(dt_inscription_cancellationdate)) dt_inscription_cancellationdate_local_str = strdup(dt_inscription_cancellationdate->valuestring);
    if (dt_inscription_initialexpirationdate && !cJSON_IsNull(dt_inscription_initialexpirationdate)) dt_inscription_initialexpirationdate_local_str = strdup(dt_inscription_initialexpirationdate->valuestring);
    if (dt_inscription_expirationdate && !cJSON_IsNull(dt_inscription_expirationdate)) dt_inscription_expirationdate_local_str = strdup(dt_inscription_expirationdate->valuestring);
    if (dt_inscription_notarydate && !cJSON_IsNull(dt_inscription_notarydate)) dt_inscription_notarydate_local_str = strdup(dt_inscription_notarydate->valuestring);
    if (dt_inscription_notaryentereddate && !cJSON_IsNull(dt_inscription_notaryentereddate)) dt_inscription_notaryentereddate_local_str = strdup(dt_inscription_notaryentereddate->valuestring);
    if (t_inscription_cadastre && !cJSON_IsNull(t_inscription_cadastre)) t_inscription_cadastre_local_str = strdup(t_inscription_cadastre->valuestring);
    if (t_inscription_checklistnote && !cJSON_IsNull(t_inscription_checklistnote)) t_inscription_checklistnote_local_str = strdup(t_inscription_checklistnote->valuestring);

    inscription_response_compound_local_var = inscription_response_compound_create_internal (
        pki_inscription_id_local_var,
        fki_department_id_local_var,
        s_department_name_x_local_str,
        fki_realestateboard_id_local_var,
        s_realestateboard_name_x_local_str,
        fki_address_id_local_var,
        obj_address ? obj_address_local_nonprim : NULL,
        fki_inscriptionbuildingtype_id_local_var,
        s_inscriptionbuildingtype_name_x_local_str,
        fki_inscriptiontype_id_local_var,
        s_inscriptiontype_name_x_local_str,
        fki_inscriptioncategory_id_local_var,
        s_inscriptioncategory_name_x_local_str,
        e_inscription_step_local_nonprim,
        e_inscription_residence_type_local_nonprim,
        s_inscription_civicend_local_str,
        s_inscription_mls_local_str,
        s_inscription_contract_local_str,
        i_inscription_sellerdeclaration_local_var,
        e_inscription_type_local_nonprim,
        d_inscription_initialsaleprice_local_str,
        d_inscription_saleprice_local_str,
        d_inscription_rentprice_local_str,
        e_inscription_remunerationtype_local_nonprim,
        e_inscription_remunerationinscriptorsellertype_local_nonprim,
        e_inscription_remunerationreferencetype_local_nonprim,
        e_inscription_remunerationtotaltype_local_nonprim,
        d_inscription_remuneration_local_str,
        d_inscription_remunerationinscriptorseller_local_str,
        d_inscription_remunerationreference_local_str,
        d_inscription_remunerationtotal_local_str,
        d_inscription_mortgagesold_local_str,
        dt_inscription_date_local_str,
        dt_inscription_cancellationdate_local_str,
        dt_inscription_initialexpirationdate_local_str,
        dt_inscription_expirationdate_local_str,
        dt_inscription_notarydate_local_str,
        dt_inscription_notaryentereddate_local_str,
        t_inscription_cadastre_local_str,
        b_inscription_reference_local_var,
        b_inscription_inspection_local_var,
        b_inscription_isactive_local_var,
        t_inscription_checklistnote_local_str,
        b_inscription_new_local_var,
        b_inscription_homeowner_local_var,
        b_inscription_archived_local_var,
        b_inscription_litigation_local_var,
        b_inscription_repossession_local_var,
        b_inscription_issolicitation_local_var,
        b_inscription_salebyowner_local_var,
        b_inscription_soldwithoutlegalwarranty_local_var,
        i_inscription_constructionyear_local_var,
        i_inscription_unit_local_var,
        obj_audit ? obj_audit_local_nonprim : NULL
        );

    if (!inscription_response_compound_local_var) {
        goto end;
    }

    return inscription_response_compound_local_var;
end:
    if (pki_inscription_id_local_var) {
        free(pki_inscription_id_local_var);
        pki_inscription_id_local_var = NULL;
    }
    if (fki_department_id_local_var) {
        free(fki_department_id_local_var);
        fki_department_id_local_var = NULL;
    }
    if (s_department_name_x_local_str) {
        free(s_department_name_x_local_str);
        s_department_name_x_local_str = NULL;
    }
    if (fki_realestateboard_id_local_var) {
        free(fki_realestateboard_id_local_var);
        fki_realestateboard_id_local_var = NULL;
    }
    if (s_realestateboard_name_x_local_str) {
        free(s_realestateboard_name_x_local_str);
        s_realestateboard_name_x_local_str = NULL;
    }
    if (fki_address_id_local_var) {
        free(fki_address_id_local_var);
        fki_address_id_local_var = NULL;
    }
    if (obj_address_local_nonprim) {
        address_response_compound_free(obj_address_local_nonprim);
        obj_address_local_nonprim = NULL;
    }
    if (fki_inscriptionbuildingtype_id_local_var) {
        free(fki_inscriptionbuildingtype_id_local_var);
        fki_inscriptionbuildingtype_id_local_var = NULL;
    }
    if (s_inscriptionbuildingtype_name_x_local_str) {
        free(s_inscriptionbuildingtype_name_x_local_str);
        s_inscriptionbuildingtype_name_x_local_str = NULL;
    }
    if (fki_inscriptiontype_id_local_var) {
        free(fki_inscriptiontype_id_local_var);
        fki_inscriptiontype_id_local_var = NULL;
    }
    if (s_inscriptiontype_name_x_local_str) {
        free(s_inscriptiontype_name_x_local_str);
        s_inscriptiontype_name_x_local_str = NULL;
    }
    if (fki_inscriptioncategory_id_local_var) {
        free(fki_inscriptioncategory_id_local_var);
        fki_inscriptioncategory_id_local_var = NULL;
    }
    if (s_inscriptioncategory_name_x_local_str) {
        free(s_inscriptioncategory_name_x_local_str);
        s_inscriptioncategory_name_x_local_str = NULL;
    }
    if (e_inscription_step_local_nonprim) {
        e_inscription_step_local_nonprim = 0;
    }
    if (e_inscription_residence_type_local_nonprim) {
        e_inscription_residence_type_local_nonprim = 0;
    }
    if (s_inscription_civicend_local_str) {
        free(s_inscription_civicend_local_str);
        s_inscription_civicend_local_str = NULL;
    }
    if (s_inscription_mls_local_str) {
        free(s_inscription_mls_local_str);
        s_inscription_mls_local_str = NULL;
    }
    if (s_inscription_contract_local_str) {
        free(s_inscription_contract_local_str);
        s_inscription_contract_local_str = NULL;
    }
    if (i_inscription_sellerdeclaration_local_var) {
        free(i_inscription_sellerdeclaration_local_var);
        i_inscription_sellerdeclaration_local_var = NULL;
    }
    if (e_inscription_type_local_nonprim) {
        e_inscription_type_local_nonprim = 0;
    }
    if (d_inscription_initialsaleprice_local_str) {
        free(d_inscription_initialsaleprice_local_str);
        d_inscription_initialsaleprice_local_str = NULL;
    }
    if (d_inscription_saleprice_local_str) {
        free(d_inscription_saleprice_local_str);
        d_inscription_saleprice_local_str = NULL;
    }
    if (d_inscription_rentprice_local_str) {
        free(d_inscription_rentprice_local_str);
        d_inscription_rentprice_local_str = NULL;
    }
    if (e_inscription_remunerationtype_local_nonprim) {
        e_inscription_remunerationtype_local_nonprim = 0;
    }
    if (e_inscription_remunerationinscriptorsellertype_local_nonprim) {
        e_inscription_remunerationinscriptorsellertype_local_nonprim = 0;
    }
    if (e_inscription_remunerationreferencetype_local_nonprim) {
        e_inscription_remunerationreferencetype_local_nonprim = 0;
    }
    if (e_inscription_remunerationtotaltype_local_nonprim) {
        e_inscription_remunerationtotaltype_local_nonprim = 0;
    }
    if (d_inscription_remuneration_local_str) {
        free(d_inscription_remuneration_local_str);
        d_inscription_remuneration_local_str = NULL;
    }
    if (d_inscription_remunerationinscriptorseller_local_str) {
        free(d_inscription_remunerationinscriptorseller_local_str);
        d_inscription_remunerationinscriptorseller_local_str = NULL;
    }
    if (d_inscription_remunerationreference_local_str) {
        free(d_inscription_remunerationreference_local_str);
        d_inscription_remunerationreference_local_str = NULL;
    }
    if (d_inscription_remunerationtotal_local_str) {
        free(d_inscription_remunerationtotal_local_str);
        d_inscription_remunerationtotal_local_str = NULL;
    }
    if (d_inscription_mortgagesold_local_str) {
        free(d_inscription_mortgagesold_local_str);
        d_inscription_mortgagesold_local_str = NULL;
    }
    if (dt_inscription_date_local_str) {
        free(dt_inscription_date_local_str);
        dt_inscription_date_local_str = NULL;
    }
    if (dt_inscription_cancellationdate_local_str) {
        free(dt_inscription_cancellationdate_local_str);
        dt_inscription_cancellationdate_local_str = NULL;
    }
    if (dt_inscription_initialexpirationdate_local_str) {
        free(dt_inscription_initialexpirationdate_local_str);
        dt_inscription_initialexpirationdate_local_str = NULL;
    }
    if (dt_inscription_expirationdate_local_str) {
        free(dt_inscription_expirationdate_local_str);
        dt_inscription_expirationdate_local_str = NULL;
    }
    if (dt_inscription_notarydate_local_str) {
        free(dt_inscription_notarydate_local_str);
        dt_inscription_notarydate_local_str = NULL;
    }
    if (dt_inscription_notaryentereddate_local_str) {
        free(dt_inscription_notaryentereddate_local_str);
        dt_inscription_notaryentereddate_local_str = NULL;
    }
    if (t_inscription_cadastre_local_str) {
        free(t_inscription_cadastre_local_str);
        t_inscription_cadastre_local_str = NULL;
    }
    if (b_inscription_reference_local_var) {
        free(b_inscription_reference_local_var);
        b_inscription_reference_local_var = NULL;
    }
    if (b_inscription_inspection_local_var) {
        free(b_inscription_inspection_local_var);
        b_inscription_inspection_local_var = NULL;
    }
    if (b_inscription_isactive_local_var) {
        free(b_inscription_isactive_local_var);
        b_inscription_isactive_local_var = NULL;
    }
    if (t_inscription_checklistnote_local_str) {
        free(t_inscription_checklistnote_local_str);
        t_inscription_checklistnote_local_str = NULL;
    }
    if (b_inscription_new_local_var) {
        free(b_inscription_new_local_var);
        b_inscription_new_local_var = NULL;
    }
    if (b_inscription_homeowner_local_var) {
        free(b_inscription_homeowner_local_var);
        b_inscription_homeowner_local_var = NULL;
    }
    if (b_inscription_archived_local_var) {
        free(b_inscription_archived_local_var);
        b_inscription_archived_local_var = NULL;
    }
    if (b_inscription_litigation_local_var) {
        free(b_inscription_litigation_local_var);
        b_inscription_litigation_local_var = NULL;
    }
    if (b_inscription_repossession_local_var) {
        free(b_inscription_repossession_local_var);
        b_inscription_repossession_local_var = NULL;
    }
    if (b_inscription_issolicitation_local_var) {
        free(b_inscription_issolicitation_local_var);
        b_inscription_issolicitation_local_var = NULL;
    }
    if (b_inscription_salebyowner_local_var) {
        free(b_inscription_salebyowner_local_var);
        b_inscription_salebyowner_local_var = NULL;
    }
    if (b_inscription_soldwithoutlegalwarranty_local_var) {
        free(b_inscription_soldwithoutlegalwarranty_local_var);
        b_inscription_soldwithoutlegalwarranty_local_var = NULL;
    }
    if (i_inscription_constructionyear_local_var) {
        free(i_inscription_constructionyear_local_var);
        i_inscription_constructionyear_local_var = NULL;
    }
    if (i_inscription_unit_local_var) {
        free(i_inscription_unit_local_var);
        i_inscription_unit_local_var = NULL;
    }
    if (obj_audit_local_nonprim) {
        common_audit_free(obj_audit_local_nonprim);
        obj_audit_local_nonprim = NULL;
    }
    return NULL;

}
