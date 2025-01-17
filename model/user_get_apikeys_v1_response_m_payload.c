#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "user_get_apikeys_v1_response_m_payload.h"



user_get_apikeys_v1_response_m_payload_t *user_get_apikeys_v1_response_m_payload_create(
    list_t *a_obj_apikey
    ) {
    user_get_apikeys_v1_response_m_payload_t *user_get_apikeys_v1_response_m_payload_local_var = malloc(sizeof(user_get_apikeys_v1_response_m_payload_t));
    if (!user_get_apikeys_v1_response_m_payload_local_var) {
        return NULL;
    }
    user_get_apikeys_v1_response_m_payload_local_var->a_obj_apikey = a_obj_apikey;

    return user_get_apikeys_v1_response_m_payload_local_var;
}


void user_get_apikeys_v1_response_m_payload_free(user_get_apikeys_v1_response_m_payload_t *user_get_apikeys_v1_response_m_payload) {
    if(NULL == user_get_apikeys_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (user_get_apikeys_v1_response_m_payload->a_obj_apikey) {
        list_ForEach(listEntry, user_get_apikeys_v1_response_m_payload->a_obj_apikey) {
            apikey_response_compound_free(listEntry->data);
        }
        list_freeList(user_get_apikeys_v1_response_m_payload->a_obj_apikey);
        user_get_apikeys_v1_response_m_payload->a_obj_apikey = NULL;
    }
    free(user_get_apikeys_v1_response_m_payload);
}

cJSON *user_get_apikeys_v1_response_m_payload_convertToJSON(user_get_apikeys_v1_response_m_payload_t *user_get_apikeys_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // user_get_apikeys_v1_response_m_payload->a_obj_apikey
    if (!user_get_apikeys_v1_response_m_payload->a_obj_apikey) {
        goto fail;
    }
    cJSON *a_obj_apikey = cJSON_AddArrayToObject(item, "a_objApikey");
    if(a_obj_apikey == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_apikeyListEntry;
    if (user_get_apikeys_v1_response_m_payload->a_obj_apikey) {
    list_ForEach(a_obj_apikeyListEntry, user_get_apikeys_v1_response_m_payload->a_obj_apikey) {
    cJSON *itemLocal = apikey_response_compound_convertToJSON(a_obj_apikeyListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_apikey, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

user_get_apikeys_v1_response_m_payload_t *user_get_apikeys_v1_response_m_payload_parseFromJSON(cJSON *user_get_apikeys_v1_response_m_payloadJSON){

    user_get_apikeys_v1_response_m_payload_t *user_get_apikeys_v1_response_m_payload_local_var = NULL;

    // define the local list for user_get_apikeys_v1_response_m_payload->a_obj_apikey
    list_t *a_obj_apikeyList = NULL;

    // user_get_apikeys_v1_response_m_payload->a_obj_apikey
    cJSON *a_obj_apikey = cJSON_GetObjectItemCaseSensitive(user_get_apikeys_v1_response_m_payloadJSON, "a_objApikey");
    if (!a_obj_apikey) {
        goto end;
    }

    
    cJSON *a_obj_apikey_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_apikey)){
        goto end; //nonprimitive container
    }

    a_obj_apikeyList = list_createList();

    cJSON_ArrayForEach(a_obj_apikey_local_nonprimitive,a_obj_apikey )
    {
        if(!cJSON_IsObject(a_obj_apikey_local_nonprimitive)){
            goto end;
        }
        apikey_response_compound_t *a_obj_apikeyItem = apikey_response_compound_parseFromJSON(a_obj_apikey_local_nonprimitive);

        list_addElement(a_obj_apikeyList, a_obj_apikeyItem);
    }


    user_get_apikeys_v1_response_m_payload_local_var = user_get_apikeys_v1_response_m_payload_create (
        a_obj_apikeyList
        );

    return user_get_apikeys_v1_response_m_payload_local_var;
end:
    if (a_obj_apikeyList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_apikeyList) {
            apikey_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_apikeyList);
        a_obj_apikeyList = NULL;
    }
    return NULL;

}
