#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "glaccount_autocomplete_element_response.h"



glaccount_autocomplete_element_response_t *glaccount_autocomplete_element_response_create(
    int pki_glaccount_id,
    int i_glaccount_code,
    char *s_glaccount_description_x,
    int b_glaccount_isactive
    ) {
    glaccount_autocomplete_element_response_t *glaccount_autocomplete_element_response_local_var = malloc(sizeof(glaccount_autocomplete_element_response_t));
    if (!glaccount_autocomplete_element_response_local_var) {
        return NULL;
    }
    glaccount_autocomplete_element_response_local_var->pki_glaccount_id = pki_glaccount_id;
    glaccount_autocomplete_element_response_local_var->i_glaccount_code = i_glaccount_code;
    glaccount_autocomplete_element_response_local_var->s_glaccount_description_x = s_glaccount_description_x;
    glaccount_autocomplete_element_response_local_var->b_glaccount_isactive = b_glaccount_isactive;

    return glaccount_autocomplete_element_response_local_var;
}


void glaccount_autocomplete_element_response_free(glaccount_autocomplete_element_response_t *glaccount_autocomplete_element_response) {
    if(NULL == glaccount_autocomplete_element_response){
        return ;
    }
    listEntry_t *listEntry;
    if (glaccount_autocomplete_element_response->s_glaccount_description_x) {
        free(glaccount_autocomplete_element_response->s_glaccount_description_x);
        glaccount_autocomplete_element_response->s_glaccount_description_x = NULL;
    }
    free(glaccount_autocomplete_element_response);
}

cJSON *glaccount_autocomplete_element_response_convertToJSON(glaccount_autocomplete_element_response_t *glaccount_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // glaccount_autocomplete_element_response->pki_glaccount_id
    if (!glaccount_autocomplete_element_response->pki_glaccount_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiGlaccountID", glaccount_autocomplete_element_response->pki_glaccount_id) == NULL) {
    goto fail; //Numeric
    }


    // glaccount_autocomplete_element_response->i_glaccount_code
    if (!glaccount_autocomplete_element_response->i_glaccount_code) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iGlaccountCode", glaccount_autocomplete_element_response->i_glaccount_code) == NULL) {
    goto fail; //Numeric
    }


    // glaccount_autocomplete_element_response->s_glaccount_description_x
    if (!glaccount_autocomplete_element_response->s_glaccount_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sGlaccountDescriptionX", glaccount_autocomplete_element_response->s_glaccount_description_x) == NULL) {
    goto fail; //String
    }


    // glaccount_autocomplete_element_response->b_glaccount_isactive
    if (!glaccount_autocomplete_element_response->b_glaccount_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bGlaccountIsactive", glaccount_autocomplete_element_response->b_glaccount_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

glaccount_autocomplete_element_response_t *glaccount_autocomplete_element_response_parseFromJSON(cJSON *glaccount_autocomplete_element_responseJSON){

    glaccount_autocomplete_element_response_t *glaccount_autocomplete_element_response_local_var = NULL;

    // glaccount_autocomplete_element_response->pki_glaccount_id
    cJSON *pki_glaccount_id = cJSON_GetObjectItemCaseSensitive(glaccount_autocomplete_element_responseJSON, "pkiGlaccountID");
    if (!pki_glaccount_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_glaccount_id))
    {
    goto end; //Numeric
    }

    // glaccount_autocomplete_element_response->i_glaccount_code
    cJSON *i_glaccount_code = cJSON_GetObjectItemCaseSensitive(glaccount_autocomplete_element_responseJSON, "iGlaccountCode");
    if (!i_glaccount_code) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_glaccount_code))
    {
    goto end; //Numeric
    }

    // glaccount_autocomplete_element_response->s_glaccount_description_x
    cJSON *s_glaccount_description_x = cJSON_GetObjectItemCaseSensitive(glaccount_autocomplete_element_responseJSON, "sGlaccountDescriptionX");
    if (!s_glaccount_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_glaccount_description_x))
    {
    goto end; //String
    }

    // glaccount_autocomplete_element_response->b_glaccount_isactive
    cJSON *b_glaccount_isactive = cJSON_GetObjectItemCaseSensitive(glaccount_autocomplete_element_responseJSON, "bGlaccountIsactive");
    if (!b_glaccount_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_glaccount_isactive))
    {
    goto end; //Bool
    }


    glaccount_autocomplete_element_response_local_var = glaccount_autocomplete_element_response_create (
        pki_glaccount_id->valuedouble,
        i_glaccount_code->valuedouble,
        strdup(s_glaccount_description_x->valuestring),
        b_glaccount_isactive->valueint
        );

    return glaccount_autocomplete_element_response_local_var;
end:
    return NULL;

}
