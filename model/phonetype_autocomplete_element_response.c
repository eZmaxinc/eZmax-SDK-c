#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "phonetype_autocomplete_element_response.h"



static phonetype_autocomplete_element_response_t *phonetype_autocomplete_element_response_create_internal(
    int *pki_phonetype_id,
    char *s_phonetype_name_x,
    int *b_phonetype_isactive
    ) {
    phonetype_autocomplete_element_response_t *phonetype_autocomplete_element_response_local_var = malloc(sizeof(phonetype_autocomplete_element_response_t));
    if (!phonetype_autocomplete_element_response_local_var) {
        return NULL;
    }
    memset(phonetype_autocomplete_element_response_local_var, 0, sizeof(phonetype_autocomplete_element_response_t));
    phonetype_autocomplete_element_response_local_var->_library_owned = 1;
    phonetype_autocomplete_element_response_local_var->pki_phonetype_id = pki_phonetype_id;
    phonetype_autocomplete_element_response_local_var->s_phonetype_name_x = s_phonetype_name_x;
    phonetype_autocomplete_element_response_local_var->b_phonetype_isactive = b_phonetype_isactive;
    return phonetype_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) phonetype_autocomplete_element_response_t *phonetype_autocomplete_element_response_create(
    int *pki_phonetype_id,
    char *s_phonetype_name_x,
    int *b_phonetype_isactive
    ) {
    int *pki_phonetype_id_copy = NULL;
    if (pki_phonetype_id) {
        pki_phonetype_id_copy = malloc(sizeof(int));
        if (pki_phonetype_id_copy) *pki_phonetype_id_copy = *pki_phonetype_id;
    }
    int *b_phonetype_isactive_copy = NULL;
    if (b_phonetype_isactive) {
        b_phonetype_isactive_copy = malloc(sizeof(int));
        if (b_phonetype_isactive_copy) *b_phonetype_isactive_copy = *b_phonetype_isactive;
    }
    phonetype_autocomplete_element_response_t *result = phonetype_autocomplete_element_response_create_internal (
        pki_phonetype_id_copy,
        s_phonetype_name_x,
        b_phonetype_isactive_copy
        );
    if (!result) {
        free(pki_phonetype_id_copy);
        free(b_phonetype_isactive_copy);
    }
    return result;
}

void phonetype_autocomplete_element_response_free(phonetype_autocomplete_element_response_t *phonetype_autocomplete_element_response) {
    if(NULL == phonetype_autocomplete_element_response){
        return ;
    }
    if(phonetype_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "phonetype_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (phonetype_autocomplete_element_response->pki_phonetype_id) {
        free(phonetype_autocomplete_element_response->pki_phonetype_id);
        phonetype_autocomplete_element_response->pki_phonetype_id = NULL;
    }
    if (phonetype_autocomplete_element_response->s_phonetype_name_x) {
        free(phonetype_autocomplete_element_response->s_phonetype_name_x);
        phonetype_autocomplete_element_response->s_phonetype_name_x = NULL;
    }
    if (phonetype_autocomplete_element_response->b_phonetype_isactive) {
        free(phonetype_autocomplete_element_response->b_phonetype_isactive);
        phonetype_autocomplete_element_response->b_phonetype_isactive = NULL;
    }
    free(phonetype_autocomplete_element_response);
}

cJSON *phonetype_autocomplete_element_response_convertToJSON(phonetype_autocomplete_element_response_t *phonetype_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // phonetype_autocomplete_element_response->pki_phonetype_id
    if (!phonetype_autocomplete_element_response->pki_phonetype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiPhonetypeID", *phonetype_autocomplete_element_response->pki_phonetype_id) == NULL) {
    goto fail; //Numeric
    }


    // phonetype_autocomplete_element_response->s_phonetype_name_x
    if (!phonetype_autocomplete_element_response->s_phonetype_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sPhonetypeNameX", phonetype_autocomplete_element_response->s_phonetype_name_x) == NULL) {
    goto fail; //String
    }


    // phonetype_autocomplete_element_response->b_phonetype_isactive
    if (!phonetype_autocomplete_element_response->b_phonetype_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bPhonetypeIsactive", *phonetype_autocomplete_element_response->b_phonetype_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

phonetype_autocomplete_element_response_t *phonetype_autocomplete_element_response_parseFromJSON(cJSON *phonetype_autocomplete_element_responseJSON){

    phonetype_autocomplete_element_response_t *phonetype_autocomplete_element_response_local_var = NULL;

    // define the local variable for phonetype_autocomplete_element_response->pki_phonetype_id
    int *pki_phonetype_id_local_var = NULL;

    char *s_phonetype_name_x_local_str = NULL;

    // define the local variable for phonetype_autocomplete_element_response->b_phonetype_isactive
    int *b_phonetype_isactive_local_var = NULL;

    // phonetype_autocomplete_element_response->pki_phonetype_id
    cJSON *pki_phonetype_id = cJSON_GetObjectItemCaseSensitive(phonetype_autocomplete_element_responseJSON, "pkiPhonetypeID");
    if (cJSON_IsNull(pki_phonetype_id)) {
        pki_phonetype_id = NULL;
    }
    if (!pki_phonetype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_phonetype_id))
    {
    goto end; //Numeric
    }
    pki_phonetype_id_local_var = malloc(sizeof(int));
    if(!pki_phonetype_id_local_var)
    {
        goto end;
    }
    *pki_phonetype_id_local_var = pki_phonetype_id->valuedouble;

    // phonetype_autocomplete_element_response->s_phonetype_name_x
    cJSON *s_phonetype_name_x = cJSON_GetObjectItemCaseSensitive(phonetype_autocomplete_element_responseJSON, "sPhonetypeNameX");
    if (cJSON_IsNull(s_phonetype_name_x)) {
        s_phonetype_name_x = NULL;
    }
    if (!s_phonetype_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_phonetype_name_x))
    {
    goto end; //String
    }

    // phonetype_autocomplete_element_response->b_phonetype_isactive
    cJSON *b_phonetype_isactive = cJSON_GetObjectItemCaseSensitive(phonetype_autocomplete_element_responseJSON, "bPhonetypeIsactive");
    if (cJSON_IsNull(b_phonetype_isactive)) {
        b_phonetype_isactive = NULL;
    }
    if (!b_phonetype_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_phonetype_isactive))
    {
    goto end; //Bool
    }
    b_phonetype_isactive_local_var = malloc(sizeof(int));
    if(!b_phonetype_isactive_local_var)
    {
        goto end;
    }
    *b_phonetype_isactive_local_var = b_phonetype_isactive->valueint;


    if (s_phonetype_name_x && !cJSON_IsNull(s_phonetype_name_x)) s_phonetype_name_x_local_str = strdup(s_phonetype_name_x->valuestring);

    phonetype_autocomplete_element_response_local_var = phonetype_autocomplete_element_response_create_internal (
        pki_phonetype_id_local_var,
        s_phonetype_name_x_local_str,
        b_phonetype_isactive_local_var
        );

    if (!phonetype_autocomplete_element_response_local_var) {
        goto end;
    }

    return phonetype_autocomplete_element_response_local_var;
end:
    if (pki_phonetype_id_local_var) {
        free(pki_phonetype_id_local_var);
        pki_phonetype_id_local_var = NULL;
    }
    if (s_phonetype_name_x_local_str) {
        free(s_phonetype_name_x_local_str);
        s_phonetype_name_x_local_str = NULL;
    }
    if (b_phonetype_isactive_local_var) {
        free(b_phonetype_isactive_local_var);
        b_phonetype_isactive_local_var = NULL;
    }
    return NULL;

}
