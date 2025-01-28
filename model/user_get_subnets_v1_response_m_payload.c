#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "user_get_subnets_v1_response_m_payload.h"



static user_get_subnets_v1_response_m_payload_t *user_get_subnets_v1_response_m_payload_create_internal(
    list_t *a_obj_subnet
    ) {
    user_get_subnets_v1_response_m_payload_t *user_get_subnets_v1_response_m_payload_local_var = malloc(sizeof(user_get_subnets_v1_response_m_payload_t));
    if (!user_get_subnets_v1_response_m_payload_local_var) {
        return NULL;
    }
    user_get_subnets_v1_response_m_payload_local_var->a_obj_subnet = a_obj_subnet;

    user_get_subnets_v1_response_m_payload_local_var->_library_owned = 1;
    return user_get_subnets_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) user_get_subnets_v1_response_m_payload_t *user_get_subnets_v1_response_m_payload_create(
    list_t *a_obj_subnet
    ) {
    return user_get_subnets_v1_response_m_payload_create_internal (
        a_obj_subnet
        );
}

void user_get_subnets_v1_response_m_payload_free(user_get_subnets_v1_response_m_payload_t *user_get_subnets_v1_response_m_payload) {
    if(NULL == user_get_subnets_v1_response_m_payload){
        return ;
    }
    if(user_get_subnets_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "user_get_subnets_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (user_get_subnets_v1_response_m_payload->a_obj_subnet) {
        list_ForEach(listEntry, user_get_subnets_v1_response_m_payload->a_obj_subnet) {
            subnet_response_compound_free(listEntry->data);
        }
        list_freeList(user_get_subnets_v1_response_m_payload->a_obj_subnet);
        user_get_subnets_v1_response_m_payload->a_obj_subnet = NULL;
    }
    free(user_get_subnets_v1_response_m_payload);
}

cJSON *user_get_subnets_v1_response_m_payload_convertToJSON(user_get_subnets_v1_response_m_payload_t *user_get_subnets_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // user_get_subnets_v1_response_m_payload->a_obj_subnet
    if (!user_get_subnets_v1_response_m_payload->a_obj_subnet) {
        goto fail;
    }
    cJSON *a_obj_subnet = cJSON_AddArrayToObject(item, "a_objSubnet");
    if(a_obj_subnet == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_subnetListEntry;
    if (user_get_subnets_v1_response_m_payload->a_obj_subnet) {
    list_ForEach(a_obj_subnetListEntry, user_get_subnets_v1_response_m_payload->a_obj_subnet) {
    cJSON *itemLocal = subnet_response_compound_convertToJSON(a_obj_subnetListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_subnet, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

user_get_subnets_v1_response_m_payload_t *user_get_subnets_v1_response_m_payload_parseFromJSON(cJSON *user_get_subnets_v1_response_m_payloadJSON){

    user_get_subnets_v1_response_m_payload_t *user_get_subnets_v1_response_m_payload_local_var = NULL;

    // define the local list for user_get_subnets_v1_response_m_payload->a_obj_subnet
    list_t *a_obj_subnetList = NULL;

    // user_get_subnets_v1_response_m_payload->a_obj_subnet
    cJSON *a_obj_subnet = cJSON_GetObjectItemCaseSensitive(user_get_subnets_v1_response_m_payloadJSON, "a_objSubnet");
    if (cJSON_IsNull(a_obj_subnet)) {
        a_obj_subnet = NULL;
    }
    if (!a_obj_subnet) {
        goto end;
    }

    
    cJSON *a_obj_subnet_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_subnet)){
        goto end; //nonprimitive container
    }

    a_obj_subnetList = list_createList();

    cJSON_ArrayForEach(a_obj_subnet_local_nonprimitive,a_obj_subnet )
    {
        if(!cJSON_IsObject(a_obj_subnet_local_nonprimitive)){
            goto end;
        }
        subnet_response_compound_t *a_obj_subnetItem = subnet_response_compound_parseFromJSON(a_obj_subnet_local_nonprimitive);

        list_addElement(a_obj_subnetList, a_obj_subnetItem);
    }


    user_get_subnets_v1_response_m_payload_local_var = user_get_subnets_v1_response_m_payload_create_internal (
        a_obj_subnetList
        );

    return user_get_subnets_v1_response_m_payload_local_var;
end:
    if (a_obj_subnetList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_subnetList) {
            subnet_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_subnetList);
        a_obj_subnetList = NULL;
    }
    return NULL;

}
