#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cors_create_object_v1_request.h"



cors_create_object_v1_request_t *cors_create_object_v1_request_create(
    list_t *a_obj_cors
    ) {
    cors_create_object_v1_request_t *cors_create_object_v1_request_local_var = malloc(sizeof(cors_create_object_v1_request_t));
    if (!cors_create_object_v1_request_local_var) {
        return NULL;
    }
    cors_create_object_v1_request_local_var->a_obj_cors = a_obj_cors;

    return cors_create_object_v1_request_local_var;
}


void cors_create_object_v1_request_free(cors_create_object_v1_request_t *cors_create_object_v1_request) {
    if(NULL == cors_create_object_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (cors_create_object_v1_request->a_obj_cors) {
        list_ForEach(listEntry, cors_create_object_v1_request->a_obj_cors) {
            cors_request_compound_free(listEntry->data);
        }
        list_freeList(cors_create_object_v1_request->a_obj_cors);
        cors_create_object_v1_request->a_obj_cors = NULL;
    }
    free(cors_create_object_v1_request);
}

cJSON *cors_create_object_v1_request_convertToJSON(cors_create_object_v1_request_t *cors_create_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // cors_create_object_v1_request->a_obj_cors
    if (!cors_create_object_v1_request->a_obj_cors) {
        goto fail;
    }
    cJSON *a_obj_cors = cJSON_AddArrayToObject(item, "a_objCors");
    if(a_obj_cors == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_corsListEntry;
    if (cors_create_object_v1_request->a_obj_cors) {
    list_ForEach(a_obj_corsListEntry, cors_create_object_v1_request->a_obj_cors) {
    cJSON *itemLocal = cors_request_compound_convertToJSON(a_obj_corsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_cors, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

cors_create_object_v1_request_t *cors_create_object_v1_request_parseFromJSON(cJSON *cors_create_object_v1_requestJSON){

    cors_create_object_v1_request_t *cors_create_object_v1_request_local_var = NULL;

    // define the local list for cors_create_object_v1_request->a_obj_cors
    list_t *a_obj_corsList = NULL;

    // cors_create_object_v1_request->a_obj_cors
    cJSON *a_obj_cors = cJSON_GetObjectItemCaseSensitive(cors_create_object_v1_requestJSON, "a_objCors");
    if (!a_obj_cors) {
        goto end;
    }

    
    cJSON *a_obj_cors_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_cors)){
        goto end; //nonprimitive container
    }

    a_obj_corsList = list_createList();

    cJSON_ArrayForEach(a_obj_cors_local_nonprimitive,a_obj_cors )
    {
        if(!cJSON_IsObject(a_obj_cors_local_nonprimitive)){
            goto end;
        }
        cors_request_compound_t *a_obj_corsItem = cors_request_compound_parseFromJSON(a_obj_cors_local_nonprimitive);

        list_addElement(a_obj_corsList, a_obj_corsItem);
    }


    cors_create_object_v1_request_local_var = cors_create_object_v1_request_create (
        a_obj_corsList
        );

    return cors_create_object_v1_request_local_var;
end:
    if (a_obj_corsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_corsList) {
            cors_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_corsList);
        a_obj_corsList = NULL;
    }
    return NULL;

}
