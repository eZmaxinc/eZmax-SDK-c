#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "creditcardmerchant_edit_object_v1_request.h"



static creditcardmerchant_edit_object_v1_request_t *creditcardmerchant_edit_object_v1_request_create_internal(
    creditcardmerchant_request_compound_t *obj_creditcardmerchant
    ) {
    creditcardmerchant_edit_object_v1_request_t *creditcardmerchant_edit_object_v1_request_local_var = malloc(sizeof(creditcardmerchant_edit_object_v1_request_t));
    if (!creditcardmerchant_edit_object_v1_request_local_var) {
        return NULL;
    }
    creditcardmerchant_edit_object_v1_request_local_var->obj_creditcardmerchant = obj_creditcardmerchant;

    creditcardmerchant_edit_object_v1_request_local_var->_library_owned = 1;
    return creditcardmerchant_edit_object_v1_request_local_var;
}

__attribute__((deprecated)) creditcardmerchant_edit_object_v1_request_t *creditcardmerchant_edit_object_v1_request_create(
    creditcardmerchant_request_compound_t *obj_creditcardmerchant
    ) {
    return creditcardmerchant_edit_object_v1_request_create_internal (
        obj_creditcardmerchant
        );
}

void creditcardmerchant_edit_object_v1_request_free(creditcardmerchant_edit_object_v1_request_t *creditcardmerchant_edit_object_v1_request) {
    if(NULL == creditcardmerchant_edit_object_v1_request){
        return ;
    }
    if(creditcardmerchant_edit_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "creditcardmerchant_edit_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (creditcardmerchant_edit_object_v1_request->obj_creditcardmerchant) {
        creditcardmerchant_request_compound_free(creditcardmerchant_edit_object_v1_request->obj_creditcardmerchant);
        creditcardmerchant_edit_object_v1_request->obj_creditcardmerchant = NULL;
    }
    free(creditcardmerchant_edit_object_v1_request);
}

cJSON *creditcardmerchant_edit_object_v1_request_convertToJSON(creditcardmerchant_edit_object_v1_request_t *creditcardmerchant_edit_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // creditcardmerchant_edit_object_v1_request->obj_creditcardmerchant
    if (!creditcardmerchant_edit_object_v1_request->obj_creditcardmerchant) {
        goto fail;
    }
    cJSON *obj_creditcardmerchant_local_JSON = creditcardmerchant_request_compound_convertToJSON(creditcardmerchant_edit_object_v1_request->obj_creditcardmerchant);
    if(obj_creditcardmerchant_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objCreditcardmerchant", obj_creditcardmerchant_local_JSON);
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

creditcardmerchant_edit_object_v1_request_t *creditcardmerchant_edit_object_v1_request_parseFromJSON(cJSON *creditcardmerchant_edit_object_v1_requestJSON){

    creditcardmerchant_edit_object_v1_request_t *creditcardmerchant_edit_object_v1_request_local_var = NULL;

    // define the local variable for creditcardmerchant_edit_object_v1_request->obj_creditcardmerchant
    creditcardmerchant_request_compound_t *obj_creditcardmerchant_local_nonprim = NULL;

    // creditcardmerchant_edit_object_v1_request->obj_creditcardmerchant
    cJSON *obj_creditcardmerchant = cJSON_GetObjectItemCaseSensitive(creditcardmerchant_edit_object_v1_requestJSON, "objCreditcardmerchant");
    if (cJSON_IsNull(obj_creditcardmerchant)) {
        obj_creditcardmerchant = NULL;
    }
    if (!obj_creditcardmerchant) {
        goto end;
    }

    
    obj_creditcardmerchant_local_nonprim = creditcardmerchant_request_compound_parseFromJSON(obj_creditcardmerchant); //nonprimitive


    creditcardmerchant_edit_object_v1_request_local_var = creditcardmerchant_edit_object_v1_request_create_internal (
        obj_creditcardmerchant_local_nonprim
        );

    return creditcardmerchant_edit_object_v1_request_local_var;
end:
    if (obj_creditcardmerchant_local_nonprim) {
        creditcardmerchant_request_compound_free(obj_creditcardmerchant_local_nonprim);
        obj_creditcardmerchant_local_nonprim = NULL;
    }
    return NULL;

}
