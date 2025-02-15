#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "apikey_create_object_v2_response_m_payload.h"



static apikey_create_object_v2_response_m_payload_t *apikey_create_object_v2_response_m_payload_create_internal(
    list_t *a_obj_apikey
    ) {
    apikey_create_object_v2_response_m_payload_t *apikey_create_object_v2_response_m_payload_local_var = malloc(sizeof(apikey_create_object_v2_response_m_payload_t));
    if (!apikey_create_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    apikey_create_object_v2_response_m_payload_local_var->a_obj_apikey = a_obj_apikey;

    apikey_create_object_v2_response_m_payload_local_var->_library_owned = 1;
    return apikey_create_object_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) apikey_create_object_v2_response_m_payload_t *apikey_create_object_v2_response_m_payload_create(
    list_t *a_obj_apikey
    ) {
    return apikey_create_object_v2_response_m_payload_create_internal (
        a_obj_apikey
        );
}

void apikey_create_object_v2_response_m_payload_free(apikey_create_object_v2_response_m_payload_t *apikey_create_object_v2_response_m_payload) {
    if(NULL == apikey_create_object_v2_response_m_payload){
        return ;
    }
    if(apikey_create_object_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "apikey_create_object_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (apikey_create_object_v2_response_m_payload->a_obj_apikey) {
        list_ForEach(listEntry, apikey_create_object_v2_response_m_payload->a_obj_apikey) {
            apikey_response_compound_free(listEntry->data);
        }
        list_freeList(apikey_create_object_v2_response_m_payload->a_obj_apikey);
        apikey_create_object_v2_response_m_payload->a_obj_apikey = NULL;
    }
    free(apikey_create_object_v2_response_m_payload);
}

cJSON *apikey_create_object_v2_response_m_payload_convertToJSON(apikey_create_object_v2_response_m_payload_t *apikey_create_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // apikey_create_object_v2_response_m_payload->a_obj_apikey
    if (!apikey_create_object_v2_response_m_payload->a_obj_apikey) {
        goto fail;
    }
    cJSON *a_obj_apikey = cJSON_AddArrayToObject(item, "a_objApikey");
    if(a_obj_apikey == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_apikeyListEntry;
    if (apikey_create_object_v2_response_m_payload->a_obj_apikey) {
    list_ForEach(a_obj_apikeyListEntry, apikey_create_object_v2_response_m_payload->a_obj_apikey) {
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

apikey_create_object_v2_response_m_payload_t *apikey_create_object_v2_response_m_payload_parseFromJSON(cJSON *apikey_create_object_v2_response_m_payloadJSON){

    apikey_create_object_v2_response_m_payload_t *apikey_create_object_v2_response_m_payload_local_var = NULL;

    // define the local list for apikey_create_object_v2_response_m_payload->a_obj_apikey
    list_t *a_obj_apikeyList = NULL;

    // apikey_create_object_v2_response_m_payload->a_obj_apikey
    cJSON *a_obj_apikey = cJSON_GetObjectItemCaseSensitive(apikey_create_object_v2_response_m_payloadJSON, "a_objApikey");
    if (cJSON_IsNull(a_obj_apikey)) {
        a_obj_apikey = NULL;
    }
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


    apikey_create_object_v2_response_m_payload_local_var = apikey_create_object_v2_response_m_payload_create_internal (
        a_obj_apikeyList
        );

    return apikey_create_object_v2_response_m_payload_local_var;
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
