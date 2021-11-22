#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksend_get_list_v1_response_m_payload_all_of.h"



ezsignbulksend_get_list_v1_response_m_payload_all_of_t *ezsignbulksend_get_list_v1_response_m_payload_all_of_create(
    list_t *a_obj_ezsignfolder
    ) {
    ezsignbulksend_get_list_v1_response_m_payload_all_of_t *ezsignbulksend_get_list_v1_response_m_payload_all_of_local_var = malloc(sizeof(ezsignbulksend_get_list_v1_response_m_payload_all_of_t));
    if (!ezsignbulksend_get_list_v1_response_m_payload_all_of_local_var) {
        return NULL;
    }
    ezsignbulksend_get_list_v1_response_m_payload_all_of_local_var->a_obj_ezsignfolder = a_obj_ezsignfolder;

    return ezsignbulksend_get_list_v1_response_m_payload_all_of_local_var;
}


void ezsignbulksend_get_list_v1_response_m_payload_all_of_free(ezsignbulksend_get_list_v1_response_m_payload_all_of_t *ezsignbulksend_get_list_v1_response_m_payload_all_of) {
    if(NULL == ezsignbulksend_get_list_v1_response_m_payload_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksend_get_list_v1_response_m_payload_all_of->a_obj_ezsignfolder) {
        list_ForEach(listEntry, ezsignbulksend_get_list_v1_response_m_payload_all_of->a_obj_ezsignfolder) {
            ezsignbulksend_list_element_free(listEntry->data);
        }
        list_free(ezsignbulksend_get_list_v1_response_m_payload_all_of->a_obj_ezsignfolder);
        ezsignbulksend_get_list_v1_response_m_payload_all_of->a_obj_ezsignfolder = NULL;
    }
    free(ezsignbulksend_get_list_v1_response_m_payload_all_of);
}

cJSON *ezsignbulksend_get_list_v1_response_m_payload_all_of_convertToJSON(ezsignbulksend_get_list_v1_response_m_payload_all_of_t *ezsignbulksend_get_list_v1_response_m_payload_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksend_get_list_v1_response_m_payload_all_of->a_obj_ezsignfolder
    if(ezsignbulksend_get_list_v1_response_m_payload_all_of->a_obj_ezsignfolder) { 
    cJSON *a_obj_ezsignfolder = cJSON_AddArrayToObject(item, "a_objEzsignfolder");
    if(a_obj_ezsignfolder == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignfolderListEntry;
    if (ezsignbulksend_get_list_v1_response_m_payload_all_of->a_obj_ezsignfolder) {
    list_ForEach(a_obj_ezsignfolderListEntry, ezsignbulksend_get_list_v1_response_m_payload_all_of->a_obj_ezsignfolder) {
    cJSON *itemLocal = ezsignbulksend_list_element_convertToJSON(a_obj_ezsignfolderListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignfolder, itemLocal);
    }
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

    // ezsignbulksend_get_list_v1_response_m_payload_all_of->a_obj_ezsignfolder
    cJSON *a_obj_ezsignfolder = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_get_list_v1_response_m_payload_all_ofJSON, "a_objEzsignfolder");
    list_t *a_obj_ezsignfolderList;
    if (a_obj_ezsignfolder) { 
    cJSON *a_obj_ezsignfolder_local_nonprimitive;
    if(!cJSON_IsArray(a_obj_ezsignfolder)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignfolderList = list_create();

    cJSON_ArrayForEach(a_obj_ezsignfolder_local_nonprimitive,a_obj_ezsignfolder )
    {
        if(!cJSON_IsObject(a_obj_ezsignfolder_local_nonprimitive)){
            goto end;
        }
        ezsignbulksend_list_element_t *a_obj_ezsignfolderItem = ezsignbulksend_list_element_parseFromJSON(a_obj_ezsignfolder_local_nonprimitive);

        list_addElement(a_obj_ezsignfolderList, a_obj_ezsignfolderItem);
    }
    }


    ezsignbulksend_get_list_v1_response_m_payload_all_of_local_var = ezsignbulksend_get_list_v1_response_m_payload_all_of_create (
        a_obj_ezsignfolder ? a_obj_ezsignfolderList : NULL
        );

    return ezsignbulksend_get_list_v1_response_m_payload_all_of_local_var;
end:
    return NULL;

}
