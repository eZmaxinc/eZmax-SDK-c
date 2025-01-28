#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignelementdependency_response.h"



static ezsignelementdependency_response_t *ezsignelementdependency_response_create_internal(
    int pki_ezsignelementdependency_id,
    int fki_ezsignformfield_id,
    int fki_ezsignsignature_id,
    int fki_ezsignformfield_id_validation,
    int fki_ezsignformfieldgroup_id_validation,
    ezmax_api_definition__full_field_e_ezsignelementdependency_validation__e e_ezsignelementdependency_validation,
    int b_ezsignelementdependency_selected,
    ezmax_api_definition__full_field_e_ezsignelementdependency_operator__e e_ezsignelementdependency_operator,
    char *s_ezsignelementdependency_value
    ) {
    ezsignelementdependency_response_t *ezsignelementdependency_response_local_var = malloc(sizeof(ezsignelementdependency_response_t));
    if (!ezsignelementdependency_response_local_var) {
        return NULL;
    }
    ezsignelementdependency_response_local_var->pki_ezsignelementdependency_id = pki_ezsignelementdependency_id;
    ezsignelementdependency_response_local_var->fki_ezsignformfield_id = fki_ezsignformfield_id;
    ezsignelementdependency_response_local_var->fki_ezsignsignature_id = fki_ezsignsignature_id;
    ezsignelementdependency_response_local_var->fki_ezsignformfield_id_validation = fki_ezsignformfield_id_validation;
    ezsignelementdependency_response_local_var->fki_ezsignformfieldgroup_id_validation = fki_ezsignformfieldgroup_id_validation;
    ezsignelementdependency_response_local_var->e_ezsignelementdependency_validation = e_ezsignelementdependency_validation;
    ezsignelementdependency_response_local_var->b_ezsignelementdependency_selected = b_ezsignelementdependency_selected;
    ezsignelementdependency_response_local_var->e_ezsignelementdependency_operator = e_ezsignelementdependency_operator;
    ezsignelementdependency_response_local_var->s_ezsignelementdependency_value = s_ezsignelementdependency_value;

    ezsignelementdependency_response_local_var->_library_owned = 1;
    return ezsignelementdependency_response_local_var;
}

__attribute__((deprecated)) ezsignelementdependency_response_t *ezsignelementdependency_response_create(
    int pki_ezsignelementdependency_id,
    int fki_ezsignformfield_id,
    int fki_ezsignsignature_id,
    int fki_ezsignformfield_id_validation,
    int fki_ezsignformfieldgroup_id_validation,
    ezmax_api_definition__full_field_e_ezsignelementdependency_validation__e e_ezsignelementdependency_validation,
    int b_ezsignelementdependency_selected,
    ezmax_api_definition__full_field_e_ezsignelementdependency_operator__e e_ezsignelementdependency_operator,
    char *s_ezsignelementdependency_value
    ) {
    return ezsignelementdependency_response_create_internal (
        pki_ezsignelementdependency_id,
        fki_ezsignformfield_id,
        fki_ezsignsignature_id,
        fki_ezsignformfield_id_validation,
        fki_ezsignformfieldgroup_id_validation,
        e_ezsignelementdependency_validation,
        b_ezsignelementdependency_selected,
        e_ezsignelementdependency_operator,
        s_ezsignelementdependency_value
        );
}

void ezsignelementdependency_response_free(ezsignelementdependency_response_t *ezsignelementdependency_response) {
    if(NULL == ezsignelementdependency_response){
        return ;
    }
    if(ezsignelementdependency_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignelementdependency_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignelementdependency_response->s_ezsignelementdependency_value) {
        free(ezsignelementdependency_response->s_ezsignelementdependency_value);
        ezsignelementdependency_response->s_ezsignelementdependency_value = NULL;
    }
    free(ezsignelementdependency_response);
}

cJSON *ezsignelementdependency_response_convertToJSON(ezsignelementdependency_response_t *ezsignelementdependency_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsignelementdependency_response->pki_ezsignelementdependency_id
    if (!ezsignelementdependency_response->pki_ezsignelementdependency_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignelementdependencyID", ezsignelementdependency_response->pki_ezsignelementdependency_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignelementdependency_response->fki_ezsignformfield_id
    if(ezsignelementdependency_response->fki_ezsignformfield_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignformfieldID", ezsignelementdependency_response->fki_ezsignformfield_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignelementdependency_response->fki_ezsignsignature_id
    if(ezsignelementdependency_response->fki_ezsignsignature_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignsignatureID", ezsignelementdependency_response->fki_ezsignsignature_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignelementdependency_response->fki_ezsignformfield_id_validation
    if(ezsignelementdependency_response->fki_ezsignformfield_id_validation) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignformfieldIDValidation", ezsignelementdependency_response->fki_ezsignformfield_id_validation) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignelementdependency_response->fki_ezsignformfieldgroup_id_validation
    if(ezsignelementdependency_response->fki_ezsignformfieldgroup_id_validation) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignformfieldgroupIDValidation", ezsignelementdependency_response->fki_ezsignformfieldgroup_id_validation) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignelementdependency_response->e_ezsignelementdependency_validation
    if (ezmax_api_definition__full_field_e_ezsignelementdependency_validation__NULL == ezsignelementdependency_response->e_ezsignelementdependency_validation) {
        goto fail;
    }
    cJSON *e_ezsignelementdependency_validation_local_JSON = field_e_ezsignelementdependency_validation_convertToJSON(ezsignelementdependency_response->e_ezsignelementdependency_validation);
    if(e_ezsignelementdependency_validation_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignelementdependencyValidation", e_ezsignelementdependency_validation_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignelementdependency_response->b_ezsignelementdependency_selected
    if(ezsignelementdependency_response->b_ezsignelementdependency_selected) {
    if(cJSON_AddBoolToObject(item, "bEzsignelementdependencySelected", ezsignelementdependency_response->b_ezsignelementdependency_selected) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignelementdependency_response->e_ezsignelementdependency_operator
    if(ezsignelementdependency_response->e_ezsignelementdependency_operator != ezmax_api_definition__full_field_e_ezsignelementdependency_operator__NULL) {
    cJSON *e_ezsignelementdependency_operator_local_JSON = field_e_ezsignelementdependency_operator_convertToJSON(ezsignelementdependency_response->e_ezsignelementdependency_operator);
    if(e_ezsignelementdependency_operator_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignelementdependencyOperator", e_ezsignelementdependency_operator_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignelementdependency_response->s_ezsignelementdependency_value
    if(ezsignelementdependency_response->s_ezsignelementdependency_value) {
    if(cJSON_AddStringToObject(item, "sEzsignelementdependencyValue", ezsignelementdependency_response->s_ezsignelementdependency_value) == NULL) {
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

ezsignelementdependency_response_t *ezsignelementdependency_response_parseFromJSON(cJSON *ezsignelementdependency_responseJSON){

    ezsignelementdependency_response_t *ezsignelementdependency_response_local_var = NULL;

    // define the local variable for ezsignelementdependency_response->e_ezsignelementdependency_validation
    ezmax_api_definition__full_field_e_ezsignelementdependency_validation__e e_ezsignelementdependency_validation_local_nonprim = 0;

    // define the local variable for ezsignelementdependency_response->e_ezsignelementdependency_operator
    ezmax_api_definition__full_field_e_ezsignelementdependency_operator__e e_ezsignelementdependency_operator_local_nonprim = 0;

    // ezsignelementdependency_response->pki_ezsignelementdependency_id
    cJSON *pki_ezsignelementdependency_id = cJSON_GetObjectItemCaseSensitive(ezsignelementdependency_responseJSON, "pkiEzsignelementdependencyID");
    if (cJSON_IsNull(pki_ezsignelementdependency_id)) {
        pki_ezsignelementdependency_id = NULL;
    }
    if (!pki_ezsignelementdependency_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignelementdependency_id))
    {
    goto end; //Numeric
    }

    // ezsignelementdependency_response->fki_ezsignformfield_id
    cJSON *fki_ezsignformfield_id = cJSON_GetObjectItemCaseSensitive(ezsignelementdependency_responseJSON, "fkiEzsignformfieldID");
    if (cJSON_IsNull(fki_ezsignformfield_id)) {
        fki_ezsignformfield_id = NULL;
    }
    if (fki_ezsignformfield_id) { 
    if(!cJSON_IsNumber(fki_ezsignformfield_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignelementdependency_response->fki_ezsignsignature_id
    cJSON *fki_ezsignsignature_id = cJSON_GetObjectItemCaseSensitive(ezsignelementdependency_responseJSON, "fkiEzsignsignatureID");
    if (cJSON_IsNull(fki_ezsignsignature_id)) {
        fki_ezsignsignature_id = NULL;
    }
    if (fki_ezsignsignature_id) { 
    if(!cJSON_IsNumber(fki_ezsignsignature_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignelementdependency_response->fki_ezsignformfield_id_validation
    cJSON *fki_ezsignformfield_id_validation = cJSON_GetObjectItemCaseSensitive(ezsignelementdependency_responseJSON, "fkiEzsignformfieldIDValidation");
    if (cJSON_IsNull(fki_ezsignformfield_id_validation)) {
        fki_ezsignformfield_id_validation = NULL;
    }
    if (fki_ezsignformfield_id_validation) { 
    if(!cJSON_IsNumber(fki_ezsignformfield_id_validation))
    {
    goto end; //Numeric
    }
    }

    // ezsignelementdependency_response->fki_ezsignformfieldgroup_id_validation
    cJSON *fki_ezsignformfieldgroup_id_validation = cJSON_GetObjectItemCaseSensitive(ezsignelementdependency_responseJSON, "fkiEzsignformfieldgroupIDValidation");
    if (cJSON_IsNull(fki_ezsignformfieldgroup_id_validation)) {
        fki_ezsignformfieldgroup_id_validation = NULL;
    }
    if (fki_ezsignformfieldgroup_id_validation) { 
    if(!cJSON_IsNumber(fki_ezsignformfieldgroup_id_validation))
    {
    goto end; //Numeric
    }
    }

    // ezsignelementdependency_response->e_ezsignelementdependency_validation
    cJSON *e_ezsignelementdependency_validation = cJSON_GetObjectItemCaseSensitive(ezsignelementdependency_responseJSON, "eEzsignelementdependencyValidation");
    if (cJSON_IsNull(e_ezsignelementdependency_validation)) {
        e_ezsignelementdependency_validation = NULL;
    }
    if (!e_ezsignelementdependency_validation) {
        goto end;
    }

    
    e_ezsignelementdependency_validation_local_nonprim = field_e_ezsignelementdependency_validation_parseFromJSON(e_ezsignelementdependency_validation); //custom

    // ezsignelementdependency_response->b_ezsignelementdependency_selected
    cJSON *b_ezsignelementdependency_selected = cJSON_GetObjectItemCaseSensitive(ezsignelementdependency_responseJSON, "bEzsignelementdependencySelected");
    if (cJSON_IsNull(b_ezsignelementdependency_selected)) {
        b_ezsignelementdependency_selected = NULL;
    }
    if (b_ezsignelementdependency_selected) { 
    if(!cJSON_IsBool(b_ezsignelementdependency_selected))
    {
    goto end; //Bool
    }
    }

    // ezsignelementdependency_response->e_ezsignelementdependency_operator
    cJSON *e_ezsignelementdependency_operator = cJSON_GetObjectItemCaseSensitive(ezsignelementdependency_responseJSON, "eEzsignelementdependencyOperator");
    if (cJSON_IsNull(e_ezsignelementdependency_operator)) {
        e_ezsignelementdependency_operator = NULL;
    }
    if (e_ezsignelementdependency_operator) { 
    e_ezsignelementdependency_operator_local_nonprim = field_e_ezsignelementdependency_operator_parseFromJSON(e_ezsignelementdependency_operator); //custom
    }

    // ezsignelementdependency_response->s_ezsignelementdependency_value
    cJSON *s_ezsignelementdependency_value = cJSON_GetObjectItemCaseSensitive(ezsignelementdependency_responseJSON, "sEzsignelementdependencyValue");
    if (cJSON_IsNull(s_ezsignelementdependency_value)) {
        s_ezsignelementdependency_value = NULL;
    }
    if (s_ezsignelementdependency_value) { 
    if(!cJSON_IsString(s_ezsignelementdependency_value) && !cJSON_IsNull(s_ezsignelementdependency_value))
    {
    goto end; //String
    }
    }


    ezsignelementdependency_response_local_var = ezsignelementdependency_response_create_internal (
        pki_ezsignelementdependency_id->valuedouble,
        fki_ezsignformfield_id ? fki_ezsignformfield_id->valuedouble : 0,
        fki_ezsignsignature_id ? fki_ezsignsignature_id->valuedouble : 0,
        fki_ezsignformfield_id_validation ? fki_ezsignformfield_id_validation->valuedouble : 0,
        fki_ezsignformfieldgroup_id_validation ? fki_ezsignformfieldgroup_id_validation->valuedouble : 0,
        e_ezsignelementdependency_validation_local_nonprim,
        b_ezsignelementdependency_selected ? b_ezsignelementdependency_selected->valueint : 0,
        e_ezsignelementdependency_operator ? e_ezsignelementdependency_operator_local_nonprim : 0,
        s_ezsignelementdependency_value && !cJSON_IsNull(s_ezsignelementdependency_value) ? strdup(s_ezsignelementdependency_value->valuestring) : NULL
        );

    return ezsignelementdependency_response_local_var;
end:
    if (e_ezsignelementdependency_validation_local_nonprim) {
        e_ezsignelementdependency_validation_local_nonprim = 0;
    }
    if (e_ezsignelementdependency_operator_local_nonprim) {
        e_ezsignelementdependency_operator_local_nonprim = 0;
    }
    return NULL;

}
