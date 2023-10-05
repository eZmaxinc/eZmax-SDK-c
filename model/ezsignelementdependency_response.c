#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignelementdependency_response.h"


char* e_ezsignelementdependency_validationezsignelementdependency_response_ToString(ezmax_api_definition__full_ezsignelementdependency_response__e e_ezsignelementdependency_validation) {
    char* e_ezsignelementdependency_validationArray[] =  { "NULL", "Value", "Selected", "Filled" };
	return e_ezsignelementdependency_validationArray[e_ezsignelementdependency_validation];
}

ezmax_api_definition__full_ezsignelementdependency_response__e e_ezsignelementdependency_validationezsignelementdependency_response_FromString(char* e_ezsignelementdependency_validation){
    int stringToReturn = 0;
    char *e_ezsignelementdependency_validationArray[] =  { "NULL", "Value", "Selected", "Filled" };
    size_t sizeofArray = sizeof(e_ezsignelementdependency_validationArray) / sizeof(e_ezsignelementdependency_validationArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignelementdependency_validation, e_ezsignelementdependency_validationArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* e_ezsignelementdependency_operatorezsignelementdependency_response_ToString(ezmax_api_definition__full_ezsignelementdependency_response__e e_ezsignelementdependency_operator) {
    char* e_ezsignelementdependency_operatorArray[] =  { "NULL", "eq", "neq", "gt", "gte", "lt", "lte", "in", "nin", "rg", "like", "between" };
	return e_ezsignelementdependency_operatorArray[e_ezsignelementdependency_operator];
}

ezmax_api_definition__full_ezsignelementdependency_response__e e_ezsignelementdependency_operatorezsignelementdependency_response_FromString(char* e_ezsignelementdependency_operator){
    int stringToReturn = 0;
    char *e_ezsignelementdependency_operatorArray[] =  { "NULL", "eq", "neq", "gt", "gte", "lt", "lte", "in", "nin", "rg", "like", "between" };
    size_t sizeofArray = sizeof(e_ezsignelementdependency_operatorArray) / sizeof(e_ezsignelementdependency_operatorArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignelementdependency_operator, e_ezsignelementdependency_operatorArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ezsignelementdependency_response_t *ezsignelementdependency_response_create(
    int pki_ezsignelementdependency_id,
    int fki_ezsignformfield_id,
    int fki_ezsignsignature_id,
    int fki_ezsignformfield_id_validation,
    int fki_ezsignformfieldgroup_id_validation,
    field_e_ezsignelementdependency_validation_t *e_ezsignelementdependency_validation,
    int b_ezsignelementdependency_selected,
    field_e_ezsignelementdependency_operator_t *e_ezsignelementdependency_operator,
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

    return ezsignelementdependency_response_local_var;
}


void ezsignelementdependency_response_free(ezsignelementdependency_response_t *ezsignelementdependency_response) {
    if(NULL == ezsignelementdependency_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignelementdependency_response->e_ezsignelementdependency_validation) {
        field_e_ezsignelementdependency_validation_free(ezsignelementdependency_response->e_ezsignelementdependency_validation);
        ezsignelementdependency_response->e_ezsignelementdependency_validation = NULL;
    }
    if (ezsignelementdependency_response->e_ezsignelementdependency_operator) {
        field_e_ezsignelementdependency_operator_free(ezsignelementdependency_response->e_ezsignelementdependency_operator);
        ezsignelementdependency_response->e_ezsignelementdependency_operator = NULL;
    }
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
    if (ezmax_api_definition__full_ezsignelementdependency_response__NULL == ezsignelementdependency_response->e_ezsignelementdependency_validation) {
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
    if(ezsignelementdependency_response->e_ezsignelementdependency_operator != ezmax_api_definition__full_ezsignelementdependency_response__NULL) {
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
    field_e_ezsignelementdependency_validation_t *e_ezsignelementdependency_validation_local_nonprim = NULL;

    // define the local variable for ezsignelementdependency_response->e_ezsignelementdependency_operator
    field_e_ezsignelementdependency_operator_t *e_ezsignelementdependency_operator_local_nonprim = NULL;

    // ezsignelementdependency_response->pki_ezsignelementdependency_id
    cJSON *pki_ezsignelementdependency_id = cJSON_GetObjectItemCaseSensitive(ezsignelementdependency_responseJSON, "pkiEzsignelementdependencyID");
    if (!pki_ezsignelementdependency_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignelementdependency_id))
    {
    goto end; //Numeric
    }

    // ezsignelementdependency_response->fki_ezsignformfield_id
    cJSON *fki_ezsignformfield_id = cJSON_GetObjectItemCaseSensitive(ezsignelementdependency_responseJSON, "fkiEzsignformfieldID");
    if (fki_ezsignformfield_id) { 
    if(!cJSON_IsNumber(fki_ezsignformfield_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignelementdependency_response->fki_ezsignsignature_id
    cJSON *fki_ezsignsignature_id = cJSON_GetObjectItemCaseSensitive(ezsignelementdependency_responseJSON, "fkiEzsignsignatureID");
    if (fki_ezsignsignature_id) { 
    if(!cJSON_IsNumber(fki_ezsignsignature_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignelementdependency_response->fki_ezsignformfield_id_validation
    cJSON *fki_ezsignformfield_id_validation = cJSON_GetObjectItemCaseSensitive(ezsignelementdependency_responseJSON, "fkiEzsignformfieldIDValidation");
    if (fki_ezsignformfield_id_validation) { 
    if(!cJSON_IsNumber(fki_ezsignformfield_id_validation))
    {
    goto end; //Numeric
    }
    }

    // ezsignelementdependency_response->fki_ezsignformfieldgroup_id_validation
    cJSON *fki_ezsignformfieldgroup_id_validation = cJSON_GetObjectItemCaseSensitive(ezsignelementdependency_responseJSON, "fkiEzsignformfieldgroupIDValidation");
    if (fki_ezsignformfieldgroup_id_validation) { 
    if(!cJSON_IsNumber(fki_ezsignformfieldgroup_id_validation))
    {
    goto end; //Numeric
    }
    }

    // ezsignelementdependency_response->e_ezsignelementdependency_validation
    cJSON *e_ezsignelementdependency_validation = cJSON_GetObjectItemCaseSensitive(ezsignelementdependency_responseJSON, "eEzsignelementdependencyValidation");
    if (!e_ezsignelementdependency_validation) {
        goto end;
    }

    
    e_ezsignelementdependency_validation_local_nonprim = field_e_ezsignelementdependency_validation_parseFromJSON(e_ezsignelementdependency_validation); //custom

    // ezsignelementdependency_response->b_ezsignelementdependency_selected
    cJSON *b_ezsignelementdependency_selected = cJSON_GetObjectItemCaseSensitive(ezsignelementdependency_responseJSON, "bEzsignelementdependencySelected");
    if (b_ezsignelementdependency_selected) { 
    if(!cJSON_IsBool(b_ezsignelementdependency_selected))
    {
    goto end; //Bool
    }
    }

    // ezsignelementdependency_response->e_ezsignelementdependency_operator
    cJSON *e_ezsignelementdependency_operator = cJSON_GetObjectItemCaseSensitive(ezsignelementdependency_responseJSON, "eEzsignelementdependencyOperator");
    if (e_ezsignelementdependency_operator) { 
    e_ezsignelementdependency_operator_local_nonprim = field_e_ezsignelementdependency_operator_parseFromJSON(e_ezsignelementdependency_operator); //custom
    }

    // ezsignelementdependency_response->s_ezsignelementdependency_value
    cJSON *s_ezsignelementdependency_value = cJSON_GetObjectItemCaseSensitive(ezsignelementdependency_responseJSON, "sEzsignelementdependencyValue");
    if (s_ezsignelementdependency_value) { 
    if(!cJSON_IsString(s_ezsignelementdependency_value) && !cJSON_IsNull(s_ezsignelementdependency_value))
    {
    goto end; //String
    }
    }


    ezsignelementdependency_response_local_var = ezsignelementdependency_response_create (
        pki_ezsignelementdependency_id->valuedouble,
        fki_ezsignformfield_id ? fki_ezsignformfield_id->valuedouble : 0,
        fki_ezsignsignature_id ? fki_ezsignsignature_id->valuedouble : 0,
        fki_ezsignformfield_id_validation ? fki_ezsignformfield_id_validation->valuedouble : 0,
        fki_ezsignformfieldgroup_id_validation ? fki_ezsignformfieldgroup_id_validation->valuedouble : 0,
        e_ezsignelementdependency_validation_local_nonprim,
        b_ezsignelementdependency_selected ? b_ezsignelementdependency_selected->valueint : 0,
        e_ezsignelementdependency_operator ? e_ezsignelementdependency_operator_local_nonprim : NULL,
        s_ezsignelementdependency_value && !cJSON_IsNull(s_ezsignelementdependency_value) ? strdup(s_ezsignelementdependency_value->valuestring) : NULL
        );

    return ezsignelementdependency_response_local_var;
end:
    if (e_ezsignelementdependency_validation_local_nonprim) {
        field_e_ezsignelementdependency_validation_free(e_ezsignelementdependency_validation_local_nonprim);
        e_ezsignelementdependency_validation_local_nonprim = NULL;
    }
    if (e_ezsignelementdependency_operator_local_nonprim) {
        field_e_ezsignelementdependency_operator_free(e_ezsignelementdependency_operator_local_nonprim);
        e_ezsignelementdependency_operator_local_nonprim = NULL;
    }
    return NULL;

}
