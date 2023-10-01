#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_creditcardtransaction_response.h"


char* e_creditcardtype_codenamecustom_creditcardtransaction_response_ToString(ezmax_api_definition__full_custom_creditcardtransaction_response__e e_creditcardtype_codename) {
    char* e_creditcardtype_codenameArray[] =  { "NULL", "Amex", "Mastercard", "Visa" };
	return e_creditcardtype_codenameArray[e_creditcardtype_codename];
}

ezmax_api_definition__full_custom_creditcardtransaction_response__e e_creditcardtype_codenamecustom_creditcardtransaction_response_FromString(char* e_creditcardtype_codename){
    int stringToReturn = 0;
    char *e_creditcardtype_codenameArray[] =  { "NULL", "Amex", "Mastercard", "Visa" };
    size_t sizeofArray = sizeof(e_creditcardtype_codenameArray) / sizeof(e_creditcardtype_codenameArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_creditcardtype_codename, e_creditcardtype_codenameArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

custom_creditcardtransaction_response_t *custom_creditcardtransaction_response_create(
    field_e_creditcardtype_codename_t *e_creditcardtype_codename,
    char *d_creditcardtransaction_amount,
    char *s_creditcardtransaction_partiallydecryptednumber,
    char *s_creditcardtransaction_referencenumber
    ) {
    custom_creditcardtransaction_response_t *custom_creditcardtransaction_response_local_var = malloc(sizeof(custom_creditcardtransaction_response_t));
    if (!custom_creditcardtransaction_response_local_var) {
        return NULL;
    }
    custom_creditcardtransaction_response_local_var->e_creditcardtype_codename = e_creditcardtype_codename;
    custom_creditcardtransaction_response_local_var->d_creditcardtransaction_amount = d_creditcardtransaction_amount;
    custom_creditcardtransaction_response_local_var->s_creditcardtransaction_partiallydecryptednumber = s_creditcardtransaction_partiallydecryptednumber;
    custom_creditcardtransaction_response_local_var->s_creditcardtransaction_referencenumber = s_creditcardtransaction_referencenumber;

    return custom_creditcardtransaction_response_local_var;
}


void custom_creditcardtransaction_response_free(custom_creditcardtransaction_response_t *custom_creditcardtransaction_response) {
    if(NULL == custom_creditcardtransaction_response){
        return ;
    }
    listEntry_t *listEntry;
    if (custom_creditcardtransaction_response->e_creditcardtype_codename) {
        field_e_creditcardtype_codename_free(custom_creditcardtransaction_response->e_creditcardtype_codename);
        custom_creditcardtransaction_response->e_creditcardtype_codename = NULL;
    }
    if (custom_creditcardtransaction_response->d_creditcardtransaction_amount) {
        free(custom_creditcardtransaction_response->d_creditcardtransaction_amount);
        custom_creditcardtransaction_response->d_creditcardtransaction_amount = NULL;
    }
    if (custom_creditcardtransaction_response->s_creditcardtransaction_partiallydecryptednumber) {
        free(custom_creditcardtransaction_response->s_creditcardtransaction_partiallydecryptednumber);
        custom_creditcardtransaction_response->s_creditcardtransaction_partiallydecryptednumber = NULL;
    }
    if (custom_creditcardtransaction_response->s_creditcardtransaction_referencenumber) {
        free(custom_creditcardtransaction_response->s_creditcardtransaction_referencenumber);
        custom_creditcardtransaction_response->s_creditcardtransaction_referencenumber = NULL;
    }
    free(custom_creditcardtransaction_response);
}

cJSON *custom_creditcardtransaction_response_convertToJSON(custom_creditcardtransaction_response_t *custom_creditcardtransaction_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_creditcardtransaction_response->e_creditcardtype_codename
    if (ezmax_api_definition__full_custom_creditcardtransaction_response__NULL == custom_creditcardtransaction_response->e_creditcardtype_codename) {
        goto fail;
    }
    cJSON *e_creditcardtype_codename_local_JSON = field_e_creditcardtype_codename_convertToJSON(custom_creditcardtransaction_response->e_creditcardtype_codename);
    if(e_creditcardtype_codename_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eCreditcardtypeCodename", e_creditcardtype_codename_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // custom_creditcardtransaction_response->d_creditcardtransaction_amount
    if (!custom_creditcardtransaction_response->d_creditcardtransaction_amount) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dCreditcardtransactionAmount", custom_creditcardtransaction_response->d_creditcardtransaction_amount) == NULL) {
    goto fail; //String
    }


    // custom_creditcardtransaction_response->s_creditcardtransaction_partiallydecryptednumber
    if (!custom_creditcardtransaction_response->s_creditcardtransaction_partiallydecryptednumber) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCreditcardtransactionPartiallydecryptednumber", custom_creditcardtransaction_response->s_creditcardtransaction_partiallydecryptednumber) == NULL) {
    goto fail; //String
    }


    // custom_creditcardtransaction_response->s_creditcardtransaction_referencenumber
    if (!custom_creditcardtransaction_response->s_creditcardtransaction_referencenumber) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCreditcardtransactionReferencenumber", custom_creditcardtransaction_response->s_creditcardtransaction_referencenumber) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_creditcardtransaction_response_t *custom_creditcardtransaction_response_parseFromJSON(cJSON *custom_creditcardtransaction_responseJSON){

    custom_creditcardtransaction_response_t *custom_creditcardtransaction_response_local_var = NULL;

    // define the local variable for custom_creditcardtransaction_response->e_creditcardtype_codename
    field_e_creditcardtype_codename_t *e_creditcardtype_codename_local_nonprim = NULL;

    // custom_creditcardtransaction_response->e_creditcardtype_codename
    cJSON *e_creditcardtype_codename = cJSON_GetObjectItemCaseSensitive(custom_creditcardtransaction_responseJSON, "eCreditcardtypeCodename");
    if (!e_creditcardtype_codename) {
        goto end;
    }

    
    e_creditcardtype_codename_local_nonprim = field_e_creditcardtype_codename_parseFromJSON(e_creditcardtype_codename); //custom

    // custom_creditcardtransaction_response->d_creditcardtransaction_amount
    cJSON *d_creditcardtransaction_amount = cJSON_GetObjectItemCaseSensitive(custom_creditcardtransaction_responseJSON, "dCreditcardtransactionAmount");
    if (!d_creditcardtransaction_amount) {
        goto end;
    }

    
    if(!cJSON_IsString(d_creditcardtransaction_amount))
    {
    goto end; //String
    }

    // custom_creditcardtransaction_response->s_creditcardtransaction_partiallydecryptednumber
    cJSON *s_creditcardtransaction_partiallydecryptednumber = cJSON_GetObjectItemCaseSensitive(custom_creditcardtransaction_responseJSON, "sCreditcardtransactionPartiallydecryptednumber");
    if (!s_creditcardtransaction_partiallydecryptednumber) {
        goto end;
    }

    
    if(!cJSON_IsString(s_creditcardtransaction_partiallydecryptednumber))
    {
    goto end; //String
    }

    // custom_creditcardtransaction_response->s_creditcardtransaction_referencenumber
    cJSON *s_creditcardtransaction_referencenumber = cJSON_GetObjectItemCaseSensitive(custom_creditcardtransaction_responseJSON, "sCreditcardtransactionReferencenumber");
    if (!s_creditcardtransaction_referencenumber) {
        goto end;
    }

    
    if(!cJSON_IsString(s_creditcardtransaction_referencenumber))
    {
    goto end; //String
    }


    custom_creditcardtransaction_response_local_var = custom_creditcardtransaction_response_create (
        e_creditcardtype_codename_local_nonprim,
        strdup(d_creditcardtransaction_amount->valuestring),
        strdup(s_creditcardtransaction_partiallydecryptednumber->valuestring),
        strdup(s_creditcardtransaction_referencenumber->valuestring)
        );

    return custom_creditcardtransaction_response_local_var;
end:
    if (e_creditcardtype_codename_local_nonprim) {
        field_e_creditcardtype_codename_free(e_creditcardtype_codename_local_nonprim);
        e_creditcardtype_codename_local_nonprim = NULL;
    }
    return NULL;

}
