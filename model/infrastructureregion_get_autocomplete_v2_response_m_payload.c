#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "infrastructureregion_get_autocomplete_v2_response_m_payload.h"



static infrastructureregion_get_autocomplete_v2_response_m_payload_t *infrastructureregion_get_autocomplete_v2_response_m_payload_create_internal(
    list_t *a_obj_infrastructureregion
    ) {
    infrastructureregion_get_autocomplete_v2_response_m_payload_t *infrastructureregion_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(infrastructureregion_get_autocomplete_v2_response_m_payload_t));
    if (!infrastructureregion_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    memset(infrastructureregion_get_autocomplete_v2_response_m_payload_local_var, 0, sizeof(infrastructureregion_get_autocomplete_v2_response_m_payload_t));
    infrastructureregion_get_autocomplete_v2_response_m_payload_local_var->_library_owned = 1;
    infrastructureregion_get_autocomplete_v2_response_m_payload_local_var->a_obj_infrastructureregion = a_obj_infrastructureregion;
    return infrastructureregion_get_autocomplete_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) infrastructureregion_get_autocomplete_v2_response_m_payload_t *infrastructureregion_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_infrastructureregion
    ) {
    infrastructureregion_get_autocomplete_v2_response_m_payload_t *result = infrastructureregion_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_infrastructureregion
        );
    if (!result) {
    }
    return result;
}

void infrastructureregion_get_autocomplete_v2_response_m_payload_free(infrastructureregion_get_autocomplete_v2_response_m_payload_t *infrastructureregion_get_autocomplete_v2_response_m_payload) {
    if(NULL == infrastructureregion_get_autocomplete_v2_response_m_payload){
        return ;
    }
    if(infrastructureregion_get_autocomplete_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "infrastructureregion_get_autocomplete_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (infrastructureregion_get_autocomplete_v2_response_m_payload->a_obj_infrastructureregion) {
        list_ForEach(listEntry, infrastructureregion_get_autocomplete_v2_response_m_payload->a_obj_infrastructureregion) {
            infrastructureregion_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(infrastructureregion_get_autocomplete_v2_response_m_payload->a_obj_infrastructureregion);
        infrastructureregion_get_autocomplete_v2_response_m_payload->a_obj_infrastructureregion = NULL;
    }
    free(infrastructureregion_get_autocomplete_v2_response_m_payload);
}

cJSON *infrastructureregion_get_autocomplete_v2_response_m_payload_convertToJSON(infrastructureregion_get_autocomplete_v2_response_m_payload_t *infrastructureregion_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // infrastructureregion_get_autocomplete_v2_response_m_payload->a_obj_infrastructureregion
    if (!infrastructureregion_get_autocomplete_v2_response_m_payload->a_obj_infrastructureregion) {
        goto fail;
    }
    cJSON *a_obj_infrastructureregion = cJSON_AddArrayToObject(item, "a_objInfrastructureregion");
    if(a_obj_infrastructureregion == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_infrastructureregionListEntry;
    if (infrastructureregion_get_autocomplete_v2_response_m_payload->a_obj_infrastructureregion) {
    list_ForEach(a_obj_infrastructureregionListEntry, infrastructureregion_get_autocomplete_v2_response_m_payload->a_obj_infrastructureregion) {
    cJSON *itemLocal = infrastructureregion_autocomplete_element_response_convertToJSON(a_obj_infrastructureregionListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_infrastructureregion, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

infrastructureregion_get_autocomplete_v2_response_m_payload_t *infrastructureregion_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *infrastructureregion_get_autocomplete_v2_response_m_payloadJSON){

    infrastructureregion_get_autocomplete_v2_response_m_payload_t *infrastructureregion_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for infrastructureregion_get_autocomplete_v2_response_m_payload->a_obj_infrastructureregion
    list_t *a_obj_infrastructureregionList = NULL;

    // infrastructureregion_get_autocomplete_v2_response_m_payload->a_obj_infrastructureregion
    cJSON *a_obj_infrastructureregion = cJSON_GetObjectItemCaseSensitive(infrastructureregion_get_autocomplete_v2_response_m_payloadJSON, "a_objInfrastructureregion");
    if (cJSON_IsNull(a_obj_infrastructureregion)) {
        a_obj_infrastructureregion = NULL;
    }
    if (!a_obj_infrastructureregion) {
        goto end;
    }

    
    cJSON *a_obj_infrastructureregion_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_infrastructureregion)){
        goto end; //nonprimitive container
    }

    a_obj_infrastructureregionList = list_createList();

    cJSON_ArrayForEach(a_obj_infrastructureregion_local_nonprimitive,a_obj_infrastructureregion )
    {
        if(!cJSON_IsObject(a_obj_infrastructureregion_local_nonprimitive)){
            goto end;
        }
        infrastructureregion_autocomplete_element_response_t *a_obj_infrastructureregionItem = infrastructureregion_autocomplete_element_response_parseFromJSON(a_obj_infrastructureregion_local_nonprimitive);

        list_addElement(a_obj_infrastructureregionList, a_obj_infrastructureregionItem);
    }



    infrastructureregion_get_autocomplete_v2_response_m_payload_local_var = infrastructureregion_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_infrastructureregionList
        );

    if (!infrastructureregion_get_autocomplete_v2_response_m_payload_local_var) {
        goto end;
    }

    return infrastructureregion_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_infrastructureregionList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_infrastructureregionList) {
            infrastructureregion_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_infrastructureregionList);
        a_obj_infrastructureregionList = NULL;
    }
    return NULL;

}
