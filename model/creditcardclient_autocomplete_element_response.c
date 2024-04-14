#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "creditcardclient_autocomplete_element_response.h"



creditcardclient_autocomplete_element_response_t *creditcardclient_autocomplete_element_response_create(
    int pki_creditcardclient_id,
    char *s_creditcardclient_description,
    int b_creditcardclient_isactive
    ) {
    creditcardclient_autocomplete_element_response_t *creditcardclient_autocomplete_element_response_local_var = malloc(sizeof(creditcardclient_autocomplete_element_response_t));
    if (!creditcardclient_autocomplete_element_response_local_var) {
        return NULL;
    }
    creditcardclient_autocomplete_element_response_local_var->pki_creditcardclient_id = pki_creditcardclient_id;
    creditcardclient_autocomplete_element_response_local_var->s_creditcardclient_description = s_creditcardclient_description;
    creditcardclient_autocomplete_element_response_local_var->b_creditcardclient_isactive = b_creditcardclient_isactive;

    return creditcardclient_autocomplete_element_response_local_var;
}


void creditcardclient_autocomplete_element_response_free(creditcardclient_autocomplete_element_response_t *creditcardclient_autocomplete_element_response) {
    if(NULL == creditcardclient_autocomplete_element_response){
        return ;
    }
    listEntry_t *listEntry;
    if (creditcardclient_autocomplete_element_response->s_creditcardclient_description) {
        free(creditcardclient_autocomplete_element_response->s_creditcardclient_description);
        creditcardclient_autocomplete_element_response->s_creditcardclient_description = NULL;
    }
    free(creditcardclient_autocomplete_element_response);
}

cJSON *creditcardclient_autocomplete_element_response_convertToJSON(creditcardclient_autocomplete_element_response_t *creditcardclient_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // creditcardclient_autocomplete_element_response->pki_creditcardclient_id
    if (!creditcardclient_autocomplete_element_response->pki_creditcardclient_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiCreditcardclientID", creditcardclient_autocomplete_element_response->pki_creditcardclient_id) == NULL) {
    goto fail; //Numeric
    }


    // creditcardclient_autocomplete_element_response->s_creditcardclient_description
    if (!creditcardclient_autocomplete_element_response->s_creditcardclient_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCreditcardclientDescription", creditcardclient_autocomplete_element_response->s_creditcardclient_description) == NULL) {
    goto fail; //String
    }


    // creditcardclient_autocomplete_element_response->b_creditcardclient_isactive
    if (!creditcardclient_autocomplete_element_response->b_creditcardclient_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCreditcardclientIsactive", creditcardclient_autocomplete_element_response->b_creditcardclient_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

creditcardclient_autocomplete_element_response_t *creditcardclient_autocomplete_element_response_parseFromJSON(cJSON *creditcardclient_autocomplete_element_responseJSON){

    creditcardclient_autocomplete_element_response_t *creditcardclient_autocomplete_element_response_local_var = NULL;

    // creditcardclient_autocomplete_element_response->pki_creditcardclient_id
    cJSON *pki_creditcardclient_id = cJSON_GetObjectItemCaseSensitive(creditcardclient_autocomplete_element_responseJSON, "pkiCreditcardclientID");
    if (!pki_creditcardclient_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_creditcardclient_id))
    {
    goto end; //Numeric
    }

    // creditcardclient_autocomplete_element_response->s_creditcardclient_description
    cJSON *s_creditcardclient_description = cJSON_GetObjectItemCaseSensitive(creditcardclient_autocomplete_element_responseJSON, "sCreditcardclientDescription");
    if (!s_creditcardclient_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_creditcardclient_description))
    {
    goto end; //String
    }

    // creditcardclient_autocomplete_element_response->b_creditcardclient_isactive
    cJSON *b_creditcardclient_isactive = cJSON_GetObjectItemCaseSensitive(creditcardclient_autocomplete_element_responseJSON, "bCreditcardclientIsactive");
    if (!b_creditcardclient_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_creditcardclient_isactive))
    {
    goto end; //Bool
    }


    creditcardclient_autocomplete_element_response_local_var = creditcardclient_autocomplete_element_response_create (
        pki_creditcardclient_id->valuedouble,
        strdup(s_creditcardclient_description->valuestring),
        b_creditcardclient_isactive->valueint
        );

    return creditcardclient_autocomplete_element_response_local_var;
end:
    return NULL;

}
