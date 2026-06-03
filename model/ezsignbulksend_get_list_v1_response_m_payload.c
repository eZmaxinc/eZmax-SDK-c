#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksend_get_list_v1_response_m_payload.h"



static ezsignbulksend_get_list_v1_response_m_payload_t *ezsignbulksend_get_list_v1_response_m_payload_create_internal(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_ezsignbulksend
    ) {
    ezsignbulksend_get_list_v1_response_m_payload_t *ezsignbulksend_get_list_v1_response_m_payload_local_var = malloc(sizeof(ezsignbulksend_get_list_v1_response_m_payload_t));
    if (!ezsignbulksend_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(ezsignbulksend_get_list_v1_response_m_payload_local_var, 0, sizeof(ezsignbulksend_get_list_v1_response_m_payload_t));
    ezsignbulksend_get_list_v1_response_m_payload_local_var->_library_owned = 1;
    ezsignbulksend_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    ezsignbulksend_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;
    ezsignbulksend_get_list_v1_response_m_payload_local_var->a_obj_ezsignbulksend = a_obj_ezsignbulksend;
    return ezsignbulksend_get_list_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsignbulksend_get_list_v1_response_m_payload_t *ezsignbulksend_get_list_v1_response_m_payload_create(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_ezsignbulksend
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
    ezsignbulksend_get_list_v1_response_m_payload_t *result = ezsignbulksend_get_list_v1_response_m_payload_create_internal (
        i_row_returned_copy,
        i_row_filtered_copy,
        a_obj_ezsignbulksend
        );
    if (!result) {
        free(i_row_returned_copy);
        free(i_row_filtered_copy);
    }
    return result;
}

void ezsignbulksend_get_list_v1_response_m_payload_free(ezsignbulksend_get_list_v1_response_m_payload_t *ezsignbulksend_get_list_v1_response_m_payload) {
    if(NULL == ezsignbulksend_get_list_v1_response_m_payload){
        return ;
    }
    if(ezsignbulksend_get_list_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignbulksend_get_list_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksend_get_list_v1_response_m_payload->i_row_returned) {
        free(ezsignbulksend_get_list_v1_response_m_payload->i_row_returned);
        ezsignbulksend_get_list_v1_response_m_payload->i_row_returned = NULL;
    }
    if (ezsignbulksend_get_list_v1_response_m_payload->i_row_filtered) {
        free(ezsignbulksend_get_list_v1_response_m_payload->i_row_filtered);
        ezsignbulksend_get_list_v1_response_m_payload->i_row_filtered = NULL;
    }
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

    // ezsignbulksend_get_list_v1_response_m_payload->i_row_returned
    if (!ezsignbulksend_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", *ezsignbulksend_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksend_get_list_v1_response_m_payload->i_row_filtered
    if (!ezsignbulksend_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", *ezsignbulksend_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }


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

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignbulksend_get_list_v1_response_m_payload_t *ezsignbulksend_get_list_v1_response_m_payload_parseFromJSON(cJSON *ezsignbulksend_get_list_v1_response_m_payloadJSON){

    ezsignbulksend_get_list_v1_response_m_payload_t *ezsignbulksend_get_list_v1_response_m_payload_local_var = NULL;

    // define the local variable for ezsignbulksend_get_list_v1_response_m_payload->i_row_returned
    int *i_row_returned_local_var = NULL;

    // define the local variable for ezsignbulksend_get_list_v1_response_m_payload->i_row_filtered
    int *i_row_filtered_local_var = NULL;

    // define the local list for ezsignbulksend_get_list_v1_response_m_payload->a_obj_ezsignbulksend
    list_t *a_obj_ezsignbulksendList = NULL;

    // ezsignbulksend_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_get_list_v1_response_m_payloadJSON, "iRowReturned");
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

    // ezsignbulksend_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_get_list_v1_response_m_payloadJSON, "iRowFiltered");
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

    // ezsignbulksend_get_list_v1_response_m_payload->a_obj_ezsignbulksend
    cJSON *a_obj_ezsignbulksend = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_get_list_v1_response_m_payloadJSON, "a_objEzsignbulksend");
    if (cJSON_IsNull(a_obj_ezsignbulksend)) {
        a_obj_ezsignbulksend = NULL;
    }
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



    ezsignbulksend_get_list_v1_response_m_payload_local_var = ezsignbulksend_get_list_v1_response_m_payload_create_internal (
        i_row_returned_local_var,
        i_row_filtered_local_var,
        a_obj_ezsignbulksendList
        );

    if (!ezsignbulksend_get_list_v1_response_m_payload_local_var) {
        goto end;
    }

    return ezsignbulksend_get_list_v1_response_m_payload_local_var;
end:
    if (i_row_returned_local_var) {
        free(i_row_returned_local_var);
        i_row_returned_local_var = NULL;
    }
    if (i_row_filtered_local_var) {
        free(i_row_filtered_local_var);
        i_row_filtered_local_var = NULL;
    }
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
