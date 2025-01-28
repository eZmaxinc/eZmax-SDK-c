#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_ezsignformfield_request.h"



static custom_ezsignformfield_request_t *custom_ezsignformfield_request_create_internal(
    int pki_ezsignformfield_id,
    char *s_ezsignformfield_label,
    int b_ezsignformfield_selected,
    char *s_ezsignformfield_enteredvalue
    ) {
    custom_ezsignformfield_request_t *custom_ezsignformfield_request_local_var = malloc(sizeof(custom_ezsignformfield_request_t));
    if (!custom_ezsignformfield_request_local_var) {
        return NULL;
    }
    custom_ezsignformfield_request_local_var->pki_ezsignformfield_id = pki_ezsignformfield_id;
    custom_ezsignformfield_request_local_var->s_ezsignformfield_label = s_ezsignformfield_label;
    custom_ezsignformfield_request_local_var->b_ezsignformfield_selected = b_ezsignformfield_selected;
    custom_ezsignformfield_request_local_var->s_ezsignformfield_enteredvalue = s_ezsignformfield_enteredvalue;

    custom_ezsignformfield_request_local_var->_library_owned = 1;
    return custom_ezsignformfield_request_local_var;
}

__attribute__((deprecated)) custom_ezsignformfield_request_t *custom_ezsignformfield_request_create(
    int pki_ezsignformfield_id,
    char *s_ezsignformfield_label,
    int b_ezsignformfield_selected,
    char *s_ezsignformfield_enteredvalue
    ) {
    return custom_ezsignformfield_request_create_internal (
        pki_ezsignformfield_id,
        s_ezsignformfield_label,
        b_ezsignformfield_selected,
        s_ezsignformfield_enteredvalue
        );
}

void custom_ezsignformfield_request_free(custom_ezsignformfield_request_t *custom_ezsignformfield_request) {
    if(NULL == custom_ezsignformfield_request){
        return ;
    }
    if(custom_ezsignformfield_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_ezsignformfield_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (custom_ezsignformfield_request->s_ezsignformfield_label) {
        free(custom_ezsignformfield_request->s_ezsignformfield_label);
        custom_ezsignformfield_request->s_ezsignformfield_label = NULL;
    }
    if (custom_ezsignformfield_request->s_ezsignformfield_enteredvalue) {
        free(custom_ezsignformfield_request->s_ezsignformfield_enteredvalue);
        custom_ezsignformfield_request->s_ezsignformfield_enteredvalue = NULL;
    }
    free(custom_ezsignformfield_request);
}

cJSON *custom_ezsignformfield_request_convertToJSON(custom_ezsignformfield_request_t *custom_ezsignformfield_request) {
    cJSON *item = cJSON_CreateObject();

    // custom_ezsignformfield_request->pki_ezsignformfield_id
    if(custom_ezsignformfield_request->pki_ezsignformfield_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsignformfieldID", custom_ezsignformfield_request->pki_ezsignformfield_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_ezsignformfield_request->s_ezsignformfield_label
    if(custom_ezsignformfield_request->s_ezsignformfield_label) {
    if(cJSON_AddStringToObject(item, "sEzsignformfieldLabel", custom_ezsignformfield_request->s_ezsignformfield_label) == NULL) {
    goto fail; //String
    }
    }


    // custom_ezsignformfield_request->b_ezsignformfield_selected
    if(custom_ezsignformfield_request->b_ezsignformfield_selected) {
    if(cJSON_AddBoolToObject(item, "bEzsignformfieldSelected", custom_ezsignformfield_request->b_ezsignformfield_selected) == NULL) {
    goto fail; //Bool
    }
    }


    // custom_ezsignformfield_request->s_ezsignformfield_enteredvalue
    if(custom_ezsignformfield_request->s_ezsignformfield_enteredvalue) {
    if(cJSON_AddStringToObject(item, "sEzsignformfieldEnteredvalue", custom_ezsignformfield_request->s_ezsignformfield_enteredvalue) == NULL) {
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

custom_ezsignformfield_request_t *custom_ezsignformfield_request_parseFromJSON(cJSON *custom_ezsignformfield_requestJSON){

    custom_ezsignformfield_request_t *custom_ezsignformfield_request_local_var = NULL;

    // custom_ezsignformfield_request->pki_ezsignformfield_id
    cJSON *pki_ezsignformfield_id = cJSON_GetObjectItemCaseSensitive(custom_ezsignformfield_requestJSON, "pkiEzsignformfieldID");
    if (cJSON_IsNull(pki_ezsignformfield_id)) {
        pki_ezsignformfield_id = NULL;
    }
    if (pki_ezsignformfield_id) { 
    if(!cJSON_IsNumber(pki_ezsignformfield_id))
    {
    goto end; //Numeric
    }
    }

    // custom_ezsignformfield_request->s_ezsignformfield_label
    cJSON *s_ezsignformfield_label = cJSON_GetObjectItemCaseSensitive(custom_ezsignformfield_requestJSON, "sEzsignformfieldLabel");
    if (cJSON_IsNull(s_ezsignformfield_label)) {
        s_ezsignformfield_label = NULL;
    }
    if (s_ezsignformfield_label) { 
    if(!cJSON_IsString(s_ezsignformfield_label) && !cJSON_IsNull(s_ezsignformfield_label))
    {
    goto end; //String
    }
    }

    // custom_ezsignformfield_request->b_ezsignformfield_selected
    cJSON *b_ezsignformfield_selected = cJSON_GetObjectItemCaseSensitive(custom_ezsignformfield_requestJSON, "bEzsignformfieldSelected");
    if (cJSON_IsNull(b_ezsignformfield_selected)) {
        b_ezsignformfield_selected = NULL;
    }
    if (b_ezsignformfield_selected) { 
    if(!cJSON_IsBool(b_ezsignformfield_selected))
    {
    goto end; //Bool
    }
    }

    // custom_ezsignformfield_request->s_ezsignformfield_enteredvalue
    cJSON *s_ezsignformfield_enteredvalue = cJSON_GetObjectItemCaseSensitive(custom_ezsignformfield_requestJSON, "sEzsignformfieldEnteredvalue");
    if (cJSON_IsNull(s_ezsignformfield_enteredvalue)) {
        s_ezsignformfield_enteredvalue = NULL;
    }
    if (s_ezsignformfield_enteredvalue) { 
    if(!cJSON_IsString(s_ezsignformfield_enteredvalue) && !cJSON_IsNull(s_ezsignformfield_enteredvalue))
    {
    goto end; //String
    }
    }


    custom_ezsignformfield_request_local_var = custom_ezsignformfield_request_create_internal (
        pki_ezsignformfield_id ? pki_ezsignformfield_id->valuedouble : 0,
        s_ezsignformfield_label && !cJSON_IsNull(s_ezsignformfield_label) ? strdup(s_ezsignformfield_label->valuestring) : NULL,
        b_ezsignformfield_selected ? b_ezsignformfield_selected->valueint : 0,
        s_ezsignformfield_enteredvalue && !cJSON_IsNull(s_ezsignformfield_enteredvalue) ? strdup(s_ezsignformfield_enteredvalue->valuestring) : NULL
        );

    return custom_ezsignformfield_request_local_var;
end:
    return NULL;

}
