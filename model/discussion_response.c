#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "discussion_response.h"



discussion_response_t *discussion_response_create(
    int pki_discussion_id,
    char *s_discussion_description,
    int b_discussion_closed,
    char *dt_discussion_lastread,
    int i_discussionmessage_count,
    int i_discussionmessage_countunread,
    object_t *obj_discussionconfiguration
    ) {
    discussion_response_t *discussion_response_local_var = malloc(sizeof(discussion_response_t));
    if (!discussion_response_local_var) {
        return NULL;
    }
    discussion_response_local_var->pki_discussion_id = pki_discussion_id;
    discussion_response_local_var->s_discussion_description = s_discussion_description;
    discussion_response_local_var->b_discussion_closed = b_discussion_closed;
    discussion_response_local_var->dt_discussion_lastread = dt_discussion_lastread;
    discussion_response_local_var->i_discussionmessage_count = i_discussionmessage_count;
    discussion_response_local_var->i_discussionmessage_countunread = i_discussionmessage_countunread;
    discussion_response_local_var->obj_discussionconfiguration = obj_discussionconfiguration;

    return discussion_response_local_var;
}


void discussion_response_free(discussion_response_t *discussion_response) {
    if(NULL == discussion_response){
        return ;
    }
    listEntry_t *listEntry;
    if (discussion_response->s_discussion_description) {
        free(discussion_response->s_discussion_description);
        discussion_response->s_discussion_description = NULL;
    }
    if (discussion_response->dt_discussion_lastread) {
        free(discussion_response->dt_discussion_lastread);
        discussion_response->dt_discussion_lastread = NULL;
    }
    if (discussion_response->obj_discussionconfiguration) {
        object_free(discussion_response->obj_discussionconfiguration);
        discussion_response->obj_discussionconfiguration = NULL;
    }
    free(discussion_response);
}

cJSON *discussion_response_convertToJSON(discussion_response_t *discussion_response) {
    cJSON *item = cJSON_CreateObject();

    // discussion_response->pki_discussion_id
    if (!discussion_response->pki_discussion_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiDiscussionID", discussion_response->pki_discussion_id) == NULL) {
    goto fail; //Numeric
    }


    // discussion_response->s_discussion_description
    if (!discussion_response->s_discussion_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sDiscussionDescription", discussion_response->s_discussion_description) == NULL) {
    goto fail; //String
    }


    // discussion_response->b_discussion_closed
    if (!discussion_response->b_discussion_closed) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bDiscussionClosed", discussion_response->b_discussion_closed) == NULL) {
    goto fail; //Bool
    }


    // discussion_response->dt_discussion_lastread
    if(discussion_response->dt_discussion_lastread) {
    if(cJSON_AddStringToObject(item, "dtDiscussionLastread", discussion_response->dt_discussion_lastread) == NULL) {
    goto fail; //String
    }
    }


    // discussion_response->i_discussionmessage_count
    if (!discussion_response->i_discussionmessage_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iDiscussionmessageCount", discussion_response->i_discussionmessage_count) == NULL) {
    goto fail; //Numeric
    }


    // discussion_response->i_discussionmessage_countunread
    if (!discussion_response->i_discussionmessage_countunread) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iDiscussionmessageCountunread", discussion_response->i_discussionmessage_countunread) == NULL) {
    goto fail; //Numeric
    }


    // discussion_response->obj_discussionconfiguration
    if(discussion_response->obj_discussionconfiguration) {
    cJSON *obj_discussionconfiguration_local_JSON = object_convertToJSON(discussion_response->obj_discussionconfiguration);
    if(obj_discussionconfiguration_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDiscussionconfiguration", obj_discussionconfiguration_local_JSON);
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

discussion_response_t *discussion_response_parseFromJSON(cJSON *discussion_responseJSON){

    discussion_response_t *discussion_response_local_var = NULL;

    // define the local variable for discussion_response->obj_discussionconfiguration
    object_t *obj_discussionconfiguration_local_nonprim = NULL;

    // discussion_response->pki_discussion_id
    cJSON *pki_discussion_id = cJSON_GetObjectItemCaseSensitive(discussion_responseJSON, "pkiDiscussionID");
    if (!pki_discussion_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_discussion_id))
    {
    goto end; //Numeric
    }

    // discussion_response->s_discussion_description
    cJSON *s_discussion_description = cJSON_GetObjectItemCaseSensitive(discussion_responseJSON, "sDiscussionDescription");
    if (!s_discussion_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_discussion_description))
    {
    goto end; //String
    }

    // discussion_response->b_discussion_closed
    cJSON *b_discussion_closed = cJSON_GetObjectItemCaseSensitive(discussion_responseJSON, "bDiscussionClosed");
    if (!b_discussion_closed) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_discussion_closed))
    {
    goto end; //Bool
    }

    // discussion_response->dt_discussion_lastread
    cJSON *dt_discussion_lastread = cJSON_GetObjectItemCaseSensitive(discussion_responseJSON, "dtDiscussionLastread");
    if (dt_discussion_lastread) { 
    if(!cJSON_IsString(dt_discussion_lastread) && !cJSON_IsNull(dt_discussion_lastread))
    {
    goto end; //String
    }
    }

    // discussion_response->i_discussionmessage_count
    cJSON *i_discussionmessage_count = cJSON_GetObjectItemCaseSensitive(discussion_responseJSON, "iDiscussionmessageCount");
    if (!i_discussionmessage_count) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_discussionmessage_count))
    {
    goto end; //Numeric
    }

    // discussion_response->i_discussionmessage_countunread
    cJSON *i_discussionmessage_countunread = cJSON_GetObjectItemCaseSensitive(discussion_responseJSON, "iDiscussionmessageCountunread");
    if (!i_discussionmessage_countunread) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_discussionmessage_countunread))
    {
    goto end; //Numeric
    }

    // discussion_response->obj_discussionconfiguration
    cJSON *obj_discussionconfiguration = cJSON_GetObjectItemCaseSensitive(discussion_responseJSON, "objDiscussionconfiguration");
    if (obj_discussionconfiguration) { 
    obj_discussionconfiguration_local_nonprim = object_parseFromJSON(obj_discussionconfiguration); //nonprimitive
    }


    discussion_response_local_var = discussion_response_create (
        pki_discussion_id->valuedouble,
        strdup(s_discussion_description->valuestring),
        b_discussion_closed->valueint,
        dt_discussion_lastread && !cJSON_IsNull(dt_discussion_lastread) ? strdup(dt_discussion_lastread->valuestring) : NULL,
        i_discussionmessage_count->valuedouble,
        i_discussionmessage_countunread->valuedouble,
        obj_discussionconfiguration ? obj_discussionconfiguration_local_nonprim : NULL
        );

    return discussion_response_local_var;
end:
    if (obj_discussionconfiguration_local_nonprim) {
        object_free(obj_discussionconfiguration_local_nonprim);
        obj_discussionconfiguration_local_nonprim = NULL;
    }
    return NULL;

}
