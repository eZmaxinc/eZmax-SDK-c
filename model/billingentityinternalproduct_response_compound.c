#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "billingentityinternalproduct_response_compound.h"



static billingentityinternalproduct_response_compound_t *billingentityinternalproduct_response_compound_create_internal(
    int pki_billingentityinternalproduct_id,
    int fki_billingentityinternal_id,
    char *s_billingentityinternal_description_x,
    int fki_ezmaxproduct_id,
    char *s_ezmaxproduct_description_x,
    int fki_billingentityexternal_id,
    char *s_billingentityexternal_description
    ) {
    billingentityinternalproduct_response_compound_t *billingentityinternalproduct_response_compound_local_var = malloc(sizeof(billingentityinternalproduct_response_compound_t));
    if (!billingentityinternalproduct_response_compound_local_var) {
        return NULL;
    }
    billingentityinternalproduct_response_compound_local_var->pki_billingentityinternalproduct_id = pki_billingentityinternalproduct_id;
    billingentityinternalproduct_response_compound_local_var->fki_billingentityinternal_id = fki_billingentityinternal_id;
    billingentityinternalproduct_response_compound_local_var->s_billingentityinternal_description_x = s_billingentityinternal_description_x;
    billingentityinternalproduct_response_compound_local_var->fki_ezmaxproduct_id = fki_ezmaxproduct_id;
    billingentityinternalproduct_response_compound_local_var->s_ezmaxproduct_description_x = s_ezmaxproduct_description_x;
    billingentityinternalproduct_response_compound_local_var->fki_billingentityexternal_id = fki_billingentityexternal_id;
    billingentityinternalproduct_response_compound_local_var->s_billingentityexternal_description = s_billingentityexternal_description;

    billingentityinternalproduct_response_compound_local_var->_library_owned = 1;
    return billingentityinternalproduct_response_compound_local_var;
}

__attribute__((deprecated)) billingentityinternalproduct_response_compound_t *billingentityinternalproduct_response_compound_create(
    int pki_billingentityinternalproduct_id,
    int fki_billingentityinternal_id,
    char *s_billingentityinternal_description_x,
    int fki_ezmaxproduct_id,
    char *s_ezmaxproduct_description_x,
    int fki_billingentityexternal_id,
    char *s_billingentityexternal_description
    ) {
    return billingentityinternalproduct_response_compound_create_internal (
        pki_billingentityinternalproduct_id,
        fki_billingentityinternal_id,
        s_billingentityinternal_description_x,
        fki_ezmaxproduct_id,
        s_ezmaxproduct_description_x,
        fki_billingentityexternal_id,
        s_billingentityexternal_description
        );
}

void billingentityinternalproduct_response_compound_free(billingentityinternalproduct_response_compound_t *billingentityinternalproduct_response_compound) {
    if(NULL == billingentityinternalproduct_response_compound){
        return ;
    }
    if(billingentityinternalproduct_response_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "billingentityinternalproduct_response_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (billingentityinternalproduct_response_compound->s_billingentityinternal_description_x) {
        free(billingentityinternalproduct_response_compound->s_billingentityinternal_description_x);
        billingentityinternalproduct_response_compound->s_billingentityinternal_description_x = NULL;
    }
    if (billingentityinternalproduct_response_compound->s_ezmaxproduct_description_x) {
        free(billingentityinternalproduct_response_compound->s_ezmaxproduct_description_x);
        billingentityinternalproduct_response_compound->s_ezmaxproduct_description_x = NULL;
    }
    if (billingentityinternalproduct_response_compound->s_billingentityexternal_description) {
        free(billingentityinternalproduct_response_compound->s_billingentityexternal_description);
        billingentityinternalproduct_response_compound->s_billingentityexternal_description = NULL;
    }
    free(billingentityinternalproduct_response_compound);
}

cJSON *billingentityinternalproduct_response_compound_convertToJSON(billingentityinternalproduct_response_compound_t *billingentityinternalproduct_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // billingentityinternalproduct_response_compound->pki_billingentityinternalproduct_id
    if (!billingentityinternalproduct_response_compound->pki_billingentityinternalproduct_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiBillingentityinternalproductID", billingentityinternalproduct_response_compound->pki_billingentityinternalproduct_id) == NULL) {
    goto fail; //Numeric
    }


    // billingentityinternalproduct_response_compound->fki_billingentityinternal_id
    if (!billingentityinternalproduct_response_compound->fki_billingentityinternal_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiBillingentityinternalID", billingentityinternalproduct_response_compound->fki_billingentityinternal_id) == NULL) {
    goto fail; //Numeric
    }


    // billingentityinternalproduct_response_compound->s_billingentityinternal_description_x
    if (!billingentityinternalproduct_response_compound->s_billingentityinternal_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sBillingentityinternalDescriptionX", billingentityinternalproduct_response_compound->s_billingentityinternal_description_x) == NULL) {
    goto fail; //String
    }


    // billingentityinternalproduct_response_compound->fki_ezmaxproduct_id
    if (!billingentityinternalproduct_response_compound->fki_ezmaxproduct_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzmaxproductID", billingentityinternalproduct_response_compound->fki_ezmaxproduct_id) == NULL) {
    goto fail; //Numeric
    }


    // billingentityinternalproduct_response_compound->s_ezmaxproduct_description_x
    if (!billingentityinternalproduct_response_compound->s_ezmaxproduct_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzmaxproductDescriptionX", billingentityinternalproduct_response_compound->s_ezmaxproduct_description_x) == NULL) {
    goto fail; //String
    }


    // billingentityinternalproduct_response_compound->fki_billingentityexternal_id
    if (!billingentityinternalproduct_response_compound->fki_billingentityexternal_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiBillingentityexternalID", billingentityinternalproduct_response_compound->fki_billingentityexternal_id) == NULL) {
    goto fail; //Numeric
    }


    // billingentityinternalproduct_response_compound->s_billingentityexternal_description
    if (!billingentityinternalproduct_response_compound->s_billingentityexternal_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sBillingentityexternalDescription", billingentityinternalproduct_response_compound->s_billingentityexternal_description) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

billingentityinternalproduct_response_compound_t *billingentityinternalproduct_response_compound_parseFromJSON(cJSON *billingentityinternalproduct_response_compoundJSON){

    billingentityinternalproduct_response_compound_t *billingentityinternalproduct_response_compound_local_var = NULL;

    // billingentityinternalproduct_response_compound->pki_billingentityinternalproduct_id
    cJSON *pki_billingentityinternalproduct_id = cJSON_GetObjectItemCaseSensitive(billingentityinternalproduct_response_compoundJSON, "pkiBillingentityinternalproductID");
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

    // billingentityinternalproduct_response_compound->fki_billingentityinternal_id
    cJSON *fki_billingentityinternal_id = cJSON_GetObjectItemCaseSensitive(billingentityinternalproduct_response_compoundJSON, "fkiBillingentityinternalID");
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

    // billingentityinternalproduct_response_compound->s_billingentityinternal_description_x
    cJSON *s_billingentityinternal_description_x = cJSON_GetObjectItemCaseSensitive(billingentityinternalproduct_response_compoundJSON, "sBillingentityinternalDescriptionX");
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

    // billingentityinternalproduct_response_compound->fki_ezmaxproduct_id
    cJSON *fki_ezmaxproduct_id = cJSON_GetObjectItemCaseSensitive(billingentityinternalproduct_response_compoundJSON, "fkiEzmaxproductID");
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

    // billingentityinternalproduct_response_compound->s_ezmaxproduct_description_x
    cJSON *s_ezmaxproduct_description_x = cJSON_GetObjectItemCaseSensitive(billingentityinternalproduct_response_compoundJSON, "sEzmaxproductDescriptionX");
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

    // billingentityinternalproduct_response_compound->fki_billingentityexternal_id
    cJSON *fki_billingentityexternal_id = cJSON_GetObjectItemCaseSensitive(billingentityinternalproduct_response_compoundJSON, "fkiBillingentityexternalID");
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

    // billingentityinternalproduct_response_compound->s_billingentityexternal_description
    cJSON *s_billingentityexternal_description = cJSON_GetObjectItemCaseSensitive(billingentityinternalproduct_response_compoundJSON, "sBillingentityexternalDescription");
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


    billingentityinternalproduct_response_compound_local_var = billingentityinternalproduct_response_compound_create_internal (
        pki_billingentityinternalproduct_id->valuedouble,
        fki_billingentityinternal_id->valuedouble,
        strdup(s_billingentityinternal_description_x->valuestring),
        fki_ezmaxproduct_id->valuedouble,
        strdup(s_ezmaxproduct_description_x->valuestring),
        fki_billingentityexternal_id->valuedouble,
        strdup(s_billingentityexternal_description->valuestring)
        );

    return billingentityinternalproduct_response_compound_local_var;
end:
    return NULL;

}
