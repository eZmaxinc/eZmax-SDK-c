#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "billingentityinternal_response.h"



static billingentityinternal_response_t *billingentityinternal_response_create_internal(
    int pki_billingentityinternal_id,
    multilingual_billingentityinternal_description_t *obj_billingentityinternal_description
    ) {
    billingentityinternal_response_t *billingentityinternal_response_local_var = malloc(sizeof(billingentityinternal_response_t));
    if (!billingentityinternal_response_local_var) {
        return NULL;
    }
    billingentityinternal_response_local_var->pki_billingentityinternal_id = pki_billingentityinternal_id;
    billingentityinternal_response_local_var->obj_billingentityinternal_description = obj_billingentityinternal_description;

    billingentityinternal_response_local_var->_library_owned = 1;
    return billingentityinternal_response_local_var;
}

__attribute__((deprecated)) billingentityinternal_response_t *billingentityinternal_response_create(
    int pki_billingentityinternal_id,
    multilingual_billingentityinternal_description_t *obj_billingentityinternal_description
    ) {
    return billingentityinternal_response_create_internal (
        pki_billingentityinternal_id,
        obj_billingentityinternal_description
        );
}

void billingentityinternal_response_free(billingentityinternal_response_t *billingentityinternal_response) {
    if(NULL == billingentityinternal_response){
        return ;
    }
    if(billingentityinternal_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "billingentityinternal_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (billingentityinternal_response->obj_billingentityinternal_description) {
        multilingual_billingentityinternal_description_free(billingentityinternal_response->obj_billingentityinternal_description);
        billingentityinternal_response->obj_billingentityinternal_description = NULL;
    }
    free(billingentityinternal_response);
}

cJSON *billingentityinternal_response_convertToJSON(billingentityinternal_response_t *billingentityinternal_response) {
    cJSON *item = cJSON_CreateObject();

    // billingentityinternal_response->pki_billingentityinternal_id
    if (!billingentityinternal_response->pki_billingentityinternal_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiBillingentityinternalID", billingentityinternal_response->pki_billingentityinternal_id) == NULL) {
    goto fail; //Numeric
    }


    // billingentityinternal_response->obj_billingentityinternal_description
    if (!billingentityinternal_response->obj_billingentityinternal_description) {
        goto fail;
    }
    cJSON *obj_billingentityinternal_description_local_JSON = multilingual_billingentityinternal_description_convertToJSON(billingentityinternal_response->obj_billingentityinternal_description);
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

billingentityinternal_response_t *billingentityinternal_response_parseFromJSON(cJSON *billingentityinternal_responseJSON){

    billingentityinternal_response_t *billingentityinternal_response_local_var = NULL;

    // define the local variable for billingentityinternal_response->obj_billingentityinternal_description
    multilingual_billingentityinternal_description_t *obj_billingentityinternal_description_local_nonprim = NULL;

    // billingentityinternal_response->pki_billingentityinternal_id
    cJSON *pki_billingentityinternal_id = cJSON_GetObjectItemCaseSensitive(billingentityinternal_responseJSON, "pkiBillingentityinternalID");
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

    // billingentityinternal_response->obj_billingentityinternal_description
    cJSON *obj_billingentityinternal_description = cJSON_GetObjectItemCaseSensitive(billingentityinternal_responseJSON, "objBillingentityinternalDescription");
    if (cJSON_IsNull(obj_billingentityinternal_description)) {
        obj_billingentityinternal_description = NULL;
    }
    if (!obj_billingentityinternal_description) {
        goto end;
    }

    
    obj_billingentityinternal_description_local_nonprim = multilingual_billingentityinternal_description_parseFromJSON(obj_billingentityinternal_description); //nonprimitive


    billingentityinternal_response_local_var = billingentityinternal_response_create_internal (
        pki_billingentityinternal_id->valuedouble,
        obj_billingentityinternal_description_local_nonprim
        );

    return billingentityinternal_response_local_var;
end:
    if (obj_billingentityinternal_description_local_nonprim) {
        multilingual_billingentityinternal_description_free(obj_billingentityinternal_description_local_nonprim);
        obj_billingentityinternal_description_local_nonprim = NULL;
    }
    return NULL;

}
