#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "discussion_patch_object_v1_request.h"



static discussion_patch_object_v1_request_t *discussion_patch_object_v1_request_create_internal(
    discussion_request_patch_t *obj_discussion
    ) {
    discussion_patch_object_v1_request_t *discussion_patch_object_v1_request_local_var = malloc(sizeof(discussion_patch_object_v1_request_t));
    if (!discussion_patch_object_v1_request_local_var) {
        return NULL;
    }
    discussion_patch_object_v1_request_local_var->obj_discussion = obj_discussion;

    discussion_patch_object_v1_request_local_var->_library_owned = 1;
    return discussion_patch_object_v1_request_local_var;
}

__attribute__((deprecated)) discussion_patch_object_v1_request_t *discussion_patch_object_v1_request_create(
    discussion_request_patch_t *obj_discussion
    ) {
    return discussion_patch_object_v1_request_create_internal (
        obj_discussion
        );
}

void discussion_patch_object_v1_request_free(discussion_patch_object_v1_request_t *discussion_patch_object_v1_request) {
    if(NULL == discussion_patch_object_v1_request){
        return ;
    }
    if(discussion_patch_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "discussion_patch_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (discussion_patch_object_v1_request->obj_discussion) {
        discussion_request_patch_free(discussion_patch_object_v1_request->obj_discussion);
        discussion_patch_object_v1_request->obj_discussion = NULL;
    }
    free(discussion_patch_object_v1_request);
}

cJSON *discussion_patch_object_v1_request_convertToJSON(discussion_patch_object_v1_request_t *discussion_patch_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // discussion_patch_object_v1_request->obj_discussion
    if (!discussion_patch_object_v1_request->obj_discussion) {
        goto fail;
    }
    cJSON *obj_discussion_local_JSON = discussion_request_patch_convertToJSON(discussion_patch_object_v1_request->obj_discussion);
    if(obj_discussion_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDiscussion", obj_discussion_local_JSON);
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

discussion_patch_object_v1_request_t *discussion_patch_object_v1_request_parseFromJSON(cJSON *discussion_patch_object_v1_requestJSON){

    discussion_patch_object_v1_request_t *discussion_patch_object_v1_request_local_var = NULL;

    // define the local variable for discussion_patch_object_v1_request->obj_discussion
    discussion_request_patch_t *obj_discussion_local_nonprim = NULL;

    // discussion_patch_object_v1_request->obj_discussion
    cJSON *obj_discussion = cJSON_GetObjectItemCaseSensitive(discussion_patch_object_v1_requestJSON, "objDiscussion");
    if (cJSON_IsNull(obj_discussion)) {
        obj_discussion = NULL;
    }
    if (!obj_discussion) {
        goto end;
    }

    
    obj_discussion_local_nonprim = discussion_request_patch_parseFromJSON(obj_discussion); //nonprimitive


    discussion_patch_object_v1_request_local_var = discussion_patch_object_v1_request_create_internal (
        obj_discussion_local_nonprim
        );

    return discussion_patch_object_v1_request_local_var;
end:
    if (obj_discussion_local_nonprim) {
        discussion_request_patch_free(obj_discussion_local_nonprim);
        obj_discussion_local_nonprim = NULL;
    }
    return NULL;

}
