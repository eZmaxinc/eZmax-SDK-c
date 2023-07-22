#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "billingentityinternal_response_compound_all_of.h"



billingentityinternal_response_compound_all_of_t *billingentityinternal_response_compound_all_of_create(
    list_t *a_obj_billingentityinternalproduct
    ) {
    billingentityinternal_response_compound_all_of_t *billingentityinternal_response_compound_all_of_local_var = malloc(sizeof(billingentityinternal_response_compound_all_of_t));
    if (!billingentityinternal_response_compound_all_of_local_var) {
        return NULL;
    }
    billingentityinternal_response_compound_all_of_local_var->a_obj_billingentityinternalproduct = a_obj_billingentityinternalproduct;

    return billingentityinternal_response_compound_all_of_local_var;
}


void billingentityinternal_response_compound_all_of_free(billingentityinternal_response_compound_all_of_t *billingentityinternal_response_compound_all_of) {
    if(NULL == billingentityinternal_response_compound_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (billingentityinternal_response_compound_all_of->a_obj_billingentityinternalproduct) {
        list_ForEach(listEntry, billingentityinternal_response_compound_all_of->a_obj_billingentityinternalproduct) {
            billingentityinternalproduct_response_compound_free(listEntry->data);
        }
        list_freeList(billingentityinternal_response_compound_all_of->a_obj_billingentityinternalproduct);
        billingentityinternal_response_compound_all_of->a_obj_billingentityinternalproduct = NULL;
    }
    free(billingentityinternal_response_compound_all_of);
}

cJSON *billingentityinternal_response_compound_all_of_convertToJSON(billingentityinternal_response_compound_all_of_t *billingentityinternal_response_compound_all_of) {
    cJSON *item = cJSON_CreateObject();

    // billingentityinternal_response_compound_all_of->a_obj_billingentityinternalproduct
    if (!billingentityinternal_response_compound_all_of->a_obj_billingentityinternalproduct) {
        goto fail;
    }
    cJSON *a_obj_billingentityinternalproduct = cJSON_AddArrayToObject(item, "a_objBillingentityinternalproduct");
    if(a_obj_billingentityinternalproduct == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_billingentityinternalproductListEntry;
    if (billingentityinternal_response_compound_all_of->a_obj_billingentityinternalproduct) {
    list_ForEach(a_obj_billingentityinternalproductListEntry, billingentityinternal_response_compound_all_of->a_obj_billingentityinternalproduct) {
    cJSON *itemLocal = billingentityinternalproduct_response_compound_convertToJSON(a_obj_billingentityinternalproductListEntry->data);
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

billingentityinternal_response_compound_all_of_t *billingentityinternal_response_compound_all_of_parseFromJSON(cJSON *billingentityinternal_response_compound_all_ofJSON){

    billingentityinternal_response_compound_all_of_t *billingentityinternal_response_compound_all_of_local_var = NULL;

    // define the local list for billingentityinternal_response_compound_all_of->a_obj_billingentityinternalproduct
    list_t *a_obj_billingentityinternalproductList = NULL;

    // billingentityinternal_response_compound_all_of->a_obj_billingentityinternalproduct
    cJSON *a_obj_billingentityinternalproduct = cJSON_GetObjectItemCaseSensitive(billingentityinternal_response_compound_all_ofJSON, "a_objBillingentityinternalproduct");
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
        billingentityinternalproduct_response_compound_t *a_obj_billingentityinternalproductItem = billingentityinternalproduct_response_compound_parseFromJSON(a_obj_billingentityinternalproduct_local_nonprimitive);

        list_addElement(a_obj_billingentityinternalproductList, a_obj_billingentityinternalproductItem);
    }


    billingentityinternal_response_compound_all_of_local_var = billingentityinternal_response_compound_all_of_create (
        a_obj_billingentityinternalproductList
        );

    return billingentityinternal_response_compound_all_of_local_var;
end:
    if (a_obj_billingentityinternalproductList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_billingentityinternalproductList) {
            billingentityinternalproduct_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_billingentityinternalproductList);
        a_obj_billingentityinternalproductList = NULL;
    }
    return NULL;

}
