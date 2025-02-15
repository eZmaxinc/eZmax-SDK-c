#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "apikey_get_list_v1_response_m_payload.h"



static apikey_get_list_v1_response_m_payload_t *apikey_get_list_v1_response_m_payload_create_internal(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_apikey
    ) {
    apikey_get_list_v1_response_m_payload_t *apikey_get_list_v1_response_m_payload_local_var = malloc(sizeof(apikey_get_list_v1_response_m_payload_t));
    if (!apikey_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    apikey_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    apikey_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;
    apikey_get_list_v1_response_m_payload_local_var->a_obj_apikey = a_obj_apikey;

    apikey_get_list_v1_response_m_payload_local_var->_library_owned = 1;
    return apikey_get_list_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) apikey_get_list_v1_response_m_payload_t *apikey_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_apikey
    ) {
    return apikey_get_list_v1_response_m_payload_create_internal (
        i_row_returned,
        i_row_filtered,
        a_obj_apikey
        );
}

void apikey_get_list_v1_response_m_payload_free(apikey_get_list_v1_response_m_payload_t *apikey_get_list_v1_response_m_payload) {
    if(NULL == apikey_get_list_v1_response_m_payload){
        return ;
    }
    if(apikey_get_list_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "apikey_get_list_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (apikey_get_list_v1_response_m_payload->a_obj_apikey) {
        list_ForEach(listEntry, apikey_get_list_v1_response_m_payload->a_obj_apikey) {
            apikey_list_element_free(listEntry->data);
        }
        list_freeList(apikey_get_list_v1_response_m_payload->a_obj_apikey);
        apikey_get_list_v1_response_m_payload->a_obj_apikey = NULL;
    }
    free(apikey_get_list_v1_response_m_payload);
}

cJSON *apikey_get_list_v1_response_m_payload_convertToJSON(apikey_get_list_v1_response_m_payload_t *apikey_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // apikey_get_list_v1_response_m_payload->i_row_returned
    if (!apikey_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", apikey_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // apikey_get_list_v1_response_m_payload->i_row_filtered
    if (!apikey_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", apikey_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }


    // apikey_get_list_v1_response_m_payload->a_obj_apikey
    if (!apikey_get_list_v1_response_m_payload->a_obj_apikey) {
        goto fail;
    }
    cJSON *a_obj_apikey = cJSON_AddArrayToObject(item, "a_objApikey");
    if(a_obj_apikey == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_apikeyListEntry;
    if (apikey_get_list_v1_response_m_payload->a_obj_apikey) {
    list_ForEach(a_obj_apikeyListEntry, apikey_get_list_v1_response_m_payload->a_obj_apikey) {
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

apikey_get_list_v1_response_m_payload_t *apikey_get_list_v1_response_m_payload_parseFromJSON(cJSON *apikey_get_list_v1_response_m_payloadJSON){

    apikey_get_list_v1_response_m_payload_t *apikey_get_list_v1_response_m_payload_local_var = NULL;

    // define the local list for apikey_get_list_v1_response_m_payload->a_obj_apikey
    list_t *a_obj_apikeyList = NULL;

    // apikey_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(apikey_get_list_v1_response_m_payloadJSON, "iRowReturned");
    if (cJSON_IsNull(i_row_returned)) {
        i_row_returned = NULL;
    }
    if (!i_row_returned) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_row_returned))
    {
    goto end; //Numeric
    }

    // apikey_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(apikey_get_list_v1_response_m_payloadJSON, "iRowFiltered");
    if (cJSON_IsNull(i_row_filtered)) {
        i_row_filtered = NULL;
    }
    if (!i_row_filtered) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_row_filtered))
    {
    goto end; //Numeric
    }

    // apikey_get_list_v1_response_m_payload->a_obj_apikey
    cJSON *a_obj_apikey = cJSON_GetObjectItemCaseSensitive(apikey_get_list_v1_response_m_payloadJSON, "a_objApikey");
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
        apikey_list_element_t *a_obj_apikeyItem = apikey_list_element_parseFromJSON(a_obj_apikey_local_nonprimitive);

        list_addElement(a_obj_apikeyList, a_obj_apikeyItem);
    }


    apikey_get_list_v1_response_m_payload_local_var = apikey_get_list_v1_response_m_payload_create_internal (
        i_row_returned->valuedouble,
        i_row_filtered->valuedouble,
        a_obj_apikeyList
        );

    return apikey_get_list_v1_response_m_payload_local_var;
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
