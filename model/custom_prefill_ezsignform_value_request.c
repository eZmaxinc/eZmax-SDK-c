#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_prefill_ezsignform_value_request.h"



static custom_prefill_ezsignform_value_request_t *custom_prefill_ezsignform_value_request_create_internal(
    char *s_ezsignformfieldgroup_label,
    char *s_ezsignformfield_label,
    char *s_ezsignformfield_enteredvalue,
    int *b_ezsignformfield_selected
    ) {
    custom_prefill_ezsignform_value_request_t *custom_prefill_ezsignform_value_request_local_var = malloc(sizeof(custom_prefill_ezsignform_value_request_t));
    if (!custom_prefill_ezsignform_value_request_local_var) {
        return NULL;
    }
    memset(custom_prefill_ezsignform_value_request_local_var, 0, sizeof(custom_prefill_ezsignform_value_request_t));
    custom_prefill_ezsignform_value_request_local_var->_library_owned = 1;
    custom_prefill_ezsignform_value_request_local_var->s_ezsignformfieldgroup_label = s_ezsignformfieldgroup_label;
    custom_prefill_ezsignform_value_request_local_var->s_ezsignformfield_label = s_ezsignformfield_label;
    custom_prefill_ezsignform_value_request_local_var->s_ezsignformfield_enteredvalue = s_ezsignformfield_enteredvalue;
    custom_prefill_ezsignform_value_request_local_var->b_ezsignformfield_selected = b_ezsignformfield_selected;
    return custom_prefill_ezsignform_value_request_local_var;
}

__attribute__((deprecated)) custom_prefill_ezsignform_value_request_t *custom_prefill_ezsignform_value_request_create(
    char *s_ezsignformfieldgroup_label,
    char *s_ezsignformfield_label,
    char *s_ezsignformfield_enteredvalue,
    int *b_ezsignformfield_selected
    ) {
    int *b_ezsignformfield_selected_copy = NULL;
    if (b_ezsignformfield_selected) {
        b_ezsignformfield_selected_copy = malloc(sizeof(int));
        if (b_ezsignformfield_selected_copy) *b_ezsignformfield_selected_copy = *b_ezsignformfield_selected;
    }
    custom_prefill_ezsignform_value_request_t *result = custom_prefill_ezsignform_value_request_create_internal (
        s_ezsignformfieldgroup_label,
        s_ezsignformfield_label,
        s_ezsignformfield_enteredvalue,
        b_ezsignformfield_selected_copy
        );
    if (!result) {
        free(b_ezsignformfield_selected_copy);
    }
    return result;
}

void custom_prefill_ezsignform_value_request_free(custom_prefill_ezsignform_value_request_t *custom_prefill_ezsignform_value_request) {
    if(NULL == custom_prefill_ezsignform_value_request){
        return ;
    }
    if(custom_prefill_ezsignform_value_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_prefill_ezsignform_value_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (custom_prefill_ezsignform_value_request->s_ezsignformfieldgroup_label) {
        free(custom_prefill_ezsignform_value_request->s_ezsignformfieldgroup_label);
        custom_prefill_ezsignform_value_request->s_ezsignformfieldgroup_label = NULL;
    }
    if (custom_prefill_ezsignform_value_request->s_ezsignformfield_label) {
        free(custom_prefill_ezsignform_value_request->s_ezsignformfield_label);
        custom_prefill_ezsignform_value_request->s_ezsignformfield_label = NULL;
    }
    if (custom_prefill_ezsignform_value_request->s_ezsignformfield_enteredvalue) {
        free(custom_prefill_ezsignform_value_request->s_ezsignformfield_enteredvalue);
        custom_prefill_ezsignform_value_request->s_ezsignformfield_enteredvalue = NULL;
    }
    if (custom_prefill_ezsignform_value_request->b_ezsignformfield_selected) {
        free(custom_prefill_ezsignform_value_request->b_ezsignformfield_selected);
        custom_prefill_ezsignform_value_request->b_ezsignformfield_selected = NULL;
    }
    free(custom_prefill_ezsignform_value_request);
}

cJSON *custom_prefill_ezsignform_value_request_convertToJSON(custom_prefill_ezsignform_value_request_t *custom_prefill_ezsignform_value_request) {
    cJSON *item = cJSON_CreateObject();

    // custom_prefill_ezsignform_value_request->s_ezsignformfieldgroup_label
    if (!custom_prefill_ezsignform_value_request->s_ezsignformfieldgroup_label) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignformfieldgroupLabel", custom_prefill_ezsignform_value_request->s_ezsignformfieldgroup_label) == NULL) {
    goto fail; //String
    }


    // custom_prefill_ezsignform_value_request->s_ezsignformfield_label
    if(custom_prefill_ezsignform_value_request->s_ezsignformfield_label) {
    if(cJSON_AddStringToObject(item, "sEzsignformfieldLabel", custom_prefill_ezsignform_value_request->s_ezsignformfield_label) == NULL) {
    goto fail; //String
    }
    }


    // custom_prefill_ezsignform_value_request->s_ezsignformfield_enteredvalue
    if(custom_prefill_ezsignform_value_request->s_ezsignformfield_enteredvalue) {
    if(cJSON_AddStringToObject(item, "sEzsignformfieldEnteredvalue", custom_prefill_ezsignform_value_request->s_ezsignformfield_enteredvalue) == NULL) {
    goto fail; //String
    }
    }


    // custom_prefill_ezsignform_value_request->b_ezsignformfield_selected
    if(custom_prefill_ezsignform_value_request->b_ezsignformfield_selected) {
    if(cJSON_AddBoolToObject(item, "bEzsignformfieldSelected", *custom_prefill_ezsignform_value_request->b_ezsignformfield_selected) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_prefill_ezsignform_value_request_t *custom_prefill_ezsignform_value_request_parseFromJSON(cJSON *custom_prefill_ezsignform_value_requestJSON){

    custom_prefill_ezsignform_value_request_t *custom_prefill_ezsignform_value_request_local_var = NULL;

    char *s_ezsignformfieldgroup_label_local_str = NULL;

    char *s_ezsignformfield_label_local_str = NULL;

    char *s_ezsignformfield_enteredvalue_local_str = NULL;

    // define the local variable for custom_prefill_ezsignform_value_request->b_ezsignformfield_selected
    int *b_ezsignformfield_selected_local_var = NULL;

    // custom_prefill_ezsignform_value_request->s_ezsignformfieldgroup_label
    cJSON *s_ezsignformfieldgroup_label = cJSON_GetObjectItemCaseSensitive(custom_prefill_ezsignform_value_requestJSON, "sEzsignformfieldgroupLabel");
    if (cJSON_IsNull(s_ezsignformfieldgroup_label)) {
        s_ezsignformfieldgroup_label = NULL;
    }
    if (!s_ezsignformfieldgroup_label) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignformfieldgroup_label))
    {
    goto end; //String
    }

    // custom_prefill_ezsignform_value_request->s_ezsignformfield_label
    cJSON *s_ezsignformfield_label = cJSON_GetObjectItemCaseSensitive(custom_prefill_ezsignform_value_requestJSON, "sEzsignformfieldLabel");
    if (cJSON_IsNull(s_ezsignformfield_label)) {
        s_ezsignformfield_label = NULL;
    }
    if (s_ezsignformfield_label) { 
    if(!cJSON_IsString(s_ezsignformfield_label) && !cJSON_IsNull(s_ezsignformfield_label))
    {
    goto end; //String
    }
    }

    // custom_prefill_ezsignform_value_request->s_ezsignformfield_enteredvalue
    cJSON *s_ezsignformfield_enteredvalue = cJSON_GetObjectItemCaseSensitive(custom_prefill_ezsignform_value_requestJSON, "sEzsignformfieldEnteredvalue");
    if (cJSON_IsNull(s_ezsignformfield_enteredvalue)) {
        s_ezsignformfield_enteredvalue = NULL;
    }
    if (s_ezsignformfield_enteredvalue) { 
    if(!cJSON_IsString(s_ezsignformfield_enteredvalue) && !cJSON_IsNull(s_ezsignformfield_enteredvalue))
    {
    goto end; //String
    }
    }

    // custom_prefill_ezsignform_value_request->b_ezsignformfield_selected
    cJSON *b_ezsignformfield_selected = cJSON_GetObjectItemCaseSensitive(custom_prefill_ezsignform_value_requestJSON, "bEzsignformfieldSelected");
    if (cJSON_IsNull(b_ezsignformfield_selected)) {
        b_ezsignformfield_selected = NULL;
    }
    if (b_ezsignformfield_selected) { 
    if(!cJSON_IsBool(b_ezsignformfield_selected))
    {
    goto end; //Bool
    }
    b_ezsignformfield_selected_local_var = malloc(sizeof(int));
    if(!b_ezsignformfield_selected_local_var)
    {
        goto end;
    }
    *b_ezsignformfield_selected_local_var = b_ezsignformfield_selected->valueint;
    }


    if (s_ezsignformfieldgroup_label && !cJSON_IsNull(s_ezsignformfieldgroup_label)) s_ezsignformfieldgroup_label_local_str = strdup(s_ezsignformfieldgroup_label->valuestring);
    if (s_ezsignformfield_label && !cJSON_IsNull(s_ezsignformfield_label)) s_ezsignformfield_label_local_str = strdup(s_ezsignformfield_label->valuestring);
    if (s_ezsignformfield_enteredvalue && !cJSON_IsNull(s_ezsignformfield_enteredvalue)) s_ezsignformfield_enteredvalue_local_str = strdup(s_ezsignformfield_enteredvalue->valuestring);

    custom_prefill_ezsignform_value_request_local_var = custom_prefill_ezsignform_value_request_create_internal (
        s_ezsignformfieldgroup_label_local_str,
        s_ezsignformfield_label_local_str,
        s_ezsignformfield_enteredvalue_local_str,
        b_ezsignformfield_selected_local_var
        );

    if (!custom_prefill_ezsignform_value_request_local_var) {
        goto end;
    }

    return custom_prefill_ezsignform_value_request_local_var;
end:
    if (s_ezsignformfieldgroup_label_local_str) {
        free(s_ezsignformfieldgroup_label_local_str);
        s_ezsignformfieldgroup_label_local_str = NULL;
    }
    if (s_ezsignformfield_label_local_str) {
        free(s_ezsignformfield_label_local_str);
        s_ezsignformfield_label_local_str = NULL;
    }
    if (s_ezsignformfield_enteredvalue_local_str) {
        free(s_ezsignformfield_enteredvalue_local_str);
        s_ezsignformfield_enteredvalue_local_str = NULL;
    }
    if (b_ezsignformfield_selected_local_var) {
        free(b_ezsignformfield_selected_local_var);
        b_ezsignformfield_selected_local_var = NULL;
    }
    return NULL;

}
