#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "activesession_get_list_v1_response_m_payload.h"



static activesession_get_list_v1_response_m_payload_t *activesession_get_list_v1_response_m_payload_create_internal(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_activesession
    ) {
    activesession_get_list_v1_response_m_payload_t *activesession_get_list_v1_response_m_payload_local_var = malloc(sizeof(activesession_get_list_v1_response_m_payload_t));
    if (!activesession_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    activesession_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    activesession_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;
    activesession_get_list_v1_response_m_payload_local_var->a_obj_activesession = a_obj_activesession;

    activesession_get_list_v1_response_m_payload_local_var->_library_owned = 1;
    return activesession_get_list_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) activesession_get_list_v1_response_m_payload_t *activesession_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_activesession
    ) {
    return activesession_get_list_v1_response_m_payload_create_internal (
        i_row_returned,
        i_row_filtered,
        a_obj_activesession
        );
}

void activesession_get_list_v1_response_m_payload_free(activesession_get_list_v1_response_m_payload_t *activesession_get_list_v1_response_m_payload) {
    if(NULL == activesession_get_list_v1_response_m_payload){
        return ;
    }
    if(activesession_get_list_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "activesession_get_list_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (activesession_get_list_v1_response_m_payload->a_obj_activesession) {
        list_ForEach(listEntry, activesession_get_list_v1_response_m_payload->a_obj_activesession) {
            activesession_list_element_free(listEntry->data);
        }
        list_freeList(activesession_get_list_v1_response_m_payload->a_obj_activesession);
        activesession_get_list_v1_response_m_payload->a_obj_activesession = NULL;
    }
    free(activesession_get_list_v1_response_m_payload);
}

cJSON *activesession_get_list_v1_response_m_payload_convertToJSON(activesession_get_list_v1_response_m_payload_t *activesession_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // activesession_get_list_v1_response_m_payload->i_row_returned
    if (!activesession_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", activesession_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // activesession_get_list_v1_response_m_payload->i_row_filtered
    if (!activesession_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", activesession_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }


    // activesession_get_list_v1_response_m_payload->a_obj_activesession
    if (!activesession_get_list_v1_response_m_payload->a_obj_activesession) {
        goto fail;
    }
    cJSON *a_obj_activesession = cJSON_AddArrayToObject(item, "a_objActivesession");
    if(a_obj_activesession == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_activesessionListEntry;
    if (activesession_get_list_v1_response_m_payload->a_obj_activesession) {
    list_ForEach(a_obj_activesessionListEntry, activesession_get_list_v1_response_m_payload->a_obj_activesession) {
    cJSON *itemLocal = activesession_list_element_convertToJSON(a_obj_activesessionListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_activesession, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

activesession_get_list_v1_response_m_payload_t *activesession_get_list_v1_response_m_payload_parseFromJSON(cJSON *activesession_get_list_v1_response_m_payloadJSON){

    activesession_get_list_v1_response_m_payload_t *activesession_get_list_v1_response_m_payload_local_var = NULL;

    // define the local list for activesession_get_list_v1_response_m_payload->a_obj_activesession
    list_t *a_obj_activesessionList = NULL;

    // activesession_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(activesession_get_list_v1_response_m_payloadJSON, "iRowReturned");
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

    // activesession_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(activesession_get_list_v1_response_m_payloadJSON, "iRowFiltered");
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

    // activesession_get_list_v1_response_m_payload->a_obj_activesession
    cJSON *a_obj_activesession = cJSON_GetObjectItemCaseSensitive(activesession_get_list_v1_response_m_payloadJSON, "a_objActivesession");
    if (cJSON_IsNull(a_obj_activesession)) {
        a_obj_activesession = NULL;
    }
    if (!a_obj_activesession) {
        goto end;
    }

    
    cJSON *a_obj_activesession_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_activesession)){
        goto end; //nonprimitive container
    }

    a_obj_activesessionList = list_createList();

    cJSON_ArrayForEach(a_obj_activesession_local_nonprimitive,a_obj_activesession )
    {
        if(!cJSON_IsObject(a_obj_activesession_local_nonprimitive)){
            goto end;
        }
        activesession_list_element_t *a_obj_activesessionItem = activesession_list_element_parseFromJSON(a_obj_activesession_local_nonprimitive);

        list_addElement(a_obj_activesessionList, a_obj_activesessionItem);
    }


    activesession_get_list_v1_response_m_payload_local_var = activesession_get_list_v1_response_m_payload_create_internal (
        i_row_returned->valuedouble,
        i_row_filtered->valuedouble,
        a_obj_activesessionList
        );

    return activesession_get_list_v1_response_m_payload_local_var;
end:
    if (a_obj_activesessionList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_activesessionList) {
            activesession_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_activesessionList);
        a_obj_activesessionList = NULL;
    }
    return NULL;

}
