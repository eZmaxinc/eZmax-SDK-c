#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "billingentityexternal_autocomplete_element_response.h"



static billingentityexternal_autocomplete_element_response_t *billingentityexternal_autocomplete_element_response_create_internal(
    int *pki_billingentityexternal_id,
    char *s_billingentityexternal_description,
    int *b_billingentityexternal_isactive
    ) {
    billingentityexternal_autocomplete_element_response_t *billingentityexternal_autocomplete_element_response_local_var = malloc(sizeof(billingentityexternal_autocomplete_element_response_t));
    if (!billingentityexternal_autocomplete_element_response_local_var) {
        return NULL;
    }
    memset(billingentityexternal_autocomplete_element_response_local_var, 0, sizeof(billingentityexternal_autocomplete_element_response_t));
    billingentityexternal_autocomplete_element_response_local_var->_library_owned = 1;
    billingentityexternal_autocomplete_element_response_local_var->pki_billingentityexternal_id = pki_billingentityexternal_id;
    billingentityexternal_autocomplete_element_response_local_var->s_billingentityexternal_description = s_billingentityexternal_description;
    billingentityexternal_autocomplete_element_response_local_var->b_billingentityexternal_isactive = b_billingentityexternal_isactive;
    return billingentityexternal_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) billingentityexternal_autocomplete_element_response_t *billingentityexternal_autocomplete_element_response_create(
    int *pki_billingentityexternal_id,
    char *s_billingentityexternal_description,
    int *b_billingentityexternal_isactive
    ) {
    int *pki_billingentityexternal_id_copy = NULL;
    if (pki_billingentityexternal_id) {
        pki_billingentityexternal_id_copy = malloc(sizeof(int));
        if (pki_billingentityexternal_id_copy) *pki_billingentityexternal_id_copy = *pki_billingentityexternal_id;
    }
    int *b_billingentityexternal_isactive_copy = NULL;
    if (b_billingentityexternal_isactive) {
        b_billingentityexternal_isactive_copy = malloc(sizeof(int));
        if (b_billingentityexternal_isactive_copy) *b_billingentityexternal_isactive_copy = *b_billingentityexternal_isactive;
    }
    billingentityexternal_autocomplete_element_response_t *result = billingentityexternal_autocomplete_element_response_create_internal (
        pki_billingentityexternal_id_copy,
        s_billingentityexternal_description,
        b_billingentityexternal_isactive_copy
        );
    if (!result) {
        free(pki_billingentityexternal_id_copy);
        free(b_billingentityexternal_isactive_copy);
    }
    return result;
}

void billingentityexternal_autocomplete_element_response_free(billingentityexternal_autocomplete_element_response_t *billingentityexternal_autocomplete_element_response) {
    if(NULL == billingentityexternal_autocomplete_element_response){
        return ;
    }
    if(billingentityexternal_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "billingentityexternal_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (billingentityexternal_autocomplete_element_response->pki_billingentityexternal_id) {
        free(billingentityexternal_autocomplete_element_response->pki_billingentityexternal_id);
        billingentityexternal_autocomplete_element_response->pki_billingentityexternal_id = NULL;
    }
    if (billingentityexternal_autocomplete_element_response->s_billingentityexternal_description) {
        free(billingentityexternal_autocomplete_element_response->s_billingentityexternal_description);
        billingentityexternal_autocomplete_element_response->s_billingentityexternal_description = NULL;
    }
    if (billingentityexternal_autocomplete_element_response->b_billingentityexternal_isactive) {
        free(billingentityexternal_autocomplete_element_response->b_billingentityexternal_isactive);
        billingentityexternal_autocomplete_element_response->b_billingentityexternal_isactive = NULL;
    }
    free(billingentityexternal_autocomplete_element_response);
}

cJSON *billingentityexternal_autocomplete_element_response_convertToJSON(billingentityexternal_autocomplete_element_response_t *billingentityexternal_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // billingentityexternal_autocomplete_element_response->pki_billingentityexternal_id
    if (!billingentityexternal_autocomplete_element_response->pki_billingentityexternal_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiBillingentityexternalID", *billingentityexternal_autocomplete_element_response->pki_billingentityexternal_id) == NULL) {
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
    if(cJSON_AddBoolToObject(item, "bBillingentityexternalIsactive", *billingentityexternal_autocomplete_element_response->b_billingentityexternal_isactive) == NULL) {
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

    // define the local variable for billingentityexternal_autocomplete_element_response->pki_billingentityexternal_id
    int *pki_billingentityexternal_id_local_var = NULL;

    char *s_billingentityexternal_description_local_str = NULL;

    // define the local variable for billingentityexternal_autocomplete_element_response->b_billingentityexternal_isactive
    int *b_billingentityexternal_isactive_local_var = NULL;

    // billingentityexternal_autocomplete_element_response->pki_billingentityexternal_id
    cJSON *pki_billingentityexternal_id = cJSON_GetObjectItemCaseSensitive(billingentityexternal_autocomplete_element_responseJSON, "pkiBillingentityexternalID");
    if (cJSON_IsNull(pki_billingentityexternal_id)) {
        pki_billingentityexternal_id = NULL;
    }
    if (!pki_billingentityexternal_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_billingentityexternal_id))
    {
    goto end; //Numeric
    }
    pki_billingentityexternal_id_local_var = malloc(sizeof(int));
    if(!pki_billingentityexternal_id_local_var)
    {
        goto end;
    }
    *pki_billingentityexternal_id_local_var = pki_billingentityexternal_id->valuedouble;

    // billingentityexternal_autocomplete_element_response->s_billingentityexternal_description
    cJSON *s_billingentityexternal_description = cJSON_GetObjectItemCaseSensitive(billingentityexternal_autocomplete_element_responseJSON, "sBillingentityexternalDescription");
    if (cJSON_IsNull(s_billingentityexternal_description)) {
        s_billingentityexternal_description = NULL;
    }
    if (!s_billingentityexternal_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_billingentityexternal_description))
    {
    goto end; //String
    }

    // billingentityexternal_autocomplete_element_response->b_billingentityexternal_isactive
    cJSON *b_billingentityexternal_isactive = cJSON_GetObjectItemCaseSensitive(billingentityexternal_autocomplete_element_responseJSON, "bBillingentityexternalIsactive");
    if (cJSON_IsNull(b_billingentityexternal_isactive)) {
        b_billingentityexternal_isactive = NULL;
    }
    if (!b_billingentityexternal_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_billingentityexternal_isactive))
    {
    goto end; //Bool
    }
    b_billingentityexternal_isactive_local_var = malloc(sizeof(int));
    if(!b_billingentityexternal_isactive_local_var)
    {
        goto end;
    }
    *b_billingentityexternal_isactive_local_var = b_billingentityexternal_isactive->valueint;


    if (s_billingentityexternal_description && !cJSON_IsNull(s_billingentityexternal_description)) s_billingentityexternal_description_local_str = strdup(s_billingentityexternal_description->valuestring);

    billingentityexternal_autocomplete_element_response_local_var = billingentityexternal_autocomplete_element_response_create_internal (
        pki_billingentityexternal_id_local_var,
        s_billingentityexternal_description_local_str,
        b_billingentityexternal_isactive_local_var
        );

    if (!billingentityexternal_autocomplete_element_response_local_var) {
        goto end;
    }

    return billingentityexternal_autocomplete_element_response_local_var;
end:
    if (pki_billingentityexternal_id_local_var) {
        free(pki_billingentityexternal_id_local_var);
        pki_billingentityexternal_id_local_var = NULL;
    }
    if (s_billingentityexternal_description_local_str) {
        free(s_billingentityexternal_description_local_str);
        s_billingentityexternal_description_local_str = NULL;
    }
    if (b_billingentityexternal_isactive_local_var) {
        free(b_billingentityexternal_isactive_local_var);
        b_billingentityexternal_isactive_local_var = NULL;
    }
    return NULL;

}
