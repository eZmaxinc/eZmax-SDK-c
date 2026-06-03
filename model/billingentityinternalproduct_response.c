#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "billingentityinternalproduct_response.h"



static billingentityinternalproduct_response_t *billingentityinternalproduct_response_create_internal(
    int *pki_billingentityinternalproduct_id,
    int *fki_billingentityinternal_id,
    char *s_billingentityinternal_description_x,
    int *fki_ezmaxproduct_id,
    char *s_ezmaxproduct_description_x,
    int *fki_billingentityexternal_id,
    char *s_billingentityexternal_description
    ) {
    billingentityinternalproduct_response_t *billingentityinternalproduct_response_local_var = malloc(sizeof(billingentityinternalproduct_response_t));
    if (!billingentityinternalproduct_response_local_var) {
        return NULL;
    }
    memset(billingentityinternalproduct_response_local_var, 0, sizeof(billingentityinternalproduct_response_t));
    billingentityinternalproduct_response_local_var->_library_owned = 1;
    billingentityinternalproduct_response_local_var->pki_billingentityinternalproduct_id = pki_billingentityinternalproduct_id;
    billingentityinternalproduct_response_local_var->fki_billingentityinternal_id = fki_billingentityinternal_id;
    billingentityinternalproduct_response_local_var->s_billingentityinternal_description_x = s_billingentityinternal_description_x;
    billingentityinternalproduct_response_local_var->fki_ezmaxproduct_id = fki_ezmaxproduct_id;
    billingentityinternalproduct_response_local_var->s_ezmaxproduct_description_x = s_ezmaxproduct_description_x;
    billingentityinternalproduct_response_local_var->fki_billingentityexternal_id = fki_billingentityexternal_id;
    billingentityinternalproduct_response_local_var->s_billingentityexternal_description = s_billingentityexternal_description;
    return billingentityinternalproduct_response_local_var;
}

__attribute__((deprecated)) billingentityinternalproduct_response_t *billingentityinternalproduct_response_create(
    int *pki_billingentityinternalproduct_id,
    int *fki_billingentityinternal_id,
    char *s_billingentityinternal_description_x,
    int *fki_ezmaxproduct_id,
    char *s_ezmaxproduct_description_x,
    int *fki_billingentityexternal_id,
    char *s_billingentityexternal_description
    ) {
    int *pki_billingentityinternalproduct_id_copy = NULL;
    if (pki_billingentityinternalproduct_id) {
        pki_billingentityinternalproduct_id_copy = malloc(sizeof(int));
        if (pki_billingentityinternalproduct_id_copy) *pki_billingentityinternalproduct_id_copy = *pki_billingentityinternalproduct_id;
    }
    int *fki_billingentityinternal_id_copy = NULL;
    if (fki_billingentityinternal_id) {
        fki_billingentityinternal_id_copy = malloc(sizeof(int));
        if (fki_billingentityinternal_id_copy) *fki_billingentityinternal_id_copy = *fki_billingentityinternal_id;
    }
    int *fki_ezmaxproduct_id_copy = NULL;
    if (fki_ezmaxproduct_id) {
        fki_ezmaxproduct_id_copy = malloc(sizeof(int));
        if (fki_ezmaxproduct_id_copy) *fki_ezmaxproduct_id_copy = *fki_ezmaxproduct_id;
    }
    int *fki_billingentityexternal_id_copy = NULL;
    if (fki_billingentityexternal_id) {
        fki_billingentityexternal_id_copy = malloc(sizeof(int));
        if (fki_billingentityexternal_id_copy) *fki_billingentityexternal_id_copy = *fki_billingentityexternal_id;
    }
    billingentityinternalproduct_response_t *result = billingentityinternalproduct_response_create_internal (
        pki_billingentityinternalproduct_id_copy,
        fki_billingentityinternal_id_copy,
        s_billingentityinternal_description_x,
        fki_ezmaxproduct_id_copy,
        s_ezmaxproduct_description_x,
        fki_billingentityexternal_id_copy,
        s_billingentityexternal_description
        );
    if (!result) {
        free(pki_billingentityinternalproduct_id_copy);
        free(fki_billingentityinternal_id_copy);
        free(fki_ezmaxproduct_id_copy);
        free(fki_billingentityexternal_id_copy);
    }
    return result;
}

void billingentityinternalproduct_response_free(billingentityinternalproduct_response_t *billingentityinternalproduct_response) {
    if(NULL == billingentityinternalproduct_response){
        return ;
    }
    if(billingentityinternalproduct_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "billingentityinternalproduct_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (billingentityinternalproduct_response->pki_billingentityinternalproduct_id) {
        free(billingentityinternalproduct_response->pki_billingentityinternalproduct_id);
        billingentityinternalproduct_response->pki_billingentityinternalproduct_id = NULL;
    }
    if (billingentityinternalproduct_response->fki_billingentityinternal_id) {
        free(billingentityinternalproduct_response->fki_billingentityinternal_id);
        billingentityinternalproduct_response->fki_billingentityinternal_id = NULL;
    }
    if (billingentityinternalproduct_response->s_billingentityinternal_description_x) {
        free(billingentityinternalproduct_response->s_billingentityinternal_description_x);
        billingentityinternalproduct_response->s_billingentityinternal_description_x = NULL;
    }
    if (billingentityinternalproduct_response->fki_ezmaxproduct_id) {
        free(billingentityinternalproduct_response->fki_ezmaxproduct_id);
        billingentityinternalproduct_response->fki_ezmaxproduct_id = NULL;
    }
    if (billingentityinternalproduct_response->s_ezmaxproduct_description_x) {
        free(billingentityinternalproduct_response->s_ezmaxproduct_description_x);
        billingentityinternalproduct_response->s_ezmaxproduct_description_x = NULL;
    }
    if (billingentityinternalproduct_response->fki_billingentityexternal_id) {
        free(billingentityinternalproduct_response->fki_billingentityexternal_id);
        billingentityinternalproduct_response->fki_billingentityexternal_id = NULL;
    }
    if (billingentityinternalproduct_response->s_billingentityexternal_description) {
        free(billingentityinternalproduct_response->s_billingentityexternal_description);
        billingentityinternalproduct_response->s_billingentityexternal_description = NULL;
    }
    free(billingentityinternalproduct_response);
}

cJSON *billingentityinternalproduct_response_convertToJSON(billingentityinternalproduct_response_t *billingentityinternalproduct_response) {
    cJSON *item = cJSON_CreateObject();

    // billingentityinternalproduct_response->pki_billingentityinternalproduct_id
    if (!billingentityinternalproduct_response->pki_billingentityinternalproduct_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiBillingentityinternalproductID", *billingentityinternalproduct_response->pki_billingentityinternalproduct_id) == NULL) {
    goto fail; //Numeric
    }


    // billingentityinternalproduct_response->fki_billingentityinternal_id
    if (!billingentityinternalproduct_response->fki_billingentityinternal_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiBillingentityinternalID", *billingentityinternalproduct_response->fki_billingentityinternal_id) == NULL) {
    goto fail; //Numeric
    }


    // billingentityinternalproduct_response->s_billingentityinternal_description_x
    if (!billingentityinternalproduct_response->s_billingentityinternal_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sBillingentityinternalDescriptionX", billingentityinternalproduct_response->s_billingentityinternal_description_x) == NULL) {
    goto fail; //String
    }


    // billingentityinternalproduct_response->fki_ezmaxproduct_id
    if (!billingentityinternalproduct_response->fki_ezmaxproduct_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzmaxproductID", *billingentityinternalproduct_response->fki_ezmaxproduct_id) == NULL) {
    goto fail; //Numeric
    }


    // billingentityinternalproduct_response->s_ezmaxproduct_description_x
    if (!billingentityinternalproduct_response->s_ezmaxproduct_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzmaxproductDescriptionX", billingentityinternalproduct_response->s_ezmaxproduct_description_x) == NULL) {
    goto fail; //String
    }


    // billingentityinternalproduct_response->fki_billingentityexternal_id
    if (!billingentityinternalproduct_response->fki_billingentityexternal_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiBillingentityexternalID", *billingentityinternalproduct_response->fki_billingentityexternal_id) == NULL) {
    goto fail; //Numeric
    }


    // billingentityinternalproduct_response->s_billingentityexternal_description
    if (!billingentityinternalproduct_response->s_billingentityexternal_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sBillingentityexternalDescription", billingentityinternalproduct_response->s_billingentityexternal_description) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

billingentityinternalproduct_response_t *billingentityinternalproduct_response_parseFromJSON(cJSON *billingentityinternalproduct_responseJSON){

    billingentityinternalproduct_response_t *billingentityinternalproduct_response_local_var = NULL;

    // define the local variable for billingentityinternalproduct_response->pki_billingentityinternalproduct_id
    int *pki_billingentityinternalproduct_id_local_var = NULL;

    // define the local variable for billingentityinternalproduct_response->fki_billingentityinternal_id
    int *fki_billingentityinternal_id_local_var = NULL;

    char *s_billingentityinternal_description_x_local_str = NULL;

    // define the local variable for billingentityinternalproduct_response->fki_ezmaxproduct_id
    int *fki_ezmaxproduct_id_local_var = NULL;

    char *s_ezmaxproduct_description_x_local_str = NULL;

    // define the local variable for billingentityinternalproduct_response->fki_billingentityexternal_id
    int *fki_billingentityexternal_id_local_var = NULL;

    char *s_billingentityexternal_description_local_str = NULL;

    // billingentityinternalproduct_response->pki_billingentityinternalproduct_id
    cJSON *pki_billingentityinternalproduct_id = cJSON_GetObjectItemCaseSensitive(billingentityinternalproduct_responseJSON, "pkiBillingentityinternalproductID");
    if (cJSON_IsNull(pki_billingentityinternalproduct_id)) {
        pki_billingentityinternalproduct_id = NULL;
    }
    if (!pki_billingentityinternalproduct_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_billingentityinternalproduct_id))
    {
    goto end; //Numeric
    }
    pki_billingentityinternalproduct_id_local_var = malloc(sizeof(int));
    if(!pki_billingentityinternalproduct_id_local_var)
    {
        goto end;
    }
    *pki_billingentityinternalproduct_id_local_var = pki_billingentityinternalproduct_id->valuedouble;

    // billingentityinternalproduct_response->fki_billingentityinternal_id
    cJSON *fki_billingentityinternal_id = cJSON_GetObjectItemCaseSensitive(billingentityinternalproduct_responseJSON, "fkiBillingentityinternalID");
    if (cJSON_IsNull(fki_billingentityinternal_id)) {
        fki_billingentityinternal_id = NULL;
    }
    if (!fki_billingentityinternal_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_billingentityinternal_id))
    {
    goto end; //Numeric
    }
    fki_billingentityinternal_id_local_var = malloc(sizeof(int));
    if(!fki_billingentityinternal_id_local_var)
    {
        goto end;
    }
    *fki_billingentityinternal_id_local_var = fki_billingentityinternal_id->valuedouble;

    // billingentityinternalproduct_response->s_billingentityinternal_description_x
    cJSON *s_billingentityinternal_description_x = cJSON_GetObjectItemCaseSensitive(billingentityinternalproduct_responseJSON, "sBillingentityinternalDescriptionX");
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

    // billingentityinternalproduct_response->fki_ezmaxproduct_id
    cJSON *fki_ezmaxproduct_id = cJSON_GetObjectItemCaseSensitive(billingentityinternalproduct_responseJSON, "fkiEzmaxproductID");
    if (cJSON_IsNull(fki_ezmaxproduct_id)) {
        fki_ezmaxproduct_id = NULL;
    }
    if (!fki_ezmaxproduct_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezmaxproduct_id))
    {
    goto end; //Numeric
    }
    fki_ezmaxproduct_id_local_var = malloc(sizeof(int));
    if(!fki_ezmaxproduct_id_local_var)
    {
        goto end;
    }
    *fki_ezmaxproduct_id_local_var = fki_ezmaxproduct_id->valuedouble;

    // billingentityinternalproduct_response->s_ezmaxproduct_description_x
    cJSON *s_ezmaxproduct_description_x = cJSON_GetObjectItemCaseSensitive(billingentityinternalproduct_responseJSON, "sEzmaxproductDescriptionX");
    if (cJSON_IsNull(s_ezmaxproduct_description_x)) {
        s_ezmaxproduct_description_x = NULL;
    }
    if (!s_ezmaxproduct_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezmaxproduct_description_x))
    {
    goto end; //String
    }

    // billingentityinternalproduct_response->fki_billingentityexternal_id
    cJSON *fki_billingentityexternal_id = cJSON_GetObjectItemCaseSensitive(billingentityinternalproduct_responseJSON, "fkiBillingentityexternalID");
    if (cJSON_IsNull(fki_billingentityexternal_id)) {
        fki_billingentityexternal_id = NULL;
    }
    if (!fki_billingentityexternal_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_billingentityexternal_id))
    {
    goto end; //Numeric
    }
    fki_billingentityexternal_id_local_var = malloc(sizeof(int));
    if(!fki_billingentityexternal_id_local_var)
    {
        goto end;
    }
    *fki_billingentityexternal_id_local_var = fki_billingentityexternal_id->valuedouble;

    // billingentityinternalproduct_response->s_billingentityexternal_description
    cJSON *s_billingentityexternal_description = cJSON_GetObjectItemCaseSensitive(billingentityinternalproduct_responseJSON, "sBillingentityexternalDescription");
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


    if (s_billingentityinternal_description_x && !cJSON_IsNull(s_billingentityinternal_description_x)) s_billingentityinternal_description_x_local_str = strdup(s_billingentityinternal_description_x->valuestring);
    if (s_ezmaxproduct_description_x && !cJSON_IsNull(s_ezmaxproduct_description_x)) s_ezmaxproduct_description_x_local_str = strdup(s_ezmaxproduct_description_x->valuestring);
    if (s_billingentityexternal_description && !cJSON_IsNull(s_billingentityexternal_description)) s_billingentityexternal_description_local_str = strdup(s_billingentityexternal_description->valuestring);

    billingentityinternalproduct_response_local_var = billingentityinternalproduct_response_create_internal (
        pki_billingentityinternalproduct_id_local_var,
        fki_billingentityinternal_id_local_var,
        s_billingentityinternal_description_x_local_str,
        fki_ezmaxproduct_id_local_var,
        s_ezmaxproduct_description_x_local_str,
        fki_billingentityexternal_id_local_var,
        s_billingentityexternal_description_local_str
        );

    if (!billingentityinternalproduct_response_local_var) {
        goto end;
    }

    return billingentityinternalproduct_response_local_var;
end:
    if (pki_billingentityinternalproduct_id_local_var) {
        free(pki_billingentityinternalproduct_id_local_var);
        pki_billingentityinternalproduct_id_local_var = NULL;
    }
    if (fki_billingentityinternal_id_local_var) {
        free(fki_billingentityinternal_id_local_var);
        fki_billingentityinternal_id_local_var = NULL;
    }
    if (s_billingentityinternal_description_x_local_str) {
        free(s_billingentityinternal_description_x_local_str);
        s_billingentityinternal_description_x_local_str = NULL;
    }
    if (fki_ezmaxproduct_id_local_var) {
        free(fki_ezmaxproduct_id_local_var);
        fki_ezmaxproduct_id_local_var = NULL;
    }
    if (s_ezmaxproduct_description_x_local_str) {
        free(s_ezmaxproduct_description_x_local_str);
        s_ezmaxproduct_description_x_local_str = NULL;
    }
    if (fki_billingentityexternal_id_local_var) {
        free(fki_billingentityexternal_id_local_var);
        fki_billingentityexternal_id_local_var = NULL;
    }
    if (s_billingentityexternal_description_local_str) {
        free(s_billingentityexternal_description_local_str);
        s_billingentityexternal_description_local_str = NULL;
    }
    return NULL;

}
