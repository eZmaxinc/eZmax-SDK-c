#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplateelementdependency_request_compound.h"


char* ezsigntemplateelementdependency_request_compound_e_ezsigntemplateelementdependency_validation_ToString(ezmax_api_definition__full_ezsigntemplateelementdependency_request_compound__e e_ezsigntemplateelementdependency_validation) {
    char* e_ezsigntemplateelementdependency_validationArray[] =  { "NULL", "Value", "Selected", "Filled" };
    return e_ezsigntemplateelementdependency_validationArray[e_ezsigntemplateelementdependency_validation];
}

ezmax_api_definition__full_ezsigntemplateelementdependency_request_compound__e ezsigntemplateelementdependency_request_compound_e_ezsigntemplateelementdependency_validation_FromString(char* e_ezsigntemplateelementdependency_validation){
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
char* ezsigntemplateelementdependency_request_compound_e_ezsigntemplateelementdependency_operator_ToString(ezmax_api_definition__full_ezsigntemplateelementdependency_request_compound__e e_ezsigntemplateelementdependency_operator) {
    char* e_ezsigntemplateelementdependency_operatorArray[] =  { "NULL", "eq", "neq", "gt", "gte", "lt", "lte", "in", "nin", "rg", "like", "between" };
    return e_ezsigntemplateelementdependency_operatorArray[e_ezsigntemplateelementdependency_operator];
}

ezmax_api_definition__full_ezsigntemplateelementdependency_request_compound__e ezsigntemplateelementdependency_request_compound_e_ezsigntemplateelementdependency_operator_FromString(char* e_ezsigntemplateelementdependency_operator){
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

ezsigntemplateelementdependency_request_compound_t *ezsigntemplateelementdependency_request_compound_create(
    int pki_ezsigntemplateelementdependency_id,
    int fki_ezsigntemplateformfield_id_validation,
    int fki_ezsigntemplateformfieldgroup_id_validation,
    char *s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel,
    char *s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel,
    field_e_ezsigntemplateelementdependency_validation_t *e_ezsigntemplateelementdependency_validation,
    int b_ezsigntemplateelementdependency_selected,
    field_e_ezsigntemplateelementdependency_operator_t *e_ezsigntemplateelementdependency_operator,
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

    return ezsigntemplateelementdependency_request_compound_local_var;
}


void ezsigntemplateelementdependency_request_compound_free(ezsigntemplateelementdependency_request_compound_t *ezsigntemplateelementdependency_request_compound) {
    if(NULL == ezsigntemplateelementdependency_request_compound){
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
    if (ezsigntemplateelementdependency_request_compound->e_ezsigntemplateelementdependency_validation) {
        field_e_ezsigntemplateelementdependency_validation_free(ezsigntemplateelementdependency_request_compound->e_ezsigntemplateelementdependency_validation);
        ezsigntemplateelementdependency_request_compound->e_ezsigntemplateelementdependency_validation = NULL;
    }
    if (ezsigntemplateelementdependency_request_compound->e_ezsigntemplateelementdependency_operator) {
        field_e_ezsigntemplateelementdependency_operator_free(ezsigntemplateelementdependency_request_compound->e_ezsigntemplateelementdependency_operator);
        ezsigntemplateelementdependency_request_compound->e_ezsigntemplateelementdependency_operator = NULL;
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
    if (ezmax_api_definition__full_ezsigntemplateelementdependency_request_compound__NULL == ezsigntemplateelementdependency_request_compound->e_ezsigntemplateelementdependency_validation) {
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
    if(ezsigntemplateelementdependency_request_compound->e_ezsigntemplateelementdependency_operator != ezmax_api_definition__full_ezsigntemplateelementdependency_request_compound__NULL) {
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
    field_e_ezsigntemplateelementdependency_validation_t *e_ezsigntemplateelementdependency_validation_local_nonprim = NULL;

    // define the local variable for ezsigntemplateelementdependency_request_compound->e_ezsigntemplateelementdependency_operator
    field_e_ezsigntemplateelementdependency_operator_t *e_ezsigntemplateelementdependency_operator_local_nonprim = NULL;

    // ezsigntemplateelementdependency_request_compound->pki_ezsigntemplateelementdependency_id
    cJSON *pki_ezsigntemplateelementdependency_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateelementdependency_request_compoundJSON, "pkiEzsigntemplateelementdependencyID");
    if (pki_ezsigntemplateelementdependency_id) { 
    if(!cJSON_IsNumber(pki_ezsigntemplateelementdependency_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplateelementdependency_request_compound->fki_ezsigntemplateformfield_id_validation
    cJSON *fki_ezsigntemplateformfield_id_validation = cJSON_GetObjectItemCaseSensitive(ezsigntemplateelementdependency_request_compoundJSON, "fkiEzsigntemplateformfieldIDValidation");
    if (fki_ezsigntemplateformfield_id_validation) { 
    if(!cJSON_IsNumber(fki_ezsigntemplateformfield_id_validation))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplateelementdependency_request_compound->fki_ezsigntemplateformfieldgroup_id_validation
    cJSON *fki_ezsigntemplateformfieldgroup_id_validation = cJSON_GetObjectItemCaseSensitive(ezsigntemplateelementdependency_request_compoundJSON, "fkiEzsigntemplateformfieldgroupIDValidation");
    if (fki_ezsigntemplateformfieldgroup_id_validation) { 
    if(!cJSON_IsNumber(fki_ezsigntemplateformfieldgroup_id_validation))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplateelementdependency_request_compound->s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel
    cJSON *s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel = cJSON_GetObjectItemCaseSensitive(ezsigntemplateelementdependency_request_compoundJSON, "sEzsigntemplateelementdependencyEzsigntemplateformfieldgrouplabel");
    if (s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel) { 
    if(!cJSON_IsString(s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel) && !cJSON_IsNull(s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel))
    {
    goto end; //String
    }
    }

    // ezsigntemplateelementdependency_request_compound->s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel
    cJSON *s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel = cJSON_GetObjectItemCaseSensitive(ezsigntemplateelementdependency_request_compoundJSON, "sEzsigntemplateelementdependencyEzsigntemplateformfieldlabel");
    if (s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel) { 
    if(!cJSON_IsString(s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel) && !cJSON_IsNull(s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel))
    {
    goto end; //String
    }
    }

    // ezsigntemplateelementdependency_request_compound->e_ezsigntemplateelementdependency_validation
    cJSON *e_ezsigntemplateelementdependency_validation = cJSON_GetObjectItemCaseSensitive(ezsigntemplateelementdependency_request_compoundJSON, "eEzsigntemplateelementdependencyValidation");
    if (!e_ezsigntemplateelementdependency_validation) {
        goto end;
    }

    
    e_ezsigntemplateelementdependency_validation_local_nonprim = field_e_ezsigntemplateelementdependency_validation_parseFromJSON(e_ezsigntemplateelementdependency_validation); //custom

    // ezsigntemplateelementdependency_request_compound->b_ezsigntemplateelementdependency_selected
    cJSON *b_ezsigntemplateelementdependency_selected = cJSON_GetObjectItemCaseSensitive(ezsigntemplateelementdependency_request_compoundJSON, "bEzsigntemplateelementdependencySelected");
    if (b_ezsigntemplateelementdependency_selected) { 
    if(!cJSON_IsBool(b_ezsigntemplateelementdependency_selected))
    {
    goto end; //Bool
    }
    }

    // ezsigntemplateelementdependency_request_compound->e_ezsigntemplateelementdependency_operator
    cJSON *e_ezsigntemplateelementdependency_operator = cJSON_GetObjectItemCaseSensitive(ezsigntemplateelementdependency_request_compoundJSON, "eEzsigntemplateelementdependencyOperator");
    if (e_ezsigntemplateelementdependency_operator) { 
    e_ezsigntemplateelementdependency_operator_local_nonprim = field_e_ezsigntemplateelementdependency_operator_parseFromJSON(e_ezsigntemplateelementdependency_operator); //custom
    }

    // ezsigntemplateelementdependency_request_compound->s_ezsigntemplateelementdependency_value
    cJSON *s_ezsigntemplateelementdependency_value = cJSON_GetObjectItemCaseSensitive(ezsigntemplateelementdependency_request_compoundJSON, "sEzsigntemplateelementdependencyValue");
    if (s_ezsigntemplateelementdependency_value) { 
    if(!cJSON_IsString(s_ezsigntemplateelementdependency_value) && !cJSON_IsNull(s_ezsigntemplateelementdependency_value))
    {
    goto end; //String
    }
    }


    ezsigntemplateelementdependency_request_compound_local_var = ezsigntemplateelementdependency_request_compound_create (
        pki_ezsigntemplateelementdependency_id ? pki_ezsigntemplateelementdependency_id->valuedouble : 0,
        fki_ezsigntemplateformfield_id_validation ? fki_ezsigntemplateformfield_id_validation->valuedouble : 0,
        fki_ezsigntemplateformfieldgroup_id_validation ? fki_ezsigntemplateformfieldgroup_id_validation->valuedouble : 0,
        s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel && !cJSON_IsNull(s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel) ? strdup(s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel->valuestring) : NULL,
        s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel && !cJSON_IsNull(s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel) ? strdup(s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel->valuestring) : NULL,
        e_ezsigntemplateelementdependency_validation_local_nonprim,
        b_ezsigntemplateelementdependency_selected ? b_ezsigntemplateelementdependency_selected->valueint : 0,
        e_ezsigntemplateelementdependency_operator ? e_ezsigntemplateelementdependency_operator_local_nonprim : NULL,
        s_ezsigntemplateelementdependency_value && !cJSON_IsNull(s_ezsigntemplateelementdependency_value) ? strdup(s_ezsigntemplateelementdependency_value->valuestring) : NULL
        );

    return ezsigntemplateelementdependency_request_compound_local_var;
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
