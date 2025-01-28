#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntsarequirement_get_autocomplete_v2_response_m_payload.h"



static ezsigntsarequirement_get_autocomplete_v2_response_m_payload_t *ezsigntsarequirement_get_autocomplete_v2_response_m_payload_create_internal(
    list_t *a_obj_ezsigntsarequirement
    ) {
    ezsigntsarequirement_get_autocomplete_v2_response_m_payload_t *ezsigntsarequirement_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(ezsigntsarequirement_get_autocomplete_v2_response_m_payload_t));
    if (!ezsigntsarequirement_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntsarequirement_get_autocomplete_v2_response_m_payload_local_var->a_obj_ezsigntsarequirement = a_obj_ezsigntsarequirement;

    ezsigntsarequirement_get_autocomplete_v2_response_m_payload_local_var->_library_owned = 1;
    return ezsigntsarequirement_get_autocomplete_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsigntsarequirement_get_autocomplete_v2_response_m_payload_t *ezsigntsarequirement_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_ezsigntsarequirement
    ) {
    return ezsigntsarequirement_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_ezsigntsarequirement
        );
}

void ezsigntsarequirement_get_autocomplete_v2_response_m_payload_free(ezsigntsarequirement_get_autocomplete_v2_response_m_payload_t *ezsigntsarequirement_get_autocomplete_v2_response_m_payload) {
    if(NULL == ezsigntsarequirement_get_autocomplete_v2_response_m_payload){
        return ;
    }
    if(ezsigntsarequirement_get_autocomplete_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntsarequirement_get_autocomplete_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntsarequirement_get_autocomplete_v2_response_m_payload->a_obj_ezsigntsarequirement) {
        list_ForEach(listEntry, ezsigntsarequirement_get_autocomplete_v2_response_m_payload->a_obj_ezsigntsarequirement) {
            ezsigntsarequirement_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(ezsigntsarequirement_get_autocomplete_v2_response_m_payload->a_obj_ezsigntsarequirement);
        ezsigntsarequirement_get_autocomplete_v2_response_m_payload->a_obj_ezsigntsarequirement = NULL;
    }
    free(ezsigntsarequirement_get_autocomplete_v2_response_m_payload);
}

cJSON *ezsigntsarequirement_get_autocomplete_v2_response_m_payload_convertToJSON(ezsigntsarequirement_get_autocomplete_v2_response_m_payload_t *ezsigntsarequirement_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntsarequirement_get_autocomplete_v2_response_m_payload->a_obj_ezsigntsarequirement
    if (!ezsigntsarequirement_get_autocomplete_v2_response_m_payload->a_obj_ezsigntsarequirement) {
        goto fail;
    }
    cJSON *a_obj_ezsigntsarequirement = cJSON_AddArrayToObject(item, "a_objEzsigntsarequirement");
    if(a_obj_ezsigntsarequirement == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntsarequirementListEntry;
    if (ezsigntsarequirement_get_autocomplete_v2_response_m_payload->a_obj_ezsigntsarequirement) {
    list_ForEach(a_obj_ezsigntsarequirementListEntry, ezsigntsarequirement_get_autocomplete_v2_response_m_payload->a_obj_ezsigntsarequirement) {
    cJSON *itemLocal = ezsigntsarequirement_autocomplete_element_response_convertToJSON(a_obj_ezsigntsarequirementListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntsarequirement, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntsarequirement_get_autocomplete_v2_response_m_payload_t *ezsigntsarequirement_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *ezsigntsarequirement_get_autocomplete_v2_response_m_payloadJSON){

    ezsigntsarequirement_get_autocomplete_v2_response_m_payload_t *ezsigntsarequirement_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for ezsigntsarequirement_get_autocomplete_v2_response_m_payload->a_obj_ezsigntsarequirement
    list_t *a_obj_ezsigntsarequirementList = NULL;

    // ezsigntsarequirement_get_autocomplete_v2_response_m_payload->a_obj_ezsigntsarequirement
    cJSON *a_obj_ezsigntsarequirement = cJSON_GetObjectItemCaseSensitive(ezsigntsarequirement_get_autocomplete_v2_response_m_payloadJSON, "a_objEzsigntsarequirement");
    if (cJSON_IsNull(a_obj_ezsigntsarequirement)) {
        a_obj_ezsigntsarequirement = NULL;
    }
    if (!a_obj_ezsigntsarequirement) {
        goto end;
    }

    
    cJSON *a_obj_ezsigntsarequirement_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntsarequirement)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntsarequirementList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntsarequirement_local_nonprimitive,a_obj_ezsigntsarequirement )
    {
        if(!cJSON_IsObject(a_obj_ezsigntsarequirement_local_nonprimitive)){
            goto end;
        }
        ezsigntsarequirement_autocomplete_element_response_t *a_obj_ezsigntsarequirementItem = ezsigntsarequirement_autocomplete_element_response_parseFromJSON(a_obj_ezsigntsarequirement_local_nonprimitive);

        list_addElement(a_obj_ezsigntsarequirementList, a_obj_ezsigntsarequirementItem);
    }


    ezsigntsarequirement_get_autocomplete_v2_response_m_payload_local_var = ezsigntsarequirement_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_ezsigntsarequirementList
        );

    return ezsigntsarequirement_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_ezsigntsarequirementList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntsarequirementList) {
            ezsigntsarequirement_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntsarequirementList);
        a_obj_ezsigntsarequirementList = NULL;
    }
    return NULL;

}
