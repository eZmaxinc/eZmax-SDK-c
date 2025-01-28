#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "authenticationexternal_get_list_v1_response_m_payload.h"



static authenticationexternal_get_list_v1_response_m_payload_t *authenticationexternal_get_list_v1_response_m_payload_create_internal(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_authenticationexternal
    ) {
    authenticationexternal_get_list_v1_response_m_payload_t *authenticationexternal_get_list_v1_response_m_payload_local_var = malloc(sizeof(authenticationexternal_get_list_v1_response_m_payload_t));
    if (!authenticationexternal_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    authenticationexternal_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    authenticationexternal_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;
    authenticationexternal_get_list_v1_response_m_payload_local_var->a_obj_authenticationexternal = a_obj_authenticationexternal;

    authenticationexternal_get_list_v1_response_m_payload_local_var->_library_owned = 1;
    return authenticationexternal_get_list_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) authenticationexternal_get_list_v1_response_m_payload_t *authenticationexternal_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_authenticationexternal
    ) {
    return authenticationexternal_get_list_v1_response_m_payload_create_internal (
        i_row_returned,
        i_row_filtered,
        a_obj_authenticationexternal
        );
}

void authenticationexternal_get_list_v1_response_m_payload_free(authenticationexternal_get_list_v1_response_m_payload_t *authenticationexternal_get_list_v1_response_m_payload) {
    if(NULL == authenticationexternal_get_list_v1_response_m_payload){
        return ;
    }
    if(authenticationexternal_get_list_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "authenticationexternal_get_list_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (authenticationexternal_get_list_v1_response_m_payload->a_obj_authenticationexternal) {
        list_ForEach(listEntry, authenticationexternal_get_list_v1_response_m_payload->a_obj_authenticationexternal) {
            authenticationexternal_list_element_free(listEntry->data);
        }
        list_freeList(authenticationexternal_get_list_v1_response_m_payload->a_obj_authenticationexternal);
        authenticationexternal_get_list_v1_response_m_payload->a_obj_authenticationexternal = NULL;
    }
    free(authenticationexternal_get_list_v1_response_m_payload);
}

cJSON *authenticationexternal_get_list_v1_response_m_payload_convertToJSON(authenticationexternal_get_list_v1_response_m_payload_t *authenticationexternal_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // authenticationexternal_get_list_v1_response_m_payload->i_row_returned
    if (!authenticationexternal_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", authenticationexternal_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // authenticationexternal_get_list_v1_response_m_payload->i_row_filtered
    if (!authenticationexternal_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", authenticationexternal_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }


    // authenticationexternal_get_list_v1_response_m_payload->a_obj_authenticationexternal
    if (!authenticationexternal_get_list_v1_response_m_payload->a_obj_authenticationexternal) {
        goto fail;
    }
    cJSON *a_obj_authenticationexternal = cJSON_AddArrayToObject(item, "a_objAuthenticationexternal");
    if(a_obj_authenticationexternal == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_authenticationexternalListEntry;
    if (authenticationexternal_get_list_v1_response_m_payload->a_obj_authenticationexternal) {
    list_ForEach(a_obj_authenticationexternalListEntry, authenticationexternal_get_list_v1_response_m_payload->a_obj_authenticationexternal) {
    cJSON *itemLocal = authenticationexternal_list_element_convertToJSON(a_obj_authenticationexternalListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_authenticationexternal, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

authenticationexternal_get_list_v1_response_m_payload_t *authenticationexternal_get_list_v1_response_m_payload_parseFromJSON(cJSON *authenticationexternal_get_list_v1_response_m_payloadJSON){

    authenticationexternal_get_list_v1_response_m_payload_t *authenticationexternal_get_list_v1_response_m_payload_local_var = NULL;

    // define the local list for authenticationexternal_get_list_v1_response_m_payload->a_obj_authenticationexternal
    list_t *a_obj_authenticationexternalList = NULL;

    // authenticationexternal_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(authenticationexternal_get_list_v1_response_m_payloadJSON, "iRowReturned");
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

    // authenticationexternal_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(authenticationexternal_get_list_v1_response_m_payloadJSON, "iRowFiltered");
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

    // authenticationexternal_get_list_v1_response_m_payload->a_obj_authenticationexternal
    cJSON *a_obj_authenticationexternal = cJSON_GetObjectItemCaseSensitive(authenticationexternal_get_list_v1_response_m_payloadJSON, "a_objAuthenticationexternal");
    if (cJSON_IsNull(a_obj_authenticationexternal)) {
        a_obj_authenticationexternal = NULL;
    }
    if (!a_obj_authenticationexternal) {
        goto end;
    }

    
    cJSON *a_obj_authenticationexternal_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_authenticationexternal)){
        goto end; //nonprimitive container
    }

    a_obj_authenticationexternalList = list_createList();

    cJSON_ArrayForEach(a_obj_authenticationexternal_local_nonprimitive,a_obj_authenticationexternal )
    {
        if(!cJSON_IsObject(a_obj_authenticationexternal_local_nonprimitive)){
            goto end;
        }
        authenticationexternal_list_element_t *a_obj_authenticationexternalItem = authenticationexternal_list_element_parseFromJSON(a_obj_authenticationexternal_local_nonprimitive);

        list_addElement(a_obj_authenticationexternalList, a_obj_authenticationexternalItem);
    }


    authenticationexternal_get_list_v1_response_m_payload_local_var = authenticationexternal_get_list_v1_response_m_payload_create_internal (
        i_row_returned->valuedouble,
        i_row_filtered->valuedouble,
        a_obj_authenticationexternalList
        );

    return authenticationexternal_get_list_v1_response_m_payload_local_var;
end:
    if (a_obj_authenticationexternalList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_authenticationexternalList) {
            authenticationexternal_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_authenticationexternalList);
        a_obj_authenticationexternalList = NULL;
    }
    return NULL;

}
