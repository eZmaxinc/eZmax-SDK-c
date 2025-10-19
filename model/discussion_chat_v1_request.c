#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "discussion_chat_v1_request.h"



static discussion_chat_v1_request_t *discussion_chat_v1_request_create_internal(
    int fki_discussion_id,
    ezmax_api_definition__full_field_e_discussion_robot__e e_discussion_robot,
    char *t_discussion_message
    ) {
    discussion_chat_v1_request_t *discussion_chat_v1_request_local_var = malloc(sizeof(discussion_chat_v1_request_t));
    if (!discussion_chat_v1_request_local_var) {
        return NULL;
    }
    discussion_chat_v1_request_local_var->fki_discussion_id = fki_discussion_id;
    discussion_chat_v1_request_local_var->e_discussion_robot = e_discussion_robot;
    discussion_chat_v1_request_local_var->t_discussion_message = t_discussion_message;

    discussion_chat_v1_request_local_var->_library_owned = 1;
    return discussion_chat_v1_request_local_var;
}

__attribute__((deprecated)) discussion_chat_v1_request_t *discussion_chat_v1_request_create(
    int fki_discussion_id,
    ezmax_api_definition__full_field_e_discussion_robot__e e_discussion_robot,
    char *t_discussion_message
    ) {
    return discussion_chat_v1_request_create_internal (
        fki_discussion_id,
        e_discussion_robot,
        t_discussion_message
        );
}

void discussion_chat_v1_request_free(discussion_chat_v1_request_t *discussion_chat_v1_request) {
    if(NULL == discussion_chat_v1_request){
        return ;
    }
    if(discussion_chat_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "discussion_chat_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (discussion_chat_v1_request->t_discussion_message) {
        free(discussion_chat_v1_request->t_discussion_message);
        discussion_chat_v1_request->t_discussion_message = NULL;
    }
    free(discussion_chat_v1_request);
}

cJSON *discussion_chat_v1_request_convertToJSON(discussion_chat_v1_request_t *discussion_chat_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // discussion_chat_v1_request->fki_discussion_id
    if(discussion_chat_v1_request->fki_discussion_id) {
    if(cJSON_AddNumberToObject(item, "fkiDiscussionID", discussion_chat_v1_request->fki_discussion_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // discussion_chat_v1_request->e_discussion_robot
    if (ezmax_api_definition__full_field_e_discussion_robot__NULL == discussion_chat_v1_request->e_discussion_robot) {
        goto fail;
    }
    cJSON *e_discussion_robot_local_JSON = field_e_discussion_robot_convertToJSON(discussion_chat_v1_request->e_discussion_robot);
    if(e_discussion_robot_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eDiscussionRobot", e_discussion_robot_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // discussion_chat_v1_request->t_discussion_message
    if (!discussion_chat_v1_request->t_discussion_message) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tDiscussionMessage", discussion_chat_v1_request->t_discussion_message) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

discussion_chat_v1_request_t *discussion_chat_v1_request_parseFromJSON(cJSON *discussion_chat_v1_requestJSON){

    discussion_chat_v1_request_t *discussion_chat_v1_request_local_var = NULL;

    // define the local variable for discussion_chat_v1_request->e_discussion_robot
    ezmax_api_definition__full_field_e_discussion_robot__e e_discussion_robot_local_nonprim = 0;

    // discussion_chat_v1_request->fki_discussion_id
    cJSON *fki_discussion_id = cJSON_GetObjectItemCaseSensitive(discussion_chat_v1_requestJSON, "fkiDiscussionID");
    if (cJSON_IsNull(fki_discussion_id)) {
        fki_discussion_id = NULL;
    }
    if (fki_discussion_id) { 
    if(!cJSON_IsNumber(fki_discussion_id))
    {
    goto end; //Numeric
    }
    }

    // discussion_chat_v1_request->e_discussion_robot
    cJSON *e_discussion_robot = cJSON_GetObjectItemCaseSensitive(discussion_chat_v1_requestJSON, "eDiscussionRobot");
    if (cJSON_IsNull(e_discussion_robot)) {
        e_discussion_robot = NULL;
    }
    if (!e_discussion_robot) {
        goto end;
    }

    
    e_discussion_robot_local_nonprim = field_e_discussion_robot_parseFromJSON(e_discussion_robot); //custom

    // discussion_chat_v1_request->t_discussion_message
    cJSON *t_discussion_message = cJSON_GetObjectItemCaseSensitive(discussion_chat_v1_requestJSON, "tDiscussionMessage");
    if (cJSON_IsNull(t_discussion_message)) {
        t_discussion_message = NULL;
    }
    if (!t_discussion_message) {
        goto end;
    }

    
    if(!cJSON_IsString(t_discussion_message))
    {
    goto end; //String
    }


    discussion_chat_v1_request_local_var = discussion_chat_v1_request_create_internal (
        fki_discussion_id ? fki_discussion_id->valuedouble : 0,
        e_discussion_robot_local_nonprim,
        strdup(t_discussion_message->valuestring)
        );

    return discussion_chat_v1_request_local_var;
end:
    if (e_discussion_robot_local_nonprim) {
        e_discussion_robot_local_nonprim = 0;
    }
    return NULL;

}
