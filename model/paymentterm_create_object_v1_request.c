#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "paymentterm_create_object_v1_request.h"



static paymentterm_create_object_v1_request_t *paymentterm_create_object_v1_request_create_internal(
    list_t *a_obj_paymentterm
    ) {
    paymentterm_create_object_v1_request_t *paymentterm_create_object_v1_request_local_var = malloc(sizeof(paymentterm_create_object_v1_request_t));
    if (!paymentterm_create_object_v1_request_local_var) {
        return NULL;
    }
    paymentterm_create_object_v1_request_local_var->a_obj_paymentterm = a_obj_paymentterm;

    paymentterm_create_object_v1_request_local_var->_library_owned = 1;
    return paymentterm_create_object_v1_request_local_var;
}

__attribute__((deprecated)) paymentterm_create_object_v1_request_t *paymentterm_create_object_v1_request_create(
    list_t *a_obj_paymentterm
    ) {
    return paymentterm_create_object_v1_request_create_internal (
        a_obj_paymentterm
        );
}

void paymentterm_create_object_v1_request_free(paymentterm_create_object_v1_request_t *paymentterm_create_object_v1_request) {
    if(NULL == paymentterm_create_object_v1_request){
        return ;
    }
    if(paymentterm_create_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "paymentterm_create_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (paymentterm_create_object_v1_request->a_obj_paymentterm) {
        list_ForEach(listEntry, paymentterm_create_object_v1_request->a_obj_paymentterm) {
            paymentterm_request_compound_free(listEntry->data);
        }
        list_freeList(paymentterm_create_object_v1_request->a_obj_paymentterm);
        paymentterm_create_object_v1_request->a_obj_paymentterm = NULL;
    }
    free(paymentterm_create_object_v1_request);
}

cJSON *paymentterm_create_object_v1_request_convertToJSON(paymentterm_create_object_v1_request_t *paymentterm_create_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // paymentterm_create_object_v1_request->a_obj_paymentterm
    if (!paymentterm_create_object_v1_request->a_obj_paymentterm) {
        goto fail;
    }
    cJSON *a_obj_paymentterm = cJSON_AddArrayToObject(item, "a_objPaymentterm");
    if(a_obj_paymentterm == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_paymenttermListEntry;
    if (paymentterm_create_object_v1_request->a_obj_paymentterm) {
    list_ForEach(a_obj_paymenttermListEntry, paymentterm_create_object_v1_request->a_obj_paymentterm) {
    cJSON *itemLocal = paymentterm_request_compound_convertToJSON(a_obj_paymenttermListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_paymentterm, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

paymentterm_create_object_v1_request_t *paymentterm_create_object_v1_request_parseFromJSON(cJSON *paymentterm_create_object_v1_requestJSON){

    paymentterm_create_object_v1_request_t *paymentterm_create_object_v1_request_local_var = NULL;

    // define the local list for paymentterm_create_object_v1_request->a_obj_paymentterm
    list_t *a_obj_paymenttermList = NULL;

    // paymentterm_create_object_v1_request->a_obj_paymentterm
    cJSON *a_obj_paymentterm = cJSON_GetObjectItemCaseSensitive(paymentterm_create_object_v1_requestJSON, "a_objPaymentterm");
    if (cJSON_IsNull(a_obj_paymentterm)) {
        a_obj_paymentterm = NULL;
    }
    if (!a_obj_paymentterm) {
        goto end;
    }

    
    cJSON *a_obj_paymentterm_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_paymentterm)){
        goto end; //nonprimitive container
    }

    a_obj_paymenttermList = list_createList();

    cJSON_ArrayForEach(a_obj_paymentterm_local_nonprimitive,a_obj_paymentterm )
    {
        if(!cJSON_IsObject(a_obj_paymentterm_local_nonprimitive)){
            goto end;
        }
        paymentterm_request_compound_t *a_obj_paymenttermItem = paymentterm_request_compound_parseFromJSON(a_obj_paymentterm_local_nonprimitive);

        list_addElement(a_obj_paymenttermList, a_obj_paymenttermItem);
    }


    paymentterm_create_object_v1_request_local_var = paymentterm_create_object_v1_request_create_internal (
        a_obj_paymenttermList
        );

    return paymentterm_create_object_v1_request_local_var;
end:
    if (a_obj_paymenttermList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_paymenttermList) {
            paymentterm_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_paymenttermList);
        a_obj_paymenttermList = NULL;
    }
    return NULL;

}
