#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsigningreason_get_autocomplete_v2_response_m_payload.h"



static ezsignsigningreason_get_autocomplete_v2_response_m_payload_t *ezsignsigningreason_get_autocomplete_v2_response_m_payload_create_internal(
    list_t *a_obj_ezsignsigningreason
    ) {
    ezsignsigningreason_get_autocomplete_v2_response_m_payload_t *ezsignsigningreason_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(ezsignsigningreason_get_autocomplete_v2_response_m_payload_t));
    if (!ezsignsigningreason_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    ezsignsigningreason_get_autocomplete_v2_response_m_payload_local_var->a_obj_ezsignsigningreason = a_obj_ezsignsigningreason;

    ezsignsigningreason_get_autocomplete_v2_response_m_payload_local_var->_library_owned = 1;
    return ezsignsigningreason_get_autocomplete_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsignsigningreason_get_autocomplete_v2_response_m_payload_t *ezsignsigningreason_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_ezsignsigningreason
    ) {
    return ezsignsigningreason_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_ezsignsigningreason
        );
}

void ezsignsigningreason_get_autocomplete_v2_response_m_payload_free(ezsignsigningreason_get_autocomplete_v2_response_m_payload_t *ezsignsigningreason_get_autocomplete_v2_response_m_payload) {
    if(NULL == ezsignsigningreason_get_autocomplete_v2_response_m_payload){
        return ;
    }
    if(ezsignsigningreason_get_autocomplete_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignsigningreason_get_autocomplete_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsigningreason_get_autocomplete_v2_response_m_payload->a_obj_ezsignsigningreason) {
        list_ForEach(listEntry, ezsignsigningreason_get_autocomplete_v2_response_m_payload->a_obj_ezsignsigningreason) {
            ezsignsigningreason_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(ezsignsigningreason_get_autocomplete_v2_response_m_payload->a_obj_ezsignsigningreason);
        ezsignsigningreason_get_autocomplete_v2_response_m_payload->a_obj_ezsignsigningreason = NULL;
    }
    free(ezsignsigningreason_get_autocomplete_v2_response_m_payload);
}

cJSON *ezsignsigningreason_get_autocomplete_v2_response_m_payload_convertToJSON(ezsignsigningreason_get_autocomplete_v2_response_m_payload_t *ezsignsigningreason_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsigningreason_get_autocomplete_v2_response_m_payload->a_obj_ezsignsigningreason
    if (!ezsignsigningreason_get_autocomplete_v2_response_m_payload->a_obj_ezsignsigningreason) {
        goto fail;
    }
    cJSON *a_obj_ezsignsigningreason = cJSON_AddArrayToObject(item, "a_objEzsignsigningreason");
    if(a_obj_ezsignsigningreason == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignsigningreasonListEntry;
    if (ezsignsigningreason_get_autocomplete_v2_response_m_payload->a_obj_ezsignsigningreason) {
    list_ForEach(a_obj_ezsignsigningreasonListEntry, ezsignsigningreason_get_autocomplete_v2_response_m_payload->a_obj_ezsignsigningreason) {
    cJSON *itemLocal = ezsignsigningreason_autocomplete_element_response_convertToJSON(a_obj_ezsignsigningreasonListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignsigningreason, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignsigningreason_get_autocomplete_v2_response_m_payload_t *ezsignsigningreason_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *ezsignsigningreason_get_autocomplete_v2_response_m_payloadJSON){

    ezsignsigningreason_get_autocomplete_v2_response_m_payload_t *ezsignsigningreason_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for ezsignsigningreason_get_autocomplete_v2_response_m_payload->a_obj_ezsignsigningreason
    list_t *a_obj_ezsignsigningreasonList = NULL;

    // ezsignsigningreason_get_autocomplete_v2_response_m_payload->a_obj_ezsignsigningreason
    cJSON *a_obj_ezsignsigningreason = cJSON_GetObjectItemCaseSensitive(ezsignsigningreason_get_autocomplete_v2_response_m_payloadJSON, "a_objEzsignsigningreason");
    if (cJSON_IsNull(a_obj_ezsignsigningreason)) {
        a_obj_ezsignsigningreason = NULL;
    }
    if (!a_obj_ezsignsigningreason) {
        goto end;
    }

    
    cJSON *a_obj_ezsignsigningreason_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignsigningreason)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignsigningreasonList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignsigningreason_local_nonprimitive,a_obj_ezsignsigningreason )
    {
        if(!cJSON_IsObject(a_obj_ezsignsigningreason_local_nonprimitive)){
            goto end;
        }
        ezsignsigningreason_autocomplete_element_response_t *a_obj_ezsignsigningreasonItem = ezsignsigningreason_autocomplete_element_response_parseFromJSON(a_obj_ezsignsigningreason_local_nonprimitive);

        list_addElement(a_obj_ezsignsigningreasonList, a_obj_ezsignsigningreasonItem);
    }


    ezsignsigningreason_get_autocomplete_v2_response_m_payload_local_var = ezsignsigningreason_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_ezsignsigningreasonList
        );

    return ezsignsigningreason_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_ezsignsigningreasonList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignsigningreasonList) {
            ezsignsigningreason_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignsigningreasonList);
        a_obj_ezsignsigningreasonList = NULL;
    }
    return NULL;

}
