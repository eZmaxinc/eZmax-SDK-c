#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "apikey_get_list_v1_response_m_payload_all_of.h"



apikey_get_list_v1_response_m_payload_all_of_t *apikey_get_list_v1_response_m_payload_all_of_create(
    list_t *a_obj_apikey
    ) {
    apikey_get_list_v1_response_m_payload_all_of_t *apikey_get_list_v1_response_m_payload_all_of_local_var = malloc(sizeof(apikey_get_list_v1_response_m_payload_all_of_t));
    if (!apikey_get_list_v1_response_m_payload_all_of_local_var) {
        return NULL;
    }
    apikey_get_list_v1_response_m_payload_all_of_local_var->a_obj_apikey = a_obj_apikey;

    return apikey_get_list_v1_response_m_payload_all_of_local_var;
}


void apikey_get_list_v1_response_m_payload_all_of_free(apikey_get_list_v1_response_m_payload_all_of_t *apikey_get_list_v1_response_m_payload_all_of) {
    if(NULL == apikey_get_list_v1_response_m_payload_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (apikey_get_list_v1_response_m_payload_all_of->a_obj_apikey) {
        list_ForEach(listEntry, apikey_get_list_v1_response_m_payload_all_of->a_obj_apikey) {
            apikey_list_element_free(listEntry->data);
        }
        list_freeList(apikey_get_list_v1_response_m_payload_all_of->a_obj_apikey);
        apikey_get_list_v1_response_m_payload_all_of->a_obj_apikey = NULL;
    }
    free(apikey_get_list_v1_response_m_payload_all_of);
}

cJSON *apikey_get_list_v1_response_m_payload_all_of_convertToJSON(apikey_get_list_v1_response_m_payload_all_of_t *apikey_get_list_v1_response_m_payload_all_of) {
    cJSON *item = cJSON_CreateObject();

    // apikey_get_list_v1_response_m_payload_all_of->a_obj_apikey
    if (!apikey_get_list_v1_response_m_payload_all_of->a_obj_apikey) {
        goto fail;
    }
    cJSON *a_obj_apikey = cJSON_AddArrayToObject(item, "a_objApikey");
    if(a_obj_apikey == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_apikeyListEntry;
    if (apikey_get_list_v1_response_m_payload_all_of->a_obj_apikey) {
    list_ForEach(a_obj_apikeyListEntry, apikey_get_list_v1_response_m_payload_all_of->a_obj_apikey) {
    cJSON *itemLocal = apikey_list_element_convertToJSON(a_obj_apikeyListEntry->data);
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

apikey_get_list_v1_response_m_payload_all_of_t *apikey_get_list_v1_response_m_payload_all_of_parseFromJSON(cJSON *apikey_get_list_v1_response_m_payload_all_ofJSON){

    apikey_get_list_v1_response_m_payload_all_of_t *apikey_get_list_v1_response_m_payload_all_of_local_var = NULL;

    // define the local list for apikey_get_list_v1_response_m_payload_all_of->a_obj_apikey
    list_t *a_obj_apikeyList = NULL;

    // apikey_get_list_v1_response_m_payload_all_of->a_obj_apikey
    cJSON *a_obj_apikey = cJSON_GetObjectItemCaseSensitive(apikey_get_list_v1_response_m_payload_all_ofJSON, "a_objApikey");
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
        apikey_list_element_t *a_obj_apikeyItem = apikey_list_element_parseFromJSON(a_obj_apikey_local_nonprimitive);

        list_addElement(a_obj_apikeyList, a_obj_apikeyItem);
    }


    apikey_get_list_v1_response_m_payload_all_of_local_var = apikey_get_list_v1_response_m_payload_all_of_create (
        a_obj_apikeyList
        );

    return apikey_get_list_v1_response_m_payload_all_of_local_var;
end:
    if (a_obj_apikeyList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_apikeyList) {
            apikey_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_apikeyList);
        a_obj_apikeyList = NULL;
    }
    return NULL;

}
