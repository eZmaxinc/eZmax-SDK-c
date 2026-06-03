#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "paymentgateway_create_object_v1_request.h"



static paymentgateway_create_object_v1_request_t *paymentgateway_create_object_v1_request_create_internal(
    list_t *a_obj_paymentgateway
    ) {
    paymentgateway_create_object_v1_request_t *paymentgateway_create_object_v1_request_local_var = malloc(sizeof(paymentgateway_create_object_v1_request_t));
    if (!paymentgateway_create_object_v1_request_local_var) {
        return NULL;
    }
    memset(paymentgateway_create_object_v1_request_local_var, 0, sizeof(paymentgateway_create_object_v1_request_t));
    paymentgateway_create_object_v1_request_local_var->_library_owned = 1;
    paymentgateway_create_object_v1_request_local_var->a_obj_paymentgateway = a_obj_paymentgateway;
    return paymentgateway_create_object_v1_request_local_var;
}

__attribute__((deprecated)) paymentgateway_create_object_v1_request_t *paymentgateway_create_object_v1_request_create(
    list_t *a_obj_paymentgateway
    ) {
    paymentgateway_create_object_v1_request_t *result = paymentgateway_create_object_v1_request_create_internal (
        a_obj_paymentgateway
        );
    if (!result) {
    }
    return result;
}

void paymentgateway_create_object_v1_request_free(paymentgateway_create_object_v1_request_t *paymentgateway_create_object_v1_request) {
    if(NULL == paymentgateway_create_object_v1_request){
        return ;
    }
    if(paymentgateway_create_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "paymentgateway_create_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (paymentgateway_create_object_v1_request->a_obj_paymentgateway) {
        list_ForEach(listEntry, paymentgateway_create_object_v1_request->a_obj_paymentgateway) {
            paymentgateway_request_compound_free(listEntry->data);
        }
        list_freeList(paymentgateway_create_object_v1_request->a_obj_paymentgateway);
        paymentgateway_create_object_v1_request->a_obj_paymentgateway = NULL;
    }
    free(paymentgateway_create_object_v1_request);
}

cJSON *paymentgateway_create_object_v1_request_convertToJSON(paymentgateway_create_object_v1_request_t *paymentgateway_create_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // paymentgateway_create_object_v1_request->a_obj_paymentgateway
    if (!paymentgateway_create_object_v1_request->a_obj_paymentgateway) {
        goto fail;
    }
    cJSON *a_obj_paymentgateway = cJSON_AddArrayToObject(item, "a_objPaymentgateway");
    if(a_obj_paymentgateway == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_paymentgatewayListEntry;
    if (paymentgateway_create_object_v1_request->a_obj_paymentgateway) {
    list_ForEach(a_obj_paymentgatewayListEntry, paymentgateway_create_object_v1_request->a_obj_paymentgateway) {
    cJSON *itemLocal = paymentgateway_request_compound_convertToJSON(a_obj_paymentgatewayListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_paymentgateway, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

paymentgateway_create_object_v1_request_t *paymentgateway_create_object_v1_request_parseFromJSON(cJSON *paymentgateway_create_object_v1_requestJSON){

    paymentgateway_create_object_v1_request_t *paymentgateway_create_object_v1_request_local_var = NULL;

    // define the local list for paymentgateway_create_object_v1_request->a_obj_paymentgateway
    list_t *a_obj_paymentgatewayList = NULL;

    // paymentgateway_create_object_v1_request->a_obj_paymentgateway
    cJSON *a_obj_paymentgateway = cJSON_GetObjectItemCaseSensitive(paymentgateway_create_object_v1_requestJSON, "a_objPaymentgateway");
    if (cJSON_IsNull(a_obj_paymentgateway)) {
        a_obj_paymentgateway = NULL;
    }
    if (!a_obj_paymentgateway) {
        goto end;
    }

    
    cJSON *a_obj_paymentgateway_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_paymentgateway)){
        goto end; //nonprimitive container
    }

    a_obj_paymentgatewayList = list_createList();

    cJSON_ArrayForEach(a_obj_paymentgateway_local_nonprimitive,a_obj_paymentgateway )
    {
        if(!cJSON_IsObject(a_obj_paymentgateway_local_nonprimitive)){
            goto end;
        }
        paymentgateway_request_compound_t *a_obj_paymentgatewayItem = paymentgateway_request_compound_parseFromJSON(a_obj_paymentgateway_local_nonprimitive);

        list_addElement(a_obj_paymentgatewayList, a_obj_paymentgatewayItem);
    }



    paymentgateway_create_object_v1_request_local_var = paymentgateway_create_object_v1_request_create_internal (
        a_obj_paymentgatewayList
        );

    if (!paymentgateway_create_object_v1_request_local_var) {
        goto end;
    }

    return paymentgateway_create_object_v1_request_local_var;
end:
    if (a_obj_paymentgatewayList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_paymentgatewayList) {
            paymentgateway_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_paymentgatewayList);
        a_obj_paymentgatewayList = NULL;
    }
    return NULL;

}
