#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "creditcardtype_autocomplete_element_response.h"



static creditcardtype_autocomplete_element_response_t *creditcardtype_autocomplete_element_response_create_internal(
    char *s_creditcardtype_name,
    int pki_creditcardtype_id,
    ezmax_api_definition__full_field_e_creditcardtype_codename__e e_creditcardtype_codename
    ) {
    creditcardtype_autocomplete_element_response_t *creditcardtype_autocomplete_element_response_local_var = malloc(sizeof(creditcardtype_autocomplete_element_response_t));
    if (!creditcardtype_autocomplete_element_response_local_var) {
        return NULL;
    }
    creditcardtype_autocomplete_element_response_local_var->s_creditcardtype_name = s_creditcardtype_name;
    creditcardtype_autocomplete_element_response_local_var->pki_creditcardtype_id = pki_creditcardtype_id;
    creditcardtype_autocomplete_element_response_local_var->e_creditcardtype_codename = e_creditcardtype_codename;

    creditcardtype_autocomplete_element_response_local_var->_library_owned = 1;
    return creditcardtype_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) creditcardtype_autocomplete_element_response_t *creditcardtype_autocomplete_element_response_create(
    char *s_creditcardtype_name,
    int pki_creditcardtype_id,
    ezmax_api_definition__full_field_e_creditcardtype_codename__e e_creditcardtype_codename
    ) {
    return creditcardtype_autocomplete_element_response_create_internal (
        s_creditcardtype_name,
        pki_creditcardtype_id,
        e_creditcardtype_codename
        );
}

void creditcardtype_autocomplete_element_response_free(creditcardtype_autocomplete_element_response_t *creditcardtype_autocomplete_element_response) {
    if(NULL == creditcardtype_autocomplete_element_response){
        return ;
    }
    if(creditcardtype_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "creditcardtype_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (creditcardtype_autocomplete_element_response->s_creditcardtype_name) {
        free(creditcardtype_autocomplete_element_response->s_creditcardtype_name);
        creditcardtype_autocomplete_element_response->s_creditcardtype_name = NULL;
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
    if (ezmax_api_definition__full_field_e_creditcardtype_codename__NULL == creditcardtype_autocomplete_element_response->e_creditcardtype_codename) {
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
    ezmax_api_definition__full_field_e_creditcardtype_codename__e e_creditcardtype_codename_local_nonprim = 0;

    // creditcardtype_autocomplete_element_response->s_creditcardtype_name
    cJSON *s_creditcardtype_name = cJSON_GetObjectItemCaseSensitive(creditcardtype_autocomplete_element_responseJSON, "sCreditcardtypeName");
    if (cJSON_IsNull(s_creditcardtype_name)) {
        s_creditcardtype_name = NULL;
    }
    if (!s_creditcardtype_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_creditcardtype_name))
    {
    goto end; //String
    }

    // creditcardtype_autocomplete_element_response->pki_creditcardtype_id
    cJSON *pki_creditcardtype_id = cJSON_GetObjectItemCaseSensitive(creditcardtype_autocomplete_element_responseJSON, "pkiCreditcardtypeID");
    if (cJSON_IsNull(pki_creditcardtype_id)) {
        pki_creditcardtype_id = NULL;
    }
    if (!pki_creditcardtype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_creditcardtype_id))
    {
    goto end; //Numeric
    }

    // creditcardtype_autocomplete_element_response->e_creditcardtype_codename
    cJSON *e_creditcardtype_codename = cJSON_GetObjectItemCaseSensitive(creditcardtype_autocomplete_element_responseJSON, "eCreditcardtypeCodename");
    if (cJSON_IsNull(e_creditcardtype_codename)) {
        e_creditcardtype_codename = NULL;
    }
    if (!e_creditcardtype_codename) {
        goto end;
    }

    
    e_creditcardtype_codename_local_nonprim = field_e_creditcardtype_codename_parseFromJSON(e_creditcardtype_codename); //custom


    creditcardtype_autocomplete_element_response_local_var = creditcardtype_autocomplete_element_response_create_internal (
        strdup(s_creditcardtype_name->valuestring),
        pki_creditcardtype_id->valuedouble,
        e_creditcardtype_codename_local_nonprim
        );

    return creditcardtype_autocomplete_element_response_local_var;
end:
    if (e_creditcardtype_codename_local_nonprim) {
        e_creditcardtype_codename_local_nonprim = 0;
    }
    return NULL;

}
