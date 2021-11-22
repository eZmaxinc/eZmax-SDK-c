#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksend_get_list_v1_response_m_payload.h"



ezsignbulksend_get_list_v1_response_m_payload_t *ezsignbulksend_get_list_v1_response_m_payload_create(
    list_t *a_obj_ezsignfolder,
    int i_row_returned,
    int i_row_filtered
    ) {
    ezsignbulksend_get_list_v1_response_m_payload_t *ezsignbulksend_get_list_v1_response_m_payload_local_var = malloc(sizeof(ezsignbulksend_get_list_v1_response_m_payload_t));
    if (!ezsignbulksend_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsignbulksend_get_list_v1_response_m_payload_local_var->a_obj_ezsignfolder = a_obj_ezsignfolder;
    ezsignbulksend_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    ezsignbulksend_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;

    return ezsignbulksend_get_list_v1_response_m_payload_local_var;
}


void ezsignbulksend_get_list_v1_response_m_payload_free(ezsignbulksend_get_list_v1_response_m_payload_t *ezsignbulksend_get_list_v1_response_m_payload) {
    if(NULL == ezsignbulksend_get_list_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksend_get_list_v1_response_m_payload->a_obj_ezsignfolder) {
        list_ForEach(listEntry, ezsignbulksend_get_list_v1_response_m_payload->a_obj_ezsignfolder) {
            ezsignbulksend_list_element_free(listEntry->data);
        }
        list_free(ezsignbulksend_get_list_v1_response_m_payload->a_obj_ezsignfolder);
        ezsignbulksend_get_list_v1_response_m_payload->a_obj_ezsignfolder = NULL;
    }
    free(ezsignbulksend_get_list_v1_response_m_payload);
}

cJSON *ezsignbulksend_get_list_v1_response_m_payload_convertToJSON(ezsignbulksend_get_list_v1_response_m_payload_t *ezsignbulksend_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksend_get_list_v1_response_m_payload->a_obj_ezsignfolder
    if(ezsignbulksend_get_list_v1_response_m_payload->a_obj_ezsignfolder) { 
    cJSON *a_obj_ezsignfolder = cJSON_AddArrayToObject(item, "a_objEzsignfolder");
    if(a_obj_ezsignfolder == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignfolderListEntry;
    if (ezsignbulksend_get_list_v1_response_m_payload->a_obj_ezsignfolder) {
    list_ForEach(a_obj_ezsignfolderListEntry, ezsignbulksend_get_list_v1_response_m_payload->a_obj_ezsignfolder) {
    cJSON *itemLocal = ezsignbulksend_list_element_convertToJSON(a_obj_ezsignfolderListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignfolder, itemLocal);
    }
    }
     } 


    // ezsignbulksend_get_list_v1_response_m_payload->i_row_returned
    if (!ezsignbulksend_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iRowReturned", ezsignbulksend_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksend_get_list_v1_response_m_payload->i_row_filtered
    if (!ezsignbulksend_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iRowFiltered", ezsignbulksend_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignbulksend_get_list_v1_response_m_payload_t *ezsignbulksend_get_list_v1_response_m_payload_parseFromJSON(cJSON *ezsignbulksend_get_list_v1_response_m_payloadJSON){

    ezsignbulksend_get_list_v1_response_m_payload_t *ezsignbulksend_get_list_v1_response_m_payload_local_var = NULL;

    // ezsignbulksend_get_list_v1_response_m_payload->a_obj_ezsignfolder
    cJSON *a_obj_ezsignfolder = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_get_list_v1_response_m_payloadJSON, "a_objEzsignfolder");
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

    // ezsignbulksend_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_get_list_v1_response_m_payloadJSON, "iRowReturned");
    if (!i_row_returned) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_row_returned))
    {
    goto end; //Numeric
    }

    // ezsignbulksend_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_get_list_v1_response_m_payloadJSON, "iRowFiltered");
    if (!i_row_filtered) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_row_filtered))
    {
    goto end; //Numeric
    }


    ezsignbulksend_get_list_v1_response_m_payload_local_var = ezsignbulksend_get_list_v1_response_m_payload_create (
        a_obj_ezsignfolder ? a_obj_ezsignfolderList : NULL,
        i_row_returned->valuedouble,
        i_row_filtered->valuedouble
        );

    return ezsignbulksend_get_list_v1_response_m_payload_local_var;
end:
    return NULL;

}
