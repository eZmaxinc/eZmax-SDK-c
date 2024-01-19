#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "discussion_update_discussionreadstatus_v1_request.h"



discussion_update_discussionreadstatus_v1_request_t *discussion_update_discussionreadstatus_v1_request_create(
    char *dt_discussionreadstatus_date
    ) {
    discussion_update_discussionreadstatus_v1_request_t *discussion_update_discussionreadstatus_v1_request_local_var = malloc(sizeof(discussion_update_discussionreadstatus_v1_request_t));
    if (!discussion_update_discussionreadstatus_v1_request_local_var) {
        return NULL;
    }
    discussion_update_discussionreadstatus_v1_request_local_var->dt_discussionreadstatus_date = dt_discussionreadstatus_date;

    return discussion_update_discussionreadstatus_v1_request_local_var;
}


void discussion_update_discussionreadstatus_v1_request_free(discussion_update_discussionreadstatus_v1_request_t *discussion_update_discussionreadstatus_v1_request) {
    if(NULL == discussion_update_discussionreadstatus_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (discussion_update_discussionreadstatus_v1_request->dt_discussionreadstatus_date) {
        free(discussion_update_discussionreadstatus_v1_request->dt_discussionreadstatus_date);
        discussion_update_discussionreadstatus_v1_request->dt_discussionreadstatus_date = NULL;
    }
    free(discussion_update_discussionreadstatus_v1_request);
}

cJSON *discussion_update_discussionreadstatus_v1_request_convertToJSON(discussion_update_discussionreadstatus_v1_request_t *discussion_update_discussionreadstatus_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // discussion_update_discussionreadstatus_v1_request->dt_discussionreadstatus_date
    if(discussion_update_discussionreadstatus_v1_request->dt_discussionreadstatus_date) {
    if(cJSON_AddStringToObject(item, "dtDiscussionreadstatusDate", discussion_update_discussionreadstatus_v1_request->dt_discussionreadstatus_date) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

discussion_update_discussionreadstatus_v1_request_t *discussion_update_discussionreadstatus_v1_request_parseFromJSON(cJSON *discussion_update_discussionreadstatus_v1_requestJSON){

    discussion_update_discussionreadstatus_v1_request_t *discussion_update_discussionreadstatus_v1_request_local_var = NULL;

    // discussion_update_discussionreadstatus_v1_request->dt_discussionreadstatus_date
    cJSON *dt_discussionreadstatus_date = cJSON_GetObjectItemCaseSensitive(discussion_update_discussionreadstatus_v1_requestJSON, "dtDiscussionreadstatusDate");
    if (dt_discussionreadstatus_date) { 
    if(!cJSON_IsString(dt_discussionreadstatus_date) && !cJSON_IsNull(dt_discussionreadstatus_date))
    {
    goto end; //String
    }
    }


    discussion_update_discussionreadstatus_v1_request_local_var = discussion_update_discussionreadstatus_v1_request_create (
        dt_discussionreadstatus_date && !cJSON_IsNull(dt_discussionreadstatus_date) ? strdup(dt_discussionreadstatus_date->valuestring) : NULL
        );

    return discussion_update_discussionreadstatus_v1_request_local_var;
end:
    return NULL;

}
