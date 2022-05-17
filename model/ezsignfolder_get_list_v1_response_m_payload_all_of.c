#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfolder_get_list_v1_response_m_payload_all_of.h"



ezsignfolder_get_list_v1_response_m_payload_all_of_t *ezsignfolder_get_list_v1_response_m_payload_all_of_create(
    list_t *a_obj_ezsignfolder
    ) {
    ezsignfolder_get_list_v1_response_m_payload_all_of_t *ezsignfolder_get_list_v1_response_m_payload_all_of_local_var = malloc(sizeof(ezsignfolder_get_list_v1_response_m_payload_all_of_t));
    if (!ezsignfolder_get_list_v1_response_m_payload_all_of_local_var) {
        return NULL;
    }
    ezsignfolder_get_list_v1_response_m_payload_all_of_local_var->a_obj_ezsignfolder = a_obj_ezsignfolder;

    return ezsignfolder_get_list_v1_response_m_payload_all_of_local_var;
}


void ezsignfolder_get_list_v1_response_m_payload_all_of_free(ezsignfolder_get_list_v1_response_m_payload_all_of_t *ezsignfolder_get_list_v1_response_m_payload_all_of) {
    if(NULL == ezsignfolder_get_list_v1_response_m_payload_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfolder_get_list_v1_response_m_payload_all_of->a_obj_ezsignfolder) {
        list_ForEach(listEntry, ezsignfolder_get_list_v1_response_m_payload_all_of->a_obj_ezsignfolder) {
            ezsignfolder_list_element_free(listEntry->data);
        }
        list_freeList(ezsignfolder_get_list_v1_response_m_payload_all_of->a_obj_ezsignfolder);
        ezsignfolder_get_list_v1_response_m_payload_all_of->a_obj_ezsignfolder = NULL;
    }
    free(ezsignfolder_get_list_v1_response_m_payload_all_of);
}

cJSON *ezsignfolder_get_list_v1_response_m_payload_all_of_convertToJSON(ezsignfolder_get_list_v1_response_m_payload_all_of_t *ezsignfolder_get_list_v1_response_m_payload_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfolder_get_list_v1_response_m_payload_all_of->a_obj_ezsignfolder
    if (!ezsignfolder_get_list_v1_response_m_payload_all_of->a_obj_ezsignfolder) {
        goto fail;
    }
    cJSON *a_obj_ezsignfolder = cJSON_AddArrayToObject(item, "a_objEzsignfolder");
    if(a_obj_ezsignfolder == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignfolderListEntry;
    if (ezsignfolder_get_list_v1_response_m_payload_all_of->a_obj_ezsignfolder) {
    list_ForEach(a_obj_ezsignfolderListEntry, ezsignfolder_get_list_v1_response_m_payload_all_of->a_obj_ezsignfolder) {
    cJSON *itemLocal = ezsignfolder_list_element_convertToJSON(a_obj_ezsignfolderListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignfolder, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignfolder_get_list_v1_response_m_payload_all_of_t *ezsignfolder_get_list_v1_response_m_payload_all_of_parseFromJSON(cJSON *ezsignfolder_get_list_v1_response_m_payload_all_ofJSON){

    ezsignfolder_get_list_v1_response_m_payload_all_of_t *ezsignfolder_get_list_v1_response_m_payload_all_of_local_var = NULL;

    // define the local list for ezsignfolder_get_list_v1_response_m_payload_all_of->a_obj_ezsignfolder
    list_t *a_obj_ezsignfolderList = NULL;

    // ezsignfolder_get_list_v1_response_m_payload_all_of->a_obj_ezsignfolder
    cJSON *a_obj_ezsignfolder = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_list_v1_response_m_payload_all_ofJSON, "a_objEzsignfolder");
    if (!a_obj_ezsignfolder) {
        goto end;
    }

    
    cJSON *a_obj_ezsignfolder_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignfolder)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignfolderList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignfolder_local_nonprimitive,a_obj_ezsignfolder )
    {
        if(!cJSON_IsObject(a_obj_ezsignfolder_local_nonprimitive)){
            goto end;
        }
        ezsignfolder_list_element_t *a_obj_ezsignfolderItem = ezsignfolder_list_element_parseFromJSON(a_obj_ezsignfolder_local_nonprimitive);

        list_addElement(a_obj_ezsignfolderList, a_obj_ezsignfolderItem);
    }


    ezsignfolder_get_list_v1_response_m_payload_all_of_local_var = ezsignfolder_get_list_v1_response_m_payload_all_of_create (
        a_obj_ezsignfolderList
        );

    return ezsignfolder_get_list_v1_response_m_payload_all_of_local_var;
end:
    if (a_obj_ezsignfolderList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignfolderList) {
            ezsignfolder_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignfolderList);
        a_obj_ezsignfolderList = NULL;
    }
    return NULL;

}
