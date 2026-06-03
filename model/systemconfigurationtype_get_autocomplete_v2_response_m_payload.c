#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "systemconfigurationtype_get_autocomplete_v2_response_m_payload.h"



static systemconfigurationtype_get_autocomplete_v2_response_m_payload_t *systemconfigurationtype_get_autocomplete_v2_response_m_payload_create_internal(
    list_t *a_obj_systemconfigurationtype
    ) {
    systemconfigurationtype_get_autocomplete_v2_response_m_payload_t *systemconfigurationtype_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(systemconfigurationtype_get_autocomplete_v2_response_m_payload_t));
    if (!systemconfigurationtype_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    memset(systemconfigurationtype_get_autocomplete_v2_response_m_payload_local_var, 0, sizeof(systemconfigurationtype_get_autocomplete_v2_response_m_payload_t));
    systemconfigurationtype_get_autocomplete_v2_response_m_payload_local_var->_library_owned = 1;
    systemconfigurationtype_get_autocomplete_v2_response_m_payload_local_var->a_obj_systemconfigurationtype = a_obj_systemconfigurationtype;
    return systemconfigurationtype_get_autocomplete_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) systemconfigurationtype_get_autocomplete_v2_response_m_payload_t *systemconfigurationtype_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_systemconfigurationtype
    ) {
    systemconfigurationtype_get_autocomplete_v2_response_m_payload_t *result = systemconfigurationtype_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_systemconfigurationtype
        );
    if (!result) {
    }
    return result;
}

void systemconfigurationtype_get_autocomplete_v2_response_m_payload_free(systemconfigurationtype_get_autocomplete_v2_response_m_payload_t *systemconfigurationtype_get_autocomplete_v2_response_m_payload) {
    if(NULL == systemconfigurationtype_get_autocomplete_v2_response_m_payload){
        return ;
    }
    if(systemconfigurationtype_get_autocomplete_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "systemconfigurationtype_get_autocomplete_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (systemconfigurationtype_get_autocomplete_v2_response_m_payload->a_obj_systemconfigurationtype) {
        list_ForEach(listEntry, systemconfigurationtype_get_autocomplete_v2_response_m_payload->a_obj_systemconfigurationtype) {
            systemconfigurationtype_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(systemconfigurationtype_get_autocomplete_v2_response_m_payload->a_obj_systemconfigurationtype);
        systemconfigurationtype_get_autocomplete_v2_response_m_payload->a_obj_systemconfigurationtype = NULL;
    }
    free(systemconfigurationtype_get_autocomplete_v2_response_m_payload);
}

cJSON *systemconfigurationtype_get_autocomplete_v2_response_m_payload_convertToJSON(systemconfigurationtype_get_autocomplete_v2_response_m_payload_t *systemconfigurationtype_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // systemconfigurationtype_get_autocomplete_v2_response_m_payload->a_obj_systemconfigurationtype
    if (!systemconfigurationtype_get_autocomplete_v2_response_m_payload->a_obj_systemconfigurationtype) {
        goto fail;
    }
    cJSON *a_obj_systemconfigurationtype = cJSON_AddArrayToObject(item, "a_objSystemconfigurationtype");
    if(a_obj_systemconfigurationtype == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_systemconfigurationtypeListEntry;
    if (systemconfigurationtype_get_autocomplete_v2_response_m_payload->a_obj_systemconfigurationtype) {
    list_ForEach(a_obj_systemconfigurationtypeListEntry, systemconfigurationtype_get_autocomplete_v2_response_m_payload->a_obj_systemconfigurationtype) {
    cJSON *itemLocal = systemconfigurationtype_autocomplete_element_response_convertToJSON(a_obj_systemconfigurationtypeListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_systemconfigurationtype, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

systemconfigurationtype_get_autocomplete_v2_response_m_payload_t *systemconfigurationtype_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *systemconfigurationtype_get_autocomplete_v2_response_m_payloadJSON){

    systemconfigurationtype_get_autocomplete_v2_response_m_payload_t *systemconfigurationtype_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for systemconfigurationtype_get_autocomplete_v2_response_m_payload->a_obj_systemconfigurationtype
    list_t *a_obj_systemconfigurationtypeList = NULL;

    // systemconfigurationtype_get_autocomplete_v2_response_m_payload->a_obj_systemconfigurationtype
    cJSON *a_obj_systemconfigurationtype = cJSON_GetObjectItemCaseSensitive(systemconfigurationtype_get_autocomplete_v2_response_m_payloadJSON, "a_objSystemconfigurationtype");
    if (cJSON_IsNull(a_obj_systemconfigurationtype)) {
        a_obj_systemconfigurationtype = NULL;
    }
    if (!a_obj_systemconfigurationtype) {
        goto end;
    }

    
    cJSON *a_obj_systemconfigurationtype_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_systemconfigurationtype)){
        goto end; //nonprimitive container
    }

    a_obj_systemconfigurationtypeList = list_createList();

    cJSON_ArrayForEach(a_obj_systemconfigurationtype_local_nonprimitive,a_obj_systemconfigurationtype )
    {
        if(!cJSON_IsObject(a_obj_systemconfigurationtype_local_nonprimitive)){
            goto end;
        }
        systemconfigurationtype_autocomplete_element_response_t *a_obj_systemconfigurationtypeItem = systemconfigurationtype_autocomplete_element_response_parseFromJSON(a_obj_systemconfigurationtype_local_nonprimitive);

        list_addElement(a_obj_systemconfigurationtypeList, a_obj_systemconfigurationtypeItem);
    }



    systemconfigurationtype_get_autocomplete_v2_response_m_payload_local_var = systemconfigurationtype_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_systemconfigurationtypeList
        );

    if (!systemconfigurationtype_get_autocomplete_v2_response_m_payload_local_var) {
        goto end;
    }

    return systemconfigurationtype_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_systemconfigurationtypeList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_systemconfigurationtypeList) {
            systemconfigurationtype_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_systemconfigurationtypeList);
        a_obj_systemconfigurationtypeList = NULL;
    }
    return NULL;

}
