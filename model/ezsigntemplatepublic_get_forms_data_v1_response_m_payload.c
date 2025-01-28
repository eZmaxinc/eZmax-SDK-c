#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepublic_get_forms_data_v1_response_m_payload.h"



static ezsigntemplatepublic_get_forms_data_v1_response_m_payload_t *ezsigntemplatepublic_get_forms_data_v1_response_m_payload_create_internal(
    list_t *a_obj_forms_data_folder
    ) {
    ezsigntemplatepublic_get_forms_data_v1_response_m_payload_t *ezsigntemplatepublic_get_forms_data_v1_response_m_payload_local_var = malloc(sizeof(ezsigntemplatepublic_get_forms_data_v1_response_m_payload_t));
    if (!ezsigntemplatepublic_get_forms_data_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplatepublic_get_forms_data_v1_response_m_payload_local_var->a_obj_forms_data_folder = a_obj_forms_data_folder;

    ezsigntemplatepublic_get_forms_data_v1_response_m_payload_local_var->_library_owned = 1;
    return ezsigntemplatepublic_get_forms_data_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsigntemplatepublic_get_forms_data_v1_response_m_payload_t *ezsigntemplatepublic_get_forms_data_v1_response_m_payload_create(
    list_t *a_obj_forms_data_folder
    ) {
    return ezsigntemplatepublic_get_forms_data_v1_response_m_payload_create_internal (
        a_obj_forms_data_folder
        );
}

void ezsigntemplatepublic_get_forms_data_v1_response_m_payload_free(ezsigntemplatepublic_get_forms_data_v1_response_m_payload_t *ezsigntemplatepublic_get_forms_data_v1_response_m_payload) {
    if(NULL == ezsigntemplatepublic_get_forms_data_v1_response_m_payload){
        return ;
    }
    if(ezsigntemplatepublic_get_forms_data_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatepublic_get_forms_data_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepublic_get_forms_data_v1_response_m_payload->a_obj_forms_data_folder) {
        list_ForEach(listEntry, ezsigntemplatepublic_get_forms_data_v1_response_m_payload->a_obj_forms_data_folder) {
            custom_forms_data_folder_response_free(listEntry->data);
        }
        list_freeList(ezsigntemplatepublic_get_forms_data_v1_response_m_payload->a_obj_forms_data_folder);
        ezsigntemplatepublic_get_forms_data_v1_response_m_payload->a_obj_forms_data_folder = NULL;
    }
    free(ezsigntemplatepublic_get_forms_data_v1_response_m_payload);
}

cJSON *ezsigntemplatepublic_get_forms_data_v1_response_m_payload_convertToJSON(ezsigntemplatepublic_get_forms_data_v1_response_m_payload_t *ezsigntemplatepublic_get_forms_data_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepublic_get_forms_data_v1_response_m_payload->a_obj_forms_data_folder
    if (!ezsigntemplatepublic_get_forms_data_v1_response_m_payload->a_obj_forms_data_folder) {
        goto fail;
    }
    cJSON *a_obj_forms_data_folder = cJSON_AddArrayToObject(item, "a_objFormsDataFolder");
    if(a_obj_forms_data_folder == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_forms_data_folderListEntry;
    if (ezsigntemplatepublic_get_forms_data_v1_response_m_payload->a_obj_forms_data_folder) {
    list_ForEach(a_obj_forms_data_folderListEntry, ezsigntemplatepublic_get_forms_data_v1_response_m_payload->a_obj_forms_data_folder) {
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

ezsigntemplatepublic_get_forms_data_v1_response_m_payload_t *ezsigntemplatepublic_get_forms_data_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatepublic_get_forms_data_v1_response_m_payloadJSON){

    ezsigntemplatepublic_get_forms_data_v1_response_m_payload_t *ezsigntemplatepublic_get_forms_data_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsigntemplatepublic_get_forms_data_v1_response_m_payload->a_obj_forms_data_folder
    list_t *a_obj_forms_data_folderList = NULL;

    // ezsigntemplatepublic_get_forms_data_v1_response_m_payload->a_obj_forms_data_folder
    cJSON *a_obj_forms_data_folder = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_get_forms_data_v1_response_m_payloadJSON, "a_objFormsDataFolder");
    if (cJSON_IsNull(a_obj_forms_data_folder)) {
        a_obj_forms_data_folder = NULL;
    }
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


    ezsigntemplatepublic_get_forms_data_v1_response_m_payload_local_var = ezsigntemplatepublic_get_forms_data_v1_response_m_payload_create_internal (
        a_obj_forms_data_folderList
        );

    return ezsigntemplatepublic_get_forms_data_v1_response_m_payload_local_var;
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
