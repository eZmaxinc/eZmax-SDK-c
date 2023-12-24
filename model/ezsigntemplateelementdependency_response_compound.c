#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplateelementdependency_response_compound.h"


char* e_ezsigntemplateelementdependency_validationezsigntemplateelementdependency_response_compound_ToString(ezmax_api_definition__full_ezsigntemplateelementdependency_response_compound__e e_ezsigntemplateelementdependency_validation) {
    char* e_ezsigntemplateelementdependency_validationArray[] =  { "NULL", "Value", "Selected", "Filled" };
    return e_ezsigntemplateelementdependency_validationArray[e_ezsigntemplateelementdependency_validation];
}

ezmax_api_definition__full_ezsigntemplateelementdependency_response_compound__e e_ezsigntemplateelementdependency_validationezsigntemplateelementdependency_response_compound_FromString(char* e_ezsigntemplateelementdependency_validation){
    int stringToReturn = 0;
    char *e_ezsigntemplateelementdependency_validationArray[] =  { "NULL", "Value", "Selected", "Filled" };
    size_t sizeofArray = sizeof(e_ezsigntemplateelementdependency_validationArray) / sizeof(e_ezsigntemplateelementdependency_validationArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsigntemplateelementdependency_validation, e_ezsigntemplateelementdependency_validationArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* e_ezsigntemplateelementdependency_operatorezsigntemplateelementdependency_response_compound_ToString(ezmax_api_definition__full_ezsigntemplateelementdependency_response_compound__e e_ezsigntemplateelementdependency_operator) {
    char* e_ezsigntemplateelementdependency_operatorArray[] =  { "NULL", "eq", "neq", "gt", "gte", "lt", "lte", "in", "nin", "rg", "like", "between" };
    return e_ezsigntemplateelementdependency_operatorArray[e_ezsigntemplateelementdependency_operator];
}

ezmax_api_definition__full_ezsigntemplateelementdependency_response_compound__e e_ezsigntemplateelementdependency_operatorezsigntemplateelementdependency_response_compound_FromString(char* e_ezsigntemplateelementdependency_operator){
    int stringToReturn = 0;
    char *e_ezsigntemplateelementdependency_operatorArray[] =  { "NULL", "eq", "neq", "gt", "gte", "lt", "lte", "in", "nin", "rg", "like", "between" };
    size_t sizeofArray = sizeof(e_ezsigntemplateelementdependency_operatorArray) / sizeof(e_ezsigntemplateelementdependency_operatorArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsigntemplateelementdependency_operator, e_ezsigntemplateelementdependency_operatorArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ezsigntemplateelementdependency_response_compound_t *ezsigntemplateelementdependency_response_compound_create(
    int pki_ezsigntemplateelementdependency_id,
    int fki_ezsigntemplateformfield_id,
    int fki_ezsigntemplatesignature_id,
    int fki_ezsigntemplateformfield_id_validation,
    int fki_ezsigntemplateformfieldgroup_id_validation,
    field_e_ezsigntemplateelementdependency_validation_t *e_ezsigntemplateelementdependency_validation,
    int b_ezsigntemplateelementdependency_selected,
    field_e_ezsigntemplateelementdependency_operator_t *e_ezsigntemplateelementdependency_operator,
    char *s_ezsigntemplateelementdependency_value
    ) {
    ezsigntemplateelementdependency_response_compound_t *ezsigntemplateelementdependency_response_compound_local_var = malloc(sizeof(ezsigntemplateelementdependency_response_compound_t));
    if (!ezsigntemplateelementdependency_response_compound_local_var) {
        return NULL;
    }
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


void ezsigntemplateelementdependency_response_compound_free(ezsigntemplateelementdependency_response_compound_t *ezsigntemplateelementdependency_response_compound) {
    if(NULL == ezsigntemplateelementdependency_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplateelementdependency_response_compound->e_ezsigntemplateelementdependency_validation) {
        field_e_ezsigntemplateelementdependency_validation_free(ezsigntemplateelementdependency_response_compound->e_ezsigntemplateelementdependency_validation);
        ezsigntemplateelementdependency_response_compound->e_ezsigntemplateelementdependency_validation = NULL;
    }
    if (ezsigntemplateelementdependency_response_compound->e_ezsigntemplateelementdependency_operator) {
        field_e_ezsigntemplateelementdependency_operator_free(ezsigntemplateelementdependency_response_compound->e_ezsigntemplateelementdependency_operator);
        ezsigntemplateelementdependency_response_compound->e_ezsigntemplateelementdependency_operator = NULL;
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
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplateelementdependencyID", ezsigntemplateelementdependency_response_compound->pki_ezsigntemplateelementdependency_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateelementdependency_response_compound->fki_ezsigntemplateformfield_id
    if(ezsigntemplateelementdependency_response_compound->fki_ezsigntemplateformfield_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplateformfieldID", ezsigntemplateelementdependency_response_compound->fki_ezsigntemplateformfield_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplateelementdependency_response_compound->fki_ezsigntemplatesignature_id
    if(ezsigntemplateelementdependency_response_compound->fki_ezsigntemplatesignature_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatesignatureID", ezsigntemplateelementdependency_response_compound->fki_ezsigntemplatesignature_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplateelementdependency_response_compound->fki_ezsigntemplateformfield_id_validation
    if(ezsigntemplateelementdependency_response_compound->fki_ezsigntemplateformfield_id_validation) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplateformfieldIDValidation", ezsigntemplateelementdependency_response_compound->fki_ezsigntemplateformfield_id_validation) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplateelementdependency_response_compound->fki_ezsigntemplateformfieldgroup_id_validation
    if(ezsigntemplateelementdependency_response_compound->fki_ezsigntemplateformfieldgroup_id_validation) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplateformfieldgroupIDValidation", ezsigntemplateelementdependency_response_compound->fki_ezsigntemplateformfieldgroup_id_validation) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplateelementdependency_response_compound->e_ezsigntemplateelementdependency_validation
    if (ezmax_api_definition__full_ezsigntemplateelementdependency_response_compound__NULL == ezsigntemplateelementdependency_response_compound->e_ezsigntemplateelementdependency_validation) {
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
    if(cJSON_AddBoolToObject(item, "bEzsigntemplateelementdependencySelected", ezsigntemplateelementdependency_response_compound->b_ezsigntemplateelementdependency_selected) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsigntemplateelementdependency_response_compound->e_ezsigntemplateelementdependency_operator
    if(ezsigntemplateelementdependency_response_compound->e_ezsigntemplateelementdependency_operator != ezmax_api_definition__full_ezsigntemplateelementdependency_response_compound__NULL) {
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

    // define the local variable for ezsigntemplateelementdependency_response_compound->e_ezsigntemplateelementdependency_validation
    field_e_ezsigntemplateelementdependency_validation_t *e_ezsigntemplateelementdependency_validation_local_nonprim = NULL;

    // define the local variable for ezsigntemplateelementdependency_response_compound->e_ezsigntemplateelementdependency_operator
    field_e_ezsigntemplateelementdependency_operator_t *e_ezsigntemplateelementdependency_operator_local_nonprim = NULL;

    // ezsigntemplateelementdependency_response_compound->pki_ezsigntemplateelementdependency_id
    cJSON *pki_ezsigntemplateelementdependency_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateelementdependency_response_compoundJSON, "pkiEzsigntemplateelementdependencyID");
    if (!pki_ezsigntemplateelementdependency_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplateelementdependency_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplateelementdependency_response_compound->fki_ezsigntemplateformfield_id
    cJSON *fki_ezsigntemplateformfield_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateelementdependency_response_compoundJSON, "fkiEzsigntemplateformfieldID");
    if (fki_ezsigntemplateformfield_id) { 
    if(!cJSON_IsNumber(fki_ezsigntemplateformfield_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplateelementdependency_response_compound->fki_ezsigntemplatesignature_id
    cJSON *fki_ezsigntemplatesignature_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateelementdependency_response_compoundJSON, "fkiEzsigntemplatesignatureID");
    if (fki_ezsigntemplatesignature_id) { 
    if(!cJSON_IsNumber(fki_ezsigntemplatesignature_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplateelementdependency_response_compound->fki_ezsigntemplateformfield_id_validation
    cJSON *fki_ezsigntemplateformfield_id_validation = cJSON_GetObjectItemCaseSensitive(ezsigntemplateelementdependency_response_compoundJSON, "fkiEzsigntemplateformfieldIDValidation");
    if (fki_ezsigntemplateformfield_id_validation) { 
    if(!cJSON_IsNumber(fki_ezsigntemplateformfield_id_validation))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplateelementdependency_response_compound->fki_ezsigntemplateformfieldgroup_id_validation
    cJSON *fki_ezsigntemplateformfieldgroup_id_validation = cJSON_GetObjectItemCaseSensitive(ezsigntemplateelementdependency_response_compoundJSON, "fkiEzsigntemplateformfieldgroupIDValidation");
    if (fki_ezsigntemplateformfieldgroup_id_validation) { 
    if(!cJSON_IsNumber(fki_ezsigntemplateformfieldgroup_id_validation))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplateelementdependency_response_compound->e_ezsigntemplateelementdependency_validation
    cJSON *e_ezsigntemplateelementdependency_validation = cJSON_GetObjectItemCaseSensitive(ezsigntemplateelementdependency_response_compoundJSON, "eEzsigntemplateelementdependencyValidation");
    if (!e_ezsigntemplateelementdependency_validation) {
        goto end;
    }

    
    e_ezsigntemplateelementdependency_validation_local_nonprim = field_e_ezsigntemplateelementdependency_validation_parseFromJSON(e_ezsigntemplateelementdependency_validation); //custom

    // ezsigntemplateelementdependency_response_compound->b_ezsigntemplateelementdependency_selected
    cJSON *b_ezsigntemplateelementdependency_selected = cJSON_GetObjectItemCaseSensitive(ezsigntemplateelementdependency_response_compoundJSON, "bEzsigntemplateelementdependencySelected");
    if (b_ezsigntemplateelementdependency_selected) { 
    if(!cJSON_IsBool(b_ezsigntemplateelementdependency_selected))
    {
    goto end; //Bool
    }
    }

    // ezsigntemplateelementdependency_response_compound->e_ezsigntemplateelementdependency_operator
    cJSON *e_ezsigntemplateelementdependency_operator = cJSON_GetObjectItemCaseSensitive(ezsigntemplateelementdependency_response_compoundJSON, "eEzsigntemplateelementdependencyOperator");
    if (e_ezsigntemplateelementdependency_operator) { 
    e_ezsigntemplateelementdependency_operator_local_nonprim = field_e_ezsigntemplateelementdependency_operator_parseFromJSON(e_ezsigntemplateelementdependency_operator); //custom
    }

    // ezsigntemplateelementdependency_response_compound->s_ezsigntemplateelementdependency_value
    cJSON *s_ezsigntemplateelementdependency_value = cJSON_GetObjectItemCaseSensitive(ezsigntemplateelementdependency_response_compoundJSON, "sEzsigntemplateelementdependencyValue");
    if (s_ezsigntemplateelementdependency_value) { 
    if(!cJSON_IsString(s_ezsigntemplateelementdependency_value) && !cJSON_IsNull(s_ezsigntemplateelementdependency_value))
    {
    goto end; //String
    }
    }


    ezsigntemplateelementdependency_response_compound_local_var = ezsigntemplateelementdependency_response_compound_create (
        pki_ezsigntemplateelementdependency_id->valuedouble,
        fki_ezsigntemplateformfield_id ? fki_ezsigntemplateformfield_id->valuedouble : 0,
        fki_ezsigntemplatesignature_id ? fki_ezsigntemplatesignature_id->valuedouble : 0,
        fki_ezsigntemplateformfield_id_validation ? fki_ezsigntemplateformfield_id_validation->valuedouble : 0,
        fki_ezsigntemplateformfieldgroup_id_validation ? fki_ezsigntemplateformfieldgroup_id_validation->valuedouble : 0,
        e_ezsigntemplateelementdependency_validation_local_nonprim,
        b_ezsigntemplateelementdependency_selected ? b_ezsigntemplateelementdependency_selected->valueint : 0,
        e_ezsigntemplateelementdependency_operator ? e_ezsigntemplateelementdependency_operator_local_nonprim : NULL,
        s_ezsigntemplateelementdependency_value && !cJSON_IsNull(s_ezsigntemplateelementdependency_value) ? strdup(s_ezsigntemplateelementdependency_value->valuestring) : NULL
        );

    return ezsigntemplateelementdependency_response_compound_local_var;
end:
    if (e_ezsigntemplateelementdependency_validation_local_nonprim) {
        field_e_ezsigntemplateelementdependency_validation_free(e_ezsigntemplateelementdependency_validation_local_nonprim);
        e_ezsigntemplateelementdependency_validation_local_nonprim = NULL;
    }
    if (e_ezsigntemplateelementdependency_operator_local_nonprim) {
        field_e_ezsigntemplateelementdependency_operator_free(e_ezsigntemplateelementdependency_operator_local_nonprim);
        e_ezsigntemplateelementdependency_operator_local_nonprim = NULL;
    }
    return NULL;

}
