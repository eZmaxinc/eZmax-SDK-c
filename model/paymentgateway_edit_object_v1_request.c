#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "paymentgateway_edit_object_v1_request.h"



static paymentgateway_edit_object_v1_request_t *paymentgateway_edit_object_v1_request_create_internal(
    paymentgateway_request_compound_t *obj_paymentgateway
    ) {
    paymentgateway_edit_object_v1_request_t *paymentgateway_edit_object_v1_request_local_var = malloc(sizeof(paymentgateway_edit_object_v1_request_t));
    if (!paymentgateway_edit_object_v1_request_local_var) {
        return NULL;
    }
    memset(paymentgateway_edit_object_v1_request_local_var, 0, sizeof(paymentgateway_edit_object_v1_request_t));
    paymentgateway_edit_object_v1_request_local_var->_library_owned = 1;
    paymentgateway_edit_object_v1_request_local_var->obj_paymentgateway = obj_paymentgateway;
    return paymentgateway_edit_object_v1_request_local_var;
}

__attribute__((deprecated)) paymentgateway_edit_object_v1_request_t *paymentgateway_edit_object_v1_request_create(
    paymentgateway_request_compound_t *obj_paymentgateway
    ) {
    paymentgateway_edit_object_v1_request_t *result = paymentgateway_edit_object_v1_request_create_internal (
        obj_paymentgateway
        );
    if (!result) {
    }
    return result;
}

void paymentgateway_edit_object_v1_request_free(paymentgateway_edit_object_v1_request_t *paymentgateway_edit_object_v1_request) {
    if(NULL == paymentgateway_edit_object_v1_request){
        return ;
    }
    if(paymentgateway_edit_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "paymentgateway_edit_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (paymentgateway_edit_object_v1_request->obj_paymentgateway) {
        paymentgateway_request_compound_free(paymentgateway_edit_object_v1_request->obj_paymentgateway);
        paymentgateway_edit_object_v1_request->obj_paymentgateway = NULL;
    }
    free(paymentgateway_edit_object_v1_request);
}

cJSON *paymentgateway_edit_object_v1_request_convertToJSON(paymentgateway_edit_object_v1_request_t *paymentgateway_edit_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // paymentgateway_edit_object_v1_request->obj_paymentgateway
    if (!paymentgateway_edit_object_v1_request->obj_paymentgateway) {
        goto fail;
    }
    cJSON *obj_paymentgateway_local_JSON = paymentgateway_request_compound_convertToJSON(paymentgateway_edit_object_v1_request->obj_paymentgateway);
    if(obj_paymentgateway_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objPaymentgateway", obj_paymentgateway_local_JSON);
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

paymentgateway_edit_object_v1_request_t *paymentgateway_edit_object_v1_request_parseFromJSON(cJSON *paymentgateway_edit_object_v1_requestJSON){

    paymentgateway_edit_object_v1_request_t *paymentgateway_edit_object_v1_request_local_var = NULL;

    // define the local variable for paymentgateway_edit_object_v1_request->obj_paymentgateway
    paymentgateway_request_compound_t *obj_paymentgateway_local_nonprim = NULL;

    // paymentgateway_edit_object_v1_request->obj_paymentgateway
    cJSON *obj_paymentgateway = cJSON_GetObjectItemCaseSensitive(paymentgateway_edit_object_v1_requestJSON, "objPaymentgateway");
    if (cJSON_IsNull(obj_paymentgateway)) {
        obj_paymentgateway = NULL;
    }
    if (!obj_paymentgateway) {
        goto end;
    }

    
    obj_paymentgateway_local_nonprim = paymentgateway_request_compound_parseFromJSON(obj_paymentgateway); //nonprimitive



    paymentgateway_edit_object_v1_request_local_var = paymentgateway_edit_object_v1_request_create_internal (
        obj_paymentgateway_local_nonprim
        );

    if (!paymentgateway_edit_object_v1_request_local_var) {
        goto end;
    }

    return paymentgateway_edit_object_v1_request_local_var;
end:
    if (obj_paymentgateway_local_nonprim) {
        paymentgateway_request_compound_free(obj_paymentgateway_local_nonprim);
        obj_paymentgateway_local_nonprim = NULL;
    }
    return NULL;

}
