#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplateelementdependency_request.h"



static ezsigntemplateelementdependency_request_t *ezsigntemplateelementdependency_request_create_internal(
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
    ezsigntemplateelementdependency_request_t *ezsigntemplateelementdependency_request_local_var = malloc(sizeof(ezsigntemplateelementdependency_request_t));
    if (!ezsigntemplateelementdependency_request_local_var) {
        return NULL;
    }
    ezsigntemplateelementdependency_request_local_var->pki_ezsigntemplateelementdependency_id = pki_ezsigntemplateelementdependency_id;
    ezsigntemplateelementdependency_request_local_var->fki_ezsigntemplateformfield_id_validation = fki_ezsigntemplateformfield_id_validation;
    ezsigntemplateelementdependency_request_local_var->fki_ezsigntemplateformfieldgroup_id_validation = fki_ezsigntemplateformfieldgroup_id_validation;
    ezsigntemplateelementdependency_request_local_var->s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel = s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel;
    ezsigntemplateelementdependency_request_local_var->s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel = s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel;
    ezsigntemplateelementdependency_request_local_var->e_ezsigntemplateelementdependency_validation = e_ezsigntemplateelementdependency_validation;
    ezsigntemplateelementdependency_request_local_var->b_ezsigntemplateelementdependency_selected = b_ezsigntemplateelementdependency_selected;
    ezsigntemplateelementdependency_request_local_var->e_ezsigntemplateelementdependency_operator = e_ezsigntemplateelementdependency_operator;
    ezsigntemplateelementdependency_request_local_var->s_ezsigntemplateelementdependency_value = s_ezsigntemplateelementdependency_value;

    ezsigntemplateelementdependency_request_local_var->_library_owned = 1;
    return ezsigntemplateelementdependency_request_local_var;
}

__attribute__((deprecated)) ezsigntemplateelementdependency_request_t *ezsigntemplateelementdependency_request_create(
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
    return ezsigntemplateelementdependency_request_create_internal (
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

void ezsigntemplateelementdependency_request_free(ezsigntemplateelementdependency_request_t *ezsigntemplateelementdependency_request) {
    if(NULL == ezsigntemplateelementdependency_request){
        return ;
    }
    if(ezsigntemplateelementdependency_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplateelementdependency_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplateelementdependency_request->s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel) {
        free(ezsigntemplateelementdependency_request->s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel);
        ezsigntemplateelementdependency_request->s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel = NULL;
    }
    if (ezsigntemplateelementdependency_request->s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel) {
        free(ezsigntemplateelementdependency_request->s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel);
        ezsigntemplateelementdependency_request->s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel = NULL;
    }
    if (ezsigntemplateelementdependency_request->s_ezsigntemplateelementdependency_value) {
        free(ezsigntemplateelementdependency_request->s_ezsigntemplateelementdependency_value);
        ezsigntemplateelementdependency_request->s_ezsigntemplateelementdependency_value = NULL;
    }
    free(ezsigntemplateelementdependency_request);
}

cJSON *ezsigntemplateelementdependency_request_convertToJSON(ezsigntemplateelementdependency_request_t *ezsigntemplateelementdependency_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplateelementdependency_request->pki_ezsigntemplateelementdependency_id
    if(ezsigntemplateelementdependency_request->pki_ezsigntemplateelementdependency_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplateelementdependencyID", ezsigntemplateelementdependency_request->pki_ezsigntemplateelementdependency_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplateelementdependency_request->fki_ezsigntemplateformfield_id_validation
    if(ezsigntemplateelementdependency_request->fki_ezsigntemplateformfield_id_validation) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplateformfieldIDValidation", ezsigntemplateelementdependency_request->fki_ezsigntemplateformfield_id_validation) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplateelementdependency_request->fki_ezsigntemplateformfieldgroup_id_validation
    if(ezsigntemplateelementdependency_request->fki_ezsigntemplateformfieldgroup_id_validation) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplateformfieldgroupIDValidation", ezsigntemplateelementdependency_request->fki_ezsigntemplateformfieldgroup_id_validation) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplateelementdependency_request->s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel
    if(ezsigntemplateelementdependency_request->s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel) {
    if(cJSON_AddStringToObject(item, "sEzsigntemplateelementdependencyEzsigntemplateformfieldgrouplabel", ezsigntemplateelementdependency_request->s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplateelementdependency_request->s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel
    if(ezsigntemplateelementdependency_request->s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel) {
    if(cJSON_AddStringToObject(item, "sEzsigntemplateelementdependencyEzsigntemplateformfieldlabel", ezsigntemplateelementdependency_request->s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplateelementdependency_request->e_ezsigntemplateelementdependency_validation
    if (ezmax_api_definition__full_field_e_ezsigntemplateelementdependency_validation__NULL == ezsigntemplateelementdependency_request->e_ezsigntemplateelementdependency_validation) {
        goto fail;
    }
    cJSON *e_ezsigntemplateelementdependency_validation_local_JSON = field_e_ezsigntemplateelementdependency_validation_convertToJSON(ezsigntemplateelementdependency_request->e_ezsigntemplateelementdependency_validation);
    if(e_ezsigntemplateelementdependency_validation_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplateelementdependencyValidation", e_ezsigntemplateelementdependency_validation_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsigntemplateelementdependency_request->b_ezsigntemplateelementdependency_selected
    if(ezsigntemplateelementdependency_request->b_ezsigntemplateelementdependency_selected) {
    if(cJSON_AddBoolToObject(item, "bEzsigntemplateelementdependencySelected", ezsigntemplateelementdependency_request->b_ezsigntemplateelementdependency_selected) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsigntemplateelementdependency_request->e_ezsigntemplateelementdependency_operator
    if(ezsigntemplateelementdependency_request->e_ezsigntemplateelementdependency_operator != ezmax_api_definition__full_field_e_ezsigntemplateelementdependency_operator__NULL) {
    cJSON *e_ezsigntemplateelementdependency_operator_local_JSON = field_e_ezsigntemplateelementdependency_operator_convertToJSON(ezsigntemplateelementdependency_request->e_ezsigntemplateelementdependency_operator);
    if(e_ezsigntemplateelementdependency_operator_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplateelementdependencyOperator", e_ezsigntemplateelementdependency_operator_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsigntemplateelementdependency_request->s_ezsigntemplateelementdependency_value
    if(ezsigntemplateelementdependency_request->s_ezsigntemplateelementdependency_value) {
    if(cJSON_AddStringToObject(item, "sEzsigntemplateelementdependencyValue", ezsigntemplateelementdependency_request->s_ezsigntemplateelementdependency_value) == NULL) {
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

ezsigntemplateelementdependency_request_t *ezsigntemplateelementdependency_request_parseFromJSON(cJSON *ezsigntemplateelementdependency_requestJSON){

    ezsigntemplateelementdependency_request_t *ezsigntemplateelementdependency_request_local_var = NULL;

    // define the local variable for ezsigntemplateelementdependency_request->e_ezsigntemplateelementdependency_validation
    ezmax_api_definition__full_field_e_ezsigntemplateelementdependency_validation__e e_ezsigntemplateelementdependency_validation_local_nonprim = 0;

    // define the local variable for ezsigntemplateelementdependency_request->e_ezsigntemplateelementdependency_operator
    ezmax_api_definition__full_field_e_ezsigntemplateelementdependency_operator__e e_ezsigntemplateelementdependency_operator_local_nonprim = 0;

    // ezsigntemplateelementdependency_request->pki_ezsigntemplateelementdependency_id
    cJSON *pki_ezsigntemplateelementdependency_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateelementdependency_requestJSON, "pkiEzsigntemplateelementdependencyID");
    if (cJSON_IsNull(pki_ezsigntemplateelementdependency_id)) {
        pki_ezsigntemplateelementdependency_id = NULL;
    }
    if (pki_ezsigntemplateelementdependency_id) { 
    if(!cJSON_IsNumber(pki_ezsigntemplateelementdependency_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplateelementdependency_request->fki_ezsigntemplateformfield_id_validation
    cJSON *fki_ezsigntemplateformfield_id_validation = cJSON_GetObjectItemCaseSensitive(ezsigntemplateelementdependency_requestJSON, "fkiEzsigntemplateformfieldIDValidation");
    if (cJSON_IsNull(fki_ezsigntemplateformfield_id_validation)) {
        fki_ezsigntemplateformfield_id_validation = NULL;
    }
    if (fki_ezsigntemplateformfield_id_validation) { 
    if(!cJSON_IsNumber(fki_ezsigntemplateformfield_id_validation))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplateelementdependency_request->fki_ezsigntemplateformfieldgroup_id_validation
    cJSON *fki_ezsigntemplateformfieldgroup_id_validation = cJSON_GetObjectItemCaseSensitive(ezsigntemplateelementdependency_requestJSON, "fkiEzsigntemplateformfieldgroupIDValidation");
    if (cJSON_IsNull(fki_ezsigntemplateformfieldgroup_id_validation)) {
        fki_ezsigntemplateformfieldgroup_id_validation = NULL;
    }
    if (fki_ezsigntemplateformfieldgroup_id_validation) { 
    if(!cJSON_IsNumber(fki_ezsigntemplateformfieldgroup_id_validation))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplateelementdependency_request->s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel
    cJSON *s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel = cJSON_GetObjectItemCaseSensitive(ezsigntemplateelementdependency_requestJSON, "sEzsigntemplateelementdependencyEzsigntemplateformfieldgrouplabel");
    if (cJSON_IsNull(s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel)) {
        s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel = NULL;
    }
    if (s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel) { 
    if(!cJSON_IsString(s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel) && !cJSON_IsNull(s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel))
    {
    goto end; //String
    }
    }

    // ezsigntemplateelementdependency_request->s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel
    cJSON *s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel = cJSON_GetObjectItemCaseSensitive(ezsigntemplateelementdependency_requestJSON, "sEzsigntemplateelementdependencyEzsigntemplateformfieldlabel");
    if (cJSON_IsNull(s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel)) {
        s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel = NULL;
    }
    if (s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel) { 
    if(!cJSON_IsString(s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel) && !cJSON_IsNull(s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel))
    {
    goto end; //String
    }
    }

    // ezsigntemplateelementdependency_request->e_ezsigntemplateelementdependency_validation
    cJSON *e_ezsigntemplateelementdependency_validation = cJSON_GetObjectItemCaseSensitive(ezsigntemplateelementdependency_requestJSON, "eEzsigntemplateelementdependencyValidation");
    if (cJSON_IsNull(e_ezsigntemplateelementdependency_validation)) {
        e_ezsigntemplateelementdependency_validation = NULL;
    }
    if (!e_ezsigntemplateelementdependency_validation) {
        goto end;
    }

    
    e_ezsigntemplateelementdependency_validation_local_nonprim = field_e_ezsigntemplateelementdependency_validation_parseFromJSON(e_ezsigntemplateelementdependency_validation); //custom

    // ezsigntemplateelementdependency_request->b_ezsigntemplateelementdependency_selected
    cJSON *b_ezsigntemplateelementdependency_selected = cJSON_GetObjectItemCaseSensitive(ezsigntemplateelementdependency_requestJSON, "bEzsigntemplateelementdependencySelected");
    if (cJSON_IsNull(b_ezsigntemplateelementdependency_selected)) {
        b_ezsigntemplateelementdependency_selected = NULL;
    }
    if (b_ezsigntemplateelementdependency_selected) { 
    if(!cJSON_IsBool(b_ezsigntemplateelementdependency_selected))
    {
    goto end; //Bool
    }
    }

    // ezsigntemplateelementdependency_request->e_ezsigntemplateelementdependency_operator
    cJSON *e_ezsigntemplateelementdependency_operator = cJSON_GetObjectItemCaseSensitive(ezsigntemplateelementdependency_requestJSON, "eEzsigntemplateelementdependencyOperator");
    if (cJSON_IsNull(e_ezsigntemplateelementdependency_operator)) {
        e_ezsigntemplateelementdependency_operator = NULL;
    }
    if (e_ezsigntemplateelementdependency_operator) { 
    e_ezsigntemplateelementdependency_operator_local_nonprim = field_e_ezsigntemplateelementdependency_operator_parseFromJSON(e_ezsigntemplateelementdependency_operator); //custom
    }

    // ezsigntemplateelementdependency_request->s_ezsigntemplateelementdependency_value
    cJSON *s_ezsigntemplateelementdependency_value = cJSON_GetObjectItemCaseSensitive(ezsigntemplateelementdependency_requestJSON, "sEzsigntemplateelementdependencyValue");
    if (cJSON_IsNull(s_ezsigntemplateelementdependency_value)) {
        s_ezsigntemplateelementdependency_value = NULL;
    }
    if (s_ezsigntemplateelementdependency_value) { 
    if(!cJSON_IsString(s_ezsigntemplateelementdependency_value) && !cJSON_IsNull(s_ezsigntemplateelementdependency_value))
    {
    goto end; //String
    }
    }


    ezsigntemplateelementdependency_request_local_var = ezsigntemplateelementdependency_request_create_internal (
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

    return ezsigntemplateelementdependency_request_local_var;
end:
    if (e_ezsigntemplateelementdependency_validation_local_nonprim) {
        e_ezsigntemplateelementdependency_validation_local_nonprim = 0;
    }
    if (e_ezsigntemplateelementdependency_operator_local_nonprim) {
        e_ezsigntemplateelementdependency_operator_local_nonprim = 0;
    }
    return NULL;

}
