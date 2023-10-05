#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignelementdependency_request.h"


char* e_ezsignelementdependency_validationezsignelementdependency_request_ToString(ezmax_api_definition__full_ezsignelementdependency_request__e e_ezsignelementdependency_validation) {
    char* e_ezsignelementdependency_validationArray[] =  { "NULL", "Value", "Selected", "Filled" };
	return e_ezsignelementdependency_validationArray[e_ezsignelementdependency_validation];
}

ezmax_api_definition__full_ezsignelementdependency_request__e e_ezsignelementdependency_validationezsignelementdependency_request_FromString(char* e_ezsignelementdependency_validation){
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
char* e_ezsignelementdependency_operatorezsignelementdependency_request_ToString(ezmax_api_definition__full_ezsignelementdependency_request__e e_ezsignelementdependency_operator) {
    char* e_ezsignelementdependency_operatorArray[] =  { "NULL", "eq", "neq", "gt", "gte", "lt", "lte", "in", "nin", "rg", "like", "between" };
	return e_ezsignelementdependency_operatorArray[e_ezsignelementdependency_operator];
}

ezmax_api_definition__full_ezsignelementdependency_request__e e_ezsignelementdependency_operatorezsignelementdependency_request_FromString(char* e_ezsignelementdependency_operator){
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

ezsignelementdependency_request_t *ezsignelementdependency_request_create(
    int pki_ezsignelementdependency_id,
    int fki_ezsignformfield_id_validation,
    int fki_ezsignformfieldgroup_id_validation,
    char *s_ezsignelementdependency_ezsignformfieldgrouplabel,
    char *s_ezsignelementdependency_ezsignformfieldlabel,
    field_e_ezsignelementdependency_validation_t *e_ezsignelementdependency_validation,
    int b_ezsignelementdependency_selected,
    field_e_ezsignelementdependency_operator_t *e_ezsignelementdependency_operator,
    char *s_ezsignelementdependency_value
    ) {
    ezsignelementdependency_request_t *ezsignelementdependency_request_local_var = malloc(sizeof(ezsignelementdependency_request_t));
    if (!ezsignelementdependency_request_local_var) {
        return NULL;
    }
    ezsignelementdependency_request_local_var->pki_ezsignelementdependency_id = pki_ezsignelementdependency_id;
    ezsignelementdependency_request_local_var->fki_ezsignformfield_id_validation = fki_ezsignformfield_id_validation;
    ezsignelementdependency_request_local_var->fki_ezsignformfieldgroup_id_validation = fki_ezsignformfieldgroup_id_validation;
    ezsignelementdependency_request_local_var->s_ezsignelementdependency_ezsignformfieldgrouplabel = s_ezsignelementdependency_ezsignformfieldgrouplabel;
    ezsignelementdependency_request_local_var->s_ezsignelementdependency_ezsignformfieldlabel = s_ezsignelementdependency_ezsignformfieldlabel;
    ezsignelementdependency_request_local_var->e_ezsignelementdependency_validation = e_ezsignelementdependency_validation;
    ezsignelementdependency_request_local_var->b_ezsignelementdependency_selected = b_ezsignelementdependency_selected;
    ezsignelementdependency_request_local_var->e_ezsignelementdependency_operator = e_ezsignelementdependency_operator;
    ezsignelementdependency_request_local_var->s_ezsignelementdependency_value = s_ezsignelementdependency_value;

    return ezsignelementdependency_request_local_var;
}


void ezsignelementdependency_request_free(ezsignelementdependency_request_t *ezsignelementdependency_request) {
    if(NULL == ezsignelementdependency_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignelementdependency_request->s_ezsignelementdependency_ezsignformfieldgrouplabel) {
        free(ezsignelementdependency_request->s_ezsignelementdependency_ezsignformfieldgrouplabel);
        ezsignelementdependency_request->s_ezsignelementdependency_ezsignformfieldgrouplabel = NULL;
    }
    if (ezsignelementdependency_request->s_ezsignelementdependency_ezsignformfieldlabel) {
        free(ezsignelementdependency_request->s_ezsignelementdependency_ezsignformfieldlabel);
        ezsignelementdependency_request->s_ezsignelementdependency_ezsignformfieldlabel = NULL;
    }
    if (ezsignelementdependency_request->e_ezsignelementdependency_validation) {
        field_e_ezsignelementdependency_validation_free(ezsignelementdependency_request->e_ezsignelementdependency_validation);
        ezsignelementdependency_request->e_ezsignelementdependency_validation = NULL;
    }
    if (ezsignelementdependency_request->e_ezsignelementdependency_operator) {
        field_e_ezsignelementdependency_operator_free(ezsignelementdependency_request->e_ezsignelementdependency_operator);
        ezsignelementdependency_request->e_ezsignelementdependency_operator = NULL;
    }
    if (ezsignelementdependency_request->s_ezsignelementdependency_value) {
        free(ezsignelementdependency_request->s_ezsignelementdependency_value);
        ezsignelementdependency_request->s_ezsignelementdependency_value = NULL;
    }
    free(ezsignelementdependency_request);
}

cJSON *ezsignelementdependency_request_convertToJSON(ezsignelementdependency_request_t *ezsignelementdependency_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignelementdependency_request->pki_ezsignelementdependency_id
    if(ezsignelementdependency_request->pki_ezsignelementdependency_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsignelementdependencyID", ezsignelementdependency_request->pki_ezsignelementdependency_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignelementdependency_request->fki_ezsignformfield_id_validation
    if(ezsignelementdependency_request->fki_ezsignformfield_id_validation) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignformfieldIDValidation", ezsignelementdependency_request->fki_ezsignformfield_id_validation) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignelementdependency_request->fki_ezsignformfieldgroup_id_validation
    if(ezsignelementdependency_request->fki_ezsignformfieldgroup_id_validation) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignformfieldgroupIDValidation", ezsignelementdependency_request->fki_ezsignformfieldgroup_id_validation) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignelementdependency_request->s_ezsignelementdependency_ezsignformfieldgrouplabel
    if(ezsignelementdependency_request->s_ezsignelementdependency_ezsignformfieldgrouplabel) {
    if(cJSON_AddStringToObject(item, "sEzsignelementdependencyEzsignformfieldgrouplabel", ezsignelementdependency_request->s_ezsignelementdependency_ezsignformfieldgrouplabel) == NULL) {
    goto fail; //String
    }
    }


    // ezsignelementdependency_request->s_ezsignelementdependency_ezsignformfieldlabel
    if(ezsignelementdependency_request->s_ezsignelementdependency_ezsignformfieldlabel) {
    if(cJSON_AddStringToObject(item, "sEzsignelementdependencyEzsignformfieldlabel", ezsignelementdependency_request->s_ezsignelementdependency_ezsignformfieldlabel) == NULL) {
    goto fail; //String
    }
    }


    // ezsignelementdependency_request->e_ezsignelementdependency_validation
    if (ezmax_api_definition__full_ezsignelementdependency_request__NULL == ezsignelementdependency_request->e_ezsignelementdependency_validation) {
        goto fail;
    }
    cJSON *e_ezsignelementdependency_validation_local_JSON = field_e_ezsignelementdependency_validation_convertToJSON(ezsignelementdependency_request->e_ezsignelementdependency_validation);
    if(e_ezsignelementdependency_validation_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignelementdependencyValidation", e_ezsignelementdependency_validation_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignelementdependency_request->b_ezsignelementdependency_selected
    if(ezsignelementdependency_request->b_ezsignelementdependency_selected) {
    if(cJSON_AddBoolToObject(item, "bEzsignelementdependencySelected", ezsignelementdependency_request->b_ezsignelementdependency_selected) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignelementdependency_request->e_ezsignelementdependency_operator
    if(ezsignelementdependency_request->e_ezsignelementdependency_operator != ezmax_api_definition__full_ezsignelementdependency_request__NULL) {
    cJSON *e_ezsignelementdependency_operator_local_JSON = field_e_ezsignelementdependency_operator_convertToJSON(ezsignelementdependency_request->e_ezsignelementdependency_operator);
    if(e_ezsignelementdependency_operator_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignelementdependencyOperator", e_ezsignelementdependency_operator_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignelementdependency_request->s_ezsignelementdependency_value
    if(ezsignelementdependency_request->s_ezsignelementdependency_value) {
    if(cJSON_AddStringToObject(item, "sEzsignelementdependencyValue", ezsignelementdependency_request->s_ezsignelementdependency_value) == NULL) {
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

ezsignelementdependency_request_t *ezsignelementdependency_request_parseFromJSON(cJSON *ezsignelementdependency_requestJSON){

    ezsignelementdependency_request_t *ezsignelementdependency_request_local_var = NULL;

    // define the local variable for ezsignelementdependency_request->e_ezsignelementdependency_validation
    field_e_ezsignelementdependency_validation_t *e_ezsignelementdependency_validation_local_nonprim = NULL;

    // define the local variable for ezsignelementdependency_request->e_ezsignelementdependency_operator
    field_e_ezsignelementdependency_operator_t *e_ezsignelementdependency_operator_local_nonprim = NULL;

    // ezsignelementdependency_request->pki_ezsignelementdependency_id
    cJSON *pki_ezsignelementdependency_id = cJSON_GetObjectItemCaseSensitive(ezsignelementdependency_requestJSON, "pkiEzsignelementdependencyID");
    if (pki_ezsignelementdependency_id) { 
    if(!cJSON_IsNumber(pki_ezsignelementdependency_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignelementdependency_request->fki_ezsignformfield_id_validation
    cJSON *fki_ezsignformfield_id_validation = cJSON_GetObjectItemCaseSensitive(ezsignelementdependency_requestJSON, "fkiEzsignformfieldIDValidation");
    if (fki_ezsignformfield_id_validation) { 
    if(!cJSON_IsNumber(fki_ezsignformfield_id_validation))
    {
    goto end; //Numeric
    }
    }

    // ezsignelementdependency_request->fki_ezsignformfieldgroup_id_validation
    cJSON *fki_ezsignformfieldgroup_id_validation = cJSON_GetObjectItemCaseSensitive(ezsignelementdependency_requestJSON, "fkiEzsignformfieldgroupIDValidation");
    if (fki_ezsignformfieldgroup_id_validation) { 
    if(!cJSON_IsNumber(fki_ezsignformfieldgroup_id_validation))
    {
    goto end; //Numeric
    }
    }

    // ezsignelementdependency_request->s_ezsignelementdependency_ezsignformfieldgrouplabel
    cJSON *s_ezsignelementdependency_ezsignformfieldgrouplabel = cJSON_GetObjectItemCaseSensitive(ezsignelementdependency_requestJSON, "sEzsignelementdependencyEzsignformfieldgrouplabel");
    if (s_ezsignelementdependency_ezsignformfieldgrouplabel) { 
    if(!cJSON_IsString(s_ezsignelementdependency_ezsignformfieldgrouplabel) && !cJSON_IsNull(s_ezsignelementdependency_ezsignformfieldgrouplabel))
    {
    goto end; //String
    }
    }

    // ezsignelementdependency_request->s_ezsignelementdependency_ezsignformfieldlabel
    cJSON *s_ezsignelementdependency_ezsignformfieldlabel = cJSON_GetObjectItemCaseSensitive(ezsignelementdependency_requestJSON, "sEzsignelementdependencyEzsignformfieldlabel");
    if (s_ezsignelementdependency_ezsignformfieldlabel) { 
    if(!cJSON_IsString(s_ezsignelementdependency_ezsignformfieldlabel) && !cJSON_IsNull(s_ezsignelementdependency_ezsignformfieldlabel))
    {
    goto end; //String
    }
    }

    // ezsignelementdependency_request->e_ezsignelementdependency_validation
    cJSON *e_ezsignelementdependency_validation = cJSON_GetObjectItemCaseSensitive(ezsignelementdependency_requestJSON, "eEzsignelementdependencyValidation");
    if (!e_ezsignelementdependency_validation) {
        goto end;
    }

    
    e_ezsignelementdependency_validation_local_nonprim = field_e_ezsignelementdependency_validation_parseFromJSON(e_ezsignelementdependency_validation); //custom

    // ezsignelementdependency_request->b_ezsignelementdependency_selected
    cJSON *b_ezsignelementdependency_selected = cJSON_GetObjectItemCaseSensitive(ezsignelementdependency_requestJSON, "bEzsignelementdependencySelected");
    if (b_ezsignelementdependency_selected) { 
    if(!cJSON_IsBool(b_ezsignelementdependency_selected))
    {
    goto end; //Bool
    }
    }

    // ezsignelementdependency_request->e_ezsignelementdependency_operator
    cJSON *e_ezsignelementdependency_operator = cJSON_GetObjectItemCaseSensitive(ezsignelementdependency_requestJSON, "eEzsignelementdependencyOperator");
    if (e_ezsignelementdependency_operator) { 
    e_ezsignelementdependency_operator_local_nonprim = field_e_ezsignelementdependency_operator_parseFromJSON(e_ezsignelementdependency_operator); //custom
    }

    // ezsignelementdependency_request->s_ezsignelementdependency_value
    cJSON *s_ezsignelementdependency_value = cJSON_GetObjectItemCaseSensitive(ezsignelementdependency_requestJSON, "sEzsignelementdependencyValue");
    if (s_ezsignelementdependency_value) { 
    if(!cJSON_IsString(s_ezsignelementdependency_value) && !cJSON_IsNull(s_ezsignelementdependency_value))
    {
    goto end; //String
    }
    }


    ezsignelementdependency_request_local_var = ezsignelementdependency_request_create (
        pki_ezsignelementdependency_id ? pki_ezsignelementdependency_id->valuedouble : 0,
        fki_ezsignformfield_id_validation ? fki_ezsignformfield_id_validation->valuedouble : 0,
        fki_ezsignformfieldgroup_id_validation ? fki_ezsignformfieldgroup_id_validation->valuedouble : 0,
        s_ezsignelementdependency_ezsignformfieldgrouplabel && !cJSON_IsNull(s_ezsignelementdependency_ezsignformfieldgrouplabel) ? strdup(s_ezsignelementdependency_ezsignformfieldgrouplabel->valuestring) : NULL,
        s_ezsignelementdependency_ezsignformfieldlabel && !cJSON_IsNull(s_ezsignelementdependency_ezsignformfieldlabel) ? strdup(s_ezsignelementdependency_ezsignformfieldlabel->valuestring) : NULL,
        e_ezsignelementdependency_validation_local_nonprim,
        b_ezsignelementdependency_selected ? b_ezsignelementdependency_selected->valueint : 0,
        e_ezsignelementdependency_operator ? e_ezsignelementdependency_operator_local_nonprim : NULL,
        s_ezsignelementdependency_value && !cJSON_IsNull(s_ezsignelementdependency_value) ? strdup(s_ezsignelementdependency_value->valuestring) : NULL
        );

    return ezsignelementdependency_request_local_var;
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
