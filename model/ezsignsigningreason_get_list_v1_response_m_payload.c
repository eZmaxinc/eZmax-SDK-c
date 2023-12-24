#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsigningreason_get_list_v1_response_m_payload.h"



ezsignsigningreason_get_list_v1_response_m_payload_t *ezsignsigningreason_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_ezsignsigningreason
    ) {
    ezsignsigningreason_get_list_v1_response_m_payload_t *ezsignsigningreason_get_list_v1_response_m_payload_local_var = malloc(sizeof(ezsignsigningreason_get_list_v1_response_m_payload_t));
    if (!ezsignsigningreason_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsignsigningreason_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    ezsignsigningreason_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;
    ezsignsigningreason_get_list_v1_response_m_payload_local_var->a_obj_ezsignsigningreason = a_obj_ezsignsigningreason;

    return ezsignsigningreason_get_list_v1_response_m_payload_local_var;
}


void ezsignsigningreason_get_list_v1_response_m_payload_free(ezsignsigningreason_get_list_v1_response_m_payload_t *ezsignsigningreason_get_list_v1_response_m_payload) {
    if(NULL == ezsignsigningreason_get_list_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsigningreason_get_list_v1_response_m_payload->a_obj_ezsignsigningreason) {
        list_ForEach(listEntry, ezsignsigningreason_get_list_v1_response_m_payload->a_obj_ezsignsigningreason) {
            ezsignsigningreason_list_element_free(listEntry->data);
        }
        list_freeList(ezsignsigningreason_get_list_v1_response_m_payload->a_obj_ezsignsigningreason);
        ezsignsigningreason_get_list_v1_response_m_payload->a_obj_ezsignsigningreason = NULL;
    }
    free(ezsignsigningreason_get_list_v1_response_m_payload);
}

cJSON *ezsignsigningreason_get_list_v1_response_m_payload_convertToJSON(ezsignsigningreason_get_list_v1_response_m_payload_t *ezsignsigningreason_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsigningreason_get_list_v1_response_m_payload->i_row_returned
    if (!ezsignsigningreason_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", ezsignsigningreason_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsigningreason_get_list_v1_response_m_payload->i_row_filtered
    if (!ezsignsigningreason_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", ezsignsigningreason_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsigningreason_get_list_v1_response_m_payload->a_obj_ezsignsigningreason
    if (!ezsignsigningreason_get_list_v1_response_m_payload->a_obj_ezsignsigningreason) {
        goto fail;
    }
    cJSON *a_obj_ezsignsigningreason = cJSON_AddArrayToObject(item, "a_objEzsignsigningreason");
    if(a_obj_ezsignsigningreason == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignsigningreasonListEntry;
    if (ezsignsigningreason_get_list_v1_response_m_payload->a_obj_ezsignsigningreason) {
    list_ForEach(a_obj_ezsignsigningreasonListEntry, ezsignsigningreason_get_list_v1_response_m_payload->a_obj_ezsignsigningreason) {
    cJSON *itemLocal = ezsignsigningreason_list_element_convertToJSON(a_obj_ezsignsigningreasonListEntry->data);
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

ezsignsigningreason_get_list_v1_response_m_payload_t *ezsignsigningreason_get_list_v1_response_m_payload_parseFromJSON(cJSON *ezsignsigningreason_get_list_v1_response_m_payloadJSON){

    ezsignsigningreason_get_list_v1_response_m_payload_t *ezsignsigningreason_get_list_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsignsigningreason_get_list_v1_response_m_payload->a_obj_ezsignsigningreason
    list_t *a_obj_ezsignsigningreasonList = NULL;

    // ezsignsigningreason_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(ezsignsigningreason_get_list_v1_response_m_payloadJSON, "iRowReturned");
    if (!i_row_returned) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_row_returned))
    {
    goto end; //Numeric
    }

    // ezsignsigningreason_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(ezsignsigningreason_get_list_v1_response_m_payloadJSON, "iRowFiltered");
    if (!i_row_filtered) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_row_filtered))
    {
    goto end; //Numeric
    }

    // ezsignsigningreason_get_list_v1_response_m_payload->a_obj_ezsignsigningreason
    cJSON *a_obj_ezsignsigningreason = cJSON_GetObjectItemCaseSensitive(ezsignsigningreason_get_list_v1_response_m_payloadJSON, "a_objEzsignsigningreason");
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
        ezsignsigningreason_list_element_t *a_obj_ezsignsigningreasonItem = ezsignsigningreason_list_element_parseFromJSON(a_obj_ezsignsigningreason_local_nonprimitive);

        list_addElement(a_obj_ezsignsigningreasonList, a_obj_ezsignsigningreasonItem);
    }


    ezsignsigningreason_get_list_v1_response_m_payload_local_var = ezsignsigningreason_get_list_v1_response_m_payload_create (
        i_row_returned->valuedouble,
        i_row_filtered->valuedouble,
        a_obj_ezsignsigningreasonList
        );

    return ezsignsigningreason_get_list_v1_response_m_payload_local_var;
end:
    if (a_obj_ezsignsigningreasonList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignsigningreasonList) {
            ezsignsigningreason_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignsigningreasonList);
        a_obj_ezsignsigningreasonList = NULL;
    }
    return NULL;

}
