#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "discussion_request_patch.h"



discussion_request_patch_t *discussion_request_patch_create(
    char *s_discussion_description,
    int b_discussion_closed
    ) {
    discussion_request_patch_t *discussion_request_patch_local_var = malloc(sizeof(discussion_request_patch_t));
    if (!discussion_request_patch_local_var) {
        return NULL;
    }
    discussion_request_patch_local_var->s_discussion_description = s_discussion_description;
    discussion_request_patch_local_var->b_discussion_closed = b_discussion_closed;

    return discussion_request_patch_local_var;
}


void discussion_request_patch_free(discussion_request_patch_t *discussion_request_patch) {
    if(NULL == discussion_request_patch){
        return ;
    }
    listEntry_t *listEntry;
    if (discussion_request_patch->s_discussion_description) {
        free(discussion_request_patch->s_discussion_description);
        discussion_request_patch->s_discussion_description = NULL;
    }
    free(discussion_request_patch);
}

cJSON *discussion_request_patch_convertToJSON(discussion_request_patch_t *discussion_request_patch) {
    cJSON *item = cJSON_CreateObject();

    // discussion_request_patch->s_discussion_description
    if(discussion_request_patch->s_discussion_description) {
    if(cJSON_AddStringToObject(item, "sDiscussionDescription", discussion_request_patch->s_discussion_description) == NULL) {
    goto fail; //String
    }
    }


    // discussion_request_patch->b_discussion_closed
    if(discussion_request_patch->b_discussion_closed) {
    if(cJSON_AddBoolToObject(item, "bDiscussionClosed", discussion_request_patch->b_discussion_closed) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

discussion_request_patch_t *discussion_request_patch_parseFromJSON(cJSON *discussion_request_patchJSON){

    discussion_request_patch_t *discussion_request_patch_local_var = NULL;

    // discussion_request_patch->s_discussion_description
    cJSON *s_discussion_description = cJSON_GetObjectItemCaseSensitive(discussion_request_patchJSON, "sDiscussionDescription");
    if (s_discussion_description) { 
    if(!cJSON_IsString(s_discussion_description) && !cJSON_IsNull(s_discussion_description))
    {
    goto end; //String
    }
    }

    // discussion_request_patch->b_discussion_closed
    cJSON *b_discussion_closed = cJSON_GetObjectItemCaseSensitive(discussion_request_patchJSON, "bDiscussionClosed");
    if (b_discussion_closed) { 
    if(!cJSON_IsBool(b_discussion_closed))
    {
    goto end; //Bool
    }
    }


    discussion_request_patch_local_var = discussion_request_patch_create (
        s_discussion_description && !cJSON_IsNull(s_discussion_description) ? strdup(s_discussion_description->valuestring) : NULL,
        b_discussion_closed ? b_discussion_closed->valueint : 0
        );

    return discussion_request_patch_local_var;
end:
    return NULL;

}
