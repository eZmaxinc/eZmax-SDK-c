#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "notary_get_list_v1_response_m_payload.h"



static notary_get_list_v1_response_m_payload_t *notary_get_list_v1_response_m_payload_create_internal(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_notary
    ) {
    notary_get_list_v1_response_m_payload_t *notary_get_list_v1_response_m_payload_local_var = malloc(sizeof(notary_get_list_v1_response_m_payload_t));
    if (!notary_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(notary_get_list_v1_response_m_payload_local_var, 0, sizeof(notary_get_list_v1_response_m_payload_t));
    notary_get_list_v1_response_m_payload_local_var->_library_owned = 1;
    notary_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    notary_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;
    notary_get_list_v1_response_m_payload_local_var->a_obj_notary = a_obj_notary;
    return notary_get_list_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) notary_get_list_v1_response_m_payload_t *notary_get_list_v1_response_m_payload_create(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_notary
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
    notary_get_list_v1_response_m_payload_t *result = notary_get_list_v1_response_m_payload_create_internal (
        i_row_returned_copy,
        i_row_filtered_copy,
        a_obj_notary
        );
    if (!result) {
        free(i_row_returned_copy);
        free(i_row_filtered_copy);
    }
    return result;
}

void notary_get_list_v1_response_m_payload_free(notary_get_list_v1_response_m_payload_t *notary_get_list_v1_response_m_payload) {
    if(NULL == notary_get_list_v1_response_m_payload){
        return ;
    }
    if(notary_get_list_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "notary_get_list_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (notary_get_list_v1_response_m_payload->i_row_returned) {
        free(notary_get_list_v1_response_m_payload->i_row_returned);
        notary_get_list_v1_response_m_payload->i_row_returned = NULL;
    }
    if (notary_get_list_v1_response_m_payload->i_row_filtered) {
        free(notary_get_list_v1_response_m_payload->i_row_filtered);
        notary_get_list_v1_response_m_payload->i_row_filtered = NULL;
    }
    if (notary_get_list_v1_response_m_payload->a_obj_notary) {
        list_ForEach(listEntry, notary_get_list_v1_response_m_payload->a_obj_notary) {
            notary_list_element_free(listEntry->data);
        }
        list_freeList(notary_get_list_v1_response_m_payload->a_obj_notary);
        notary_get_list_v1_response_m_payload->a_obj_notary = NULL;
    }
    free(notary_get_list_v1_response_m_payload);
}

cJSON *notary_get_list_v1_response_m_payload_convertToJSON(notary_get_list_v1_response_m_payload_t *notary_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // notary_get_list_v1_response_m_payload->i_row_returned
    if (!notary_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", *notary_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // notary_get_list_v1_response_m_payload->i_row_filtered
    if (!notary_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", *notary_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }


    // notary_get_list_v1_response_m_payload->a_obj_notary
    if (!notary_get_list_v1_response_m_payload->a_obj_notary) {
        goto fail;
    }
    cJSON *a_obj_notary = cJSON_AddArrayToObject(item, "a_objNotary");
    if(a_obj_notary == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_notaryListEntry;
    if (notary_get_list_v1_response_m_payload->a_obj_notary) {
    list_ForEach(a_obj_notaryListEntry, notary_get_list_v1_response_m_payload->a_obj_notary) {
    cJSON *itemLocal = notary_list_element_convertToJSON(a_obj_notaryListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_notary, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

notary_get_list_v1_response_m_payload_t *notary_get_list_v1_response_m_payload_parseFromJSON(cJSON *notary_get_list_v1_response_m_payloadJSON){

    notary_get_list_v1_response_m_payload_t *notary_get_list_v1_response_m_payload_local_var = NULL;

    // define the local variable for notary_get_list_v1_response_m_payload->i_row_returned
    int *i_row_returned_local_var = NULL;

    // define the local variable for notary_get_list_v1_response_m_payload->i_row_filtered
    int *i_row_filtered_local_var = NULL;

    // define the local list for notary_get_list_v1_response_m_payload->a_obj_notary
    list_t *a_obj_notaryList = NULL;

    // notary_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(notary_get_list_v1_response_m_payloadJSON, "iRowReturned");
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

    // notary_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(notary_get_list_v1_response_m_payloadJSON, "iRowFiltered");
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

    // notary_get_list_v1_response_m_payload->a_obj_notary
    cJSON *a_obj_notary = cJSON_GetObjectItemCaseSensitive(notary_get_list_v1_response_m_payloadJSON, "a_objNotary");
    if (cJSON_IsNull(a_obj_notary)) {
        a_obj_notary = NULL;
    }
    if (!a_obj_notary) {
        goto end;
    }

    
    cJSON *a_obj_notary_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_notary)){
        goto end; //nonprimitive container
    }

    a_obj_notaryList = list_createList();

    cJSON_ArrayForEach(a_obj_notary_local_nonprimitive,a_obj_notary )
    {
        if(!cJSON_IsObject(a_obj_notary_local_nonprimitive)){
            goto end;
        }
        notary_list_element_t *a_obj_notaryItem = notary_list_element_parseFromJSON(a_obj_notary_local_nonprimitive);

        list_addElement(a_obj_notaryList, a_obj_notaryItem);
    }



    notary_get_list_v1_response_m_payload_local_var = notary_get_list_v1_response_m_payload_create_internal (
        i_row_returned_local_var,
        i_row_filtered_local_var,
        a_obj_notaryList
        );

    if (!notary_get_list_v1_response_m_payload_local_var) {
        goto end;
    }

    return notary_get_list_v1_response_m_payload_local_var;
end:
    if (i_row_returned_local_var) {
        free(i_row_returned_local_var);
        i_row_returned_local_var = NULL;
    }
    if (i_row_filtered_local_var) {
        free(i_row_filtered_local_var);
        i_row_filtered_local_var = NULL;
    }
    if (a_obj_notaryList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_notaryList) {
            notary_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_notaryList);
        a_obj_notaryList = NULL;
    }
    return NULL;

}
