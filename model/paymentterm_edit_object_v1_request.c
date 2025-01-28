#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "paymentterm_edit_object_v1_request.h"



static paymentterm_edit_object_v1_request_t *paymentterm_edit_object_v1_request_create_internal(
    paymentterm_request_compound_t *obj_paymentterm
    ) {
    paymentterm_edit_object_v1_request_t *paymentterm_edit_object_v1_request_local_var = malloc(sizeof(paymentterm_edit_object_v1_request_t));
    if (!paymentterm_edit_object_v1_request_local_var) {
        return NULL;
    }
    paymentterm_edit_object_v1_request_local_var->obj_paymentterm = obj_paymentterm;

    paymentterm_edit_object_v1_request_local_var->_library_owned = 1;
    return paymentterm_edit_object_v1_request_local_var;
}

__attribute__((deprecated)) paymentterm_edit_object_v1_request_t *paymentterm_edit_object_v1_request_create(
    paymentterm_request_compound_t *obj_paymentterm
    ) {
    return paymentterm_edit_object_v1_request_create_internal (
        obj_paymentterm
        );
}

void paymentterm_edit_object_v1_request_free(paymentterm_edit_object_v1_request_t *paymentterm_edit_object_v1_request) {
    if(NULL == paymentterm_edit_object_v1_request){
        return ;
    }
    if(paymentterm_edit_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "paymentterm_edit_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (paymentterm_edit_object_v1_request->obj_paymentterm) {
        paymentterm_request_compound_free(paymentterm_edit_object_v1_request->obj_paymentterm);
        paymentterm_edit_object_v1_request->obj_paymentterm = NULL;
    }
    free(paymentterm_edit_object_v1_request);
}

cJSON *paymentterm_edit_object_v1_request_convertToJSON(paymentterm_edit_object_v1_request_t *paymentterm_edit_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // paymentterm_edit_object_v1_request->obj_paymentterm
    if (!paymentterm_edit_object_v1_request->obj_paymentterm) {
        goto fail;
    }
    cJSON *obj_paymentterm_local_JSON = paymentterm_request_compound_convertToJSON(paymentterm_edit_object_v1_request->obj_paymentterm);
    if(obj_paymentterm_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objPaymentterm", obj_paymentterm_local_JSON);
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

paymentterm_edit_object_v1_request_t *paymentterm_edit_object_v1_request_parseFromJSON(cJSON *paymentterm_edit_object_v1_requestJSON){

    paymentterm_edit_object_v1_request_t *paymentterm_edit_object_v1_request_local_var = NULL;

    // define the local variable for paymentterm_edit_object_v1_request->obj_paymentterm
    paymentterm_request_compound_t *obj_paymentterm_local_nonprim = NULL;

    // paymentterm_edit_object_v1_request->obj_paymentterm
    cJSON *obj_paymentterm = cJSON_GetObjectItemCaseSensitive(paymentterm_edit_object_v1_requestJSON, "objPaymentterm");
    if (cJSON_IsNull(obj_paymentterm)) {
        obj_paymentterm = NULL;
    }
    if (!obj_paymentterm) {
        goto end;
    }

    
    obj_paymentterm_local_nonprim = paymentterm_request_compound_parseFromJSON(obj_paymentterm); //nonprimitive


    paymentterm_edit_object_v1_request_local_var = paymentterm_edit_object_v1_request_create_internal (
        obj_paymentterm_local_nonprim
        );

    return paymentterm_edit_object_v1_request_local_var;
end:
    if (obj_paymentterm_local_nonprim) {
        paymentterm_request_compound_free(obj_paymentterm_local_nonprim);
        obj_paymentterm_local_nonprim = NULL;
    }
    return NULL;

}
