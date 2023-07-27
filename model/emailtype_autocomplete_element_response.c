#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "emailtype_autocomplete_element_response.h"



emailtype_autocomplete_element_response_t *emailtype_autocomplete_element_response_create(
    int pki_emailtype_id,
    char *s_emailtype_name_x,
    int b_emailtype_isactive
    ) {
    emailtype_autocomplete_element_response_t *emailtype_autocomplete_element_response_local_var = malloc(sizeof(emailtype_autocomplete_element_response_t));
    if (!emailtype_autocomplete_element_response_local_var) {
        return NULL;
    }
    emailtype_autocomplete_element_response_local_var->pki_emailtype_id = pki_emailtype_id;
    emailtype_autocomplete_element_response_local_var->s_emailtype_name_x = s_emailtype_name_x;
    emailtype_autocomplete_element_response_local_var->b_emailtype_isactive = b_emailtype_isactive;

    return emailtype_autocomplete_element_response_local_var;
}


void emailtype_autocomplete_element_response_free(emailtype_autocomplete_element_response_t *emailtype_autocomplete_element_response) {
    if(NULL == emailtype_autocomplete_element_response){
        return ;
    }
    listEntry_t *listEntry;
    if (emailtype_autocomplete_element_response->s_emailtype_name_x) {
        free(emailtype_autocomplete_element_response->s_emailtype_name_x);
        emailtype_autocomplete_element_response->s_emailtype_name_x = NULL;
    }
    free(emailtype_autocomplete_element_response);
}

cJSON *emailtype_autocomplete_element_response_convertToJSON(emailtype_autocomplete_element_response_t *emailtype_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // emailtype_autocomplete_element_response->pki_emailtype_id
    if (!emailtype_autocomplete_element_response->pki_emailtype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEmailtypeID", emailtype_autocomplete_element_response->pki_emailtype_id) == NULL) {
    goto fail; //Numeric
    }


    // emailtype_autocomplete_element_response->s_emailtype_name_x
    if (!emailtype_autocomplete_element_response->s_emailtype_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEmailtypeNameX", emailtype_autocomplete_element_response->s_emailtype_name_x) == NULL) {
    goto fail; //String
    }


    // emailtype_autocomplete_element_response->b_emailtype_isactive
    if (!emailtype_autocomplete_element_response->b_emailtype_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEmailtypeIsactive", emailtype_autocomplete_element_response->b_emailtype_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

emailtype_autocomplete_element_response_t *emailtype_autocomplete_element_response_parseFromJSON(cJSON *emailtype_autocomplete_element_responseJSON){

    emailtype_autocomplete_element_response_t *emailtype_autocomplete_element_response_local_var = NULL;

    // emailtype_autocomplete_element_response->pki_emailtype_id
    cJSON *pki_emailtype_id = cJSON_GetObjectItemCaseSensitive(emailtype_autocomplete_element_responseJSON, "pkiEmailtypeID");
    if (!pki_emailtype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_emailtype_id))
    {
    goto end; //Numeric
    }

    // emailtype_autocomplete_element_response->s_emailtype_name_x
    cJSON *s_emailtype_name_x = cJSON_GetObjectItemCaseSensitive(emailtype_autocomplete_element_responseJSON, "sEmailtypeNameX");
    if (!s_emailtype_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_emailtype_name_x))
    {
    goto end; //String
    }

    // emailtype_autocomplete_element_response->b_emailtype_isactive
    cJSON *b_emailtype_isactive = cJSON_GetObjectItemCaseSensitive(emailtype_autocomplete_element_responseJSON, "bEmailtypeIsactive");
    if (!b_emailtype_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_emailtype_isactive))
    {
    goto end; //Bool
    }


    emailtype_autocomplete_element_response_local_var = emailtype_autocomplete_element_response_create (
        pki_emailtype_id->valuedouble,
        strdup(s_emailtype_name_x->valuestring),
        b_emailtype_isactive->valueint
        );

    return emailtype_autocomplete_element_response_local_var;
end:
    return NULL;

}
