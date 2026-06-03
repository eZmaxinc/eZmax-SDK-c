#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezmaxmaillinglist_get_list_v1_response_m_payload.h"



static ezmaxmaillinglist_get_list_v1_response_m_payload_t *ezmaxmaillinglist_get_list_v1_response_m_payload_create_internal(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_ezmaxmaillinglist
    ) {
    ezmaxmaillinglist_get_list_v1_response_m_payload_t *ezmaxmaillinglist_get_list_v1_response_m_payload_local_var = malloc(sizeof(ezmaxmaillinglist_get_list_v1_response_m_payload_t));
    if (!ezmaxmaillinglist_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(ezmaxmaillinglist_get_list_v1_response_m_payload_local_var, 0, sizeof(ezmaxmaillinglist_get_list_v1_response_m_payload_t));
    ezmaxmaillinglist_get_list_v1_response_m_payload_local_var->_library_owned = 1;
    ezmaxmaillinglist_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    ezmaxmaillinglist_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;
    ezmaxmaillinglist_get_list_v1_response_m_payload_local_var->a_obj_ezmaxmaillinglist = a_obj_ezmaxmaillinglist;
    return ezmaxmaillinglist_get_list_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) ezmaxmaillinglist_get_list_v1_response_m_payload_t *ezmaxmaillinglist_get_list_v1_response_m_payload_create(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_ezmaxmaillinglist
    ) {
    int *i_row_returned_copy = NULL;
    if (i_row_returned) {
        i_row_returned_copy = malloc(sizeof(int));
        if (i_row_returned_copy) *i_row_returned_copy = *i_row_returned;
    }
    int *i_row_filtered_copy = NULL;
    if (i_row_filtered) {
        i_row_filtered_copy = malloc(sizeof(int));
        if (i_row_filtered_copy) *i_row_filtered_copy = *i_row_filtered;
    }
    ezmaxmaillinglist_get_list_v1_response_m_payload_t *result = ezmaxmaillinglist_get_list_v1_response_m_payload_create_internal (
        i_row_returned_copy,
        i_row_filtered_copy,
        a_obj_ezmaxmaillinglist
        );
    if (!result) {
        free(i_row_returned_copy);
        free(i_row_filtered_copy);
    }
    return result;
}

void ezmaxmaillinglist_get_list_v1_response_m_payload_free(ezmaxmaillinglist_get_list_v1_response_m_payload_t *ezmaxmaillinglist_get_list_v1_response_m_payload) {
    if(NULL == ezmaxmaillinglist_get_list_v1_response_m_payload){
        return ;
    }
    if(ezmaxmaillinglist_get_list_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezmaxmaillinglist_get_list_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezmaxmaillinglist_get_list_v1_response_m_payload->i_row_returned) {
        free(ezmaxmaillinglist_get_list_v1_response_m_payload->i_row_returned);
        ezmaxmaillinglist_get_list_v1_response_m_payload->i_row_returned = NULL;
    }
    if (ezmaxmaillinglist_get_list_v1_response_m_payload->i_row_filtered) {
        free(ezmaxmaillinglist_get_list_v1_response_m_payload->i_row_filtered);
        ezmaxmaillinglist_get_list_v1_response_m_payload->i_row_filtered = NULL;
    }
    if (ezmaxmaillinglist_get_list_v1_response_m_payload->a_obj_ezmaxmaillinglist) {
        list_ForEach(listEntry, ezmaxmaillinglist_get_list_v1_response_m_payload->a_obj_ezmaxmaillinglist) {
            ezmaxmaillinglist_list_element_free(listEntry->data);
        }
        list_freeList(ezmaxmaillinglist_get_list_v1_response_m_payload->a_obj_ezmaxmaillinglist);
        ezmaxmaillinglist_get_list_v1_response_m_payload->a_obj_ezmaxmaillinglist = NULL;
    }
    free(ezmaxmaillinglist_get_list_v1_response_m_payload);
}

cJSON *ezmaxmaillinglist_get_list_v1_response_m_payload_convertToJSON(ezmaxmaillinglist_get_list_v1_response_m_payload_t *ezmaxmaillinglist_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezmaxmaillinglist_get_list_v1_response_m_payload->i_row_returned
    if (!ezmaxmaillinglist_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", *ezmaxmaillinglist_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxmaillinglist_get_list_v1_response_m_payload->i_row_filtered
    if (!ezmaxmaillinglist_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", *ezmaxmaillinglist_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxmaillinglist_get_list_v1_response_m_payload->a_obj_ezmaxmaillinglist
    if (!ezmaxmaillinglist_get_list_v1_response_m_payload->a_obj_ezmaxmaillinglist) {
        goto fail;
    }
    cJSON *a_obj_ezmaxmaillinglist = cJSON_AddArrayToObject(item, "a_objEzmaxmaillinglist");
    if(a_obj_ezmaxmaillinglist == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezmaxmaillinglistListEntry;
    if (ezmaxmaillinglist_get_list_v1_response_m_payload->a_obj_ezmaxmaillinglist) {
    list_ForEach(a_obj_ezmaxmaillinglistListEntry, ezmaxmaillinglist_get_list_v1_response_m_payload->a_obj_ezmaxmaillinglist) {
    cJSON *itemLocal = ezmaxmaillinglist_list_element_convertToJSON(a_obj_ezmaxmaillinglistListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezmaxmaillinglist, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezmaxmaillinglist_get_list_v1_response_m_payload_t *ezmaxmaillinglist_get_list_v1_response_m_payload_parseFromJSON(cJSON *ezmaxmaillinglist_get_list_v1_response_m_payloadJSON){

    ezmaxmaillinglist_get_list_v1_response_m_payload_t *ezmaxmaillinglist_get_list_v1_response_m_payload_local_var = NULL;

    // define the local variable for ezmaxmaillinglist_get_list_v1_response_m_payload->i_row_returned
    int *i_row_returned_local_var = NULL;

    // define the local variable for ezmaxmaillinglist_get_list_v1_response_m_payload->i_row_filtered
    int *i_row_filtered_local_var = NULL;

    // define the local list for ezmaxmaillinglist_get_list_v1_response_m_payload->a_obj_ezmaxmaillinglist
    list_t *a_obj_ezmaxmaillinglistList = NULL;

    // ezmaxmaillinglist_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(ezmaxmaillinglist_get_list_v1_response_m_payloadJSON, "iRowReturned");
    if (cJSON_IsNull(i_row_returned)) {
        i_row_returned = NULL;
    }
    if (!i_row_returned) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_row_returned))
    {
    goto end; //Numeric
    }
    i_row_returned_local_var = malloc(sizeof(int));
    if(!i_row_returned_local_var)
    {
        goto end;
    }
    *i_row_returned_local_var = i_row_returned->valuedouble;

    // ezmaxmaillinglist_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(ezmaxmaillinglist_get_list_v1_response_m_payloadJSON, "iRowFiltered");
    if (cJSON_IsNull(i_row_filtered)) {
        i_row_filtered = NULL;
    }
    if (!i_row_filtered) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_row_filtered))
    {
    goto end; //Numeric
    }
    i_row_filtered_local_var = malloc(sizeof(int));
    if(!i_row_filtered_local_var)
    {
        goto end;
    }
    *i_row_filtered_local_var = i_row_filtered->valuedouble;

    // ezmaxmaillinglist_get_list_v1_response_m_payload->a_obj_ezmaxmaillinglist
    cJSON *a_obj_ezmaxmaillinglist = cJSON_GetObjectItemCaseSensitive(ezmaxmaillinglist_get_list_v1_response_m_payloadJSON, "a_objEzmaxmaillinglist");
    if (cJSON_IsNull(a_obj_ezmaxmaillinglist)) {
        a_obj_ezmaxmaillinglist = NULL;
    }
    if (!a_obj_ezmaxmaillinglist) {
        goto end;
    }

    
    cJSON *a_obj_ezmaxmaillinglist_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezmaxmaillinglist)){
        goto end; //nonprimitive container
    }

    a_obj_ezmaxmaillinglistList = list_createList();

    cJSON_ArrayForEach(a_obj_ezmaxmaillinglist_local_nonprimitive,a_obj_ezmaxmaillinglist )
    {
        if(!cJSON_IsObject(a_obj_ezmaxmaillinglist_local_nonprimitive)){
            goto end;
        }
        ezmaxmaillinglist_list_element_t *a_obj_ezmaxmaillinglistItem = ezmaxmaillinglist_list_element_parseFromJSON(a_obj_ezmaxmaillinglist_local_nonprimitive);

        list_addElement(a_obj_ezmaxmaillinglistList, a_obj_ezmaxmaillinglistItem);
    }



    ezmaxmaillinglist_get_list_v1_response_m_payload_local_var = ezmaxmaillinglist_get_list_v1_response_m_payload_create_internal (
        i_row_returned_local_var,
        i_row_filtered_local_var,
        a_obj_ezmaxmaillinglistList
        );

    if (!ezmaxmaillinglist_get_list_v1_response_m_payload_local_var) {
        goto end;
    }

    return ezmaxmaillinglist_get_list_v1_response_m_payload_local_var;
end:
    if (i_row_returned_local_var) {
        free(i_row_returned_local_var);
        i_row_returned_local_var = NULL;
    }
    if (i_row_filtered_local_var) {
        free(i_row_filtered_local_var);
        i_row_filtered_local_var = NULL;
    }
    if (a_obj_ezmaxmaillinglistList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezmaxmaillinglistList) {
            ezmaxmaillinglist_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezmaxmaillinglistList);
        a_obj_ezmaxmaillinglistList = NULL;
    }
    return NULL;

}
