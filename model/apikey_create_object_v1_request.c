#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "apikey_create_object_v1_request.h"



apikey_create_object_v1_request_t *apikey_create_object_v1_request_create(
    apikey_request_t *obj_apikey,
    apikey_request_compound_t *obj_apikey_compound
    ) {
    apikey_create_object_v1_request_t *apikey_create_object_v1_request_local_var = malloc(sizeof(apikey_create_object_v1_request_t));
    if (!apikey_create_object_v1_request_local_var) {
        return NULL;
    }
    apikey_create_object_v1_request_local_var->obj_apikey = obj_apikey;
    apikey_create_object_v1_request_local_var->obj_apikey_compound = obj_apikey_compound;

    return apikey_create_object_v1_request_local_var;
}


void apikey_create_object_v1_request_free(apikey_create_object_v1_request_t *apikey_create_object_v1_request) {
    if(NULL == apikey_create_object_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (apikey_create_object_v1_request->obj_apikey) {
        apikey_request_free(apikey_create_object_v1_request->obj_apikey);
        apikey_create_object_v1_request->obj_apikey = NULL;
    }
    if (apikey_create_object_v1_request->obj_apikey_compound) {
        apikey_request_compound_free(apikey_create_object_v1_request->obj_apikey_compound);
        apikey_create_object_v1_request->obj_apikey_compound = NULL;
    }
    free(apikey_create_object_v1_request);
}

cJSON *apikey_create_object_v1_request_convertToJSON(apikey_create_object_v1_request_t *apikey_create_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // apikey_create_object_v1_request->obj_apikey
    if(apikey_create_object_v1_request->obj_apikey) {
    cJSON *obj_apikey_local_JSON = apikey_request_convertToJSON(apikey_create_object_v1_request->obj_apikey);
    if(obj_apikey_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objApikey", obj_apikey_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // apikey_create_object_v1_request->obj_apikey_compound
    if(apikey_create_object_v1_request->obj_apikey_compound) {
    cJSON *obj_apikey_compound_local_JSON = apikey_request_compound_convertToJSON(apikey_create_object_v1_request->obj_apikey_compound);
    if(obj_apikey_compound_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objApikeyCompound", obj_apikey_compound_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

apikey_create_object_v1_request_t *apikey_create_object_v1_request_parseFromJSON(cJSON *apikey_create_object_v1_requestJSON){

    apikey_create_object_v1_request_t *apikey_create_object_v1_request_local_var = NULL;

    // define the local variable for apikey_create_object_v1_request->obj_apikey
    apikey_request_t *obj_apikey_local_nonprim = NULL;

    // define the local variable for apikey_create_object_v1_request->obj_apikey_compound
    apikey_request_compound_t *obj_apikey_compound_local_nonprim = NULL;

    // apikey_create_object_v1_request->obj_apikey
    cJSON *obj_apikey = cJSON_GetObjectItemCaseSensitive(apikey_create_object_v1_requestJSON, "objApikey");
    if (obj_apikey) { 
    obj_apikey_local_nonprim = apikey_request_parseFromJSON(obj_apikey); //nonprimitive
    }

    // apikey_create_object_v1_request->obj_apikey_compound
    cJSON *obj_apikey_compound = cJSON_GetObjectItemCaseSensitive(apikey_create_object_v1_requestJSON, "objApikeyCompound");
    if (obj_apikey_compound) { 
    obj_apikey_compound_local_nonprim = apikey_request_compound_parseFromJSON(obj_apikey_compound); //nonprimitive
    }


    apikey_create_object_v1_request_local_var = apikey_create_object_v1_request_create (
        obj_apikey ? obj_apikey_local_nonprim : NULL,
        obj_apikey_compound ? obj_apikey_compound_local_nonprim : NULL
        );

    return apikey_create_object_v1_request_local_var;
end:
    if (obj_apikey_local_nonprim) {
        apikey_request_free(obj_apikey_local_nonprim);
        obj_apikey_local_nonprim = NULL;
    }
    if (obj_apikey_compound_local_nonprim) {
        apikey_request_compound_free(obj_apikey_compound_local_nonprim);
        obj_apikey_compound_local_nonprim = NULL;
    }
    return NULL;

}
