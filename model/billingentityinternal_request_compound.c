#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "billingentityinternal_request_compound.h"



static billingentityinternal_request_compound_t *billingentityinternal_request_compound_create_internal(
    int pki_billingentityinternal_id,
    multilingual_billingentityinternal_description_t *obj_billingentityinternal_description,
    list_t *a_obj_billingentityinternalproduct
    ) {
    billingentityinternal_request_compound_t *billingentityinternal_request_compound_local_var = malloc(sizeof(billingentityinternal_request_compound_t));
    if (!billingentityinternal_request_compound_local_var) {
        return NULL;
    }
    billingentityinternal_request_compound_local_var->pki_billingentityinternal_id = pki_billingentityinternal_id;
    billingentityinternal_request_compound_local_var->obj_billingentityinternal_description = obj_billingentityinternal_description;
    billingentityinternal_request_compound_local_var->a_obj_billingentityinternalproduct = a_obj_billingentityinternalproduct;

    billingentityinternal_request_compound_local_var->_library_owned = 1;
    return billingentityinternal_request_compound_local_var;
}

__attribute__((deprecated)) billingentityinternal_request_compound_t *billingentityinternal_request_compound_create(
    int pki_billingentityinternal_id,
    multilingual_billingentityinternal_description_t *obj_billingentityinternal_description,
    list_t *a_obj_billingentityinternalproduct
    ) {
    return billingentityinternal_request_compound_create_internal (
        pki_billingentityinternal_id,
        obj_billingentityinternal_description,
        a_obj_billingentityinternalproduct
        );
}

void billingentityinternal_request_compound_free(billingentityinternal_request_compound_t *billingentityinternal_request_compound) {
    if(NULL == billingentityinternal_request_compound){
        return ;
    }
    if(billingentityinternal_request_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "billingentityinternal_request_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (billingentityinternal_request_compound->obj_billingentityinternal_description) {
        multilingual_billingentityinternal_description_free(billingentityinternal_request_compound->obj_billingentityinternal_description);
        billingentityinternal_request_compound->obj_billingentityinternal_description = NULL;
    }
    if (billingentityinternal_request_compound->a_obj_billingentityinternalproduct) {
        list_ForEach(listEntry, billingentityinternal_request_compound->a_obj_billingentityinternalproduct) {
            billingentityinternalproduct_request_compound_free(listEntry->data);
        }
        list_freeList(billingentityinternal_request_compound->a_obj_billingentityinternalproduct);
        billingentityinternal_request_compound->a_obj_billingentityinternalproduct = NULL;
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


    // billingentityinternal_request_compound->a_obj_billingentityinternalproduct
    if (!billingentityinternal_request_compound->a_obj_billingentityinternalproduct) {
        goto fail;
    }
    cJSON *a_obj_billingentityinternalproduct = cJSON_AddArrayToObject(item, "a_objBillingentityinternalproduct");
    if(a_obj_billingentityinternalproduct == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_billingentityinternalproductListEntry;
    if (billingentityinternal_request_compound->a_obj_billingentityinternalproduct) {
    list_ForEach(a_obj_billingentityinternalproductListEntry, billingentityinternal_request_compound->a_obj_billingentityinternalproduct) {
    cJSON *itemLocal = billingentityinternalproduct_request_compound_convertToJSON(a_obj_billingentityinternalproductListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_billingentityinternalproduct, itemLocal);
    }
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

    // define the local list for billingentityinternal_request_compound->a_obj_billingentityinternalproduct
    list_t *a_obj_billingentityinternalproductList = NULL;

    // billingentityinternal_request_compound->pki_billingentityinternal_id
    cJSON *pki_billingentityinternal_id = cJSON_GetObjectItemCaseSensitive(billingentityinternal_request_compoundJSON, "pkiBillingentityinternalID");
    if (cJSON_IsNull(pki_billingentityinternal_id)) {
        pki_billingentityinternal_id = NULL;
    }
    if (pki_billingentityinternal_id) { 
    if(!cJSON_IsNumber(pki_billingentityinternal_id))
    {
    goto end; //Numeric
    }
    }

    // billingentityinternal_request_compound->obj_billingentityinternal_description
    cJSON *obj_billingentityinternal_description = cJSON_GetObjectItemCaseSensitive(billingentityinternal_request_compoundJSON, "objBillingentityinternalDescription");
    if (cJSON_IsNull(obj_billingentityinternal_description)) {
        obj_billingentityinternal_description = NULL;
    }
    if (!obj_billingentityinternal_description) {
        goto end;
    }

    
    obj_billingentityinternal_description_local_nonprim = multilingual_billingentityinternal_description_parseFromJSON(obj_billingentityinternal_description); //nonprimitive

    // billingentityinternal_request_compound->a_obj_billingentityinternalproduct
    cJSON *a_obj_billingentityinternalproduct = cJSON_GetObjectItemCaseSensitive(billingentityinternal_request_compoundJSON, "a_objBillingentityinternalproduct");
    if (cJSON_IsNull(a_obj_billingentityinternalproduct)) {
        a_obj_billingentityinternalproduct = NULL;
    }
    if (!a_obj_billingentityinternalproduct) {
        goto end;
    }

    
    cJSON *a_obj_billingentityinternalproduct_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_billingentityinternalproduct)){
        goto end; //nonprimitive container
    }

    a_obj_billingentityinternalproductList = list_createList();

    cJSON_ArrayForEach(a_obj_billingentityinternalproduct_local_nonprimitive,a_obj_billingentityinternalproduct )
    {
        if(!cJSON_IsObject(a_obj_billingentityinternalproduct_local_nonprimitive)){
            goto end;
        }
        billingentityinternalproduct_request_compound_t *a_obj_billingentityinternalproductItem = billingentityinternalproduct_request_compound_parseFromJSON(a_obj_billingentityinternalproduct_local_nonprimitive);

        list_addElement(a_obj_billingentityinternalproductList, a_obj_billingentityinternalproductItem);
    }


    billingentityinternal_request_compound_local_var = billingentityinternal_request_compound_create_internal (
        pki_billingentityinternal_id ? pki_billingentityinternal_id->valuedouble : 0,
        obj_billingentityinternal_description_local_nonprim,
        a_obj_billingentityinternalproductList
        );

    return billingentityinternal_request_compound_local_var;
end:
    if (obj_billingentityinternal_description_local_nonprim) {
        multilingual_billingentityinternal_description_free(obj_billingentityinternal_description_local_nonprim);
        obj_billingentityinternal_description_local_nonprim = NULL;
    }
    if (a_obj_billingentityinternalproductList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_billingentityinternalproductList) {
            billingentityinternalproduct_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_billingentityinternalproductList);
        a_obj_billingentityinternalproductList = NULL;
    }
    return NULL;

}
