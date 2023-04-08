#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "billingentityinternal_request_compound.h"



billingentityinternal_request_compound_t *billingentityinternal_request_compound_create(
    int pki_billingentityinternal_id,
    multilingual_billingentityinternal_description_t *obj_billingentityinternal_description
    ) {
    billingentityinternal_request_compound_t *billingentityinternal_request_compound_local_var = malloc(sizeof(billingentityinternal_request_compound_t));
    if (!billingentityinternal_request_compound_local_var) {
        return NULL;
    }
    billingentityinternal_request_compound_local_var->pki_billingentityinternal_id = pki_billingentityinternal_id;
    billingentityinternal_request_compound_local_var->obj_billingentityinternal_description = obj_billingentityinternal_description;

    return billingentityinternal_request_compound_local_var;
}


void billingentityinternal_request_compound_free(billingentityinternal_request_compound_t *billingentityinternal_request_compound) {
    if(NULL == billingentityinternal_request_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (billingentityinternal_request_compound->obj_billingentityinternal_description) {
        multilingual_billingentityinternal_description_free(billingentityinternal_request_compound->obj_billingentityinternal_description);
        billingentityinternal_request_compound->obj_billingentityinternal_description = NULL;
    }
    free(billingentityinternal_request_compound);
}

cJSON *billingentityinternal_request_compound_convertToJSON(billingentityinternal_request_compound_t *billingentityinternal_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // billingentityinternal_request_compound->pki_billingentityinternal_id
    if(billingentityinternal_request_compound->pki_billingentityinternal_id) {
    if(cJSON_AddNumberToObject(item, "pkiBillingentityinternalID", billingentityinternal_request_compound->pki_billingentityinternal_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // billingentityinternal_request_compound->obj_billingentityinternal_description
    if (!billingentityinternal_request_compound->obj_billingentityinternal_description) {
        goto fail;
    }
    cJSON *obj_billingentityinternal_description_local_JSON = multilingual_billingentityinternal_description_convertToJSON(billingentityinternal_request_compound->obj_billingentityinternal_description);
    if(obj_billingentityinternal_description_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objBillingentityinternalDescription", obj_billingentityinternal_description_local_JSON);
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

billingentityinternal_request_compound_t *billingentityinternal_request_compound_parseFromJSON(cJSON *billingentityinternal_request_compoundJSON){

    billingentityinternal_request_compound_t *billingentityinternal_request_compound_local_var = NULL;

    // define the local variable for billingentityinternal_request_compound->obj_billingentityinternal_description
    multilingual_billingentityinternal_description_t *obj_billingentityinternal_description_local_nonprim = NULL;

    // billingentityinternal_request_compound->pki_billingentityinternal_id
    cJSON *pki_billingentityinternal_id = cJSON_GetObjectItemCaseSensitive(billingentityinternal_request_compoundJSON, "pkiBillingentityinternalID");
    if (pki_billingentityinternal_id) { 
    if(!cJSON_IsNumber(pki_billingentityinternal_id))
    {
    goto end; //Numeric
    }
    }

    // billingentityinternal_request_compound->obj_billingentityinternal_description
    cJSON *obj_billingentityinternal_description = cJSON_GetObjectItemCaseSensitive(billingentityinternal_request_compoundJSON, "objBillingentityinternalDescription");
    if (!obj_billingentityinternal_description) {
        goto end;
    }

    
    obj_billingentityinternal_description_local_nonprim = multilingual_billingentityinternal_description_parseFromJSON(obj_billingentityinternal_description); //nonprimitive


    billingentityinternal_request_compound_local_var = billingentityinternal_request_compound_create (
        pki_billingentityinternal_id ? pki_billingentityinternal_id->valuedouble : 0,
        obj_billingentityinternal_description_local_nonprim
        );

    return billingentityinternal_request_compound_local_var;
end:
    if (obj_billingentityinternal_description_local_nonprim) {
        multilingual_billingentityinternal_description_free(obj_billingentityinternal_description_local_nonprim);
        obj_billingentityinternal_description_local_nonprim = NULL;
    }
    return NULL;

}
