#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "creditcardclient_patch_object_v1_request.h"



static creditcardclient_patch_object_v1_request_t *creditcardclient_patch_object_v1_request_create_internal(
    creditcardclient_request_patch_t *obj_creditcardclient
    ) {
    creditcardclient_patch_object_v1_request_t *creditcardclient_patch_object_v1_request_local_var = malloc(sizeof(creditcardclient_patch_object_v1_request_t));
    if (!creditcardclient_patch_object_v1_request_local_var) {
        return NULL;
    }
    creditcardclient_patch_object_v1_request_local_var->obj_creditcardclient = obj_creditcardclient;

    creditcardclient_patch_object_v1_request_local_var->_library_owned = 1;
    return creditcardclient_patch_object_v1_request_local_var;
}

__attribute__((deprecated)) creditcardclient_patch_object_v1_request_t *creditcardclient_patch_object_v1_request_create(
    creditcardclient_request_patch_t *obj_creditcardclient
    ) {
    return creditcardclient_patch_object_v1_request_create_internal (
        obj_creditcardclient
        );
}

void creditcardclient_patch_object_v1_request_free(creditcardclient_patch_object_v1_request_t *creditcardclient_patch_object_v1_request) {
    if(NULL == creditcardclient_patch_object_v1_request){
        return ;
    }
    if(creditcardclient_patch_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "creditcardclient_patch_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (creditcardclient_patch_object_v1_request->obj_creditcardclient) {
        creditcardclient_request_patch_free(creditcardclient_patch_object_v1_request->obj_creditcardclient);
        creditcardclient_patch_object_v1_request->obj_creditcardclient = NULL;
    }
    free(creditcardclient_patch_object_v1_request);
}

cJSON *creditcardclient_patch_object_v1_request_convertToJSON(creditcardclient_patch_object_v1_request_t *creditcardclient_patch_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // creditcardclient_patch_object_v1_request->obj_creditcardclient
    if (!creditcardclient_patch_object_v1_request->obj_creditcardclient) {
        goto fail;
    }
    cJSON *obj_creditcardclient_local_JSON = creditcardclient_request_patch_convertToJSON(creditcardclient_patch_object_v1_request->obj_creditcardclient);
    if(obj_creditcardclient_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objCreditcardclient", obj_creditcardclient_local_JSON);
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

creditcardclient_patch_object_v1_request_t *creditcardclient_patch_object_v1_request_parseFromJSON(cJSON *creditcardclient_patch_object_v1_requestJSON){

    creditcardclient_patch_object_v1_request_t *creditcardclient_patch_object_v1_request_local_var = NULL;

    // define the local variable for creditcardclient_patch_object_v1_request->obj_creditcardclient
    creditcardclient_request_patch_t *obj_creditcardclient_local_nonprim = NULL;

    // creditcardclient_patch_object_v1_request->obj_creditcardclient
    cJSON *obj_creditcardclient = cJSON_GetObjectItemCaseSensitive(creditcardclient_patch_object_v1_requestJSON, "objCreditcardclient");
    if (cJSON_IsNull(obj_creditcardclient)) {
        obj_creditcardclient = NULL;
    }
    if (!obj_creditcardclient) {
        goto end;
    }

    
    obj_creditcardclient_local_nonprim = creditcardclient_request_patch_parseFromJSON(obj_creditcardclient); //nonprimitive


    creditcardclient_patch_object_v1_request_local_var = creditcardclient_patch_object_v1_request_create_internal (
        obj_creditcardclient_local_nonprim
        );

    return creditcardclient_patch_object_v1_request_local_var;
end:
    if (obj_creditcardclient_local_nonprim) {
        creditcardclient_request_patch_free(obj_creditcardclient_local_nonprim);
        obj_creditcardclient_local_nonprim = NULL;
    }
    return NULL;

}
