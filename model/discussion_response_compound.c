#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "discussion_response_compound.h"



discussion_response_compound_t *discussion_response_compound_create(
    int pki_discussion_id,
    char *s_discussion_description,
    int b_discussion_closed,
    char *dt_discussion_lastread,
    int i_discussionmessage_count,
    int i_discussionmessage_countunread,
    object_t *obj_discussionconfiguration,
    list_t *a_obj_discussionmembership,
    list_t *a_obj_discussionmessage
    ) {
    discussion_response_compound_t *discussion_response_compound_local_var = malloc(sizeof(discussion_response_compound_t));
    if (!discussion_response_compound_local_var) {
        return NULL;
    }
    discussion_response_compound_local_var->pki_discussion_id = pki_discussion_id;
    discussion_response_compound_local_var->s_discussion_description = s_discussion_description;
    discussion_response_compound_local_var->b_discussion_closed = b_discussion_closed;
    discussion_response_compound_local_var->dt_discussion_lastread = dt_discussion_lastread;
    discussion_response_compound_local_var->i_discussionmessage_count = i_discussionmessage_count;
    discussion_response_compound_local_var->i_discussionmessage_countunread = i_discussionmessage_countunread;
    discussion_response_compound_local_var->obj_discussionconfiguration = obj_discussionconfiguration;
    discussion_response_compound_local_var->a_obj_discussionmembership = a_obj_discussionmembership;
    discussion_response_compound_local_var->a_obj_discussionmessage = a_obj_discussionmessage;

    return discussion_response_compound_local_var;
}


void discussion_response_compound_free(discussion_response_compound_t *discussion_response_compound) {
    if(NULL == discussion_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (discussion_response_compound->s_discussion_description) {
        free(discussion_response_compound->s_discussion_description);
        discussion_response_compound->s_discussion_description = NULL;
    }
    if (discussion_response_compound->dt_discussion_lastread) {
        free(discussion_response_compound->dt_discussion_lastread);
        discussion_response_compound->dt_discussion_lastread = NULL;
    }
    if (discussion_response_compound->obj_discussionconfiguration) {
        object_free(discussion_response_compound->obj_discussionconfiguration);
        discussion_response_compound->obj_discussionconfiguration = NULL;
    }
    if (discussion_response_compound->a_obj_discussionmembership) {
        list_ForEach(listEntry, discussion_response_compound->a_obj_discussionmembership) {
            discussionmembership_response_compound_free(listEntry->data);
        }
        list_freeList(discussion_response_compound->a_obj_discussionmembership);
        discussion_response_compound->a_obj_discussionmembership = NULL;
    }
    if (discussion_response_compound->a_obj_discussionmessage) {
        list_ForEach(listEntry, discussion_response_compound->a_obj_discussionmessage) {
            discussionmessage_response_compound_free(listEntry->data);
        }
        list_freeList(discussion_response_compound->a_obj_discussionmessage);
        discussion_response_compound->a_obj_discussionmessage = NULL;
    }
    free(discussion_response_compound);
}

cJSON *discussion_response_compound_convertToJSON(discussion_response_compound_t *discussion_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // discussion_response_compound->pki_discussion_id
    if (!discussion_response_compound->pki_discussion_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiDiscussionID", discussion_response_compound->pki_discussion_id) == NULL) {
    goto fail; //Numeric
    }


    // discussion_response_compound->s_discussion_description
    if (!discussion_response_compound->s_discussion_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sDiscussionDescription", discussion_response_compound->s_discussion_description) == NULL) {
    goto fail; //String
    }


    // discussion_response_compound->b_discussion_closed
    if (!discussion_response_compound->b_discussion_closed) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bDiscussionClosed", discussion_response_compound->b_discussion_closed) == NULL) {
    goto fail; //Bool
    }


    // discussion_response_compound->dt_discussion_lastread
    if(discussion_response_compound->dt_discussion_lastread) {
    if(cJSON_AddStringToObject(item, "dtDiscussionLastread", discussion_response_compound->dt_discussion_lastread) == NULL) {
    goto fail; //String
    }
    }


    // discussion_response_compound->i_discussionmessage_count
    if (!discussion_response_compound->i_discussionmessage_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iDiscussionmessageCount", discussion_response_compound->i_discussionmessage_count) == NULL) {
    goto fail; //Numeric
    }


    // discussion_response_compound->i_discussionmessage_countunread
    if (!discussion_response_compound->i_discussionmessage_countunread) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iDiscussionmessageCountunread", discussion_response_compound->i_discussionmessage_countunread) == NULL) {
    goto fail; //Numeric
    }


    // discussion_response_compound->obj_discussionconfiguration
    if(discussion_response_compound->obj_discussionconfiguration) {
    cJSON *obj_discussionconfiguration_local_JSON = object_convertToJSON(discussion_response_compound->obj_discussionconfiguration);
    if(obj_discussionconfiguration_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDiscussionconfiguration", obj_discussionconfiguration_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // discussion_response_compound->a_obj_discussionmembership
    if (!discussion_response_compound->a_obj_discussionmembership) {
        goto fail;
    }
    cJSON *a_obj_discussionmembership = cJSON_AddArrayToObject(item, "a_objDiscussionmembership");
    if(a_obj_discussionmembership == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_discussionmembershipListEntry;
    if (discussion_response_compound->a_obj_discussionmembership) {
    list_ForEach(a_obj_discussionmembershipListEntry, discussion_response_compound->a_obj_discussionmembership) {
    cJSON *itemLocal = discussionmembership_response_compound_convertToJSON(a_obj_discussionmembershipListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_discussionmembership, itemLocal);
    }
    }


    // discussion_response_compound->a_obj_discussionmessage
    if (!discussion_response_compound->a_obj_discussionmessage) {
        goto fail;
    }
    cJSON *a_obj_discussionmessage = cJSON_AddArrayToObject(item, "a_objDiscussionmessage");
    if(a_obj_discussionmessage == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_discussionmessageListEntry;
    if (discussion_response_compound->a_obj_discussionmessage) {
    list_ForEach(a_obj_discussionmessageListEntry, discussion_response_compound->a_obj_discussionmessage) {
    cJSON *itemLocal = discussionmessage_response_compound_convertToJSON(a_obj_discussionmessageListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_discussionmessage, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

discussion_response_compound_t *discussion_response_compound_parseFromJSON(cJSON *discussion_response_compoundJSON){

    discussion_response_compound_t *discussion_response_compound_local_var = NULL;

    // define the local variable for discussion_response_compound->obj_discussionconfiguration
    object_t *obj_discussionconfiguration_local_nonprim = NULL;

    // define the local list for discussion_response_compound->a_obj_discussionmembership
    list_t *a_obj_discussionmembershipList = NULL;

    // define the local list for discussion_response_compound->a_obj_discussionmessage
    list_t *a_obj_discussionmessageList = NULL;

    // discussion_response_compound->pki_discussion_id
    cJSON *pki_discussion_id = cJSON_GetObjectItemCaseSensitive(discussion_response_compoundJSON, "pkiDiscussionID");
    if (!pki_discussion_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_discussion_id))
    {
    goto end; //Numeric
    }

    // discussion_response_compound->s_discussion_description
    cJSON *s_discussion_description = cJSON_GetObjectItemCaseSensitive(discussion_response_compoundJSON, "sDiscussionDescription");
    if (!s_discussion_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_discussion_description))
    {
    goto end; //String
    }

    // discussion_response_compound->b_discussion_closed
    cJSON *b_discussion_closed = cJSON_GetObjectItemCaseSensitive(discussion_response_compoundJSON, "bDiscussionClosed");
    if (!b_discussion_closed) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_discussion_closed))
    {
    goto end; //Bool
    }

    // discussion_response_compound->dt_discussion_lastread
    cJSON *dt_discussion_lastread = cJSON_GetObjectItemCaseSensitive(discussion_response_compoundJSON, "dtDiscussionLastread");
    if (dt_discussion_lastread) { 
    if(!cJSON_IsString(dt_discussion_lastread) && !cJSON_IsNull(dt_discussion_lastread))
    {
    goto end; //String
    }
    }

    // discussion_response_compound->i_discussionmessage_count
    cJSON *i_discussionmessage_count = cJSON_GetObjectItemCaseSensitive(discussion_response_compoundJSON, "iDiscussionmessageCount");
    if (!i_discussionmessage_count) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_discussionmessage_count))
    {
    goto end; //Numeric
    }

    // discussion_response_compound->i_discussionmessage_countunread
    cJSON *i_discussionmessage_countunread = cJSON_GetObjectItemCaseSensitive(discussion_response_compoundJSON, "iDiscussionmessageCountunread");
    if (!i_discussionmessage_countunread) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_discussionmessage_countunread))
    {
    goto end; //Numeric
    }

    // discussion_response_compound->obj_discussionconfiguration
    cJSON *obj_discussionconfiguration = cJSON_GetObjectItemCaseSensitive(discussion_response_compoundJSON, "objDiscussionconfiguration");
    if (obj_discussionconfiguration) { 
    obj_discussionconfiguration_local_nonprim = object_parseFromJSON(obj_discussionconfiguration); //nonprimitive
    }

    // discussion_response_compound->a_obj_discussionmembership
    cJSON *a_obj_discussionmembership = cJSON_GetObjectItemCaseSensitive(discussion_response_compoundJSON, "a_objDiscussionmembership");
    if (!a_obj_discussionmembership) {
        goto end;
    }

    
    cJSON *a_obj_discussionmembership_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_discussionmembership)){
        goto end; //nonprimitive container
    }

    a_obj_discussionmembershipList = list_createList();

    cJSON_ArrayForEach(a_obj_discussionmembership_local_nonprimitive,a_obj_discussionmembership )
    {
        if(!cJSON_IsObject(a_obj_discussionmembership_local_nonprimitive)){
            goto end;
        }
        discussionmembership_response_compound_t *a_obj_discussionmembershipItem = discussionmembership_response_compound_parseFromJSON(a_obj_discussionmembership_local_nonprimitive);

        list_addElement(a_obj_discussionmembershipList, a_obj_discussionmembershipItem);
    }

    // discussion_response_compound->a_obj_discussionmessage
    cJSON *a_obj_discussionmessage = cJSON_GetObjectItemCaseSensitive(discussion_response_compoundJSON, "a_objDiscussionmessage");
    if (!a_obj_discussionmessage) {
        goto end;
    }

    
    cJSON *a_obj_discussionmessage_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_discussionmessage)){
        goto end; //nonprimitive container
    }

    a_obj_discussionmessageList = list_createList();

    cJSON_ArrayForEach(a_obj_discussionmessage_local_nonprimitive,a_obj_discussionmessage )
    {
        if(!cJSON_IsObject(a_obj_discussionmessage_local_nonprimitive)){
            goto end;
        }
        discussionmessage_response_compound_t *a_obj_discussionmessageItem = discussionmessage_response_compound_parseFromJSON(a_obj_discussionmessage_local_nonprimitive);

        list_addElement(a_obj_discussionmessageList, a_obj_discussionmessageItem);
    }


    discussion_response_compound_local_var = discussion_response_compound_create (
        pki_discussion_id->valuedouble,
        strdup(s_discussion_description->valuestring),
        b_discussion_closed->valueint,
        dt_discussion_lastread && !cJSON_IsNull(dt_discussion_lastread) ? strdup(dt_discussion_lastread->valuestring) : NULL,
        i_discussionmessage_count->valuedouble,
        i_discussionmessage_countunread->valuedouble,
        obj_discussionconfiguration ? obj_discussionconfiguration_local_nonprim : NULL,
        a_obj_discussionmembershipList,
        a_obj_discussionmessageList
        );

    return discussion_response_compound_local_var;
end:
    if (obj_discussionconfiguration_local_nonprim) {
        object_free(obj_discussionconfiguration_local_nonprim);
        obj_discussionconfiguration_local_nonprim = NULL;
    }
    if (a_obj_discussionmembershipList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_discussionmembershipList) {
            discussionmembership_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_discussionmembershipList);
        a_obj_discussionmembershipList = NULL;
    }
    if (a_obj_discussionmessageList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_discussionmessageList) {
            discussionmessage_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_discussionmessageList);
        a_obj_discussionmessageList = NULL;
    }
    return NULL;

}
