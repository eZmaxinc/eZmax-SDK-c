#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "phonetype_autocomplete_element_response.h"



phonetype_autocomplete_element_response_t *phonetype_autocomplete_element_response_create(
    int pki_phonetype_id,
    char *s_phonetype_name_x,
    int b_phonetype_isactive
    ) {
    phonetype_autocomplete_element_response_t *phonetype_autocomplete_element_response_local_var = malloc(sizeof(phonetype_autocomplete_element_response_t));
    if (!phonetype_autocomplete_element_response_local_var) {
        return NULL;
    }
    phonetype_autocomplete_element_response_local_var->pki_phonetype_id = pki_phonetype_id;
    phonetype_autocomplete_element_response_local_var->s_phonetype_name_x = s_phonetype_name_x;
    phonetype_autocomplete_element_response_local_var->b_phonetype_isactive = b_phonetype_isactive;

    return phonetype_autocomplete_element_response_local_var;
}


void phonetype_autocomplete_element_response_free(phonetype_autocomplete_element_response_t *phonetype_autocomplete_element_response) {
    if(NULL == phonetype_autocomplete_element_response){
        return ;
    }
    listEntry_t *listEntry;
    if (phonetype_autocomplete_element_response->s_phonetype_name_x) {
        free(phonetype_autocomplete_element_response->s_phonetype_name_x);
        phonetype_autocomplete_element_response->s_phonetype_name_x = NULL;
    }
    free(phonetype_autocomplete_element_response);
}

cJSON *phonetype_autocomplete_element_response_convertToJSON(phonetype_autocomplete_element_response_t *phonetype_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // phonetype_autocomplete_element_response->pki_phonetype_id
    if (!phonetype_autocomplete_element_response->pki_phonetype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiPhonetypeID", phonetype_autocomplete_element_response->pki_phonetype_id) == NULL) {
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
    if(cJSON_AddBoolToObject(item, "bPhonetypeIsactive", phonetype_autocomplete_element_response->b_phonetype_isactive) == NULL) {
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

    // phonetype_autocomplete_element_response->pki_phonetype_id
    cJSON *pki_phonetype_id = cJSON_GetObjectItemCaseSensitive(phonetype_autocomplete_element_responseJSON, "pkiPhonetypeID");
    if (!pki_phonetype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_phonetype_id))
    {
    goto end; //Numeric
    }

    // phonetype_autocomplete_element_response->s_phonetype_name_x
    cJSON *s_phonetype_name_x = cJSON_GetObjectItemCaseSensitive(phonetype_autocomplete_element_responseJSON, "sPhonetypeNameX");
    if (!s_phonetype_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_phonetype_name_x))
    {
    goto end; //String
    }

    // phonetype_autocomplete_element_response->b_phonetype_isactive
    cJSON *b_phonetype_isactive = cJSON_GetObjectItemCaseSensitive(phonetype_autocomplete_element_responseJSON, "bPhonetypeIsactive");
    if (!b_phonetype_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_phonetype_isactive))
    {
    goto end; //Bool
    }


    phonetype_autocomplete_element_response_local_var = phonetype_autocomplete_element_response_create (
        pki_phonetype_id->valuedouble,
        strdup(s_phonetype_name_x->valuestring),
        b_phonetype_isactive->valueint
        );

    return phonetype_autocomplete_element_response_local_var;
end:
    return NULL;

}
