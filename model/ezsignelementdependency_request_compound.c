#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignelementdependency_request_compound.h"



static ezsignelementdependency_request_compound_t *ezsignelementdependency_request_compound_create_internal(
    int pki_ezsignelementdependency_id,
    int fki_ezsignformfield_id_validation,
    int fki_ezsignformfieldgroup_id_validation,
    char *s_ezsignelementdependency_ezsignformfieldgrouplabel,
    char *s_ezsignelementdependency_ezsignformfieldlabel,
    ezmax_api_definition__full_field_e_ezsignelementdependency_validation__e e_ezsignelementdependency_validation,
    int b_ezsignelementdependency_selected,
    ezmax_api_definition__full_field_e_ezsignelementdependency_operator__e e_ezsignelementdependency_operator,
    char *s_ezsignelementdependency_value
    ) {
    ezsignelementdependency_request_compound_t *ezsignelementdependency_request_compound_local_var = malloc(sizeof(ezsignelementdependency_request_compound_t));
    if (!ezsignelementdependency_request_compound_local_var) {
        return NULL;
    }
    ezsignelementdependency_request_compound_local_var->pki_ezsignelementdependency_id = pki_ezsignelementdependency_id;
    ezsignelementdependency_request_compound_local_var->fki_ezsignformfield_id_validation = fki_ezsignformfield_id_validation;
    ezsignelementdependency_request_compound_local_var->fki_ezsignformfieldgroup_id_validation = fki_ezsignformfieldgroup_id_validation;
    ezsignelementdependency_request_compound_local_var->s_ezsignelementdependency_ezsignformfieldgrouplabel = s_ezsignelementdependency_ezsignformfieldgrouplabel;
    ezsignelementdependency_request_compound_local_var->s_ezsignelementdependency_ezsignformfieldlabel = s_ezsignelementdependency_ezsignformfieldlabel;
    ezsignelementdependency_request_compound_local_var->e_ezsignelementdependency_validation = e_ezsignelementdependency_validation;
    ezsignelementdependency_request_compound_local_var->b_ezsignelementdependency_selected = b_ezsignelementdependency_selected;
    ezsignelementdependency_request_compound_local_var->e_ezsignelementdependency_operator = e_ezsignelementdependency_operator;
    ezsignelementdependency_request_compound_local_var->s_ezsignelementdependency_value = s_ezsignelementdependency_value;

    ezsignelementdependency_request_compound_local_var->_library_owned = 1;
    return ezsignelementdependency_request_compound_local_var;
}

__attribute__((deprecated)) ezsignelementdependency_request_compound_t *ezsignelementdependency_request_compound_create(
    int pki_ezsignelementdependency_id,
    int fki_ezsignformfield_id_validation,
    int fki_ezsignformfieldgroup_id_validation,
    char *s_ezsignelementdependency_ezsignformfieldgrouplabel,
    char *s_ezsignelementdependency_ezsignformfieldlabel,
    ezmax_api_definition__full_field_e_ezsignelementdependency_validation__e e_ezsignelementdependency_validation,
    int b_ezsignelementdependency_selected,
    ezmax_api_definition__full_field_e_ezsignelementdependency_operator__e e_ezsignelementdependency_operator,
    char *s_ezsignelementdependency_value
    ) {
    return ezsignelementdependency_request_compound_create_internal (
        pki_ezsignelementdependency_id,
        fki_ezsignformfield_id_validation,
        fki_ezsignformfieldgroup_id_validation,
        s_ezsignelementdependency_ezsignformfieldgrouplabel,
        s_ezsignelementdependency_ezsignformfieldlabel,
        e_ezsignelementdependency_validation,
        b_ezsignelementdependency_selected,
        e_ezsignelementdependency_operator,
        s_ezsignelementdependency_value
        );
}

void ezsignelementdependency_request_compound_free(ezsignelementdependency_request_compound_t *ezsignelementdependency_request_compound) {
    if(NULL == ezsignelementdependency_request_compound){
        return ;
    }
    if(ezsignelementdependency_request_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignelementdependency_request_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignelementdependency_request_compound->s_ezsignelementdependency_ezsignformfieldgrouplabel) {
        free(ezsignelementdependency_request_compound->s_ezsignelementdependency_ezsignformfieldgrouplabel);
        ezsignelementdependency_request_compound->s_ezsignelementdependency_ezsignformfieldgrouplabel = NULL;
    }
    if (ezsignelementdependency_request_compound->s_ezsignelementdependency_ezsignformfieldlabel) {
        free(ezsignelementdependency_request_compound->s_ezsignelementdependency_ezsignformfieldlabel);
        ezsignelementdependency_request_compound->s_ezsignelementdependency_ezsignformfieldlabel = NULL;
    }
    if (ezsignelementdependency_request_compound->s_ezsignelementdependency_value) {
        free(ezsignelementdependency_request_compound->s_ezsignelementdependency_value);
        ezsignelementdependency_request_compound->s_ezsignelementdependency_value = NULL;
    }
    free(ezsignelementdependency_request_compound);
}

cJSON *ezsignelementdependency_request_compound_convertToJSON(ezsignelementdependency_request_compound_t *ezsignelementdependency_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsignelementdependency_request_compound->pki_ezsignelementdependency_id
    if(ezsignelementdependency_request_compound->pki_ezsignelementdependency_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsignelementdependencyID", ezsignelementdependency_request_compound->pki_ezsignelementdependency_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignelementdependency_request_compound->fki_ezsignformfield_id_validation
    if(ezsignelementdependency_request_compound->fki_ezsignformfield_id_validation) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignformfieldIDValidation", ezsignelementdependency_request_compound->fki_ezsignformfield_id_validation) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignelementdependency_request_compound->fki_ezsignformfieldgroup_id_validation
    if(ezsignelementdependency_request_compound->fki_ezsignformfieldgroup_id_validation) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignformfieldgroupIDValidation", ezsignelementdependency_request_compound->fki_ezsignformfieldgroup_id_validation) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignelementdependency_request_compound->s_ezsignelementdependency_ezsignformfieldgrouplabel
    if(ezsignelementdependency_request_compound->s_ezsignelementdependency_ezsignformfieldgrouplabel) {
    if(cJSON_AddStringToObject(item, "sEzsignelementdependencyEzsignformfieldgrouplabel", ezsignelementdependency_request_compound->s_ezsignelementdependency_ezsignformfieldgrouplabel) == NULL) {
    goto fail; //String
    }
    }


    // ezsignelementdependency_request_compound->s_ezsignelementdependency_ezsignformfieldlabel
    if(ezsignelementdependency_request_compound->s_ezsignelementdependency_ezsignformfieldlabel) {
    if(cJSON_AddStringToObject(item, "sEzsignelementdependencyEzsignformfieldlabel", ezsignelementdependency_request_compound->s_ezsignelementdependency_ezsignformfieldlabel) == NULL) {
    goto fail; //String
    }
    }


    // ezsignelementdependency_request_compound->e_ezsignelementdependency_validation
    if (ezmax_api_definition__full_field_e_ezsignelementdependency_validation__NULL == ezsignelementdependency_request_compound->e_ezsignelementdependency_validation) {
        goto fail;
    }
    cJSON *e_ezsignelementdependency_validation_local_JSON = field_e_ezsignelementdependency_validation_convertToJSON(ezsignelementdependency_request_compound->e_ezsignelementdependency_validation);
    if(e_ezsignelementdependency_validation_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignelementdependencyValidation", e_ezsignelementdependency_validation_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignelementdependency_request_compound->b_ezsignelementdependency_selected
    if(ezsignelementdependency_request_compound->b_ezsignelementdependency_selected) {
    if(cJSON_AddBoolToObject(item, "bEzsignelementdependencySelected", ezsignelementdependency_request_compound->b_ezsignelementdependency_selected) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignelementdependency_request_compound->e_ezsignelementdependency_operator
    if(ezsignelementdependency_request_compound->e_ezsignelementdependency_operator != ezmax_api_definition__full_field_e_ezsignelementdependency_operator__NULL) {
    cJSON *e_ezsignelementdependency_operator_local_JSON = field_e_ezsignelementdependency_operator_convertToJSON(ezsignelementdependency_request_compound->e_ezsignelementdependency_operator);
    if(e_ezsignelementdependency_operator_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignelementdependencyOperator", e_ezsignelementdependency_operator_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignelementdependency_request_compound->s_ezsignelementdependency_value
    if(ezsignelementdependency_request_compound->s_ezsignelementdependency_value) {
    if(cJSON_AddStringToObject(item, "sEzsignelementdependencyValue", ezsignelementdependency_request_compound->s_ezsignelementdependency_value) == NULL) {
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

ezsignelementdependency_request_compound_t *ezsignelementdependency_request_compound_parseFromJSON(cJSON *ezsignelementdependency_request_compoundJSON){

    ezsignelementdependency_request_compound_t *ezsignelementdependency_request_compound_local_var = NULL;

    // define the local variable for ezsignelementdependency_request_compound->e_ezsignelementdependency_validation
    ezmax_api_definition__full_field_e_ezsignelementdependency_validation__e e_ezsignelementdependency_validation_local_nonprim = 0;

    // define the local variable for ezsignelementdependency_request_compound->e_ezsignelementdependency_operator
    ezmax_api_definition__full_field_e_ezsignelementdependency_operator__e e_ezsignelementdependency_operator_local_nonprim = 0;

    // ezsignelementdependency_request_compound->pki_ezsignelementdependency_id
    cJSON *pki_ezsignelementdependency_id = cJSON_GetObjectItemCaseSensitive(ezsignelementdependency_request_compoundJSON, "pkiEzsignelementdependencyID");
    if (cJSON_IsNull(pki_ezsignelementdependency_id)) {
        pki_ezsignelementdependency_id = NULL;
    }
    if (pki_ezsignelementdependency_id) { 
    if(!cJSON_IsNumber(pki_ezsignelementdependency_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignelementdependency_request_compound->fki_ezsignformfield_id_validation
    cJSON *fki_ezsignformfield_id_validation = cJSON_GetObjectItemCaseSensitive(ezsignelementdependency_request_compoundJSON, "fkiEzsignformfieldIDValidation");
    if (cJSON_IsNull(fki_ezsignformfield_id_validation)) {
        fki_ezsignformfield_id_validation = NULL;
    }
    if (fki_ezsignformfield_id_validation) { 
    if(!cJSON_IsNumber(fki_ezsignformfield_id_validation))
    {
    goto end; //Numeric
    }
    }

    // ezsignelementdependency_request_compound->fki_ezsignformfieldgroup_id_validation
    cJSON *fki_ezsignformfieldgroup_id_validation = cJSON_GetObjectItemCaseSensitive(ezsignelementdependency_request_compoundJSON, "fkiEzsignformfieldgroupIDValidation");
    if (cJSON_IsNull(fki_ezsignformfieldgroup_id_validation)) {
        fki_ezsignformfieldgroup_id_validation = NULL;
    }
    if (fki_ezsignformfieldgroup_id_validation) { 
    if(!cJSON_IsNumber(fki_ezsignformfieldgroup_id_validation))
    {
    goto end; //Numeric
    }
    }

    // ezsignelementdependency_request_compound->s_ezsignelementdependency_ezsignformfieldgrouplabel
    cJSON *s_ezsignelementdependency_ezsignformfieldgrouplabel = cJSON_GetObjectItemCaseSensitive(ezsignelementdependency_request_compoundJSON, "sEzsignelementdependencyEzsignformfieldgrouplabel");
    if (cJSON_IsNull(s_ezsignelementdependency_ezsignformfieldgrouplabel)) {
        s_ezsignelementdependency_ezsignformfieldgrouplabel = NULL;
    }
    if (s_ezsignelementdependency_ezsignformfieldgrouplabel) { 
    if(!cJSON_IsString(s_ezsignelementdependency_ezsignformfieldgrouplabel) && !cJSON_IsNull(s_ezsignelementdependency_ezsignformfieldgrouplabel))
    {
    goto end; //String
    }
    }

    // ezsignelementdependency_request_compound->s_ezsignelementdependency_ezsignformfieldlabel
    cJSON *s_ezsignelementdependency_ezsignformfieldlabel = cJSON_GetObjectItemCaseSensitive(ezsignelementdependency_request_compoundJSON, "sEzsignelementdependencyEzsignformfieldlabel");
    if (cJSON_IsNull(s_ezsignelementdependency_ezsignformfieldlabel)) {
        s_ezsignelementdependency_ezsignformfieldlabel = NULL;
    }
    if (s_ezsignelementdependency_ezsignformfieldlabel) { 
    if(!cJSON_IsString(s_ezsignelementdependency_ezsignformfieldlabel) && !cJSON_IsNull(s_ezsignelementdependency_ezsignformfieldlabel))
    {
    goto end; //String
    }
    }

    // ezsignelementdependency_request_compound->e_ezsignelementdependency_validation
    cJSON *e_ezsignelementdependency_validation = cJSON_GetObjectItemCaseSensitive(ezsignelementdependency_request_compoundJSON, "eEzsignelementdependencyValidation");
    if (cJSON_IsNull(e_ezsignelementdependency_validation)) {
        e_ezsignelementdependency_validation = NULL;
    }
    if (!e_ezsignelementdependency_validation) {
        goto end;
    }

    
    e_ezsignelementdependency_validation_local_nonprim = field_e_ezsignelementdependency_validation_parseFromJSON(e_ezsignelementdependency_validation); //custom

    // ezsignelementdependency_request_compound->b_ezsignelementdependency_selected
    cJSON *b_ezsignelementdependency_selected = cJSON_GetObjectItemCaseSensitive(ezsignelementdependency_request_compoundJSON, "bEzsignelementdependencySelected");
    if (cJSON_IsNull(b_ezsignelementdependency_selected)) {
        b_ezsignelementdependency_selected = NULL;
    }
    if (b_ezsignelementdependency_selected) { 
    if(!cJSON_IsBool(b_ezsignelementdependency_selected))
    {
    goto end; //Bool
    }
    }

    // ezsignelementdependency_request_compound->e_ezsignelementdependency_operator
    cJSON *e_ezsignelementdependency_operator = cJSON_GetObjectItemCaseSensitive(ezsignelementdependency_request_compoundJSON, "eEzsignelementdependencyOperator");
    if (cJSON_IsNull(e_ezsignelementdependency_operator)) {
        e_ezsignelementdependency_operator = NULL;
    }
    if (e_ezsignelementdependency_operator) { 
    e_ezsignelementdependency_operator_local_nonprim = field_e_ezsignelementdependency_operator_parseFromJSON(e_ezsignelementdependency_operator); //custom
    }

    // ezsignelementdependency_request_compound->s_ezsignelementdependency_value
    cJSON *s_ezsignelementdependency_value = cJSON_GetObjectItemCaseSensitive(ezsignelementdependency_request_compoundJSON, "sEzsignelementdependencyValue");
    if (cJSON_IsNull(s_ezsignelementdependency_value)) {
        s_ezsignelementdependency_value = NULL;
    }
    if (s_ezsignelementdependency_value) { 
    if(!cJSON_IsString(s_ezsignelementdependency_value) && !cJSON_IsNull(s_ezsignelementdependency_value))
    {
    goto end; //String
    }
    }


    ezsignelementdependency_request_compound_local_var = ezsignelementdependency_request_compound_create_internal (
        pki_ezsignelementdependency_id ? pki_ezsignelementdependency_id->valuedouble : 0,
        fki_ezsignformfield_id_validation ? fki_ezsignformfield_id_validation->valuedouble : 0,
        fki_ezsignformfieldgroup_id_validation ? fki_ezsignformfieldgroup_id_validation->valuedouble : 0,
        s_ezsignelementdependency_ezsignformfieldgrouplabel && !cJSON_IsNull(s_ezsignelementdependency_ezsignformfieldgrouplabel) ? strdup(s_ezsignelementdependency_ezsignformfieldgrouplabel->valuestring) : NULL,
        s_ezsignelementdependency_ezsignformfieldlabel && !cJSON_IsNull(s_ezsignelementdependency_ezsignformfieldlabel) ? strdup(s_ezsignelementdependency_ezsignformfieldlabel->valuestring) : NULL,
        e_ezsignelementdependency_validation_local_nonprim,
        b_ezsignelementdependency_selected ? b_ezsignelementdependency_selected->valueint : 0,
        e_ezsignelementdependency_operator ? e_ezsignelementdependency_operator_local_nonprim : 0,
        s_ezsignelementdependency_value && !cJSON_IsNull(s_ezsignelementdependency_value) ? strdup(s_ezsignelementdependency_value->valuestring) : NULL
        );

    return ezsignelementdependency_request_compound_local_var;
end:
    if (e_ezsignelementdependency_validation_local_nonprim) {
        e_ezsignelementdependency_validation_local_nonprim = 0;
    }
    if (e_ezsignelementdependency_operator_local_nonprim) {
        e_ezsignelementdependency_operator_local_nonprim = 0;
    }
    return NULL;

}
