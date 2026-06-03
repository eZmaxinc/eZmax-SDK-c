#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "billingentityinternalproduct_request_compound.h"



static billingentityinternalproduct_request_compound_t *billingentityinternalproduct_request_compound_create_internal(
    int *pki_billingentityinternalproduct_id,
    int *fki_ezmaxproduct_id,
    int *fki_billingentityexternal_id
    ) {
    billingentityinternalproduct_request_compound_t *billingentityinternalproduct_request_compound_local_var = malloc(sizeof(billingentityinternalproduct_request_compound_t));
    if (!billingentityinternalproduct_request_compound_local_var) {
        return NULL;
    }
    memset(billingentityinternalproduct_request_compound_local_var, 0, sizeof(billingentityinternalproduct_request_compound_t));
    billingentityinternalproduct_request_compound_local_var->_library_owned = 1;
    billingentityinternalproduct_request_compound_local_var->pki_billingentityinternalproduct_id = pki_billingentityinternalproduct_id;
    billingentityinternalproduct_request_compound_local_var->fki_ezmaxproduct_id = fki_ezmaxproduct_id;
    billingentityinternalproduct_request_compound_local_var->fki_billingentityexternal_id = fki_billingentityexternal_id;
    return billingentityinternalproduct_request_compound_local_var;
}

__attribute__((deprecated)) billingentityinternalproduct_request_compound_t *billingentityinternalproduct_request_compound_create(
    int *pki_billingentityinternalproduct_id,
    int *fki_ezmaxproduct_id,
    int *fki_billingentityexternal_id
    ) {
    int *pki_billingentityinternalproduct_id_copy = NULL;
    if (pki_billingentityinternalproduct_id) {
        pki_billingentityinternalproduct_id_copy = malloc(sizeof(int));
        if (pki_billingentityinternalproduct_id_copy) *pki_billingentityinternalproduct_id_copy = *pki_billingentityinternalproduct_id;
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
    billingentityinternalproduct_request_compound_t *result = billingentityinternalproduct_request_compound_create_internal (
        pki_billingentityinternalproduct_id_copy,
        fki_ezmaxproduct_id_copy,
        fki_billingentityexternal_id_copy
        );
    if (!result) {
        free(pki_billingentityinternalproduct_id_copy);
        free(fki_ezmaxproduct_id_copy);
        free(fki_billingentityexternal_id_copy);
    }
    return result;
}

void billingentityinternalproduct_request_compound_free(billingentityinternalproduct_request_compound_t *billingentityinternalproduct_request_compound) {
    if(NULL == billingentityinternalproduct_request_compound){
        return ;
    }
    if(billingentityinternalproduct_request_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "billingentityinternalproduct_request_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (billingentityinternalproduct_request_compound->pki_billingentityinternalproduct_id) {
        free(billingentityinternalproduct_request_compound->pki_billingentityinternalproduct_id);
        billingentityinternalproduct_request_compound->pki_billingentityinternalproduct_id = NULL;
    }
    if (billingentityinternalproduct_request_compound->fki_ezmaxproduct_id) {
        free(billingentityinternalproduct_request_compound->fki_ezmaxproduct_id);
        billingentityinternalproduct_request_compound->fki_ezmaxproduct_id = NULL;
    }
    if (billingentityinternalproduct_request_compound->fki_billingentityexternal_id) {
        free(billingentityinternalproduct_request_compound->fki_billingentityexternal_id);
        billingentityinternalproduct_request_compound->fki_billingentityexternal_id = NULL;
    }
    free(billingentityinternalproduct_request_compound);
}

cJSON *billingentityinternalproduct_request_compound_convertToJSON(billingentityinternalproduct_request_compound_t *billingentityinternalproduct_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // billingentityinternalproduct_request_compound->pki_billingentityinternalproduct_id
    if(billingentityinternalproduct_request_compound->pki_billingentityinternalproduct_id) {
    if(cJSON_AddNumberToObject(item, "pkiBillingentityinternalproductID", *billingentityinternalproduct_request_compound->pki_billingentityinternalproduct_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // billingentityinternalproduct_request_compound->fki_ezmaxproduct_id
    if (!billingentityinternalproduct_request_compound->fki_ezmaxproduct_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzmaxproductID", *billingentityinternalproduct_request_compound->fki_ezmaxproduct_id) == NULL) {
    goto fail; //Numeric
    }


    // billingentityinternalproduct_request_compound->fki_billingentityexternal_id
    if (!billingentityinternalproduct_request_compound->fki_billingentityexternal_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiBillingentityexternalID", *billingentityinternalproduct_request_compound->fki_billingentityexternal_id) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

billingentityinternalproduct_request_compound_t *billingentityinternalproduct_request_compound_parseFromJSON(cJSON *billingentityinternalproduct_request_compoundJSON){

    billingentityinternalproduct_request_compound_t *billingentityinternalproduct_request_compound_local_var = NULL;

    // define the local variable for billingentityinternalproduct_request_compound->pki_billingentityinternalproduct_id
    int *pki_billingentityinternalproduct_id_local_var = NULL;

    // define the local variable for billingentityinternalproduct_request_compound->fki_ezmaxproduct_id
    int *fki_ezmaxproduct_id_local_var = NULL;

    // define the local variable for billingentityinternalproduct_request_compound->fki_billingentityexternal_id
    int *fki_billingentityexternal_id_local_var = NULL;

    // billingentityinternalproduct_request_compound->pki_billingentityinternalproduct_id
    cJSON *pki_billingentityinternalproduct_id = cJSON_GetObjectItemCaseSensitive(billingentityinternalproduct_request_compoundJSON, "pkiBillingentityinternalproductID");
    if (cJSON_IsNull(pki_billingentityinternalproduct_id)) {
        pki_billingentityinternalproduct_id = NULL;
    }
    if (pki_billingentityinternalproduct_id) { 
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
    }

    // billingentityinternalproduct_request_compound->fki_ezmaxproduct_id
    cJSON *fki_ezmaxproduct_id = cJSON_GetObjectItemCaseSensitive(billingentityinternalproduct_request_compoundJSON, "fkiEzmaxproductID");
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

    // billingentityinternalproduct_request_compound->fki_billingentityexternal_id
    cJSON *fki_billingentityexternal_id = cJSON_GetObjectItemCaseSensitive(billingentityinternalproduct_request_compoundJSON, "fkiBillingentityexternalID");
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



    billingentityinternalproduct_request_compound_local_var = billingentityinternalproduct_request_compound_create_internal (
        pki_billingentityinternalproduct_id_local_var,
        fki_ezmaxproduct_id_local_var,
        fki_billingentityexternal_id_local_var
        );

    if (!billingentityinternalproduct_request_compound_local_var) {
        goto end;
    }

    return billingentityinternalproduct_request_compound_local_var;
end:
    if (pki_billingentityinternalproduct_id_local_var) {
        free(pki_billingentityinternalproduct_id_local_var);
        pki_billingentityinternalproduct_id_local_var = NULL;
    }
    if (fki_ezmaxproduct_id_local_var) {
        free(fki_ezmaxproduct_id_local_var);
        fki_ezmaxproduct_id_local_var = NULL;
    }
    if (fki_billingentityexternal_id_local_var) {
        free(fki_billingentityexternal_id_local_var);
        fki_billingentityexternal_id_local_var = NULL;
    }
    return NULL;

}
