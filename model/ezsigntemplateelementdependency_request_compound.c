#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplateelementdependency_request_compound.h"



static ezsigntemplateelementdependency_request_compound_t *ezsigntemplateelementdependency_request_compound_create_internal(
    int pki_ezsigntemplateelementdependency_id,
    int fki_ezsigntemplateformfield_id_validation,
    int fki_ezsigntemplateformfieldgroup_id_validation,
    char *s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel,
    char *s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel,
    ezmax_api_definition__full_field_e_ezsigntemplateelementdependency_validation__e e_ezsigntemplateelementdependency_validation,
    int b_ezsigntemplateelementdependency_selected,
    ezmax_api_definition__full_field_e_ezsigntemplateelementdependency_operator__e e_ezsigntemplateelementdependency_operator,
    char *s_ezsigntemplateelementdependency_value
    ) {
    ezsigntemplateelementdependency_request_compound_t *ezsigntemplateelementdependency_request_compound_local_var = malloc(sizeof(ezsigntemplateelementdependency_request_compound_t));
    if (!ezsigntemplateelementdependency_request_compound_local_var) {
        return NULL;
    }
    ezsigntemplateelementdependency_request_compound_local_var->pki_ezsigntemplateelementdependency_id = pki_ezsigntemplateelementdependency_id;
    ezsigntemplateelementdependency_request_compound_local_var->fki_ezsigntemplateformfield_id_validation = fki_ezsigntemplateformfield_id_validation;
    ezsigntemplateelementdependency_request_compound_local_var->fki_ezsigntemplateformfieldgroup_id_validation = fki_ezsigntemplateformfieldgroup_id_validation;
    ezsigntemplateelementdependency_request_compound_local_var->s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel = s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel;
    ezsigntemplateelementdependency_request_compound_local_var->s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel = s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel;
    ezsigntemplateelementdependency_request_compound_local_var->e_ezsigntemplateelementdependency_validation = e_ezsigntemplateelementdependency_validation;
    ezsigntemplateelementdependency_request_compound_local_var->b_ezsigntemplateelementdependency_selected = b_ezsigntemplateelementdependency_selected;
    ezsigntemplateelementdependency_request_compound_local_var->e_ezsigntemplateelementdependency_operator = e_ezsigntemplateelementdependency_operator;
    ezsigntemplateelementdependency_request_compound_local_var->s_ezsigntemplateelementdependency_value = s_ezsigntemplateelementdependency_value;

    ezsigntemplateelementdependency_request_compound_local_var->_library_owned = 1;
    return ezsigntemplateelementdependency_request_compound_local_var;
}

__attribute__((deprecated)) ezsigntemplateelementdependency_request_compound_t *ezsigntemplateelementdependency_request_compound_create(
    int pki_ezsigntemplateelementdependency_id,
    int fki_ezsigntemplateformfield_id_validation,
    int fki_ezsigntemplateformfieldgroup_id_validation,
    char *s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel,
    char *s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel,
    ezmax_api_definition__full_field_e_ezsigntemplateelementdependency_validation__e e_ezsigntemplateelementdependency_validation,
    int b_ezsigntemplateelementdependency_selected,
    ezmax_api_definition__full_field_e_ezsigntemplateelementdependency_operator__e e_ezsigntemplateelementdependency_operator,
    char *s_ezsigntemplateelementdependency_value
    ) {
    return ezsigntemplateelementdependency_request_compound_create_internal (
        pki_ezsigntemplateelementdependency_id,
        fki_ezsigntemplateformfield_id_validation,
        fki_ezsigntemplateformfieldgroup_id_validation,
        s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel,
        s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel,
        e_ezsigntemplateelementdependency_validation,
        b_ezsigntemplateelementdependency_selected,
        e_ezsigntemplateelementdependency_operator,
        s_ezsigntemplateelementdependency_value
        );
}

void ezsigntemplateelementdependency_request_compound_free(ezsigntemplateelementdependency_request_compound_t *ezsigntemplateelementdependency_request_compound) {
    if(NULL == ezsigntemplateelementdependency_request_compound){
        return ;
    }
    if(ezsigntemplateelementdependency_request_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplateelementdependency_request_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplateelementdependency_request_compound->s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel) {
        free(ezsigntemplateelementdependency_request_compound->s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel);
        ezsigntemplateelementdependency_request_compound->s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel = NULL;
    }
    if (ezsigntemplateelementdependency_request_compound->s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel) {
        free(ezsigntemplateelementdependency_request_compound->s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel);
        ezsigntemplateelementdependency_request_compound->s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel = NULL;
    }
    if (ezsigntemplateelementdependency_request_compound->s_ezsigntemplateelementdependency_value) {
        free(ezsigntemplateelementdependency_request_compound->s_ezsigntemplateelementdependency_value);
        ezsigntemplateelementdependency_request_compound->s_ezsigntemplateelementdependency_value = NULL;
    }
    free(ezsigntemplateelementdependency_request_compound);
}

cJSON *ezsigntemplateelementdependency_request_compound_convertToJSON(ezsigntemplateelementdependency_request_compound_t *ezsigntemplateelementdependency_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplateelementdependency_request_compound->pki_ezsigntemplateelementdependency_id
    if(ezsigntemplateelementdependency_request_compound->pki_ezsigntemplateelementdependency_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplateelementdependencyID", ezsigntemplateelementdependency_request_compound->pki_ezsigntemplateelementdependency_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplateelementdependency_request_compound->fki_ezsigntemplateformfield_id_validation
    if(ezsigntemplateelementdependency_request_compound->fki_ezsigntemplateformfield_id_validation) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplateformfieldIDValidation", ezsigntemplateelementdependency_request_compound->fki_ezsigntemplateformfield_id_validation) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplateelementdependency_request_compound->fki_ezsigntemplateformfieldgroup_id_validation
    if(ezsigntemplateelementdependency_request_compound->fki_ezsigntemplateformfieldgroup_id_validation) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplateformfieldgroupIDValidation", ezsigntemplateelementdependency_request_compound->fki_ezsigntemplateformfieldgroup_id_validation) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplateelementdependency_request_compound->s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel
    if(ezsigntemplateelementdependency_request_compound->s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel) {
    if(cJSON_AddStringToObject(item, "sEzsigntemplateelementdependencyEzsigntemplateformfieldgrouplabel", ezsigntemplateelementdependency_request_compound->s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplateelementdependency_request_compound->s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel
    if(ezsigntemplateelementdependency_request_compound->s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel) {
    if(cJSON_AddStringToObject(item, "sEzsigntemplateelementdependencyEzsigntemplateformfieldlabel", ezsigntemplateelementdependency_request_compound->s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplateelementdependency_request_compound->e_ezsigntemplateelementdependency_validation
    if (ezmax_api_definition__full_field_e_ezsigntemplateelementdependency_validation__NULL == ezsigntemplateelementdependency_request_compound->e_ezsigntemplateelementdependency_validation) {
        goto fail;
    }
    cJSON *e_ezsigntemplateelementdependency_validation_local_JSON = field_e_ezsigntemplateelementdependency_validation_convertToJSON(ezsigntemplateelementdependency_request_compound->e_ezsigntemplateelementdependency_validation);
    if(e_ezsigntemplateelementdependency_validation_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplateelementdependencyValidation", e_ezsigntemplateelementdependency_validation_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsigntemplateelementdependency_request_compound->b_ezsigntemplateelementdependency_selected
    if(ezsigntemplateelementdependency_request_compound->b_ezsigntemplateelementdependency_selected) {
    if(cJSON_AddBoolToObject(item, "bEzsigntemplateelementdependencySelected", ezsigntemplateelementdependency_request_compound->b_ezsigntemplateelementdependency_selected) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsigntemplateelementdependency_request_compound->e_ezsigntemplateelementdependency_operator
    if(ezsigntemplateelementdependency_request_compound->e_ezsigntemplateelementdependency_operator != ezmax_api_definition__full_field_e_ezsigntemplateelementdependency_operator__NULL) {
    cJSON *e_ezsigntemplateelementdependency_operator_local_JSON = field_e_ezsigntemplateelementdependency_operator_convertToJSON(ezsigntemplateelementdependency_request_compound->e_ezsigntemplateelementdependency_operator);
    if(e_ezsigntemplateelementdependency_operator_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplateelementdependencyOperator", e_ezsigntemplateelementdependency_operator_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsigntemplateelementdependency_request_compound->s_ezsigntemplateelementdependency_value
    if(ezsigntemplateelementdependency_request_compound->s_ezsigntemplateelementdependency_value) {
    if(cJSON_AddStringToObject(item, "sEzsigntemplateelementdependencyValue", ezsigntemplateelementdependency_request_compound->s_ezsigntemplateelementdependency_value) == NULL) {
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

ezsigntemplateelementdependency_request_compound_t *ezsigntemplateelementdependency_request_compound_parseFromJSON(cJSON *ezsigntemplateelementdependency_request_compoundJSON){

    ezsigntemplateelementdependency_request_compound_t *ezsigntemplateelementdependency_request_compound_local_var = NULL;

    // define the local variable for ezsigntemplateelementdependency_request_compound->e_ezsigntemplateelementdependency_validation
    ezmax_api_definition__full_field_e_ezsigntemplateelementdependency_validation__e e_ezsigntemplateelementdependency_validation_local_nonprim = 0;

    // define the local variable for ezsigntemplateelementdependency_request_compound->e_ezsigntemplateelementdependency_operator
    ezmax_api_definition__full_field_e_ezsigntemplateelementdependency_operator__e e_ezsigntemplateelementdependency_operator_local_nonprim = 0;

    // ezsigntemplateelementdependency_request_compound->pki_ezsigntemplateelementdependency_id
    cJSON *pki_ezsigntemplateelementdependency_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateelementdependency_request_compoundJSON, "pkiEzsigntemplateelementdependencyID");
    if (cJSON_IsNull(pki_ezsigntemplateelementdependency_id)) {
        pki_ezsigntemplateelementdependency_id = NULL;
    }
    if (pki_ezsigntemplateelementdependency_id) { 
    if(!cJSON_IsNumber(pki_ezsigntemplateelementdependency_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplateelementdependency_request_compound->fki_ezsigntemplateformfield_id_validation
    cJSON *fki_ezsigntemplateformfield_id_validation = cJSON_GetObjectItemCaseSensitive(ezsigntemplateelementdependency_request_compoundJSON, "fkiEzsigntemplateformfieldIDValidation");
    if (cJSON_IsNull(fki_ezsigntemplateformfield_id_validation)) {
        fki_ezsigntemplateformfield_id_validation = NULL;
    }
    if (fki_ezsigntemplateformfield_id_validation) { 
    if(!cJSON_IsNumber(fki_ezsigntemplateformfield_id_validation))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplateelementdependency_request_compound->fki_ezsigntemplateformfieldgroup_id_validation
    cJSON *fki_ezsigntemplateformfieldgroup_id_validation = cJSON_GetObjectItemCaseSensitive(ezsigntemplateelementdependency_request_compoundJSON, "fkiEzsigntemplateformfieldgroupIDValidation");
    if (cJSON_IsNull(fki_ezsigntemplateformfieldgroup_id_validation)) {
        fki_ezsigntemplateformfieldgroup_id_validation = NULL;
    }
    if (fki_ezsigntemplateformfieldgroup_id_validation) { 
    if(!cJSON_IsNumber(fki_ezsigntemplateformfieldgroup_id_validation))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplateelementdependency_request_compound->s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel
    cJSON *s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel = cJSON_GetObjectItemCaseSensitive(ezsigntemplateelementdependency_request_compoundJSON, "sEzsigntemplateelementdependencyEzsigntemplateformfieldgrouplabel");
    if (cJSON_IsNull(s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel)) {
        s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel = NULL;
    }
    if (s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel) { 
    if(!cJSON_IsString(s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel) && !cJSON_IsNull(s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel))
    {
    goto end; //String
    }
    }

    // ezsigntemplateelementdependency_request_compound->s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel
    cJSON *s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel = cJSON_GetObjectItemCaseSensitive(ezsigntemplateelementdependency_request_compoundJSON, "sEzsigntemplateelementdependencyEzsigntemplateformfieldlabel");
    if (cJSON_IsNull(s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel)) {
        s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel = NULL;
    }
    if (s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel) { 
    if(!cJSON_IsString(s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel) && !cJSON_IsNull(s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel))
    {
    goto end; //String
    }
    }

    // ezsigntemplateelementdependency_request_compound->e_ezsigntemplateelementdependency_validation
    cJSON *e_ezsigntemplateelementdependency_validation = cJSON_GetObjectItemCaseSensitive(ezsigntemplateelementdependency_request_compoundJSON, "eEzsigntemplateelementdependencyValidation");
    if (cJSON_IsNull(e_ezsigntemplateelementdependency_validation)) {
        e_ezsigntemplateelementdependency_validation = NULL;
    }
    if (!e_ezsigntemplateelementdependency_validation) {
        goto end;
    }

    
    e_ezsigntemplateelementdependency_validation_local_nonprim = field_e_ezsigntemplateelementdependency_validation_parseFromJSON(e_ezsigntemplateelementdependency_validation); //custom

    // ezsigntemplateelementdependency_request_compound->b_ezsigntemplateelementdependency_selected
    cJSON *b_ezsigntemplateelementdependency_selected = cJSON_GetObjectItemCaseSensitive(ezsigntemplateelementdependency_request_compoundJSON, "bEzsigntemplateelementdependencySelected");
    if (cJSON_IsNull(b_ezsigntemplateelementdependency_selected)) {
        b_ezsigntemplateelementdependency_selected = NULL;
    }
    if (b_ezsigntemplateelementdependency_selected) { 
    if(!cJSON_IsBool(b_ezsigntemplateelementdependency_selected))
    {
    goto end; //Bool
    }
    }

    // ezsigntemplateelementdependency_request_compound->e_ezsigntemplateelementdependency_operator
    cJSON *e_ezsigntemplateelementdependency_operator = cJSON_GetObjectItemCaseSensitive(ezsigntemplateelementdependency_request_compoundJSON, "eEzsigntemplateelementdependencyOperator");
    if (cJSON_IsNull(e_ezsigntemplateelementdependency_operator)) {
        e_ezsigntemplateelementdependency_operator = NULL;
    }
    if (e_ezsigntemplateelementdependency_operator) { 
    e_ezsigntemplateelementdependency_operator_local_nonprim = field_e_ezsigntemplateelementdependency_operator_parseFromJSON(e_ezsigntemplateelementdependency_operator); //custom
    }

    // ezsigntemplateelementdependency_request_compound->s_ezsigntemplateelementdependency_value
    cJSON *s_ezsigntemplateelementdependency_value = cJSON_GetObjectItemCaseSensitive(ezsigntemplateelementdependency_request_compoundJSON, "sEzsigntemplateelementdependencyValue");
    if (cJSON_IsNull(s_ezsigntemplateelementdependency_value)) {
        s_ezsigntemplateelementdependency_value = NULL;
    }
    if (s_ezsigntemplateelementdependency_value) { 
    if(!cJSON_IsString(s_ezsigntemplateelementdependency_value) && !cJSON_IsNull(s_ezsigntemplateelementdependency_value))
    {
    goto end; //String
    }
    }


    ezsigntemplateelementdependency_request_compound_local_var = ezsigntemplateelementdependency_request_compound_create_internal (
        pki_ezsigntemplateelementdependency_id ? pki_ezsigntemplateelementdependency_id->valuedouble : 0,
        fki_ezsigntemplateformfield_id_validation ? fki_ezsigntemplateformfield_id_validation->valuedouble : 0,
        fki_ezsigntemplateformfieldgroup_id_validation ? fki_ezsigntemplateformfieldgroup_id_validation->valuedouble : 0,
        s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel && !cJSON_IsNull(s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel) ? strdup(s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel->valuestring) : NULL,
        s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel && !cJSON_IsNull(s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel) ? strdup(s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel->valuestring) : NULL,
        e_ezsigntemplateelementdependency_validation_local_nonprim,
        b_ezsigntemplateelementdependency_selected ? b_ezsigntemplateelementdependency_selected->valueint : 0,
        e_ezsigntemplateelementdependency_operator ? e_ezsigntemplateelementdependency_operator_local_nonprim : 0,
        s_ezsigntemplateelementdependency_value && !cJSON_IsNull(s_ezsigntemplateelementdependency_value) ? strdup(s_ezsigntemplateelementdependency_value->valuestring) : NULL
        );

    return ezsigntemplateelementdependency_request_compound_local_var;
end:
    if (e_ezsigntemplateelementdependency_validation_local_nonprim) {
        e_ezsigntemplateelementdependency_validation_local_nonprim = 0;
    }
    if (e_ezsigntemplateelementdependency_operator_local_nonprim) {
        e_ezsigntemplateelementdependency_operator_local_nonprim = 0;
    }
    return NULL;

}
