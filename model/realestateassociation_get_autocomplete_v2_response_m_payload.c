#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "realestateassociation_get_autocomplete_v2_response_m_payload.h"



static realestateassociation_get_autocomplete_v2_response_m_payload_t *realestateassociation_get_autocomplete_v2_response_m_payload_create_internal(
    list_t *a_obj_realestateassociation
    ) {
    realestateassociation_get_autocomplete_v2_response_m_payload_t *realestateassociation_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(realestateassociation_get_autocomplete_v2_response_m_payload_t));
    if (!realestateassociation_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    memset(realestateassociation_get_autocomplete_v2_response_m_payload_local_var, 0, sizeof(realestateassociation_get_autocomplete_v2_response_m_payload_t));
    realestateassociation_get_autocomplete_v2_response_m_payload_local_var->_library_owned = 1;
    realestateassociation_get_autocomplete_v2_response_m_payload_local_var->a_obj_realestateassociation = a_obj_realestateassociation;
    return realestateassociation_get_autocomplete_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) realestateassociation_get_autocomplete_v2_response_m_payload_t *realestateassociation_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_realestateassociation
    ) {
    realestateassociation_get_autocomplete_v2_response_m_payload_t *result = realestateassociation_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_realestateassociation
        );
    if (!result) {
    }
    return result;
}

void realestateassociation_get_autocomplete_v2_response_m_payload_free(realestateassociation_get_autocomplete_v2_response_m_payload_t *realestateassociation_get_autocomplete_v2_response_m_payload) {
    if(NULL == realestateassociation_get_autocomplete_v2_response_m_payload){
        return ;
    }
    if(realestateassociation_get_autocomplete_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "realestateassociation_get_autocomplete_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (realestateassociation_get_autocomplete_v2_response_m_payload->a_obj_realestateassociation) {
        list_ForEach(listEntry, realestateassociation_get_autocomplete_v2_response_m_payload->a_obj_realestateassociation) {
            realestateassociation_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(realestateassociation_get_autocomplete_v2_response_m_payload->a_obj_realestateassociation);
        realestateassociation_get_autocomplete_v2_response_m_payload->a_obj_realestateassociation = NULL;
    }
    free(realestateassociation_get_autocomplete_v2_response_m_payload);
}

cJSON *realestateassociation_get_autocomplete_v2_response_m_payload_convertToJSON(realestateassociation_get_autocomplete_v2_response_m_payload_t *realestateassociation_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // realestateassociation_get_autocomplete_v2_response_m_payload->a_obj_realestateassociation
    if (!realestateassociation_get_autocomplete_v2_response_m_payload->a_obj_realestateassociation) {
        goto fail;
    }
    cJSON *a_obj_realestateassociation = cJSON_AddArrayToObject(item, "a_objRealestateassociation");
    if(a_obj_realestateassociation == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_realestateassociationListEntry;
    if (realestateassociation_get_autocomplete_v2_response_m_payload->a_obj_realestateassociation) {
    list_ForEach(a_obj_realestateassociationListEntry, realestateassociation_get_autocomplete_v2_response_m_payload->a_obj_realestateassociation) {
    cJSON *itemLocal = realestateassociation_autocomplete_element_response_convertToJSON(a_obj_realestateassociationListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_realestateassociation, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

realestateassociation_get_autocomplete_v2_response_m_payload_t *realestateassociation_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *realestateassociation_get_autocomplete_v2_response_m_payloadJSON){

    realestateassociation_get_autocomplete_v2_response_m_payload_t *realestateassociation_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for realestateassociation_get_autocomplete_v2_response_m_payload->a_obj_realestateassociation
    list_t *a_obj_realestateassociationList = NULL;

    // realestateassociation_get_autocomplete_v2_response_m_payload->a_obj_realestateassociation
    cJSON *a_obj_realestateassociation = cJSON_GetObjectItemCaseSensitive(realestateassociation_get_autocomplete_v2_response_m_payloadJSON, "a_objRealestateassociation");
    if (cJSON_IsNull(a_obj_realestateassociation)) {
        a_obj_realestateassociation = NULL;
    }
    if (!a_obj_realestateassociation) {
        goto end;
    }

    
    cJSON *a_obj_realestateassociation_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_realestateassociation)){
        goto end; //nonprimitive container
    }

    a_obj_realestateassociationList = list_createList();

    cJSON_ArrayForEach(a_obj_realestateassociation_local_nonprimitive,a_obj_realestateassociation )
    {
        if(!cJSON_IsObject(a_obj_realestateassociation_local_nonprimitive)){
            goto end;
        }
        realestateassociation_autocomplete_element_response_t *a_obj_realestateassociationItem = realestateassociation_autocomplete_element_response_parseFromJSON(a_obj_realestateassociation_local_nonprimitive);

        list_addElement(a_obj_realestateassociationList, a_obj_realestateassociationItem);
    }



    realestateassociation_get_autocomplete_v2_response_m_payload_local_var = realestateassociation_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_realestateassociationList
        );

    if (!realestateassociation_get_autocomplete_v2_response_m_payload_local_var) {
        goto end;
    }

    return realestateassociation_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_realestateassociationList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_realestateassociationList) {
            realestateassociation_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_realestateassociationList);
        a_obj_realestateassociationList = NULL;
    }
    return NULL;

}
