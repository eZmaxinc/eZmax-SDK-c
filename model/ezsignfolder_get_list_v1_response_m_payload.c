#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfolder_get_list_v1_response_m_payload.h"



ezsignfolder_get_list_v1_response_m_payload_t *ezsignfolder_get_list_v1_response_m_payload_create(
    list_t *a_obj_ezsignfolder,
    int i_row_returned,
    int i_row_filtered
    ) {
    ezsignfolder_get_list_v1_response_m_payload_t *ezsignfolder_get_list_v1_response_m_payload_local_var = malloc(sizeof(ezsignfolder_get_list_v1_response_m_payload_t));
    if (!ezsignfolder_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsignfolder_get_list_v1_response_m_payload_local_var->a_obj_ezsignfolder = a_obj_ezsignfolder;
    ezsignfolder_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    ezsignfolder_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;

    return ezsignfolder_get_list_v1_response_m_payload_local_var;
}


void ezsignfolder_get_list_v1_response_m_payload_free(ezsignfolder_get_list_v1_response_m_payload_t *ezsignfolder_get_list_v1_response_m_payload) {
    if(NULL == ezsignfolder_get_list_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfolder_get_list_v1_response_m_payload->a_obj_ezsignfolder) {
        list_ForEach(listEntry, ezsignfolder_get_list_v1_response_m_payload->a_obj_ezsignfolder) {
            ezsignfolder_list_element_free(listEntry->data);
        }
        list_freeList(ezsignfolder_get_list_v1_response_m_payload->a_obj_ezsignfolder);
        ezsignfolder_get_list_v1_response_m_payload->a_obj_ezsignfolder = NULL;
    }
    free(ezsignfolder_get_list_v1_response_m_payload);
}

cJSON *ezsignfolder_get_list_v1_response_m_payload_convertToJSON(ezsignfolder_get_list_v1_response_m_payload_t *ezsignfolder_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfolder_get_list_v1_response_m_payload->a_obj_ezsignfolder
    if (!ezsignfolder_get_list_v1_response_m_payload->a_obj_ezsignfolder) {
        goto fail;
    }
    cJSON *a_obj_ezsignfolder = cJSON_AddArrayToObject(item, "a_objEzsignfolder");
    if(a_obj_ezsignfolder == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignfolderListEntry;
    if (ezsignfolder_get_list_v1_response_m_payload->a_obj_ezsignfolder) {
    list_ForEach(a_obj_ezsignfolderListEntry, ezsignfolder_get_list_v1_response_m_payload->a_obj_ezsignfolder) {
    cJSON *itemLocal = ezsignfolder_list_element_convertToJSON(a_obj_ezsignfolderListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignfolder, itemLocal);
    }
    }


    // ezsignfolder_get_list_v1_response_m_payload->i_row_returned
    if (!ezsignfolder_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", ezsignfolder_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfolder_get_list_v1_response_m_payload->i_row_filtered
    if (!ezsignfolder_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", ezsignfolder_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignfolder_get_list_v1_response_m_payload_t *ezsignfolder_get_list_v1_response_m_payload_parseFromJSON(cJSON *ezsignfolder_get_list_v1_response_m_payloadJSON){

    ezsignfolder_get_list_v1_response_m_payload_t *ezsignfolder_get_list_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsignfolder_get_list_v1_response_m_payload->a_obj_ezsignfolder
    list_t *a_obj_ezsignfolderList = NULL;

    // ezsignfolder_get_list_v1_response_m_payload->a_obj_ezsignfolder
    cJSON *a_obj_ezsignfolder = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_list_v1_response_m_payloadJSON, "a_objEzsignfolder");
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

    // ezsignfolder_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_list_v1_response_m_payloadJSON, "iRowReturned");
    if (!i_row_returned) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_row_returned))
    {
    goto end; //Numeric
    }

    // ezsignfolder_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_list_v1_response_m_payloadJSON, "iRowFiltered");
    if (!i_row_filtered) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_row_filtered))
    {
    goto end; //Numeric
    }


    ezsignfolder_get_list_v1_response_m_payload_local_var = ezsignfolder_get_list_v1_response_m_payload_create (
        a_obj_ezsignfolderList,
        i_row_returned->valuedouble,
        i_row_filtered->valuedouble
        );

    return ezsignfolder_get_list_v1_response_m_payload_local_var;
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
