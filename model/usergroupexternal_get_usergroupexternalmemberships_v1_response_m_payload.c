#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroupexternal_get_usergroupexternalmemberships_v1_response_m_payload.h"



static usergroupexternal_get_usergroupexternalmemberships_v1_response_m_payload_t *usergroupexternal_get_usergroupexternalmemberships_v1_response_m_payload_create_internal(
    list_t *a_obj_usergroupexternalmembership
    ) {
    usergroupexternal_get_usergroupexternalmemberships_v1_response_m_payload_t *usergroupexternal_get_usergroupexternalmemberships_v1_response_m_payload_local_var = malloc(sizeof(usergroupexternal_get_usergroupexternalmemberships_v1_response_m_payload_t));
    if (!usergroupexternal_get_usergroupexternalmemberships_v1_response_m_payload_local_var) {
        return NULL;
    }
    usergroupexternal_get_usergroupexternalmemberships_v1_response_m_payload_local_var->a_obj_usergroupexternalmembership = a_obj_usergroupexternalmembership;

    usergroupexternal_get_usergroupexternalmemberships_v1_response_m_payload_local_var->_library_owned = 1;
    return usergroupexternal_get_usergroupexternalmemberships_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) usergroupexternal_get_usergroupexternalmemberships_v1_response_m_payload_t *usergroupexternal_get_usergroupexternalmemberships_v1_response_m_payload_create(
    list_t *a_obj_usergroupexternalmembership
    ) {
    return usergroupexternal_get_usergroupexternalmemberships_v1_response_m_payload_create_internal (
        a_obj_usergroupexternalmembership
        );
}

void usergroupexternal_get_usergroupexternalmemberships_v1_response_m_payload_free(usergroupexternal_get_usergroupexternalmemberships_v1_response_m_payload_t *usergroupexternal_get_usergroupexternalmemberships_v1_response_m_payload) {
    if(NULL == usergroupexternal_get_usergroupexternalmemberships_v1_response_m_payload){
        return ;
    }
    if(usergroupexternal_get_usergroupexternalmemberships_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "usergroupexternal_get_usergroupexternalmemberships_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (usergroupexternal_get_usergroupexternalmemberships_v1_response_m_payload->a_obj_usergroupexternalmembership) {
        list_ForEach(listEntry, usergroupexternal_get_usergroupexternalmemberships_v1_response_m_payload->a_obj_usergroupexternalmembership) {
            usergroupexternalmembership_response_compound_free(listEntry->data);
        }
        list_freeList(usergroupexternal_get_usergroupexternalmemberships_v1_response_m_payload->a_obj_usergroupexternalmembership);
        usergroupexternal_get_usergroupexternalmemberships_v1_response_m_payload->a_obj_usergroupexternalmembership = NULL;
    }
    free(usergroupexternal_get_usergroupexternalmemberships_v1_response_m_payload);
}

cJSON *usergroupexternal_get_usergroupexternalmemberships_v1_response_m_payload_convertToJSON(usergroupexternal_get_usergroupexternalmemberships_v1_response_m_payload_t *usergroupexternal_get_usergroupexternalmemberships_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // usergroupexternal_get_usergroupexternalmemberships_v1_response_m_payload->a_obj_usergroupexternalmembership
    if (!usergroupexternal_get_usergroupexternalmemberships_v1_response_m_payload->a_obj_usergroupexternalmembership) {
        goto fail;
    }
    cJSON *a_obj_usergroupexternalmembership = cJSON_AddArrayToObject(item, "a_objUsergroupexternalmembership");
    if(a_obj_usergroupexternalmembership == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_usergroupexternalmembershipListEntry;
    if (usergroupexternal_get_usergroupexternalmemberships_v1_response_m_payload->a_obj_usergroupexternalmembership) {
    list_ForEach(a_obj_usergroupexternalmembershipListEntry, usergroupexternal_get_usergroupexternalmemberships_v1_response_m_payload->a_obj_usergroupexternalmembership) {
    cJSON *itemLocal = usergroupexternalmembership_response_compound_convertToJSON(a_obj_usergroupexternalmembershipListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_usergroupexternalmembership, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

usergroupexternal_get_usergroupexternalmemberships_v1_response_m_payload_t *usergroupexternal_get_usergroupexternalmemberships_v1_response_m_payload_parseFromJSON(cJSON *usergroupexternal_get_usergroupexternalmemberships_v1_response_m_payloadJSON){

    usergroupexternal_get_usergroupexternalmemberships_v1_response_m_payload_t *usergroupexternal_get_usergroupexternalmemberships_v1_response_m_payload_local_var = NULL;

    // define the local list for usergroupexternal_get_usergroupexternalmemberships_v1_response_m_payload->a_obj_usergroupexternalmembership
    list_t *a_obj_usergroupexternalmembershipList = NULL;

    // usergroupexternal_get_usergroupexternalmemberships_v1_response_m_payload->a_obj_usergroupexternalmembership
    cJSON *a_obj_usergroupexternalmembership = cJSON_GetObjectItemCaseSensitive(usergroupexternal_get_usergroupexternalmemberships_v1_response_m_payloadJSON, "a_objUsergroupexternalmembership");
    if (cJSON_IsNull(a_obj_usergroupexternalmembership)) {
        a_obj_usergroupexternalmembership = NULL;
    }
    if (!a_obj_usergroupexternalmembership) {
        goto end;
    }

    
    cJSON *a_obj_usergroupexternalmembership_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_usergroupexternalmembership)){
        goto end; //nonprimitive container
    }

    a_obj_usergroupexternalmembershipList = list_createList();

    cJSON_ArrayForEach(a_obj_usergroupexternalmembership_local_nonprimitive,a_obj_usergroupexternalmembership )
    {
        if(!cJSON_IsObject(a_obj_usergroupexternalmembership_local_nonprimitive)){
            goto end;
        }
        usergroupexternalmembership_response_compound_t *a_obj_usergroupexternalmembershipItem = usergroupexternalmembership_response_compound_parseFromJSON(a_obj_usergroupexternalmembership_local_nonprimitive);

        list_addElement(a_obj_usergroupexternalmembershipList, a_obj_usergroupexternalmembershipItem);
    }


    usergroupexternal_get_usergroupexternalmemberships_v1_response_m_payload_local_var = usergroupexternal_get_usergroupexternalmemberships_v1_response_m_payload_create_internal (
        a_obj_usergroupexternalmembershipList
        );

    return usergroupexternal_get_usergroupexternalmemberships_v1_response_m_payload_local_var;
end:
    if (a_obj_usergroupexternalmembershipList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_usergroupexternalmembershipList) {
            usergroupexternalmembership_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_usergroupexternalmembershipList);
        a_obj_usergroupexternalmembershipList = NULL;
    }
    return NULL;

}
