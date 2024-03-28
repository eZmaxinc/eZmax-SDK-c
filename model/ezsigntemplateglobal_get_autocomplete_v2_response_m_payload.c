#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplateglobal_get_autocomplete_v2_response_m_payload.h"



ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_t *ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_ezsigntemplateglobal
    ) {
    ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_t *ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_t));
    if (!ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_local_var->a_obj_ezsigntemplateglobal = a_obj_ezsigntemplateglobal;

    return ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_local_var;
}


void ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_free(ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_t *ezsigntemplateglobal_get_autocomplete_v2_response_m_payload) {
    if(NULL == ezsigntemplateglobal_get_autocomplete_v2_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplateglobal_get_autocomplete_v2_response_m_payload->a_obj_ezsigntemplateglobal) {
        list_ForEach(listEntry, ezsigntemplateglobal_get_autocomplete_v2_response_m_payload->a_obj_ezsigntemplateglobal) {
            ezsigntemplateglobal_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(ezsigntemplateglobal_get_autocomplete_v2_response_m_payload->a_obj_ezsigntemplateglobal);
        ezsigntemplateglobal_get_autocomplete_v2_response_m_payload->a_obj_ezsigntemplateglobal = NULL;
    }
    free(ezsigntemplateglobal_get_autocomplete_v2_response_m_payload);
}

cJSON *ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_convertToJSON(ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_t *ezsigntemplateglobal_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplateglobal_get_autocomplete_v2_response_m_payload->a_obj_ezsigntemplateglobal
    if (!ezsigntemplateglobal_get_autocomplete_v2_response_m_payload->a_obj_ezsigntemplateglobal) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplateglobal = cJSON_AddArrayToObject(item, "a_objEzsigntemplateglobal");
    if(a_obj_ezsigntemplateglobal == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplateglobalListEntry;
    if (ezsigntemplateglobal_get_autocomplete_v2_response_m_payload->a_obj_ezsigntemplateglobal) {
    list_ForEach(a_obj_ezsigntemplateglobalListEntry, ezsigntemplateglobal_get_autocomplete_v2_response_m_payload->a_obj_ezsigntemplateglobal) {
    cJSON *itemLocal = ezsigntemplateglobal_autocomplete_element_response_convertToJSON(a_obj_ezsigntemplateglobalListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplateglobal, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_t *ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *ezsigntemplateglobal_get_autocomplete_v2_response_m_payloadJSON){

    ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_t *ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for ezsigntemplateglobal_get_autocomplete_v2_response_m_payload->a_obj_ezsigntemplateglobal
    list_t *a_obj_ezsigntemplateglobalList = NULL;

    // ezsigntemplateglobal_get_autocomplete_v2_response_m_payload->a_obj_ezsigntemplateglobal
    cJSON *a_obj_ezsigntemplateglobal = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobal_get_autocomplete_v2_response_m_payloadJSON, "a_objEzsigntemplateglobal");
    if (!a_obj_ezsigntemplateglobal) {
        goto end;
    }

    
    cJSON *a_obj_ezsigntemplateglobal_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplateglobal)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplateglobalList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplateglobal_local_nonprimitive,a_obj_ezsigntemplateglobal )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplateglobal_local_nonprimitive)){
            goto end;
        }
        ezsigntemplateglobal_autocomplete_element_response_t *a_obj_ezsigntemplateglobalItem = ezsigntemplateglobal_autocomplete_element_response_parseFromJSON(a_obj_ezsigntemplateglobal_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplateglobalList, a_obj_ezsigntemplateglobalItem);
    }


    ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_local_var = ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_create (
        a_obj_ezsigntemplateglobalList
        );

    return ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_ezsigntemplateglobalList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplateglobalList) {
            ezsigntemplateglobal_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplateglobalList);
        a_obj_ezsigntemplateglobalList = NULL;
    }
    return NULL;

}
