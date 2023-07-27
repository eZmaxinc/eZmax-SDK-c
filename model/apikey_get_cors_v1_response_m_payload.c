#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "apikey_get_cors_v1_response_m_payload.h"



apikey_get_cors_v1_response_m_payload_t *apikey_get_cors_v1_response_m_payload_create(
    list_t *a_obj_cors
    ) {
    apikey_get_cors_v1_response_m_payload_t *apikey_get_cors_v1_response_m_payload_local_var = malloc(sizeof(apikey_get_cors_v1_response_m_payload_t));
    if (!apikey_get_cors_v1_response_m_payload_local_var) {
        return NULL;
    }
    apikey_get_cors_v1_response_m_payload_local_var->a_obj_cors = a_obj_cors;

    return apikey_get_cors_v1_response_m_payload_local_var;
}


void apikey_get_cors_v1_response_m_payload_free(apikey_get_cors_v1_response_m_payload_t *apikey_get_cors_v1_response_m_payload) {
    if(NULL == apikey_get_cors_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (apikey_get_cors_v1_response_m_payload->a_obj_cors) {
        list_ForEach(listEntry, apikey_get_cors_v1_response_m_payload->a_obj_cors) {
            cors_response_compound_free(listEntry->data);
        }
        list_freeList(apikey_get_cors_v1_response_m_payload->a_obj_cors);
        apikey_get_cors_v1_response_m_payload->a_obj_cors = NULL;
    }
    free(apikey_get_cors_v1_response_m_payload);
}

cJSON *apikey_get_cors_v1_response_m_payload_convertToJSON(apikey_get_cors_v1_response_m_payload_t *apikey_get_cors_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // apikey_get_cors_v1_response_m_payload->a_obj_cors
    if (!apikey_get_cors_v1_response_m_payload->a_obj_cors) {
        goto fail;
    }
    cJSON *a_obj_cors = cJSON_AddArrayToObject(item, "a_objCors");
    if(a_obj_cors == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_corsListEntry;
    if (apikey_get_cors_v1_response_m_payload->a_obj_cors) {
    list_ForEach(a_obj_corsListEntry, apikey_get_cors_v1_response_m_payload->a_obj_cors) {
    cJSON *itemLocal = cors_response_compound_convertToJSON(a_obj_corsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_cors, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

apikey_get_cors_v1_response_m_payload_t *apikey_get_cors_v1_response_m_payload_parseFromJSON(cJSON *apikey_get_cors_v1_response_m_payloadJSON){

    apikey_get_cors_v1_response_m_payload_t *apikey_get_cors_v1_response_m_payload_local_var = NULL;

    // define the local list for apikey_get_cors_v1_response_m_payload->a_obj_cors
    list_t *a_obj_corsList = NULL;

    // apikey_get_cors_v1_response_m_payload->a_obj_cors
    cJSON *a_obj_cors = cJSON_GetObjectItemCaseSensitive(apikey_get_cors_v1_response_m_payloadJSON, "a_objCors");
    if (!a_obj_cors) {
        goto end;
    }

    
    cJSON *a_obj_cors_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_cors)){
        goto end; //nonprimitive container
    }

    a_obj_corsList = list_createList();

    cJSON_ArrayForEach(a_obj_cors_local_nonprimitive,a_obj_cors )
    {
        if(!cJSON_IsObject(a_obj_cors_local_nonprimitive)){
            goto end;
        }
        cors_response_compound_t *a_obj_corsItem = cors_response_compound_parseFromJSON(a_obj_cors_local_nonprimitive);

        list_addElement(a_obj_corsList, a_obj_corsItem);
    }


    apikey_get_cors_v1_response_m_payload_local_var = apikey_get_cors_v1_response_m_payload_create (
        a_obj_corsList
        );

    return apikey_get_cors_v1_response_m_payload_local_var;
end:
    if (a_obj_corsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_corsList) {
            cors_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_corsList);
        a_obj_corsList = NULL;
    }
    return NULL;

}
