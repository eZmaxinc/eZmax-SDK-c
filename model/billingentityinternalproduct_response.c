#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "billingentityinternalproduct_response.h"



billingentityinternalproduct_response_t *billingentityinternalproduct_response_create(
    int pki_billingentityinternalproduct_id,
    int fki_billingentityinternal_id,
    char *s_billingentityinternal_description_x,
    int fki_ezmaxproduct_id,
    char *s_ezmaxproduct_description_x,
    int fki_billingentityexternal_id,
    char *s_billingentityexternal_description
    ) {
    billingentityinternalproduct_response_t *billingentityinternalproduct_response_local_var = malloc(sizeof(billingentityinternalproduct_response_t));
    if (!billingentityinternalproduct_response_local_var) {
        return NULL;
    }
    billingentityinternalproduct_response_local_var->pki_billingentityinternalproduct_id = pki_billingentityinternalproduct_id;
    billingentityinternalproduct_response_local_var->fki_billingentityinternal_id = fki_billingentityinternal_id;
    billingentityinternalproduct_response_local_var->s_billingentityinternal_description_x = s_billingentityinternal_description_x;
    billingentityinternalproduct_response_local_var->fki_ezmaxproduct_id = fki_ezmaxproduct_id;
    billingentityinternalproduct_response_local_var->s_ezmaxproduct_description_x = s_ezmaxproduct_description_x;
    billingentityinternalproduct_response_local_var->fki_billingentityexternal_id = fki_billingentityexternal_id;
    billingentityinternalproduct_response_local_var->s_billingentityexternal_description = s_billingentityexternal_description;

    return billingentityinternalproduct_response_local_var;
}


void billingentityinternalproduct_response_free(billingentityinternalproduct_response_t *billingentityinternalproduct_response) {
    if(NULL == billingentityinternalproduct_response){
        return ;
    }
    listEntry_t *listEntry;
    if (billingentityinternalproduct_response->s_billingentityinternal_description_x) {
        free(billingentityinternalproduct_response->s_billingentityinternal_description_x);
        billingentityinternalproduct_response->s_billingentityinternal_description_x = NULL;
    }
    if (billingentityinternalproduct_response->s_ezmaxproduct_description_x) {
        free(billingentityinternalproduct_response->s_ezmaxproduct_description_x);
        billingentityinternalproduct_response->s_ezmaxproduct_description_x = NULL;
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
    if(cJSON_AddNumberToObject(item, "pkiBillingentityinternalproductID", billingentityinternalproduct_response->pki_billingentityinternalproduct_id) == NULL) {
    goto fail; //Numeric
    }


    // billingentityinternalproduct_response->fki_billingentityinternal_id
    if (!billingentityinternalproduct_response->fki_billingentityinternal_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiBillingentityinternalID", billingentityinternalproduct_response->fki_billingentityinternal_id) == NULL) {
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
    if(cJSON_AddNumberToObject(item, "fkiEzmaxproductID", billingentityinternalproduct_response->fki_ezmaxproduct_id) == NULL) {
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
    if(cJSON_AddNumberToObject(item, "fkiBillingentityexternalID", billingentityinternalproduct_response->fki_billingentityexternal_id) == NULL) {
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

    // billingentityinternalproduct_response->pki_billingentityinternalproduct_id
    cJSON *pki_billingentityinternalproduct_id = cJSON_GetObjectItemCaseSensitive(billingentityinternalproduct_responseJSON, "pkiBillingentityinternalproductID");
    if (!pki_billingentityinternalproduct_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_billingentityinternalproduct_id))
    {
    goto end; //Numeric
    }

    // billingentityinternalproduct_response->fki_billingentityinternal_id
    cJSON *fki_billingentityinternal_id = cJSON_GetObjectItemCaseSensitive(billingentityinternalproduct_responseJSON, "fkiBillingentityinternalID");
    if (!fki_billingentityinternal_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_billingentityinternal_id))
    {
    goto end; //Numeric
    }

    // billingentityinternalproduct_response->s_billingentityinternal_description_x
    cJSON *s_billingentityinternal_description_x = cJSON_GetObjectItemCaseSensitive(billingentityinternalproduct_responseJSON, "sBillingentityinternalDescriptionX");
    if (!s_billingentityinternal_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_billingentityinternal_description_x))
    {
    goto end; //String
    }

    // billingentityinternalproduct_response->fki_ezmaxproduct_id
    cJSON *fki_ezmaxproduct_id = cJSON_GetObjectItemCaseSensitive(billingentityinternalproduct_responseJSON, "fkiEzmaxproductID");
    if (!fki_ezmaxproduct_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezmaxproduct_id))
    {
    goto end; //Numeric
    }

    // billingentityinternalproduct_response->s_ezmaxproduct_description_x
    cJSON *s_ezmaxproduct_description_x = cJSON_GetObjectItemCaseSensitive(billingentityinternalproduct_responseJSON, "sEzmaxproductDescriptionX");
    if (!s_ezmaxproduct_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezmaxproduct_description_x))
    {
    goto end; //String
    }

    // billingentityinternalproduct_response->fki_billingentityexternal_id
    cJSON *fki_billingentityexternal_id = cJSON_GetObjectItemCaseSensitive(billingentityinternalproduct_responseJSON, "fkiBillingentityexternalID");
    if (!fki_billingentityexternal_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_billingentityexternal_id))
    {
    goto end; //Numeric
    }

    // billingentityinternalproduct_response->s_billingentityexternal_description
    cJSON *s_billingentityexternal_description = cJSON_GetObjectItemCaseSensitive(billingentityinternalproduct_responseJSON, "sBillingentityexternalDescription");
    if (!s_billingentityexternal_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_billingentityexternal_description))
    {
    goto end; //String
    }


    billingentityinternalproduct_response_local_var = billingentityinternalproduct_response_create (
        pki_billingentityinternalproduct_id->valuedouble,
        fki_billingentityinternal_id->valuedouble,
        strdup(s_billingentityinternal_description_x->valuestring),
        fki_ezmaxproduct_id->valuedouble,
        strdup(s_ezmaxproduct_description_x->valuestring),
        fki_billingentityexternal_id->valuedouble,
        strdup(s_billingentityexternal_description->valuestring)
        );

    return billingentityinternalproduct_response_local_var;
end:
    return NULL;

}
