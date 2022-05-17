#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksend_get_list_v1_response_m_payload_all_of.h"



ezsignbulksend_get_list_v1_response_m_payload_all_of_t *ezsignbulksend_get_list_v1_response_m_payload_all_of_create(
    list_t *a_obj_ezsignbulksend
    ) {
    ezsignbulksend_get_list_v1_response_m_payload_all_of_t *ezsignbulksend_get_list_v1_response_m_payload_all_of_local_var = malloc(sizeof(ezsignbulksend_get_list_v1_response_m_payload_all_of_t));
    if (!ezsignbulksend_get_list_v1_response_m_payload_all_of_local_var) {
        return NULL;
    }
    ezsignbulksend_get_list_v1_response_m_payload_all_of_local_var->a_obj_ezsignbulksend = a_obj_ezsignbulksend;

    return ezsignbulksend_get_list_v1_response_m_payload_all_of_local_var;
}


void ezsignbulksend_get_list_v1_response_m_payload_all_of_free(ezsignbulksend_get_list_v1_response_m_payload_all_of_t *ezsignbulksend_get_list_v1_response_m_payload_all_of) {
    if(NULL == ezsignbulksend_get_list_v1_response_m_payload_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksend_get_list_v1_response_m_payload_all_of->a_obj_ezsignbulksend) {
        list_ForEach(listEntry, ezsignbulksend_get_list_v1_response_m_payload_all_of->a_obj_ezsignbulksend) {
            ezsignbulksend_list_element_free(listEntry->data);
        }
        list_freeList(ezsignbulksend_get_list_v1_response_m_payload_all_of->a_obj_ezsignbulksend);
        ezsignbulksend_get_list_v1_response_m_payload_all_of->a_obj_ezsignbulksend = NULL;
    }
    free(ezsignbulksend_get_list_v1_response_m_payload_all_of);
}

cJSON *ezsignbulksend_get_list_v1_response_m_payload_all_of_convertToJSON(ezsignbulksend_get_list_v1_response_m_payload_all_of_t *ezsignbulksend_get_list_v1_response_m_payload_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksend_get_list_v1_response_m_payload_all_of->a_obj_ezsignbulksend
    if (!ezsignbulksend_get_list_v1_response_m_payload_all_of->a_obj_ezsignbulksend) {
        goto fail;
    }
    cJSON *a_obj_ezsignbulksend = cJSON_AddArrayToObject(item, "a_objEzsignbulksend");
    if(a_obj_ezsignbulksend == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignbulksendListEntry;
    if (ezsignbulksend_get_list_v1_response_m_payload_all_of->a_obj_ezsignbulksend) {
    list_ForEach(a_obj_ezsignbulksendListEntry, ezsignbulksend_get_list_v1_response_m_payload_all_of->a_obj_ezsignbulksend) {
    cJSON *itemLocal = ezsignbulksend_list_element_convertToJSON(a_obj_ezsignbulksendListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignbulksend, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignbulksend_get_list_v1_response_m_payload_all_of_t *ezsignbulksend_get_list_v1_response_m_payload_all_of_parseFromJSON(cJSON *ezsignbulksend_get_list_v1_response_m_payload_all_ofJSON){

    ezsignbulksend_get_list_v1_response_m_payload_all_of_t *ezsignbulksend_get_list_v1_response_m_payload_all_of_local_var = NULL;

    // define the local list for ezsignbulksend_get_list_v1_response_m_payload_all_of->a_obj_ezsignbulksend
    list_t *a_obj_ezsignbulksendList = NULL;

    // ezsignbulksend_get_list_v1_response_m_payload_all_of->a_obj_ezsignbulksend
    cJSON *a_obj_ezsignbulksend = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_get_list_v1_response_m_payload_all_ofJSON, "a_objEzsignbulksend");
    if (!a_obj_ezsignbulksend) {
        goto end;
    }

    
    cJSON *a_obj_ezsignbulksend_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignbulksend)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignbulksendList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignbulksend_local_nonprimitive,a_obj_ezsignbulksend )
    {
        if(!cJSON_IsObject(a_obj_ezsignbulksend_local_nonprimitive)){
            goto end;
        }
        ezsignbulksend_list_element_t *a_obj_ezsignbulksendItem = ezsignbulksend_list_element_parseFromJSON(a_obj_ezsignbulksend_local_nonprimitive);

        list_addElement(a_obj_ezsignbulksendList, a_obj_ezsignbulksendItem);
    }


    ezsignbulksend_get_list_v1_response_m_payload_all_of_local_var = ezsignbulksend_get_list_v1_response_m_payload_all_of_create (
        a_obj_ezsignbulksendList
        );

    return ezsignbulksend_get_list_v1_response_m_payload_all_of_local_var;
end:
    if (a_obj_ezsignbulksendList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignbulksendList) {
            ezsignbulksend_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignbulksendList);
        a_obj_ezsignbulksendList = NULL;
    }
    return NULL;

}
