#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "billingentityinternal_autocomplete_element_response.h"



static billingentityinternal_autocomplete_element_response_t *billingentityinternal_autocomplete_element_response_create_internal(
    int *pki_billingentityinternal_id,
    char *s_billingentityinternal_description_x,
    int *b_billingentityinternal_isactive
    ) {
    billingentityinternal_autocomplete_element_response_t *billingentityinternal_autocomplete_element_response_local_var = malloc(sizeof(billingentityinternal_autocomplete_element_response_t));
    if (!billingentityinternal_autocomplete_element_response_local_var) {
        return NULL;
    }
    memset(billingentityinternal_autocomplete_element_response_local_var, 0, sizeof(billingentityinternal_autocomplete_element_response_t));
    billingentityinternal_autocomplete_element_response_local_var->_library_owned = 1;
    billingentityinternal_autocomplete_element_response_local_var->pki_billingentityinternal_id = pki_billingentityinternal_id;
    billingentityinternal_autocomplete_element_response_local_var->s_billingentityinternal_description_x = s_billingentityinternal_description_x;
    billingentityinternal_autocomplete_element_response_local_var->b_billingentityinternal_isactive = b_billingentityinternal_isactive;
    return billingentityinternal_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) billingentityinternal_autocomplete_element_response_t *billingentityinternal_autocomplete_element_response_create(
    int *pki_billingentityinternal_id,
    char *s_billingentityinternal_description_x,
    int *b_billingentityinternal_isactive
    ) {
    int *pki_billingentityinternal_id_copy = NULL;
    if (pki_billingentityinternal_id) {
        pki_billingentityinternal_id_copy = malloc(sizeof(int));
        if (pki_billingentityinternal_id_copy) *pki_billingentityinternal_id_copy = *pki_billingentityinternal_id;
    }
    int *b_billingentityinternal_isactive_copy = NULL;
    if (b_billingentityinternal_isactive) {
        b_billingentityinternal_isactive_copy = malloc(sizeof(int));
        if (b_billingentityinternal_isactive_copy) *b_billingentityinternal_isactive_copy = *b_billingentityinternal_isactive;
    }
    billingentityinternal_autocomplete_element_response_t *result = billingentityinternal_autocomplete_element_response_create_internal (
        pki_billingentityinternal_id_copy,
        s_billingentityinternal_description_x,
        b_billingentityinternal_isactive_copy
        );
    if (!result) {
        free(pki_billingentityinternal_id_copy);
        free(b_billingentityinternal_isactive_copy);
    }
    return result;
}

void billingentityinternal_autocomplete_element_response_free(billingentityinternal_autocomplete_element_response_t *billingentityinternal_autocomplete_element_response) {
    if(NULL == billingentityinternal_autocomplete_element_response){
        return ;
    }
    if(billingentityinternal_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "billingentityinternal_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (billingentityinternal_autocomplete_element_response->pki_billingentityinternal_id) {
        free(billingentityinternal_autocomplete_element_response->pki_billingentityinternal_id);
        billingentityinternal_autocomplete_element_response->pki_billingentityinternal_id = NULL;
    }
    if (billingentityinternal_autocomplete_element_response->s_billingentityinternal_description_x) {
        free(billingentityinternal_autocomplete_element_response->s_billingentityinternal_description_x);
        billingentityinternal_autocomplete_element_response->s_billingentityinternal_description_x = NULL;
    }
    if (billingentityinternal_autocomplete_element_response->b_billingentityinternal_isactive) {
        free(billingentityinternal_autocomplete_element_response->b_billingentityinternal_isactive);
        billingentityinternal_autocomplete_element_response->b_billingentityinternal_isactive = NULL;
    }
    free(billingentityinternal_autocomplete_element_response);
}

cJSON *billingentityinternal_autocomplete_element_response_convertToJSON(billingentityinternal_autocomplete_element_response_t *billingentityinternal_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // billingentityinternal_autocomplete_element_response->pki_billingentityinternal_id
    if (!billingentityinternal_autocomplete_element_response->pki_billingentityinternal_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiBillingentityinternalID", *billingentityinternal_autocomplete_element_response->pki_billingentityinternal_id) == NULL) {
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
    if(cJSON_AddBoolToObject(item, "bBillingentityinternalIsactive", *billingentityinternal_autocomplete_element_response->b_billingentityinternal_isactive) == NULL) {
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

    // define the local variable for billingentityinternal_autocomplete_element_response->pki_billingentityinternal_id
    int *pki_billingentityinternal_id_local_var = NULL;

    char *s_billingentityinternal_description_x_local_str = NULL;

    // define the local variable for billingentityinternal_autocomplete_element_response->b_billingentityinternal_isactive
    int *b_billingentityinternal_isactive_local_var = NULL;

    // billingentityinternal_autocomplete_element_response->pki_billingentityinternal_id
    cJSON *pki_billingentityinternal_id = cJSON_GetObjectItemCaseSensitive(billingentityinternal_autocomplete_element_responseJSON, "pkiBillingentityinternalID");
    if (cJSON_IsNull(pki_billingentityinternal_id)) {
        pki_billingentityinternal_id = NULL;
    }
    if (!pki_billingentityinternal_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_billingentityinternal_id))
    {
    goto end; //Numeric
    }
    pki_billingentityinternal_id_local_var = malloc(sizeof(int));
    if(!pki_billingentityinternal_id_local_var)
    {
        goto end;
    }
    *pki_billingentityinternal_id_local_var = pki_billingentityinternal_id->valuedouble;

    // billingentityinternal_autocomplete_element_response->s_billingentityinternal_description_x
    cJSON *s_billingentityinternal_description_x = cJSON_GetObjectItemCaseSensitive(billingentityinternal_autocomplete_element_responseJSON, "sBillingentityinternalDescriptionX");
    if (cJSON_IsNull(s_billingentityinternal_description_x)) {
        s_billingentityinternal_description_x = NULL;
    }
    if (!s_billingentityinternal_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_billingentityinternal_description_x))
    {
    goto end; //String
    }

    // billingentityinternal_autocomplete_element_response->b_billingentityinternal_isactive
    cJSON *b_billingentityinternal_isactive = cJSON_GetObjectItemCaseSensitive(billingentityinternal_autocomplete_element_responseJSON, "bBillingentityinternalIsactive");
    if (cJSON_IsNull(b_billingentityinternal_isactive)) {
        b_billingentityinternal_isactive = NULL;
    }
    if (!b_billingentityinternal_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_billingentityinternal_isactive))
    {
    goto end; //Bool
    }
    b_billingentityinternal_isactive_local_var = malloc(sizeof(int));
    if(!b_billingentityinternal_isactive_local_var)
    {
        goto end;
    }
    *b_billingentityinternal_isactive_local_var = b_billingentityinternal_isactive->valueint;


    if (s_billingentityinternal_description_x && !cJSON_IsNull(s_billingentityinternal_description_x)) s_billingentityinternal_description_x_local_str = strdup(s_billingentityinternal_description_x->valuestring);

    billingentityinternal_autocomplete_element_response_local_var = billingentityinternal_autocomplete_element_response_create_internal (
        pki_billingentityinternal_id_local_var,
        s_billingentityinternal_description_x_local_str,
        b_billingentityinternal_isactive_local_var
        );

    if (!billingentityinternal_autocomplete_element_response_local_var) {
        goto end;
    }

    return billingentityinternal_autocomplete_element_response_local_var;
end:
    if (pki_billingentityinternal_id_local_var) {
        free(pki_billingentityinternal_id_local_var);
        pki_billingentityinternal_id_local_var = NULL;
    }
    if (s_billingentityinternal_description_x_local_str) {
        free(s_billingentityinternal_description_x_local_str);
        s_billingentityinternal_description_x_local_str = NULL;
    }
    if (b_billingentityinternal_isactive_local_var) {
        free(b_billingentityinternal_isactive_local_var);
        b_billingentityinternal_isactive_local_var = NULL;
    }
    return NULL;

}
