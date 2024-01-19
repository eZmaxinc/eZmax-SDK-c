#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "discussionmessage_patch_object_v1_request.h"



discussionmessage_patch_object_v1_request_t *discussionmessage_patch_object_v1_request_create(
    discussionmessage_request_patch_t *obj_discussionmessage
    ) {
    discussionmessage_patch_object_v1_request_t *discussionmessage_patch_object_v1_request_local_var = malloc(sizeof(discussionmessage_patch_object_v1_request_t));
    if (!discussionmessage_patch_object_v1_request_local_var) {
        return NULL;
    }
    discussionmessage_patch_object_v1_request_local_var->obj_discussionmessage = obj_discussionmessage;

    return discussionmessage_patch_object_v1_request_local_var;
}


void discussionmessage_patch_object_v1_request_free(discussionmessage_patch_object_v1_request_t *discussionmessage_patch_object_v1_request) {
    if(NULL == discussionmessage_patch_object_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (discussionmessage_patch_object_v1_request->obj_discussionmessage) {
        discussionmessage_request_patch_free(discussionmessage_patch_object_v1_request->obj_discussionmessage);
        discussionmessage_patch_object_v1_request->obj_discussionmessage = NULL;
    }
    free(discussionmessage_patch_object_v1_request);
}

cJSON *discussionmessage_patch_object_v1_request_convertToJSON(discussionmessage_patch_object_v1_request_t *discussionmessage_patch_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // discussionmessage_patch_object_v1_request->obj_discussionmessage
    if (!discussionmessage_patch_object_v1_request->obj_discussionmessage) {
        goto fail;
    }
    cJSON *obj_discussionmessage_local_JSON = discussionmessage_request_patch_convertToJSON(discussionmessage_patch_object_v1_request->obj_discussionmessage);
    if(obj_discussionmessage_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDiscussionmessage", obj_discussionmessage_local_JSON);
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

discussionmessage_patch_object_v1_request_t *discussionmessage_patch_object_v1_request_parseFromJSON(cJSON *discussionmessage_patch_object_v1_requestJSON){

    discussionmessage_patch_object_v1_request_t *discussionmessage_patch_object_v1_request_local_var = NULL;

    // define the local variable for discussionmessage_patch_object_v1_request->obj_discussionmessage
    discussionmessage_request_patch_t *obj_discussionmessage_local_nonprim = NULL;

    // discussionmessage_patch_object_v1_request->obj_discussionmessage
    cJSON *obj_discussionmessage = cJSON_GetObjectItemCaseSensitive(discussionmessage_patch_object_v1_requestJSON, "objDiscussionmessage");
    if (!obj_discussionmessage) {
        goto end;
    }

    
    obj_discussionmessage_local_nonprim = discussionmessage_request_patch_parseFromJSON(obj_discussionmessage); //nonprimitive


    discussionmessage_patch_object_v1_request_local_var = discussionmessage_patch_object_v1_request_create (
        obj_discussionmessage_local_nonprim
        );

    return discussionmessage_patch_object_v1_request_local_var;
end:
    if (obj_discussionmessage_local_nonprim) {
        discussionmessage_request_patch_free(obj_discussionmessage_local_nonprim);
        obj_discussionmessage_local_nonprim = NULL;
    }
    return NULL;

}
