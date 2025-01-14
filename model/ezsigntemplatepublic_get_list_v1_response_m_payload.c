#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepublic_get_list_v1_response_m_payload.h"



ezsigntemplatepublic_get_list_v1_response_m_payload_t *ezsigntemplatepublic_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_ezsigntemplatepublic
    ) {
    ezsigntemplatepublic_get_list_v1_response_m_payload_t *ezsigntemplatepublic_get_list_v1_response_m_payload_local_var = malloc(sizeof(ezsigntemplatepublic_get_list_v1_response_m_payload_t));
    if (!ezsigntemplatepublic_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplatepublic_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    ezsigntemplatepublic_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;
    ezsigntemplatepublic_get_list_v1_response_m_payload_local_var->a_obj_ezsigntemplatepublic = a_obj_ezsigntemplatepublic;

    return ezsigntemplatepublic_get_list_v1_response_m_payload_local_var;
}


void ezsigntemplatepublic_get_list_v1_response_m_payload_free(ezsigntemplatepublic_get_list_v1_response_m_payload_t *ezsigntemplatepublic_get_list_v1_response_m_payload) {
    if(NULL == ezsigntemplatepublic_get_list_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepublic_get_list_v1_response_m_payload->a_obj_ezsigntemplatepublic) {
        list_ForEach(listEntry, ezsigntemplatepublic_get_list_v1_response_m_payload->a_obj_ezsigntemplatepublic) {
            ezsigntemplatepublic_list_element_free(listEntry->data);
        }
        list_freeList(ezsigntemplatepublic_get_list_v1_response_m_payload->a_obj_ezsigntemplatepublic);
        ezsigntemplatepublic_get_list_v1_response_m_payload->a_obj_ezsigntemplatepublic = NULL;
    }
    free(ezsigntemplatepublic_get_list_v1_response_m_payload);
}

cJSON *ezsigntemplatepublic_get_list_v1_response_m_payload_convertToJSON(ezsigntemplatepublic_get_list_v1_response_m_payload_t *ezsigntemplatepublic_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepublic_get_list_v1_response_m_payload->i_row_returned
    if (!ezsigntemplatepublic_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", ezsigntemplatepublic_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepublic_get_list_v1_response_m_payload->i_row_filtered
    if (!ezsigntemplatepublic_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", ezsigntemplatepublic_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepublic_get_list_v1_response_m_payload->a_obj_ezsigntemplatepublic
    if (!ezsigntemplatepublic_get_list_v1_response_m_payload->a_obj_ezsigntemplatepublic) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplatepublic = cJSON_AddArrayToObject(item, "a_objEzsigntemplatepublic");
    if(a_obj_ezsigntemplatepublic == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplatepublicListEntry;
    if (ezsigntemplatepublic_get_list_v1_response_m_payload->a_obj_ezsigntemplatepublic) {
    list_ForEach(a_obj_ezsigntemplatepublicListEntry, ezsigntemplatepublic_get_list_v1_response_m_payload->a_obj_ezsigntemplatepublic) {
    cJSON *itemLocal = ezsigntemplatepublic_list_element_convertToJSON(a_obj_ezsigntemplatepublicListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplatepublic, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatepublic_get_list_v1_response_m_payload_t *ezsigntemplatepublic_get_list_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatepublic_get_list_v1_response_m_payloadJSON){

    ezsigntemplatepublic_get_list_v1_response_m_payload_t *ezsigntemplatepublic_get_list_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsigntemplatepublic_get_list_v1_response_m_payload->a_obj_ezsigntemplatepublic
    list_t *a_obj_ezsigntemplatepublicList = NULL;

    // ezsigntemplatepublic_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_get_list_v1_response_m_payloadJSON, "iRowReturned");
    if (!i_row_returned) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_row_returned))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepublic_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_get_list_v1_response_m_payloadJSON, "iRowFiltered");
    if (!i_row_filtered) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_row_filtered))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepublic_get_list_v1_response_m_payload->a_obj_ezsigntemplatepublic
    cJSON *a_obj_ezsigntemplatepublic = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_get_list_v1_response_m_payloadJSON, "a_objEzsigntemplatepublic");
    if (!a_obj_ezsigntemplatepublic) {
        goto end;
    }

    
    cJSON *a_obj_ezsigntemplatepublic_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplatepublic)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplatepublicList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplatepublic_local_nonprimitive,a_obj_ezsigntemplatepublic )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplatepublic_local_nonprimitive)){
            goto end;
        }
        ezsigntemplatepublic_list_element_t *a_obj_ezsigntemplatepublicItem = ezsigntemplatepublic_list_element_parseFromJSON(a_obj_ezsigntemplatepublic_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplatepublicList, a_obj_ezsigntemplatepublicItem);
    }


    ezsigntemplatepublic_get_list_v1_response_m_payload_local_var = ezsigntemplatepublic_get_list_v1_response_m_payload_create (
        i_row_returned->valuedouble,
        i_row_filtered->valuedouble,
        a_obj_ezsigntemplatepublicList
        );

    return ezsigntemplatepublic_get_list_v1_response_m_payload_local_var;
end:
    if (a_obj_ezsigntemplatepublicList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplatepublicList) {
            ezsigntemplatepublic_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplatepublicList);
        a_obj_ezsigntemplatepublicList = NULL;
    }
    return NULL;

}
