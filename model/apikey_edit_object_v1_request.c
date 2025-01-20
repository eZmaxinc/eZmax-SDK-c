#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "apikey_edit_object_v1_request.h"



apikey_edit_object_v1_request_t *apikey_edit_object_v1_request_create(
    apikey_request_t *obj_apikey
    ) {
    apikey_edit_object_v1_request_t *apikey_edit_object_v1_request_local_var = malloc(sizeof(apikey_edit_object_v1_request_t));
    if (!apikey_edit_object_v1_request_local_var) {
        return NULL;
    }
    apikey_edit_object_v1_request_local_var->obj_apikey = obj_apikey;

    return apikey_edit_object_v1_request_local_var;
}


void apikey_edit_object_v1_request_free(apikey_edit_object_v1_request_t *apikey_edit_object_v1_request) {
    if(NULL == apikey_edit_object_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (apikey_edit_object_v1_request->obj_apikey) {
        apikey_request_free(apikey_edit_object_v1_request->obj_apikey);
        apikey_edit_object_v1_request->obj_apikey = NULL;
    }
    free(apikey_edit_object_v1_request);
}

cJSON *apikey_edit_object_v1_request_convertToJSON(apikey_edit_object_v1_request_t *apikey_edit_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // apikey_edit_object_v1_request->obj_apikey
    if (!apikey_edit_object_v1_request->obj_apikey) {
        goto fail;
    }
    cJSON *obj_apikey_local_JSON = apikey_request_convertToJSON(apikey_edit_object_v1_request->obj_apikey);
    if(obj_apikey_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objApikey", obj_apikey_local_JSON);
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

apikey_edit_object_v1_request_t *apikey_edit_object_v1_request_parseFromJSON(cJSON *apikey_edit_object_v1_requestJSON){

    apikey_edit_object_v1_request_t *apikey_edit_object_v1_request_local_var = NULL;

    // define the local variable for apikey_edit_object_v1_request->obj_apikey
    apikey_request_t *obj_apikey_local_nonprim = NULL;

    // apikey_edit_object_v1_request->obj_apikey
    cJSON *obj_apikey = cJSON_GetObjectItemCaseSensitive(apikey_edit_object_v1_requestJSON, "objApikey");
    if (!obj_apikey) {
        goto end;
    }

    
    obj_apikey_local_nonprim = apikey_request_parseFromJSON(obj_apikey); //nonprimitive


    apikey_edit_object_v1_request_local_var = apikey_edit_object_v1_request_create (
        obj_apikey_local_nonprim
        );

    return apikey_edit_object_v1_request_local_var;
end:
    if (obj_apikey_local_nonprim) {
        apikey_request_free(obj_apikey_local_nonprim);
        obj_apikey_local_nonprim = NULL;
    }
    return NULL;

}
