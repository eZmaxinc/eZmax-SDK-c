#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "billingentityinternal_create_object_v1_request.h"



billingentityinternal_create_object_v1_request_t *billingentityinternal_create_object_v1_request_create(
    list_t *a_obj_billingentityinternal
    ) {
    billingentityinternal_create_object_v1_request_t *billingentityinternal_create_object_v1_request_local_var = malloc(sizeof(billingentityinternal_create_object_v1_request_t));
    if (!billingentityinternal_create_object_v1_request_local_var) {
        return NULL;
    }
    billingentityinternal_create_object_v1_request_local_var->a_obj_billingentityinternal = a_obj_billingentityinternal;

    return billingentityinternal_create_object_v1_request_local_var;
}


void billingentityinternal_create_object_v1_request_free(billingentityinternal_create_object_v1_request_t *billingentityinternal_create_object_v1_request) {
    if(NULL == billingentityinternal_create_object_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (billingentityinternal_create_object_v1_request->a_obj_billingentityinternal) {
        list_ForEach(listEntry, billingentityinternal_create_object_v1_request->a_obj_billingentityinternal) {
            billingentityinternal_request_compound_free(listEntry->data);
        }
        list_freeList(billingentityinternal_create_object_v1_request->a_obj_billingentityinternal);
        billingentityinternal_create_object_v1_request->a_obj_billingentityinternal = NULL;
    }
    free(billingentityinternal_create_object_v1_request);
}

cJSON *billingentityinternal_create_object_v1_request_convertToJSON(billingentityinternal_create_object_v1_request_t *billingentityinternal_create_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // billingentityinternal_create_object_v1_request->a_obj_billingentityinternal
    if (!billingentityinternal_create_object_v1_request->a_obj_billingentityinternal) {
        goto fail;
    }
    cJSON *a_obj_billingentityinternal = cJSON_AddArrayToObject(item, "a_objBillingentityinternal");
    if(a_obj_billingentityinternal == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_billingentityinternalListEntry;
    if (billingentityinternal_create_object_v1_request->a_obj_billingentityinternal) {
    list_ForEach(a_obj_billingentityinternalListEntry, billingentityinternal_create_object_v1_request->a_obj_billingentityinternal) {
    cJSON *itemLocal = billingentityinternal_request_compound_convertToJSON(a_obj_billingentityinternalListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_billingentityinternal, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

billingentityinternal_create_object_v1_request_t *billingentityinternal_create_object_v1_request_parseFromJSON(cJSON *billingentityinternal_create_object_v1_requestJSON){

    billingentityinternal_create_object_v1_request_t *billingentityinternal_create_object_v1_request_local_var = NULL;

    // define the local list for billingentityinternal_create_object_v1_request->a_obj_billingentityinternal
    list_t *a_obj_billingentityinternalList = NULL;

    // billingentityinternal_create_object_v1_request->a_obj_billingentityinternal
    cJSON *a_obj_billingentityinternal = cJSON_GetObjectItemCaseSensitive(billingentityinternal_create_object_v1_requestJSON, "a_objBillingentityinternal");
    if (!a_obj_billingentityinternal) {
        goto end;
    }

    
    cJSON *a_obj_billingentityinternal_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_billingentityinternal)){
        goto end; //nonprimitive container
    }

    a_obj_billingentityinternalList = list_createList();

    cJSON_ArrayForEach(a_obj_billingentityinternal_local_nonprimitive,a_obj_billingentityinternal )
    {
        if(!cJSON_IsObject(a_obj_billingentityinternal_local_nonprimitive)){
            goto end;
        }
        billingentityinternal_request_compound_t *a_obj_billingentityinternalItem = billingentityinternal_request_compound_parseFromJSON(a_obj_billingentityinternal_local_nonprimitive);

        list_addElement(a_obj_billingentityinternalList, a_obj_billingentityinternalItem);
    }


    billingentityinternal_create_object_v1_request_local_var = billingentityinternal_create_object_v1_request_create (
        a_obj_billingentityinternalList
        );

    return billingentityinternal_create_object_v1_request_local_var;
end:
    if (a_obj_billingentityinternalList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_billingentityinternalList) {
            billingentityinternal_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_billingentityinternalList);
        a_obj_billingentityinternalList = NULL;
    }
    return NULL;

}
