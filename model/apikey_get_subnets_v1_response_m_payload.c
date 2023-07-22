#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "apikey_get_subnets_v1_response_m_payload.h"



apikey_get_subnets_v1_response_m_payload_t *apikey_get_subnets_v1_response_m_payload_create(
    list_t *a_obj_subnet
    ) {
    apikey_get_subnets_v1_response_m_payload_t *apikey_get_subnets_v1_response_m_payload_local_var = malloc(sizeof(apikey_get_subnets_v1_response_m_payload_t));
    if (!apikey_get_subnets_v1_response_m_payload_local_var) {
        return NULL;
    }
    apikey_get_subnets_v1_response_m_payload_local_var->a_obj_subnet = a_obj_subnet;

    return apikey_get_subnets_v1_response_m_payload_local_var;
}


void apikey_get_subnets_v1_response_m_payload_free(apikey_get_subnets_v1_response_m_payload_t *apikey_get_subnets_v1_response_m_payload) {
    if(NULL == apikey_get_subnets_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (apikey_get_subnets_v1_response_m_payload->a_obj_subnet) {
        list_ForEach(listEntry, apikey_get_subnets_v1_response_m_payload->a_obj_subnet) {
            subnet_response_compound_free(listEntry->data);
        }
        list_freeList(apikey_get_subnets_v1_response_m_payload->a_obj_subnet);
        apikey_get_subnets_v1_response_m_payload->a_obj_subnet = NULL;
    }
    free(apikey_get_subnets_v1_response_m_payload);
}

cJSON *apikey_get_subnets_v1_response_m_payload_convertToJSON(apikey_get_subnets_v1_response_m_payload_t *apikey_get_subnets_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // apikey_get_subnets_v1_response_m_payload->a_obj_subnet
    if (!apikey_get_subnets_v1_response_m_payload->a_obj_subnet) {
        goto fail;
    }
    cJSON *a_obj_subnet = cJSON_AddArrayToObject(item, "a_objSubnet");
    if(a_obj_subnet == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_subnetListEntry;
    if (apikey_get_subnets_v1_response_m_payload->a_obj_subnet) {
    list_ForEach(a_obj_subnetListEntry, apikey_get_subnets_v1_response_m_payload->a_obj_subnet) {
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

apikey_get_subnets_v1_response_m_payload_t *apikey_get_subnets_v1_response_m_payload_parseFromJSON(cJSON *apikey_get_subnets_v1_response_m_payloadJSON){

    apikey_get_subnets_v1_response_m_payload_t *apikey_get_subnets_v1_response_m_payload_local_var = NULL;

    // define the local list for apikey_get_subnets_v1_response_m_payload->a_obj_subnet
    list_t *a_obj_subnetList = NULL;

    // apikey_get_subnets_v1_response_m_payload->a_obj_subnet
    cJSON *a_obj_subnet = cJSON_GetObjectItemCaseSensitive(apikey_get_subnets_v1_response_m_payloadJSON, "a_objSubnet");
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


    apikey_get_subnets_v1_response_m_payload_local_var = apikey_get_subnets_v1_response_m_payload_create (
        a_obj_subnetList
        );

    return apikey_get_subnets_v1_response_m_payload_local_var;
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
