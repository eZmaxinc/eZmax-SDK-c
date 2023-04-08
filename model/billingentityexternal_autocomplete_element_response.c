#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "billingentityexternal_autocomplete_element_response.h"



billingentityexternal_autocomplete_element_response_t *billingentityexternal_autocomplete_element_response_create(
    int pki_billingentityexternal_id,
    char *s_billingentityexternal_description,
    int b_billingentityexternal_isactive
    ) {
    billingentityexternal_autocomplete_element_response_t *billingentityexternal_autocomplete_element_response_local_var = malloc(sizeof(billingentityexternal_autocomplete_element_response_t));
    if (!billingentityexternal_autocomplete_element_response_local_var) {
        return NULL;
    }
    billingentityexternal_autocomplete_element_response_local_var->pki_billingentityexternal_id = pki_billingentityexternal_id;
    billingentityexternal_autocomplete_element_response_local_var->s_billingentityexternal_description = s_billingentityexternal_description;
    billingentityexternal_autocomplete_element_response_local_var->b_billingentityexternal_isactive = b_billingentityexternal_isactive;

    return billingentityexternal_autocomplete_element_response_local_var;
}


void billingentityexternal_autocomplete_element_response_free(billingentityexternal_autocomplete_element_response_t *billingentityexternal_autocomplete_element_response) {
    if(NULL == billingentityexternal_autocomplete_element_response){
        return ;
    }
    listEntry_t *listEntry;
    if (billingentityexternal_autocomplete_element_response->s_billingentityexternal_description) {
        free(billingentityexternal_autocomplete_element_response->s_billingentityexternal_description);
        billingentityexternal_autocomplete_element_response->s_billingentityexternal_description = NULL;
    }
    free(billingentityexternal_autocomplete_element_response);
}

cJSON *billingentityexternal_autocomplete_element_response_convertToJSON(billingentityexternal_autocomplete_element_response_t *billingentityexternal_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // billingentityexternal_autocomplete_element_response->pki_billingentityexternal_id
    if (!billingentityexternal_autocomplete_element_response->pki_billingentityexternal_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiBillingentityexternalID", billingentityexternal_autocomplete_element_response->pki_billingentityexternal_id) == NULL) {
    goto fail; //Numeric
    }


    // billingentityexternal_autocomplete_element_response->s_billingentityexternal_description
    if (!billingentityexternal_autocomplete_element_response->s_billingentityexternal_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sBillingentityexternalDescription", billingentityexternal_autocomplete_element_response->s_billingentityexternal_description) == NULL) {
    goto fail; //String
    }


    // billingentityexternal_autocomplete_element_response->b_billingentityexternal_isactive
    if (!billingentityexternal_autocomplete_element_response->b_billingentityexternal_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bBillingentityexternalIsactive", billingentityexternal_autocomplete_element_response->b_billingentityexternal_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

billingentityexternal_autocomplete_element_response_t *billingentityexternal_autocomplete_element_response_parseFromJSON(cJSON *billingentityexternal_autocomplete_element_responseJSON){

    billingentityexternal_autocomplete_element_response_t *billingentityexternal_autocomplete_element_response_local_var = NULL;

    // billingentityexternal_autocomplete_element_response->pki_billingentityexternal_id
    cJSON *pki_billingentityexternal_id = cJSON_GetObjectItemCaseSensitive(billingentityexternal_autocomplete_element_responseJSON, "pkiBillingentityexternalID");
    if (!pki_billingentityexternal_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_billingentityexternal_id))
    {
    goto end; //Numeric
    }

    // billingentityexternal_autocomplete_element_response->s_billingentityexternal_description
    cJSON *s_billingentityexternal_description = cJSON_GetObjectItemCaseSensitive(billingentityexternal_autocomplete_element_responseJSON, "sBillingentityexternalDescription");
    if (!s_billingentityexternal_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_billingentityexternal_description))
    {
    goto end; //String
    }

    // billingentityexternal_autocomplete_element_response->b_billingentityexternal_isactive
    cJSON *b_billingentityexternal_isactive = cJSON_GetObjectItemCaseSensitive(billingentityexternal_autocomplete_element_responseJSON, "bBillingentityexternalIsactive");
    if (!b_billingentityexternal_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_billingentityexternal_isactive))
    {
    goto end; //Bool
    }


    billingentityexternal_autocomplete_element_response_local_var = billingentityexternal_autocomplete_element_response_create (
        pki_billingentityexternal_id->valuedouble,
        strdup(s_billingentityexternal_description->valuestring),
        b_billingentityexternal_isactive->valueint
        );

    return billingentityexternal_autocomplete_element_response_local_var;
end:
    return NULL;

}
