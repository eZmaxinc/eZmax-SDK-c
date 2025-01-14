#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "creditcardclient_patch_object_v1_request.h"



creditcardclient_patch_object_v1_request_t *creditcardclient_patch_object_v1_request_create(
    creditcardclient_request_patch_t *obj_creditcardclient
    ) {
    creditcardclient_patch_object_v1_request_t *creditcardclient_patch_object_v1_request_local_var = malloc(sizeof(creditcardclient_patch_object_v1_request_t));
    if (!creditcardclient_patch_object_v1_request_local_var) {
        return NULL;
    }
    creditcardclient_patch_object_v1_request_local_var->obj_creditcardclient = obj_creditcardclient;

    return creditcardclient_patch_object_v1_request_local_var;
}


void creditcardclient_patch_object_v1_request_free(creditcardclient_patch_object_v1_request_t *creditcardclient_patch_object_v1_request) {
    if(NULL == creditcardclient_patch_object_v1_request){
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
    if (!obj_creditcardclient) {
        goto end;
    }

    
    obj_creditcardclient_local_nonprim = creditcardclient_request_patch_parseFromJSON(obj_creditcardclient); //nonprimitive


    creditcardclient_patch_object_v1_request_local_var = creditcardclient_patch_object_v1_request_create (
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
