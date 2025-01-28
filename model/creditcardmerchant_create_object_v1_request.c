#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "creditcardmerchant_create_object_v1_request.h"



static creditcardmerchant_create_object_v1_request_t *creditcardmerchant_create_object_v1_request_create_internal(
    list_t *a_obj_creditcardmerchant
    ) {
    creditcardmerchant_create_object_v1_request_t *creditcardmerchant_create_object_v1_request_local_var = malloc(sizeof(creditcardmerchant_create_object_v1_request_t));
    if (!creditcardmerchant_create_object_v1_request_local_var) {
        return NULL;
    }
    creditcardmerchant_create_object_v1_request_local_var->a_obj_creditcardmerchant = a_obj_creditcardmerchant;

    creditcardmerchant_create_object_v1_request_local_var->_library_owned = 1;
    return creditcardmerchant_create_object_v1_request_local_var;
}

__attribute__((deprecated)) creditcardmerchant_create_object_v1_request_t *creditcardmerchant_create_object_v1_request_create(
    list_t *a_obj_creditcardmerchant
    ) {
    return creditcardmerchant_create_object_v1_request_create_internal (
        a_obj_creditcardmerchant
        );
}

void creditcardmerchant_create_object_v1_request_free(creditcardmerchant_create_object_v1_request_t *creditcardmerchant_create_object_v1_request) {
    if(NULL == creditcardmerchant_create_object_v1_request){
        return ;
    }
    if(creditcardmerchant_create_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "creditcardmerchant_create_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (creditcardmerchant_create_object_v1_request->a_obj_creditcardmerchant) {
        list_ForEach(listEntry, creditcardmerchant_create_object_v1_request->a_obj_creditcardmerchant) {
            creditcardmerchant_request_compound_free(listEntry->data);
        }
        list_freeList(creditcardmerchant_create_object_v1_request->a_obj_creditcardmerchant);
        creditcardmerchant_create_object_v1_request->a_obj_creditcardmerchant = NULL;
    }
    free(creditcardmerchant_create_object_v1_request);
}

cJSON *creditcardmerchant_create_object_v1_request_convertToJSON(creditcardmerchant_create_object_v1_request_t *creditcardmerchant_create_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // creditcardmerchant_create_object_v1_request->a_obj_creditcardmerchant
    if (!creditcardmerchant_create_object_v1_request->a_obj_creditcardmerchant) {
        goto fail;
    }
    cJSON *a_obj_creditcardmerchant = cJSON_AddArrayToObject(item, "a_objCreditcardmerchant");
    if(a_obj_creditcardmerchant == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_creditcardmerchantListEntry;
    if (creditcardmerchant_create_object_v1_request->a_obj_creditcardmerchant) {
    list_ForEach(a_obj_creditcardmerchantListEntry, creditcardmerchant_create_object_v1_request->a_obj_creditcardmerchant) {
    cJSON *itemLocal = creditcardmerchant_request_compound_convertToJSON(a_obj_creditcardmerchantListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_creditcardmerchant, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

creditcardmerchant_create_object_v1_request_t *creditcardmerchant_create_object_v1_request_parseFromJSON(cJSON *creditcardmerchant_create_object_v1_requestJSON){

    creditcardmerchant_create_object_v1_request_t *creditcardmerchant_create_object_v1_request_local_var = NULL;

    // define the local list for creditcardmerchant_create_object_v1_request->a_obj_creditcardmerchant
    list_t *a_obj_creditcardmerchantList = NULL;

    // creditcardmerchant_create_object_v1_request->a_obj_creditcardmerchant
    cJSON *a_obj_creditcardmerchant = cJSON_GetObjectItemCaseSensitive(creditcardmerchant_create_object_v1_requestJSON, "a_objCreditcardmerchant");
    if (cJSON_IsNull(a_obj_creditcardmerchant)) {
        a_obj_creditcardmerchant = NULL;
    }
    if (!a_obj_creditcardmerchant) {
        goto end;
    }

    
    cJSON *a_obj_creditcardmerchant_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_creditcardmerchant)){
        goto end; //nonprimitive container
    }

    a_obj_creditcardmerchantList = list_createList();

    cJSON_ArrayForEach(a_obj_creditcardmerchant_local_nonprimitive,a_obj_creditcardmerchant )
    {
        if(!cJSON_IsObject(a_obj_creditcardmerchant_local_nonprimitive)){
            goto end;
        }
        creditcardmerchant_request_compound_t *a_obj_creditcardmerchantItem = creditcardmerchant_request_compound_parseFromJSON(a_obj_creditcardmerchant_local_nonprimitive);

        list_addElement(a_obj_creditcardmerchantList, a_obj_creditcardmerchantItem);
    }


    creditcardmerchant_create_object_v1_request_local_var = creditcardmerchant_create_object_v1_request_create_internal (
        a_obj_creditcardmerchantList
        );

    return creditcardmerchant_create_object_v1_request_local_var;
end:
    if (a_obj_creditcardmerchantList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_creditcardmerchantList) {
            creditcardmerchant_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_creditcardmerchantList);
        a_obj_creditcardmerchantList = NULL;
    }
    return NULL;

}
