#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "billingentityinternal_autocomplete_element_response.h"



billingentityinternal_autocomplete_element_response_t *billingentityinternal_autocomplete_element_response_create(
    int pki_billingentityinternal_id,
    char *s_billingentityinternal_description_x,
    int b_billingentityinternal_isactive
    ) {
    billingentityinternal_autocomplete_element_response_t *billingentityinternal_autocomplete_element_response_local_var = malloc(sizeof(billingentityinternal_autocomplete_element_response_t));
    if (!billingentityinternal_autocomplete_element_response_local_var) {
        return NULL;
    }
    billingentityinternal_autocomplete_element_response_local_var->pki_billingentityinternal_id = pki_billingentityinternal_id;
    billingentityinternal_autocomplete_element_response_local_var->s_billingentityinternal_description_x = s_billingentityinternal_description_x;
    billingentityinternal_autocomplete_element_response_local_var->b_billingentityinternal_isactive = b_billingentityinternal_isactive;

    return billingentityinternal_autocomplete_element_response_local_var;
}


void billingentityinternal_autocomplete_element_response_free(billingentityinternal_autocomplete_element_response_t *billingentityinternal_autocomplete_element_response) {
    if(NULL == billingentityinternal_autocomplete_element_response){
        return ;
    }
    listEntry_t *listEntry;
    if (billingentityinternal_autocomplete_element_response->s_billingentityinternal_description_x) {
        free(billingentityinternal_autocomplete_element_response->s_billingentityinternal_description_x);
        billingentityinternal_autocomplete_element_response->s_billingentityinternal_description_x = NULL;
    }
    free(billingentityinternal_autocomplete_element_response);
}

cJSON *billingentityinternal_autocomplete_element_response_convertToJSON(billingentityinternal_autocomplete_element_response_t *billingentityinternal_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // billingentityinternal_autocomplete_element_response->pki_billingentityinternal_id
    if (!billingentityinternal_autocomplete_element_response->pki_billingentityinternal_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiBillingentityinternalID", billingentityinternal_autocomplete_element_response->pki_billingentityinternal_id) == NULL) {
    goto fail; //Numeric
    }


    // billingentityinternal_autocomplete_element_response->s_billingentityinternal_description_x
    if (!billingentityinternal_autocomplete_element_response->s_billingentityinternal_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sBillingentityinternalDescriptionX", billingentityinternal_autocomplete_element_response->s_billingentityinternal_description_x) == NULL) {
    goto fail; //String
    }


    // billingentityinternal_autocomplete_element_response->b_billingentityinternal_isactive
    if (!billingentityinternal_autocomplete_element_response->b_billingentityinternal_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bBillingentityinternalIsactive", billingentityinternal_autocomplete_element_response->b_billingentityinternal_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

billingentityinternal_autocomplete_element_response_t *billingentityinternal_autocomplete_element_response_parseFromJSON(cJSON *billingentityinternal_autocomplete_element_responseJSON){

    billingentityinternal_autocomplete_element_response_t *billingentityinternal_autocomplete_element_response_local_var = NULL;

    // billingentityinternal_autocomplete_element_response->pki_billingentityinternal_id
    cJSON *pki_billingentityinternal_id = cJSON_GetObjectItemCaseSensitive(billingentityinternal_autocomplete_element_responseJSON, "pkiBillingentityinternalID");
    if (!pki_billingentityinternal_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_billingentityinternal_id))
    {
    goto end; //Numeric
    }

    // billingentityinternal_autocomplete_element_response->s_billingentityinternal_description_x
    cJSON *s_billingentityinternal_description_x = cJSON_GetObjectItemCaseSensitive(billingentityinternal_autocomplete_element_responseJSON, "sBillingentityinternalDescriptionX");
    if (!s_billingentityinternal_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_billingentityinternal_description_x))
    {
    goto end; //String
    }

    // billingentityinternal_autocomplete_element_response->b_billingentityinternal_isactive
    cJSON *b_billingentityinternal_isactive = cJSON_GetObjectItemCaseSensitive(billingentityinternal_autocomplete_element_responseJSON, "bBillingentityinternalIsactive");
    if (!b_billingentityinternal_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_billingentityinternal_isactive))
    {
    goto end; //Bool
    }


    billingentityinternal_autocomplete_element_response_local_var = billingentityinternal_autocomplete_element_response_create (
        pki_billingentityinternal_id->valuedouble,
        strdup(s_billingentityinternal_description_x->valuestring),
        b_billingentityinternal_isactive->valueint
        );

    return billingentityinternal_autocomplete_element_response_local_var;
end:
    return NULL;

}
