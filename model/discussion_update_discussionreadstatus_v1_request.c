#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "discussion_update_discussionreadstatus_v1_request.h"



static discussion_update_discussionreadstatus_v1_request_t *discussion_update_discussionreadstatus_v1_request_create_internal(
    char *dt_discussionreadstatus_date
    ) {
    discussion_update_discussionreadstatus_v1_request_t *discussion_update_discussionreadstatus_v1_request_local_var = malloc(sizeof(discussion_update_discussionreadstatus_v1_request_t));
    if (!discussion_update_discussionreadstatus_v1_request_local_var) {
        return NULL;
    }
    memset(discussion_update_discussionreadstatus_v1_request_local_var, 0, sizeof(discussion_update_discussionreadstatus_v1_request_t));
    discussion_update_discussionreadstatus_v1_request_local_var->_library_owned = 1;
    discussion_update_discussionreadstatus_v1_request_local_var->dt_discussionreadstatus_date = dt_discussionreadstatus_date;
    return discussion_update_discussionreadstatus_v1_request_local_var;
}

__attribute__((deprecated)) discussion_update_discussionreadstatus_v1_request_t *discussion_update_discussionreadstatus_v1_request_create(
    char *dt_discussionreadstatus_date
    ) {
    discussion_update_discussionreadstatus_v1_request_t *result = discussion_update_discussionreadstatus_v1_request_create_internal (
        dt_discussionreadstatus_date
        );
    if (!result) {
    }
    return result;
}

void discussion_update_discussionreadstatus_v1_request_free(discussion_update_discussionreadstatus_v1_request_t *discussion_update_discussionreadstatus_v1_request) {
    if(NULL == discussion_update_discussionreadstatus_v1_request){
        return ;
    }
    if(discussion_update_discussionreadstatus_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "discussion_update_discussionreadstatus_v1_request_free");
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

    char *dt_discussionreadstatus_date_local_str = NULL;

    // discussion_update_discussionreadstatus_v1_request->dt_discussionreadstatus_date
    cJSON *dt_discussionreadstatus_date = cJSON_GetObjectItemCaseSensitive(discussion_update_discussionreadstatus_v1_requestJSON, "dtDiscussionreadstatusDate");
    if (cJSON_IsNull(dt_discussionreadstatus_date)) {
        dt_discussionreadstatus_date = NULL;
    }
    if (dt_discussionreadstatus_date) { 
    if(!cJSON_IsString(dt_discussionreadstatus_date) && !cJSON_IsNull(dt_discussionreadstatus_date))
    {
    goto end; //String
    }
    }


    if (dt_discussionreadstatus_date && !cJSON_IsNull(dt_discussionreadstatus_date)) dt_discussionreadstatus_date_local_str = strdup(dt_discussionreadstatus_date->valuestring);

    discussion_update_discussionreadstatus_v1_request_local_var = discussion_update_discussionreadstatus_v1_request_create_internal (
        dt_discussionreadstatus_date_local_str
        );

    if (!discussion_update_discussionreadstatus_v1_request_local_var) {
        goto end;
    }

    return discussion_update_discussionreadstatus_v1_request_local_var;
end:
    if (dt_discussionreadstatus_date_local_str) {
        free(dt_discussionreadstatus_date_local_str);
        dt_discussionreadstatus_date_local_str = NULL;
    }
    return NULL;

}
