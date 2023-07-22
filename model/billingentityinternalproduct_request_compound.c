#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "billingentityinternalproduct_request_compound.h"



billingentityinternalproduct_request_compound_t *billingentityinternalproduct_request_compound_create(
    int pki_billingentityinternalproduct_id,
    int fki_ezmaxproduct_id,
    int fki_billingentityexternal_id
    ) {
    billingentityinternalproduct_request_compound_t *billingentityinternalproduct_request_compound_local_var = malloc(sizeof(billingentityinternalproduct_request_compound_t));
    if (!billingentityinternalproduct_request_compound_local_var) {
        return NULL;
    }
    billingentityinternalproduct_request_compound_local_var->pki_billingentityinternalproduct_id = pki_billingentityinternalproduct_id;
    billingentityinternalproduct_request_compound_local_var->fki_ezmaxproduct_id = fki_ezmaxproduct_id;
    billingentityinternalproduct_request_compound_local_var->fki_billingentityexternal_id = fki_billingentityexternal_id;

    return billingentityinternalproduct_request_compound_local_var;
}


void billingentityinternalproduct_request_compound_free(billingentityinternalproduct_request_compound_t *billingentityinternalproduct_request_compound) {
    if(NULL == billingentityinternalproduct_request_compound){
        return ;
    }
    listEntry_t *listEntry;
    free(billingentityinternalproduct_request_compound);
}

cJSON *billingentityinternalproduct_request_compound_convertToJSON(billingentityinternalproduct_request_compound_t *billingentityinternalproduct_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // billingentityinternalproduct_request_compound->pki_billingentityinternalproduct_id
    if(billingentityinternalproduct_request_compound->pki_billingentityinternalproduct_id) {
    if(cJSON_AddNumberToObject(item, "pkiBillingentityinternalproductID", billingentityinternalproduct_request_compound->pki_billingentityinternalproduct_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // billingentityinternalproduct_request_compound->fki_ezmaxproduct_id
    if (!billingentityinternalproduct_request_compound->fki_ezmaxproduct_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzmaxproductID", billingentityinternalproduct_request_compound->fki_ezmaxproduct_id) == NULL) {
    goto fail; //Numeric
    }


    // billingentityinternalproduct_request_compound->fki_billingentityexternal_id
    if (!billingentityinternalproduct_request_compound->fki_billingentityexternal_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiBillingentityexternalID", billingentityinternalproduct_request_compound->fki_billingentityexternal_id) == NULL) {
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

    // billingentityinternalproduct_request_compound->pki_billingentityinternalproduct_id
    cJSON *pki_billingentityinternalproduct_id = cJSON_GetObjectItemCaseSensitive(billingentityinternalproduct_request_compoundJSON, "pkiBillingentityinternalproductID");
    if (pki_billingentityinternalproduct_id) { 
    if(!cJSON_IsNumber(pki_billingentityinternalproduct_id))
    {
    goto end; //Numeric
    }
    }

    // billingentityinternalproduct_request_compound->fki_ezmaxproduct_id
    cJSON *fki_ezmaxproduct_id = cJSON_GetObjectItemCaseSensitive(billingentityinternalproduct_request_compoundJSON, "fkiEzmaxproductID");
    if (!fki_ezmaxproduct_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezmaxproduct_id))
    {
    goto end; //Numeric
    }

    // billingentityinternalproduct_request_compound->fki_billingentityexternal_id
    cJSON *fki_billingentityexternal_id = cJSON_GetObjectItemCaseSensitive(billingentityinternalproduct_request_compoundJSON, "fkiBillingentityexternalID");
    if (!fki_billingentityexternal_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_billingentityexternal_id))
    {
    goto end; //Numeric
    }


    billingentityinternalproduct_request_compound_local_var = billingentityinternalproduct_request_compound_create (
        pki_billingentityinternalproduct_id ? pki_billingentityinternalproduct_id->valuedouble : 0,
        fki_ezmaxproduct_id->valuedouble,
        fki_billingentityexternal_id->valuedouble
        );

    return billingentityinternalproduct_request_compound_local_var;
end:
    return NULL;

}
