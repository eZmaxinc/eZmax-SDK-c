#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "user_get_usergroupexternals_v1_response_m_payload.h"



user_get_usergroupexternals_v1_response_m_payload_t *user_get_usergroupexternals_v1_response_m_payload_create(
    list_t *a_obj_usergroupexternal
    ) {
    user_get_usergroupexternals_v1_response_m_payload_t *user_get_usergroupexternals_v1_response_m_payload_local_var = malloc(sizeof(user_get_usergroupexternals_v1_response_m_payload_t));
    if (!user_get_usergroupexternals_v1_response_m_payload_local_var) {
        return NULL;
    }
    user_get_usergroupexternals_v1_response_m_payload_local_var->a_obj_usergroupexternal = a_obj_usergroupexternal;

    return user_get_usergroupexternals_v1_response_m_payload_local_var;
}


void user_get_usergroupexternals_v1_response_m_payload_free(user_get_usergroupexternals_v1_response_m_payload_t *user_get_usergroupexternals_v1_response_m_payload) {
    if(NULL == user_get_usergroupexternals_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (user_get_usergroupexternals_v1_response_m_payload->a_obj_usergroupexternal) {
        list_ForEach(listEntry, user_get_usergroupexternals_v1_response_m_payload->a_obj_usergroupexternal) {
            usergroupexternal_response_compound_free(listEntry->data);
        }
        list_freeList(user_get_usergroupexternals_v1_response_m_payload->a_obj_usergroupexternal);
        user_get_usergroupexternals_v1_response_m_payload->a_obj_usergroupexternal = NULL;
    }
    free(user_get_usergroupexternals_v1_response_m_payload);
}

cJSON *user_get_usergroupexternals_v1_response_m_payload_convertToJSON(user_get_usergroupexternals_v1_response_m_payload_t *user_get_usergroupexternals_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // user_get_usergroupexternals_v1_response_m_payload->a_obj_usergroupexternal
    if (!user_get_usergroupexternals_v1_response_m_payload->a_obj_usergroupexternal) {
        goto fail;
    }
    cJSON *a_obj_usergroupexternal = cJSON_AddArrayToObject(item, "a_objUsergroupexternal");
    if(a_obj_usergroupexternal == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_usergroupexternalListEntry;
    if (user_get_usergroupexternals_v1_response_m_payload->a_obj_usergroupexternal) {
    list_ForEach(a_obj_usergroupexternalListEntry, user_get_usergroupexternals_v1_response_m_payload->a_obj_usergroupexternal) {
    cJSON *itemLocal = usergroupexternal_response_compound_convertToJSON(a_obj_usergroupexternalListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_usergroupexternal, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

user_get_usergroupexternals_v1_response_m_payload_t *user_get_usergroupexternals_v1_response_m_payload_parseFromJSON(cJSON *user_get_usergroupexternals_v1_response_m_payloadJSON){

    user_get_usergroupexternals_v1_response_m_payload_t *user_get_usergroupexternals_v1_response_m_payload_local_var = NULL;

    // define the local list for user_get_usergroupexternals_v1_response_m_payload->a_obj_usergroupexternal
    list_t *a_obj_usergroupexternalList = NULL;

    // user_get_usergroupexternals_v1_response_m_payload->a_obj_usergroupexternal
    cJSON *a_obj_usergroupexternal = cJSON_GetObjectItemCaseSensitive(user_get_usergroupexternals_v1_response_m_payloadJSON, "a_objUsergroupexternal");
    if (!a_obj_usergroupexternal) {
        goto end;
    }

    
    cJSON *a_obj_usergroupexternal_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_usergroupexternal)){
        goto end; //nonprimitive container
    }

    a_obj_usergroupexternalList = list_createList();

    cJSON_ArrayForEach(a_obj_usergroupexternal_local_nonprimitive,a_obj_usergroupexternal )
    {
        if(!cJSON_IsObject(a_obj_usergroupexternal_local_nonprimitive)){
            goto end;
        }
        usergroupexternal_response_compound_t *a_obj_usergroupexternalItem = usergroupexternal_response_compound_parseFromJSON(a_obj_usergroupexternal_local_nonprimitive);

        list_addElement(a_obj_usergroupexternalList, a_obj_usergroupexternalItem);
    }


    user_get_usergroupexternals_v1_response_m_payload_local_var = user_get_usergroupexternals_v1_response_m_payload_create (
        a_obj_usergroupexternalList
        );

    return user_get_usergroupexternals_v1_response_m_payload_local_var;
end:
    if (a_obj_usergroupexternalList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_usergroupexternalList) {
            usergroupexternal_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_usergroupexternalList);
        a_obj_usergroupexternalList = NULL;
    }
    return NULL;

}
