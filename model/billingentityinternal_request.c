#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "billingentityinternal_request.h"



static billingentityinternal_request_t *billingentityinternal_request_create_internal(
    int *pki_billingentityinternal_id,
    multilingual_billingentityinternal_description_t *obj_billingentityinternal_description
    ) {
    billingentityinternal_request_t *billingentityinternal_request_local_var = malloc(sizeof(billingentityinternal_request_t));
    if (!billingentityinternal_request_local_var) {
        return NULL;
    }
    memset(billingentityinternal_request_local_var, 0, sizeof(billingentityinternal_request_t));
    billingentityinternal_request_local_var->_library_owned = 1;
    billingentityinternal_request_local_var->pki_billingentityinternal_id = pki_billingentityinternal_id;
    billingentityinternal_request_local_var->obj_billingentityinternal_description = obj_billingentityinternal_description;
    return billingentityinternal_request_local_var;
}

__attribute__((deprecated)) billingentityinternal_request_t *billingentityinternal_request_create(
    int *pki_billingentityinternal_id,
    multilingual_billingentityinternal_description_t *obj_billingentityinternal_description
    ) {
    int *pki_billingentityinternal_id_copy = NULL;
    if (pki_billingentityinternal_id) {
        pki_billingentityinternal_id_copy = malloc(sizeof(int));
        if (pki_billingentityinternal_id_copy) *pki_billingentityinternal_id_copy = *pki_billingentityinternal_id;
    }
    billingentityinternal_request_t *result = billingentityinternal_request_create_internal (
        pki_billingentityinternal_id_copy,
        obj_billingentityinternal_description
        );
    if (!result) {
        free(pki_billingentityinternal_id_copy);
    }
    return result;
}

void billingentityinternal_request_free(billingentityinternal_request_t *billingentityinternal_request) {
    if(NULL == billingentityinternal_request){
        return ;
    }
    if(billingentityinternal_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "billingentityinternal_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (billingentityinternal_request->pki_billingentityinternal_id) {
        free(billingentityinternal_request->pki_billingentityinternal_id);
        billingentityinternal_request->pki_billingentityinternal_id = NULL;
    }
    if (billingentityinternal_request->obj_billingentityinternal_description) {
        multilingual_billingentityinternal_description_free(billingentityinternal_request->obj_billingentityinternal_description);
        billingentityinternal_request->obj_billingentityinternal_description = NULL;
    }
    free(billingentityinternal_request);
}

cJSON *billingentityinternal_request_convertToJSON(billingentityinternal_request_t *billingentityinternal_request) {
    cJSON *item = cJSON_CreateObject();

    // billingentityinternal_request->pki_billingentityinternal_id
    if(billingentityinternal_request->pki_billingentityinternal_id) {
    if(cJSON_AddNumberToObject(item, "pkiBillingentityinternalID", *billingentityinternal_request->pki_billingentityinternal_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // billingentityinternal_request->obj_billingentityinternal_description
    if (!billingentityinternal_request->obj_billingentityinternal_description) {
        goto fail;
    }
    cJSON *obj_billingentityinternal_description_local_JSON = multilingual_billingentityinternal_description_convertToJSON(billingentityinternal_request->obj_billingentityinternal_description);
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

billingentityinternal_request_t *billingentityinternal_request_parseFromJSON(cJSON *billingentityinternal_requestJSON){

    billingentityinternal_request_t *billingentityinternal_request_local_var = NULL;

    // define the local variable for billingentityinternal_request->pki_billingentityinternal_id
    int *pki_billingentityinternal_id_local_var = NULL;

    // define the local variable for billingentityinternal_request->obj_billingentityinternal_description
    multilingual_billingentityinternal_description_t *obj_billingentityinternal_description_local_nonprim = NULL;

    // billingentityinternal_request->pki_billingentityinternal_id
    cJSON *pki_billingentityinternal_id = cJSON_GetObjectItemCaseSensitive(billingentityinternal_requestJSON, "pkiBillingentityinternalID");
    if (cJSON_IsNull(pki_billingentityinternal_id)) {
        pki_billingentityinternal_id = NULL;
    }
    if (pki_billingentityinternal_id) { 
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
    }

    // billingentityinternal_request->obj_billingentityinternal_description
    cJSON *obj_billingentityinternal_description = cJSON_GetObjectItemCaseSensitive(billingentityinternal_requestJSON, "objBillingentityinternalDescription");
    if (cJSON_IsNull(obj_billingentityinternal_description)) {
        obj_billingentityinternal_description = NULL;
    }
    if (!obj_billingentityinternal_description) {
        goto end;
    }

    
    obj_billingentityinternal_description_local_nonprim = multilingual_billingentityinternal_description_parseFromJSON(obj_billingentityinternal_description); //nonprimitive



    billingentityinternal_request_local_var = billingentityinternal_request_create_internal (
        pki_billingentityinternal_id_local_var,
        obj_billingentityinternal_description_local_nonprim
        );

    if (!billingentityinternal_request_local_var) {
        goto end;
    }

    return billingentityinternal_request_local_var;
end:
    if (pki_billingentityinternal_id_local_var) {
        free(pki_billingentityinternal_id_local_var);
        pki_billingentityinternal_id_local_var = NULL;
    }
    if (obj_billingentityinternal_description_local_nonprim) {
        multilingual_billingentityinternal_description_free(obj_billingentityinternal_description_local_nonprim);
        obj_billingentityinternal_description_local_nonprim = NULL;
    }
    return NULL;

}
