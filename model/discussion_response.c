#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "discussion_response.h"



static discussion_response_t *discussion_response_create_internal(
    int *pki_discussion_id,
    char *s_discussion_description,
    int *b_discussion_closed,
    char *dt_discussion_lastread,
    int *i_discussionmessage_count,
    int *i_discussionmessage_countunread,
    custom_discussionconfiguration_response_t *obj_discussionconfiguration
    ) {
    discussion_response_t *discussion_response_local_var = malloc(sizeof(discussion_response_t));
    if (!discussion_response_local_var) {
        return NULL;
    }
    memset(discussion_response_local_var, 0, sizeof(discussion_response_t));
    discussion_response_local_var->_library_owned = 1;
    discussion_response_local_var->pki_discussion_id = pki_discussion_id;
    discussion_response_local_var->s_discussion_description = s_discussion_description;
    discussion_response_local_var->b_discussion_closed = b_discussion_closed;
    discussion_response_local_var->dt_discussion_lastread = dt_discussion_lastread;
    discussion_response_local_var->i_discussionmessage_count = i_discussionmessage_count;
    discussion_response_local_var->i_discussionmessage_countunread = i_discussionmessage_countunread;
    discussion_response_local_var->obj_discussionconfiguration = obj_discussionconfiguration;
    return discussion_response_local_var;
}

__attribute__((deprecated)) discussion_response_t *discussion_response_create(
    int *pki_discussion_id,
    char *s_discussion_description,
    int *b_discussion_closed,
    char *dt_discussion_lastread,
    int *i_discussionmessage_count,
    int *i_discussionmessage_countunread,
    custom_discussionconfiguration_response_t *obj_discussionconfiguration
    ) {
    int *pki_discussion_id_copy = NULL;
    if (pki_discussion_id) {
        pki_discussion_id_copy = malloc(sizeof(int));
        if (pki_discussion_id_copy) *pki_discussion_id_copy = *pki_discussion_id;
    }
    int *b_discussion_closed_copy = NULL;
    if (b_discussion_closed) {
        b_discussion_closed_copy = malloc(sizeof(int));
        if (b_discussion_closed_copy) *b_discussion_closed_copy = *b_discussion_closed;
    }
    int *i_discussionmessage_count_copy = NULL;
    if (i_discussionmessage_count) {
        i_discussionmessage_count_copy = malloc(sizeof(int));
        if (i_discussionmessage_count_copy) *i_discussionmessage_count_copy = *i_discussionmessage_count;
    }
    int *i_discussionmessage_countunread_copy = NULL;
    if (i_discussionmessage_countunread) {
        i_discussionmessage_countunread_copy = malloc(sizeof(int));
        if (i_discussionmessage_countunread_copy) *i_discussionmessage_countunread_copy = *i_discussionmessage_countunread;
    }
    discussion_response_t *result = discussion_response_create_internal (
        pki_discussion_id_copy,
        s_discussion_description,
        b_discussion_closed_copy,
        dt_discussion_lastread,
        i_discussionmessage_count_copy,
        i_discussionmessage_countunread_copy,
        obj_discussionconfiguration
        );
    if (!result) {
        free(pki_discussion_id_copy);
        free(b_discussion_closed_copy);
        free(i_discussionmessage_count_copy);
        free(i_discussionmessage_countunread_copy);
    }
    return result;
}

void discussion_response_free(discussion_response_t *discussion_response) {
    if(NULL == discussion_response){
        return ;
    }
    if(discussion_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "discussion_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (discussion_response->pki_discussion_id) {
        free(discussion_response->pki_discussion_id);
        discussion_response->pki_discussion_id = NULL;
    }
    if (discussion_response->s_discussion_description) {
        free(discussion_response->s_discussion_description);
        discussion_response->s_discussion_description = NULL;
    }
    if (discussion_response->b_discussion_closed) {
        free(discussion_response->b_discussion_closed);
        discussion_response->b_discussion_closed = NULL;
    }
    if (discussion_response->dt_discussion_lastread) {
        free(discussion_response->dt_discussion_lastread);
        discussion_response->dt_discussion_lastread = NULL;
    }
    if (discussion_response->i_discussionmessage_count) {
        free(discussion_response->i_discussionmessage_count);
        discussion_response->i_discussionmessage_count = NULL;
    }
    if (discussion_response->i_discussionmessage_countunread) {
        free(discussion_response->i_discussionmessage_countunread);
        discussion_response->i_discussionmessage_countunread = NULL;
    }
    if (discussion_response->obj_discussionconfiguration) {
        custom_discussionconfiguration_response_free(discussion_response->obj_discussionconfiguration);
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
    if(cJSON_AddNumberToObject(item, "pkiDiscussionID", *discussion_response->pki_discussion_id) == NULL) {
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
    if(cJSON_AddBoolToObject(item, "bDiscussionClosed", *discussion_response->b_discussion_closed) == NULL) {
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
    if(cJSON_AddNumberToObject(item, "iDiscussionmessageCount", *discussion_response->i_discussionmessage_count) == NULL) {
    goto fail; //Numeric
    }


    // discussion_response->i_discussionmessage_countunread
    if (!discussion_response->i_discussionmessage_countunread) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iDiscussionmessageCountunread", *discussion_response->i_discussionmessage_countunread) == NULL) {
    goto fail; //Numeric
    }


    // discussion_response->obj_discussionconfiguration
    if(discussion_response->obj_discussionconfiguration) {
    cJSON *obj_discussionconfiguration_local_JSON = custom_discussionconfiguration_response_convertToJSON(discussion_response->obj_discussionconfiguration);
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

    // define the local variable for discussion_response->pki_discussion_id
    int *pki_discussion_id_local_var = NULL;

    char *s_discussion_description_local_str = NULL;

    // define the local variable for discussion_response->b_discussion_closed
    int *b_discussion_closed_local_var = NULL;

    char *dt_discussion_lastread_local_str = NULL;

    // define the local variable for discussion_response->i_discussionmessage_count
    int *i_discussionmessage_count_local_var = NULL;

    // define the local variable for discussion_response->i_discussionmessage_countunread
    int *i_discussionmessage_countunread_local_var = NULL;

    // define the local variable for discussion_response->obj_discussionconfiguration
    custom_discussionconfiguration_response_t *obj_discussionconfiguration_local_nonprim = NULL;

    // discussion_response->pki_discussion_id
    cJSON *pki_discussion_id = cJSON_GetObjectItemCaseSensitive(discussion_responseJSON, "pkiDiscussionID");
    if (cJSON_IsNull(pki_discussion_id)) {
        pki_discussion_id = NULL;
    }
    if (!pki_discussion_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_discussion_id))
    {
    goto end; //Numeric
    }
    pki_discussion_id_local_var = malloc(sizeof(int));
    if(!pki_discussion_id_local_var)
    {
        goto end;
    }
    *pki_discussion_id_local_var = pki_discussion_id->valuedouble;

    // discussion_response->s_discussion_description
    cJSON *s_discussion_description = cJSON_GetObjectItemCaseSensitive(discussion_responseJSON, "sDiscussionDescription");
    if (cJSON_IsNull(s_discussion_description)) {
        s_discussion_description = NULL;
    }
    if (!s_discussion_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_discussion_description))
    {
    goto end; //String
    }

    // discussion_response->b_discussion_closed
    cJSON *b_discussion_closed = cJSON_GetObjectItemCaseSensitive(discussion_responseJSON, "bDiscussionClosed");
    if (cJSON_IsNull(b_discussion_closed)) {
        b_discussion_closed = NULL;
    }
    if (!b_discussion_closed) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_discussion_closed))
    {
    goto end; //Bool
    }
    b_discussion_closed_local_var = malloc(sizeof(int));
    if(!b_discussion_closed_local_var)
    {
        goto end;
    }
    *b_discussion_closed_local_var = b_discussion_closed->valueint;

    // discussion_response->dt_discussion_lastread
    cJSON *dt_discussion_lastread = cJSON_GetObjectItemCaseSensitive(discussion_responseJSON, "dtDiscussionLastread");
    if (cJSON_IsNull(dt_discussion_lastread)) {
        dt_discussion_lastread = NULL;
    }
    if (dt_discussion_lastread) { 
    if(!cJSON_IsString(dt_discussion_lastread) && !cJSON_IsNull(dt_discussion_lastread))
    {
    goto end; //String
    }
    }

    // discussion_response->i_discussionmessage_count
    cJSON *i_discussionmessage_count = cJSON_GetObjectItemCaseSensitive(discussion_responseJSON, "iDiscussionmessageCount");
    if (cJSON_IsNull(i_discussionmessage_count)) {
        i_discussionmessage_count = NULL;
    }
    if (!i_discussionmessage_count) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_discussionmessage_count))
    {
    goto end; //Numeric
    }
    i_discussionmessage_count_local_var = malloc(sizeof(int));
    if(!i_discussionmessage_count_local_var)
    {
        goto end;
    }
    *i_discussionmessage_count_local_var = i_discussionmessage_count->valuedouble;

    // discussion_response->i_discussionmessage_countunread
    cJSON *i_discussionmessage_countunread = cJSON_GetObjectItemCaseSensitive(discussion_responseJSON, "iDiscussionmessageCountunread");
    if (cJSON_IsNull(i_discussionmessage_countunread)) {
        i_discussionmessage_countunread = NULL;
    }
    if (!i_discussionmessage_countunread) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_discussionmessage_countunread))
    {
    goto end; //Numeric
    }
    i_discussionmessage_countunread_local_var = malloc(sizeof(int));
    if(!i_discussionmessage_countunread_local_var)
    {
        goto end;
    }
    *i_discussionmessage_countunread_local_var = i_discussionmessage_countunread->valuedouble;

    // discussion_response->obj_discussionconfiguration
    cJSON *obj_discussionconfiguration = cJSON_GetObjectItemCaseSensitive(discussion_responseJSON, "objDiscussionconfiguration");
    if (cJSON_IsNull(obj_discussionconfiguration)) {
        obj_discussionconfiguration = NULL;
    }
    if (obj_discussionconfiguration) { 
    obj_discussionconfiguration_local_nonprim = custom_discussionconfiguration_response_parseFromJSON(obj_discussionconfiguration); //nonprimitive
    }


    if (s_discussion_description && !cJSON_IsNull(s_discussion_description)) s_discussion_description_local_str = strdup(s_discussion_description->valuestring);
    if (dt_discussion_lastread && !cJSON_IsNull(dt_discussion_lastread)) dt_discussion_lastread_local_str = strdup(dt_discussion_lastread->valuestring);

    discussion_response_local_var = discussion_response_create_internal (
        pki_discussion_id_local_var,
        s_discussion_description_local_str,
        b_discussion_closed_local_var,
        dt_discussion_lastread_local_str,
        i_discussionmessage_count_local_var,
        i_discussionmessage_countunread_local_var,
        obj_discussionconfiguration ? obj_discussionconfiguration_local_nonprim : NULL
        );

    if (!discussion_response_local_var) {
        goto end;
    }

    return discussion_response_local_var;
end:
    if (pki_discussion_id_local_var) {
        free(pki_discussion_id_local_var);
        pki_discussion_id_local_var = NULL;
    }
    if (s_discussion_description_local_str) {
        free(s_discussion_description_local_str);
        s_discussion_description_local_str = NULL;
    }
    if (b_discussion_closed_local_var) {
        free(b_discussion_closed_local_var);
        b_discussion_closed_local_var = NULL;
    }
    if (dt_discussion_lastread_local_str) {
        free(dt_discussion_lastread_local_str);
        dt_discussion_lastread_local_str = NULL;
    }
    if (i_discussionmessage_count_local_var) {
        free(i_discussionmessage_count_local_var);
        i_discussionmessage_count_local_var = NULL;
    }
    if (i_discussionmessage_countunread_local_var) {
        free(i_discussionmessage_countunread_local_var);
        i_discussionmessage_countunread_local_var = NULL;
    }
    if (obj_discussionconfiguration_local_nonprim) {
        custom_discussionconfiguration_response_free(obj_discussionconfiguration_local_nonprim);
        obj_discussionconfiguration_local_nonprim = NULL;
    }
    return NULL;

}
