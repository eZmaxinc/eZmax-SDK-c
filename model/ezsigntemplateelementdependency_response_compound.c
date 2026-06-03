#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplateelementdependency_response_compound.h"



static ezsigntemplateelementdependency_response_compound_t *ezsigntemplateelementdependency_response_compound_create_internal(
    int *pki_ezsigntemplateelementdependency_id,
    int *fki_ezsigntemplateformfield_id,
    int *fki_ezsigntemplatesignature_id,
    int *fki_ezsigntemplateformfield_id_validation,
    int *fki_ezsigntemplateformfieldgroup_id_validation,
    ezmax_api_definition__full_field_e_ezsigntemplateelementdependency_validation__e e_ezsigntemplateelementdependency_validation,
    int *b_ezsigntemplateelementdependency_selected,
    ezmax_api_definition__full_field_e_ezsigntemplateelementdependency_operator__e e_ezsigntemplateelementdependency_operator,
    char *s_ezsigntemplateelementdependency_value
    ) {
    ezsigntemplateelementdependency_response_compound_t *ezsigntemplateelementdependency_response_compound_local_var = malloc(sizeof(ezsigntemplateelementdependency_response_compound_t));
    if (!ezsigntemplateelementdependency_response_compound_local_var) {
        return NULL;
    }
    memset(ezsigntemplateelementdependency_response_compound_local_var, 0, sizeof(ezsigntemplateelementdependency_response_compound_t));
    ezsigntemplateelementdependency_response_compound_local_var->_library_owned = 1;
    ezsigntemplateelementdependency_response_compound_local_var->pki_ezsigntemplateelementdependency_id = pki_ezsigntemplateelementdependency_id;
    ezsigntemplateelementdependency_response_compound_local_var->fki_ezsigntemplateformfield_id = fki_ezsigntemplateformfield_id;
    ezsigntemplateelementdependency_response_compound_local_var->fki_ezsigntemplatesignature_id = fki_ezsigntemplatesignature_id;
    ezsigntemplateelementdependency_response_compound_local_var->fki_ezsigntemplateformfield_id_validation = fki_ezsigntemplateformfield_id_validation;
    ezsigntemplateelementdependency_response_compound_local_var->fki_ezsigntemplateformfieldgroup_id_validation = fki_ezsigntemplateformfieldgroup_id_validation;
    ezsigntemplateelementdependency_response_compound_local_var->e_ezsigntemplateelementdependency_validation = e_ezsigntemplateelementdependency_validation;
    ezsigntemplateelementdependency_response_compound_local_var->b_ezsigntemplateelementdependency_selected = b_ezsigntemplateelementdependency_selected;
    ezsigntemplateelementdependency_response_compound_local_var->e_ezsigntemplateelementdependency_operator = e_ezsigntemplateelementdependency_operator;
    ezsigntemplateelementdependency_response_compound_local_var->s_ezsigntemplateelementdependency_value = s_ezsigntemplateelementdependency_value;
    return ezsigntemplateelementdependency_response_compound_local_var;
}

__attribute__((deprecated)) ezsigntemplateelementdependency_response_compound_t *ezsigntemplateelementdependency_response_compound_create(
    int *pki_ezsigntemplateelementdependency_id,
    int *fki_ezsigntemplateformfield_id,
    int *fki_ezsigntemplatesignature_id,
    int *fki_ezsigntemplateformfield_id_validation,
    int *fki_ezsigntemplateformfieldgroup_id_validation,
    ezmax_api_definition__full_field_e_ezsigntemplateelementdependency_validation__e e_ezsigntemplateelementdependency_validation,
    int *b_ezsigntemplateelementdependency_selected,
    ezmax_api_definition__full_field_e_ezsigntemplateelementdependency_operator__e e_ezsigntemplateelementdependency_operator,
    char *s_ezsigntemplateelementdependency_value
    ) {
    int *pki_ezsigntemplateelementdependency_id_copy = NULL;
    if (pki_ezsigntemplateelementdependency_id) {
        pki_ezsigntemplateelementdependency_id_copy = malloc(sizeof(int));
        if (pki_ezsigntemplateelementdependency_id_copy) *pki_ezsigntemplateelementdependency_id_copy = *pki_ezsigntemplateelementdependency_id;
    }
    int *fki_ezsigntemplateformfield_id_copy = NULL;
    if (fki_ezsigntemplateformfield_id) {
        fki_ezsigntemplateformfield_id_copy = malloc(sizeof(int));
        if (fki_ezsigntemplateformfield_id_copy) *fki_ezsigntemplateformfield_id_copy = *fki_ezsigntemplateformfield_id;
    }
    int *fki_ezsigntemplatesignature_id_copy = NULL;
    if (fki_ezsigntemplatesignature_id) {
        fki_ezsigntemplatesignature_id_copy = malloc(sizeof(int));
        if (fki_ezsigntemplatesignature_id_copy) *fki_ezsigntemplatesignature_id_copy = *fki_ezsigntemplatesignature_id;
    }
    int *fki_ezsigntemplateformfield_id_validation_copy = NULL;
    if (fki_ezsigntemplateformfield_id_validation) {
        fki_ezsigntemplateformfield_id_validation_copy = malloc(sizeof(int));
        if (fki_ezsigntemplateformfield_id_validation_copy) *fki_ezsigntemplateformfield_id_validation_copy = *fki_ezsigntemplateformfield_id_validation;
    }
    int *fki_ezsigntemplateformfieldgroup_id_validation_copy = NULL;
    if (fki_ezsigntemplateformfieldgroup_id_validation) {
        fki_ezsigntemplateformfieldgroup_id_validation_copy = malloc(sizeof(int));
        if (fki_ezsigntemplateformfieldgroup_id_validation_copy) *fki_ezsigntemplateformfieldgroup_id_validation_copy = *fki_ezsigntemplateformfieldgroup_id_validation;
    }
    int *b_ezsigntemplateelementdependency_selected_copy = NULL;
    if (b_ezsigntemplateelementdependency_selected) {
        b_ezsigntemplateelementdependency_selected_copy = malloc(sizeof(int));
        if (b_ezsigntemplateelementdependency_selected_copy) *b_ezsigntemplateelementdependency_selected_copy = *b_ezsigntemplateelementdependency_selected;
    }
    ezsigntemplateelementdependency_response_compound_t *result = ezsigntemplateelementdependency_response_compound_create_internal (
        pki_ezsigntemplateelementdependency_id_copy,
        fki_ezsigntemplateformfield_id_copy,
        fki_ezsigntemplatesignature_id_copy,
        fki_ezsigntemplateformfield_id_validation_copy,
        fki_ezsigntemplateformfieldgroup_id_validation_copy,
        e_ezsigntemplateelementdependency_validation,
        b_ezsigntemplateelementdependency_selected_copy,
        e_ezsigntemplateelementdependency_operator,
        s_ezsigntemplateelementdependency_value
        );
    if (!result) {
        free(pki_ezsigntemplateelementdependency_id_copy);
        free(fki_ezsigntemplateformfield_id_copy);
        free(fki_ezsigntemplatesignature_id_copy);
        free(fki_ezsigntemplateformfield_id_validation_copy);
        free(fki_ezsigntemplateformfieldgroup_id_validation_copy);
        free(b_ezsigntemplateelementdependency_selected_copy);
    }
    return result;
}

void ezsigntemplateelementdependency_response_compound_free(ezsigntemplateelementdependency_response_compound_t *ezsigntemplateelementdependency_response_compound) {
    if(NULL == ezsigntemplateelementdependency_response_compound){
        return ;
    }
    if(ezsigntemplateelementdependency_response_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplateelementdependency_response_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplateelementdependency_response_compound->pki_ezsigntemplateelementdependency_id) {
        free(ezsigntemplateelementdependency_response_compound->pki_ezsigntemplateelementdependency_id);
        ezsigntemplateelementdependency_response_compound->pki_ezsigntemplateelementdependency_id = NULL;
    }
    if (ezsigntemplateelementdependency_response_compound->fki_ezsigntemplateformfield_id) {
        free(ezsigntemplateelementdependency_response_compound->fki_ezsigntemplateformfield_id);
        ezsigntemplateelementdependency_response_compound->fki_ezsigntemplateformfield_id = NULL;
    }
    if (ezsigntemplateelementdependency_response_compound->fki_ezsigntemplatesignature_id) {
        free(ezsigntemplateelementdependency_response_compound->fki_ezsigntemplatesignature_id);
        ezsigntemplateelementdependency_response_compound->fki_ezsigntemplatesignature_id = NULL;
    }
    if (ezsigntemplateelementdependency_response_compound->fki_ezsigntemplateformfield_id_validation) {
        free(ezsigntemplateelementdependency_response_compound->fki_ezsigntemplateformfield_id_validation);
        ezsigntemplateelementdependency_response_compound->fki_ezsigntemplateformfield_id_validation = NULL;
    }
    if (ezsigntemplateelementdependency_response_compound->fki_ezsigntemplateformfieldgroup_id_validation) {
        free(ezsigntemplateelementdependency_response_compound->fki_ezsigntemplateformfieldgroup_id_validation);
        ezsigntemplateelementdependency_response_compound->fki_ezsigntemplateformfieldgroup_id_validation = NULL;
    }
    if (ezsigntemplateelementdependency_response_compound->b_ezsigntemplateelementdependency_selected) {
        free(ezsigntemplateelementdependency_response_compound->b_ezsigntemplateelementdependency_selected);
        ezsigntemplateelementdependency_response_compound->b_ezsigntemplateelementdependency_selected = NULL;
    }
    if (ezsigntemplateelementdependency_response_compound->s_ezsigntemplateelementdependency_value) {
        free(ezsigntemplateelementdependency_response_compound->s_ezsigntemplateelementdependency_value);
        ezsigntemplateelementdependency_response_compound->s_ezsigntemplateelementdependency_value = NULL;
    }
    free(ezsigntemplateelementdependency_response_compound);
}

cJSON *ezsigntemplateelementdependency_response_compound_convertToJSON(ezsigntemplateelementdependency_response_compound_t *ezsigntemplateelementdependency_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplateelementdependency_response_compound->pki_ezsigntemplateelementdependency_id
    if (!ezsigntemplateelementdependency_response_compound->pki_ezsigntemplateelementdependency_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplateelementdependencyID", *ezsigntemplateelementdependency_response_compound->pki_ezsigntemplateelementdependency_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateelementdependency_response_compound->fki_ezsigntemplateformfield_id
    if(ezsigntemplateelementdependency_response_compound->fki_ezsigntemplateformfield_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplateformfieldID", *ezsigntemplateelementdependency_response_compound->fki_ezsigntemplateformfield_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplateelementdependency_response_compound->fki_ezsigntemplatesignature_id
    if(ezsigntemplateelementdependency_response_compound->fki_ezsigntemplatesignature_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatesignatureID", *ezsigntemplateelementdependency_response_compound->fki_ezsigntemplatesignature_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplateelementdependency_response_compound->fki_ezsigntemplateformfield_id_validation
    if(ezsigntemplateelementdependency_response_compound->fki_ezsigntemplateformfield_id_validation) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplateformfieldIDValidation", *ezsigntemplateelementdependency_response_compound->fki_ezsigntemplateformfield_id_validation) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplateelementdependency_response_compound->fki_ezsigntemplateformfieldgroup_id_validation
    if(ezsigntemplateelementdependency_response_compound->fki_ezsigntemplateformfieldgroup_id_validation) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplateformfieldgroupIDValidation", *ezsigntemplateelementdependency_response_compound->fki_ezsigntemplateformfieldgroup_id_validation) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplateelementdependency_response_compound->e_ezsigntemplateelementdependency_validation
    if (ezmax_api_definition__full_field_e_ezsigntemplateelementdependency_validation__NULL == ezsigntemplateelementdependency_response_compound->e_ezsigntemplateelementdependency_validation) {
        goto fail;
    }
    cJSON *e_ezsigntemplateelementdependency_validation_local_JSON = field_e_ezsigntemplateelementdependency_validation_convertToJSON(ezsigntemplateelementdependency_response_compound->e_ezsigntemplateelementdependency_validation);
    if(e_ezsigntemplateelementdependency_validation_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplateelementdependencyValidation", e_ezsigntemplateelementdependency_validation_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsigntemplateelementdependency_response_compound->b_ezsigntemplateelementdependency_selected
    if(ezsigntemplateelementdependency_response_compound->b_ezsigntemplateelementdependency_selected) {
    if(cJSON_AddBoolToObject(item, "bEzsigntemplateelementdependencySelected", *ezsigntemplateelementdependency_response_compound->b_ezsigntemplateelementdependency_selected) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsigntemplateelementdependency_response_compound->e_ezsigntemplateelementdependency_operator
    if(ezsigntemplateelementdependency_response_compound->e_ezsigntemplateelementdependency_operator != ezmax_api_definition__full_field_e_ezsigntemplateelementdependency_operator__NULL) {
    cJSON *e_ezsigntemplateelementdependency_operator_local_JSON = field_e_ezsigntemplateelementdependency_operator_convertToJSON(ezsigntemplateelementdependency_response_compound->e_ezsigntemplateelementdependency_operator);
    if(e_ezsigntemplateelementdependency_operator_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplateelementdependencyOperator", e_ezsigntemplateelementdependency_operator_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsigntemplateelementdependency_response_compound->s_ezsigntemplateelementdependency_value
    if(ezsigntemplateelementdependency_response_compound->s_ezsigntemplateelementdependency_value) {
    if(cJSON_AddStringToObject(item, "sEzsigntemplateelementdependencyValue", ezsigntemplateelementdependency_response_compound->s_ezsigntemplateelementdependency_value) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplateelementdependency_response_compound_t *ezsigntemplateelementdependency_response_compound_parseFromJSON(cJSON *ezsigntemplateelementdependency_response_compoundJSON){

    ezsigntemplateelementdependency_response_compound_t *ezsigntemplateelementdependency_response_compound_local_var = NULL;

    // define the local variable for ezsigntemplateelementdependency_response_compound->pki_ezsigntemplateelementdependency_id
    int *pki_ezsigntemplateelementdependency_id_local_var = NULL;

    // define the local variable for ezsigntemplateelementdependency_response_compound->fki_ezsigntemplateformfield_id
    int *fki_ezsigntemplateformfield_id_local_var = NULL;

    // define the local variable for ezsigntemplateelementdependency_response_compound->fki_ezsigntemplatesignature_id
    int *fki_ezsigntemplatesignature_id_local_var = NULL;

    // define the local variable for ezsigntemplateelementdependency_response_compound->fki_ezsigntemplateformfield_id_validation
    int *fki_ezsigntemplateformfield_id_validation_local_var = NULL;

    // define the local variable for ezsigntemplateelementdependency_response_compound->fki_ezsigntemplateformfieldgroup_id_validation
    int *fki_ezsigntemplateformfieldgroup_id_validation_local_var = NULL;

    // define the local variable for ezsigntemplateelementdependency_response_compound->e_ezsigntemplateelementdependency_validation
    ezmax_api_definition__full_field_e_ezsigntemplateelementdependency_validation__e e_ezsigntemplateelementdependency_validation_local_nonprim = 0;

    // define the local variable for ezsigntemplateelementdependency_response_compound->b_ezsigntemplateelementdependency_selected
    int *b_ezsigntemplateelementdependency_selected_local_var = NULL;

    // define the local variable for ezsigntemplateelementdependency_response_compound->e_ezsigntemplateelementdependency_operator
    ezmax_api_definition__full_field_e_ezsigntemplateelementdependency_operator__e e_ezsigntemplateelementdependency_operator_local_nonprim = 0;

    char *s_ezsigntemplateelementdependency_value_local_str = NULL;

    // ezsigntemplateelementdependency_response_compound->pki_ezsigntemplateelementdependency_id
    cJSON *pki_ezsigntemplateelementdependency_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateelementdependency_response_compoundJSON, "pkiEzsigntemplateelementdependencyID");
    if (cJSON_IsNull(pki_ezsigntemplateelementdependency_id)) {
        pki_ezsigntemplateelementdependency_id = NULL;
    }
    if (!pki_ezsigntemplateelementdependency_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplateelementdependency_id))
    {
    goto end; //Numeric
    }
    pki_ezsigntemplateelementdependency_id_local_var = malloc(sizeof(int));
    if(!pki_ezsigntemplateelementdependency_id_local_var)
    {
        goto end;
    }
    *pki_ezsigntemplateelementdependency_id_local_var = pki_ezsigntemplateelementdependency_id->valuedouble;

    // ezsigntemplateelementdependency_response_compound->fki_ezsigntemplateformfield_id
    cJSON *fki_ezsigntemplateformfield_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateelementdependency_response_compoundJSON, "fkiEzsigntemplateformfieldID");
    if (cJSON_IsNull(fki_ezsigntemplateformfield_id)) {
        fki_ezsigntemplateformfield_id = NULL;
    }
    if (fki_ezsigntemplateformfield_id) { 
    if(!cJSON_IsNumber(fki_ezsigntemplateformfield_id))
    {
    goto end; //Numeric
    }
    fki_ezsigntemplateformfield_id_local_var = malloc(sizeof(int));
    if(!fki_ezsigntemplateformfield_id_local_var)
    {
        goto end;
    }
    *fki_ezsigntemplateformfield_id_local_var = fki_ezsigntemplateformfield_id->valuedouble;
    }

    // ezsigntemplateelementdependency_response_compound->fki_ezsigntemplatesignature_id
    cJSON *fki_ezsigntemplatesignature_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateelementdependency_response_compoundJSON, "fkiEzsigntemplatesignatureID");
    if (cJSON_IsNull(fki_ezsigntemplatesignature_id)) {
        fki_ezsigntemplatesignature_id = NULL;
    }
    if (fki_ezsigntemplatesignature_id) { 
    if(!cJSON_IsNumber(fki_ezsigntemplatesignature_id))
    {
    goto end; //Numeric
    }
    fki_ezsigntemplatesignature_id_local_var = malloc(sizeof(int));
    if(!fki_ezsigntemplatesignature_id_local_var)
    {
        goto end;
    }
    *fki_ezsigntemplatesignature_id_local_var = fki_ezsigntemplatesignature_id->valuedouble;
    }

    // ezsigntemplateelementdependency_response_compound->fki_ezsigntemplateformfield_id_validation
    cJSON *fki_ezsigntemplateformfield_id_validation = cJSON_GetObjectItemCaseSensitive(ezsigntemplateelementdependency_response_compoundJSON, "fkiEzsigntemplateformfieldIDValidation");
    if (cJSON_IsNull(fki_ezsigntemplateformfield_id_validation)) {
        fki_ezsigntemplateformfield_id_validation = NULL;
    }
    if (fki_ezsigntemplateformfield_id_validation) { 
    if(!cJSON_IsNumber(fki_ezsigntemplateformfield_id_validation))
    {
    goto end; //Numeric
    }
    fki_ezsigntemplateformfield_id_validation_local_var = malloc(sizeof(int));
    if(!fki_ezsigntemplateformfield_id_validation_local_var)
    {
        goto end;
    }
    *fki_ezsigntemplateformfield_id_validation_local_var = fki_ezsigntemplateformfield_id_validation->valuedouble;
    }

    // ezsigntemplateelementdependency_response_compound->fki_ezsigntemplateformfieldgroup_id_validation
    cJSON *fki_ezsigntemplateformfieldgroup_id_validation = cJSON_GetObjectItemCaseSensitive(ezsigntemplateelementdependency_response_compoundJSON, "fkiEzsigntemplateformfieldgroupIDValidation");
    if (cJSON_IsNull(fki_ezsigntemplateformfieldgroup_id_validation)) {
        fki_ezsigntemplateformfieldgroup_id_validation = NULL;
    }
    if (fki_ezsigntemplateformfieldgroup_id_validation) { 
    if(!cJSON_IsNumber(fki_ezsigntemplateformfieldgroup_id_validation))
    {
    goto end; //Numeric
    }
    fki_ezsigntemplateformfieldgroup_id_validation_local_var = malloc(sizeof(int));
    if(!fki_ezsigntemplateformfieldgroup_id_validation_local_var)
    {
        goto end;
    }
    *fki_ezsigntemplateformfieldgroup_id_validation_local_var = fki_ezsigntemplateformfieldgroup_id_validation->valuedouble;
    }

    // ezsigntemplateelementdependency_response_compound->e_ezsigntemplateelementdependency_validation
    cJSON *e_ezsigntemplateelementdependency_validation = cJSON_GetObjectItemCaseSensitive(ezsigntemplateelementdependency_response_compoundJSON, "eEzsigntemplateelementdependencyValidation");
    if (cJSON_IsNull(e_ezsigntemplateelementdependency_validation)) {
        e_ezsigntemplateelementdependency_validation = NULL;
    }
    if (!e_ezsigntemplateelementdependency_validation) {
        goto end;
    }

    
    e_ezsigntemplateelementdependency_validation_local_nonprim = field_e_ezsigntemplateelementdependency_validation_parseFromJSON(e_ezsigntemplateelementdependency_validation); //custom

    // ezsigntemplateelementdependency_response_compound->b_ezsigntemplateelementdependency_selected
    cJSON *b_ezsigntemplateelementdependency_selected = cJSON_GetObjectItemCaseSensitive(ezsigntemplateelementdependency_response_compoundJSON, "bEzsigntemplateelementdependencySelected");
    if (cJSON_IsNull(b_ezsigntemplateelementdependency_selected)) {
        b_ezsigntemplateelementdependency_selected = NULL;
    }
    if (b_ezsigntemplateelementdependency_selected) { 
    if(!cJSON_IsBool(b_ezsigntemplateelementdependency_selected))
    {
    goto end; //Bool
    }
    b_ezsigntemplateelementdependency_selected_local_var = malloc(sizeof(int));
    if(!b_ezsigntemplateelementdependency_selected_local_var)
    {
        goto end;
    }
    *b_ezsigntemplateelementdependency_selected_local_var = b_ezsigntemplateelementdependency_selected->valueint;
    }

    // ezsigntemplateelementdependency_response_compound->e_ezsigntemplateelementdependency_operator
    cJSON *e_ezsigntemplateelementdependency_operator = cJSON_GetObjectItemCaseSensitive(ezsigntemplateelementdependency_response_compoundJSON, "eEzsigntemplateelementdependencyOperator");
    if (cJSON_IsNull(e_ezsigntemplateelementdependency_operator)) {
        e_ezsigntemplateelementdependency_operator = NULL;
    }
    if (e_ezsigntemplateelementdependency_operator) { 
    e_ezsigntemplateelementdependency_operator_local_nonprim = field_e_ezsigntemplateelementdependency_operator_parseFromJSON(e_ezsigntemplateelementdependency_operator); //custom
    }

    // ezsigntemplateelementdependency_response_compound->s_ezsigntemplateelementdependency_value
    cJSON *s_ezsigntemplateelementdependency_value = cJSON_GetObjectItemCaseSensitive(ezsigntemplateelementdependency_response_compoundJSON, "sEzsigntemplateelementdependencyValue");
    if (cJSON_IsNull(s_ezsigntemplateelementdependency_value)) {
        s_ezsigntemplateelementdependency_value = NULL;
    }
    if (s_ezsigntemplateelementdependency_value) { 
    if(!cJSON_IsString(s_ezsigntemplateelementdependency_value) && !cJSON_IsNull(s_ezsigntemplateelementdependency_value))
    {
    goto end; //String
    }
    }


    if (s_ezsigntemplateelementdependency_value && !cJSON_IsNull(s_ezsigntemplateelementdependency_value)) s_ezsigntemplateelementdependency_value_local_str = strdup(s_ezsigntemplateelementdependency_value->valuestring);

    ezsigntemplateelementdependency_response_compound_local_var = ezsigntemplateelementdependency_response_compound_create_internal (
        pki_ezsigntemplateelementdependency_id_local_var,
        fki_ezsigntemplateformfield_id_local_var,
        fki_ezsigntemplatesignature_id_local_var,
        fki_ezsigntemplateformfield_id_validation_local_var,
        fki_ezsigntemplateformfieldgroup_id_validation_local_var,
        e_ezsigntemplateelementdependency_validation_local_nonprim,
        b_ezsigntemplateelementdependency_selected_local_var,
        e_ezsigntemplateelementdependency_operator ? e_ezsigntemplateelementdependency_operator_local_nonprim : 0,
        s_ezsigntemplateelementdependency_value_local_str
        );

    if (!ezsigntemplateelementdependency_response_compound_local_var) {
        goto end;
    }

    return ezsigntemplateelementdependency_response_compound_local_var;
end:
    if (pki_ezsigntemplateelementdependency_id_local_var) {
        free(pki_ezsigntemplateelementdependency_id_local_var);
        pki_ezsigntemplateelementdependency_id_local_var = NULL;
    }
    if (fki_ezsigntemplateformfield_id_local_var) {
        free(fki_ezsigntemplateformfield_id_local_var);
        fki_ezsigntemplateformfield_id_local_var = NULL;
    }
    if (fki_ezsigntemplatesignature_id_local_var) {
        free(fki_ezsigntemplatesignature_id_local_var);
        fki_ezsigntemplatesignature_id_local_var = NULL;
    }
    if (fki_ezsigntemplateformfield_id_validation_local_var) {
        free(fki_ezsigntemplateformfield_id_validation_local_var);
        fki_ezsigntemplateformfield_id_validation_local_var = NULL;
    }
    if (fki_ezsigntemplateformfieldgroup_id_validation_local_var) {
        free(fki_ezsigntemplateformfieldgroup_id_validation_local_var);
        fki_ezsigntemplateformfieldgroup_id_validation_local_var = NULL;
    }
    if (e_ezsigntemplateelementdependency_validation_local_nonprim) {
        e_ezsigntemplateelementdependency_validation_local_nonprim = 0;
    }
    if (b_ezsigntemplateelementdependency_selected_local_var) {
        free(b_ezsigntemplateelementdependency_selected_local_var);
        b_ezsigntemplateelementdependency_selected_local_var = NULL;
    }
    if (e_ezsigntemplateelementdependency_operator_local_nonprim) {
        e_ezsigntemplateelementdependency_operator_local_nonprim = 0;
    }
    if (s_ezsigntemplateelementdependency_value_local_str) {
        free(s_ezsigntemplateelementdependency_value_local_str);
        s_ezsigntemplateelementdependency_value_local_str = NULL;
    }
    return NULL;

}
