#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksend_get_forms_data_v1_response_m_payload.h"



ezsignbulksend_get_forms_data_v1_response_m_payload_t *ezsignbulksend_get_forms_data_v1_response_m_payload_create(
    list_t *a_obj_forms_data_folder
    ) {
    ezsignbulksend_get_forms_data_v1_response_m_payload_t *ezsignbulksend_get_forms_data_v1_response_m_payload_local_var = malloc(sizeof(ezsignbulksend_get_forms_data_v1_response_m_payload_t));
    if (!ezsignbulksend_get_forms_data_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsignbulksend_get_forms_data_v1_response_m_payload_local_var->a_obj_forms_data_folder = a_obj_forms_data_folder;

    return ezsignbulksend_get_forms_data_v1_response_m_payload_local_var;
}


void ezsignbulksend_get_forms_data_v1_response_m_payload_free(ezsignbulksend_get_forms_data_v1_response_m_payload_t *ezsignbulksend_get_forms_data_v1_response_m_payload) {
    if(NULL == ezsignbulksend_get_forms_data_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksend_get_forms_data_v1_response_m_payload->a_obj_forms_data_folder) {
        list_ForEach(listEntry, ezsignbulksend_get_forms_data_v1_response_m_payload->a_obj_forms_data_folder) {
            custom_forms_data_folder_response_free(listEntry->data);
        }
        list_freeList(ezsignbulksend_get_forms_data_v1_response_m_payload->a_obj_forms_data_folder);
        ezsignbulksend_get_forms_data_v1_response_m_payload->a_obj_forms_data_folder = NULL;
    }
    free(ezsignbulksend_get_forms_data_v1_response_m_payload);
}

cJSON *ezsignbulksend_get_forms_data_v1_response_m_payload_convertToJSON(ezsignbulksend_get_forms_data_v1_response_m_payload_t *ezsignbulksend_get_forms_data_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksend_get_forms_data_v1_response_m_payload->a_obj_forms_data_folder
    if (!ezsignbulksend_get_forms_data_v1_response_m_payload->a_obj_forms_data_folder) {
        goto fail;
    }
    cJSON *a_obj_forms_data_folder = cJSON_AddArrayToObject(item, "a_objFormsDataFolder");
    if(a_obj_forms_data_folder == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_forms_data_folderListEntry;
    if (ezsignbulksend_get_forms_data_v1_response_m_payload->a_obj_forms_data_folder) {
    list_ForEach(a_obj_forms_data_folderListEntry, ezsignbulksend_get_forms_data_v1_response_m_payload->a_obj_forms_data_folder) {
    cJSON *itemLocal = custom_forms_data_folder_response_convertToJSON(a_obj_forms_data_folderListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_forms_data_folder, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignbulksend_get_forms_data_v1_response_m_payload_t *ezsignbulksend_get_forms_data_v1_response_m_payload_parseFromJSON(cJSON *ezsignbulksend_get_forms_data_v1_response_m_payloadJSON){

    ezsignbulksend_get_forms_data_v1_response_m_payload_t *ezsignbulksend_get_forms_data_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsignbulksend_get_forms_data_v1_response_m_payload->a_obj_forms_data_folder
    list_t *a_obj_forms_data_folderList = NULL;

    // ezsignbulksend_get_forms_data_v1_response_m_payload->a_obj_forms_data_folder
    cJSON *a_obj_forms_data_folder = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_get_forms_data_v1_response_m_payloadJSON, "a_objFormsDataFolder");
    if (!a_obj_forms_data_folder) {
        goto end;
    }

    
    cJSON *a_obj_forms_data_folder_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_forms_data_folder)){
        goto end; //nonprimitive container
    }

    a_obj_forms_data_folderList = list_createList();

    cJSON_ArrayForEach(a_obj_forms_data_folder_local_nonprimitive,a_obj_forms_data_folder )
    {
        if(!cJSON_IsObject(a_obj_forms_data_folder_local_nonprimitive)){
            goto end;
        }
        custom_forms_data_folder_response_t *a_obj_forms_data_folderItem = custom_forms_data_folder_response_parseFromJSON(a_obj_forms_data_folder_local_nonprimitive);

        list_addElement(a_obj_forms_data_folderList, a_obj_forms_data_folderItem);
    }


    ezsignbulksend_get_forms_data_v1_response_m_payload_local_var = ezsignbulksend_get_forms_data_v1_response_m_payload_create (
        a_obj_forms_data_folderList
        );

    return ezsignbulksend_get_forms_data_v1_response_m_payload_local_var;
end:
    if (a_obj_forms_data_folderList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_forms_data_folderList) {
            custom_forms_data_folder_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_forms_data_folderList);
        a_obj_forms_data_folderList = NULL;
    }
    return NULL;

}
