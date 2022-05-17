#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksend_get_list_v1_response_m_payload.h"



ezsignbulksend_get_list_v1_response_m_payload_t *ezsignbulksend_get_list_v1_response_m_payload_create(
    list_t *a_obj_ezsignbulksend,
    int i_row_returned,
    int i_row_filtered
    ) {
    ezsignbulksend_get_list_v1_response_m_payload_t *ezsignbulksend_get_list_v1_response_m_payload_local_var = malloc(sizeof(ezsignbulksend_get_list_v1_response_m_payload_t));
    if (!ezsignbulksend_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsignbulksend_get_list_v1_response_m_payload_local_var->a_obj_ezsignbulksend = a_obj_ezsignbulksend;
    ezsignbulksend_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    ezsignbulksend_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;

    return ezsignbulksend_get_list_v1_response_m_payload_local_var;
}


void ezsignbulksend_get_list_v1_response_m_payload_free(ezsignbulksend_get_list_v1_response_m_payload_t *ezsignbulksend_get_list_v1_response_m_payload) {
    if(NULL == ezsignbulksend_get_list_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksend_get_list_v1_response_m_payload->a_obj_ezsignbulksend) {
        list_ForEach(listEntry, ezsignbulksend_get_list_v1_response_m_payload->a_obj_ezsignbulksend) {
            ezsignbulksend_list_element_free(listEntry->data);
        }
        list_freeList(ezsignbulksend_get_list_v1_response_m_payload->a_obj_ezsignbulksend);
        ezsignbulksend_get_list_v1_response_m_payload->a_obj_ezsignbulksend = NULL;
    }
    free(ezsignbulksend_get_list_v1_response_m_payload);
}

cJSON *ezsignbulksend_get_list_v1_response_m_payload_convertToJSON(ezsignbulksend_get_list_v1_response_m_payload_t *ezsignbulksend_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksend_get_list_v1_response_m_payload->a_obj_ezsignbulksend
    if (!ezsignbulksend_get_list_v1_response_m_payload->a_obj_ezsignbulksend) {
        goto fail;
    }
    cJSON *a_obj_ezsignbulksend = cJSON_AddArrayToObject(item, "a_objEzsignbulksend");
    if(a_obj_ezsignbulksend == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignbulksendListEntry;
    if (ezsignbulksend_get_list_v1_response_m_payload->a_obj_ezsignbulksend) {
    list_ForEach(a_obj_ezsignbulksendListEntry, ezsignbulksend_get_list_v1_response_m_payload->a_obj_ezsignbulksend) {
    cJSON *itemLocal = ezsignbulksend_list_element_convertToJSON(a_obj_ezsignbulksendListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignbulksend, itemLocal);
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

    // define the local list for ezsignbulksend_get_list_v1_response_m_payload->a_obj_ezsignbulksend
    list_t *a_obj_ezsignbulksendList = NULL;

    // ezsignbulksend_get_list_v1_response_m_payload->a_obj_ezsignbulksend
    cJSON *a_obj_ezsignbulksend = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_get_list_v1_response_m_payloadJSON, "a_objEzsignbulksend");
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
        a_obj_ezsignbulksendList,
        i_row_returned->valuedouble,
        i_row_filtered->valuedouble
        );

    return ezsignbulksend_get_list_v1_response_m_payload_local_var;
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
