#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "creditcardtype_autocomplete_element_response.h"


char* creditcardtype_autocomplete_element_response_e_creditcardtype_codename_ToString(ezmax_api_definition__full_creditcardtype_autocomplete_element_response__e e_creditcardtype_codename) {
    char* e_creditcardtype_codenameArray[] =  { "NULL", "Amex", "Mastercard", "Visa" };
    return e_creditcardtype_codenameArray[e_creditcardtype_codename];
}

ezmax_api_definition__full_creditcardtype_autocomplete_element_response__e creditcardtype_autocomplete_element_response_e_creditcardtype_codename_FromString(char* e_creditcardtype_codename){
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

creditcardtype_autocomplete_element_response_t *creditcardtype_autocomplete_element_response_create(
    char *s_creditcardtype_name,
    int pki_creditcardtype_id,
    field_e_creditcardtype_codename_t *e_creditcardtype_codename
    ) {
    creditcardtype_autocomplete_element_response_t *creditcardtype_autocomplete_element_response_local_var = malloc(sizeof(creditcardtype_autocomplete_element_response_t));
    if (!creditcardtype_autocomplete_element_response_local_var) {
        return NULL;
    }
    creditcardtype_autocomplete_element_response_local_var->s_creditcardtype_name = s_creditcardtype_name;
    creditcardtype_autocomplete_element_response_local_var->pki_creditcardtype_id = pki_creditcardtype_id;
    creditcardtype_autocomplete_element_response_local_var->e_creditcardtype_codename = e_creditcardtype_codename;

    return creditcardtype_autocomplete_element_response_local_var;
}


void creditcardtype_autocomplete_element_response_free(creditcardtype_autocomplete_element_response_t *creditcardtype_autocomplete_element_response) {
    if(NULL == creditcardtype_autocomplete_element_response){
        return ;
    }
    listEntry_t *listEntry;
    if (creditcardtype_autocomplete_element_response->s_creditcardtype_name) {
        free(creditcardtype_autocomplete_element_response->s_creditcardtype_name);
        creditcardtype_autocomplete_element_response->s_creditcardtype_name = NULL;
    }
    if (creditcardtype_autocomplete_element_response->e_creditcardtype_codename) {
        field_e_creditcardtype_codename_free(creditcardtype_autocomplete_element_response->e_creditcardtype_codename);
        creditcardtype_autocomplete_element_response->e_creditcardtype_codename = NULL;
    }
    free(creditcardtype_autocomplete_element_response);
}

cJSON *creditcardtype_autocomplete_element_response_convertToJSON(creditcardtype_autocomplete_element_response_t *creditcardtype_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // creditcardtype_autocomplete_element_response->s_creditcardtype_name
    if (!creditcardtype_autocomplete_element_response->s_creditcardtype_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCreditcardtypeName", creditcardtype_autocomplete_element_response->s_creditcardtype_name) == NULL) {
    goto fail; //String
    }


    // creditcardtype_autocomplete_element_response->pki_creditcardtype_id
    if (!creditcardtype_autocomplete_element_response->pki_creditcardtype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiCreditcardtypeID", creditcardtype_autocomplete_element_response->pki_creditcardtype_id) == NULL) {
    goto fail; //Numeric
    }


    // creditcardtype_autocomplete_element_response->e_creditcardtype_codename
    if (ezmax_api_definition__full_creditcardtype_autocomplete_element_response__NULL == creditcardtype_autocomplete_element_response->e_creditcardtype_codename) {
        goto fail;
    }
    cJSON *e_creditcardtype_codename_local_JSON = field_e_creditcardtype_codename_convertToJSON(creditcardtype_autocomplete_element_response->e_creditcardtype_codename);
    if(e_creditcardtype_codename_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eCreditcardtypeCodename", e_creditcardtype_codename_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

creditcardtype_autocomplete_element_response_t *creditcardtype_autocomplete_element_response_parseFromJSON(cJSON *creditcardtype_autocomplete_element_responseJSON){

    creditcardtype_autocomplete_element_response_t *creditcardtype_autocomplete_element_response_local_var = NULL;

    // define the local variable for creditcardtype_autocomplete_element_response->e_creditcardtype_codename
    field_e_creditcardtype_codename_t *e_creditcardtype_codename_local_nonprim = NULL;

    // creditcardtype_autocomplete_element_response->s_creditcardtype_name
    cJSON *s_creditcardtype_name = cJSON_GetObjectItemCaseSensitive(creditcardtype_autocomplete_element_responseJSON, "sCreditcardtypeName");
    if (!s_creditcardtype_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_creditcardtype_name))
    {
    goto end; //String
    }

    // creditcardtype_autocomplete_element_response->pki_creditcardtype_id
    cJSON *pki_creditcardtype_id = cJSON_GetObjectItemCaseSensitive(creditcardtype_autocomplete_element_responseJSON, "pkiCreditcardtypeID");
    if (!pki_creditcardtype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_creditcardtype_id))
    {
    goto end; //Numeric
    }

    // creditcardtype_autocomplete_element_response->e_creditcardtype_codename
    cJSON *e_creditcardtype_codename = cJSON_GetObjectItemCaseSensitive(creditcardtype_autocomplete_element_responseJSON, "eCreditcardtypeCodename");
    if (!e_creditcardtype_codename) {
        goto end;
    }

    
    e_creditcardtype_codename_local_nonprim = field_e_creditcardtype_codename_parseFromJSON(e_creditcardtype_codename); //custom


    creditcardtype_autocomplete_element_response_local_var = creditcardtype_autocomplete_element_response_create (
        strdup(s_creditcardtype_name->valuestring),
        pki_creditcardtype_id->valuedouble,
        e_creditcardtype_codename_local_nonprim
        );

    return creditcardtype_autocomplete_element_response_local_var;
end:
    if (e_creditcardtype_codename_local_nonprim) {
        field_e_creditcardtype_codename_free(e_creditcardtype_codename_local_nonprim);
        e_creditcardtype_codename_local_nonprim = NULL;
    }
    return NULL;

}
