#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "creditcardclient_edit_object_v1_request.h"



creditcardclient_edit_object_v1_request_t *creditcardclient_edit_object_v1_request_create(
    creditcardclient_request_compound_t *obj_creditcardclient
    ) {
    creditcardclient_edit_object_v1_request_t *creditcardclient_edit_object_v1_request_local_var = malloc(sizeof(creditcardclient_edit_object_v1_request_t));
    if (!creditcardclient_edit_object_v1_request_local_var) {
        return NULL;
    }
    creditcardclient_edit_object_v1_request_local_var->obj_creditcardclient = obj_creditcardclient;

    return creditcardclient_edit_object_v1_request_local_var;
}


void creditcardclient_edit_object_v1_request_free(creditcardclient_edit_object_v1_request_t *creditcardclient_edit_object_v1_request) {
    if(NULL == creditcardclient_edit_object_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (creditcardclient_edit_object_v1_request->obj_creditcardclient) {
        creditcardclient_request_compound_free(creditcardclient_edit_object_v1_request->obj_creditcardclient);
        creditcardclient_edit_object_v1_request->obj_creditcardclient = NULL;
    }
    free(creditcardclient_edit_object_v1_request);
}

cJSON *creditcardclient_edit_object_v1_request_convertToJSON(creditcardclient_edit_object_v1_request_t *creditcardclient_edit_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // creditcardclient_edit_object_v1_request->obj_creditcardclient
    if (!creditcardclient_edit_object_v1_request->obj_creditcardclient) {
        goto fail;
    }
    cJSON *obj_creditcardclient_local_JSON = creditcardclient_request_compound_convertToJSON(creditcardclient_edit_object_v1_request->obj_creditcardclient);
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

creditcardclient_edit_object_v1_request_t *creditcardclient_edit_object_v1_request_parseFromJSON(cJSON *creditcardclient_edit_object_v1_requestJSON){

    creditcardclient_edit_object_v1_request_t *creditcardclient_edit_object_v1_request_local_var = NULL;

    // define the local variable for creditcardclient_edit_object_v1_request->obj_creditcardclient
    creditcardclient_request_compound_t *obj_creditcardclient_local_nonprim = NULL;

    // creditcardclient_edit_object_v1_request->obj_creditcardclient
    cJSON *obj_creditcardclient = cJSON_GetObjectItemCaseSensitive(creditcardclient_edit_object_v1_requestJSON, "objCreditcardclient");
    if (!obj_creditcardclient) {
        goto end;
    }

    
    obj_creditcardclient_local_nonprim = creditcardclient_request_compound_parseFromJSON(obj_creditcardclient); //nonprimitive


    creditcardclient_edit_object_v1_request_local_var = creditcardclient_edit_object_v1_request_create (
        obj_creditcardclient_local_nonprim
        );

    return creditcardclient_edit_object_v1_request_local_var;
end:
    if (obj_creditcardclient_local_nonprim) {
        creditcardclient_request_compound_free(obj_creditcardclient_local_nonprim);
        obj_creditcardclient_local_nonprim = NULL;
    }
    return NULL;

}
