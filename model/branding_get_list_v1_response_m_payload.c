#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "branding_get_list_v1_response_m_payload.h"



static branding_get_list_v1_response_m_payload_t *branding_get_list_v1_response_m_payload_create_internal(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_branding
    ) {
    branding_get_list_v1_response_m_payload_t *branding_get_list_v1_response_m_payload_local_var = malloc(sizeof(branding_get_list_v1_response_m_payload_t));
    if (!branding_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(branding_get_list_v1_response_m_payload_local_var, 0, sizeof(branding_get_list_v1_response_m_payload_t));
    branding_get_list_v1_response_m_payload_local_var->_library_owned = 1;
    branding_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    branding_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;
    branding_get_list_v1_response_m_payload_local_var->a_obj_branding = a_obj_branding;
    return branding_get_list_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) branding_get_list_v1_response_m_payload_t *branding_get_list_v1_response_m_payload_create(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_branding
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
    branding_get_list_v1_response_m_payload_t *result = branding_get_list_v1_response_m_payload_create_internal (
        i_row_returned_copy,
        i_row_filtered_copy,
        a_obj_branding
        );
    if (!result) {
        free(i_row_returned_copy);
        free(i_row_filtered_copy);
    }
    return result;
}

void branding_get_list_v1_response_m_payload_free(branding_get_list_v1_response_m_payload_t *branding_get_list_v1_response_m_payload) {
    if(NULL == branding_get_list_v1_response_m_payload){
        return ;
    }
    if(branding_get_list_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "branding_get_list_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (branding_get_list_v1_response_m_payload->i_row_returned) {
        free(branding_get_list_v1_response_m_payload->i_row_returned);
        branding_get_list_v1_response_m_payload->i_row_returned = NULL;
    }
    if (branding_get_list_v1_response_m_payload->i_row_filtered) {
        free(branding_get_list_v1_response_m_payload->i_row_filtered);
        branding_get_list_v1_response_m_payload->i_row_filtered = NULL;
    }
    if (branding_get_list_v1_response_m_payload->a_obj_branding) {
        list_ForEach(listEntry, branding_get_list_v1_response_m_payload->a_obj_branding) {
            branding_list_element_free(listEntry->data);
        }
        list_freeList(branding_get_list_v1_response_m_payload->a_obj_branding);
        branding_get_list_v1_response_m_payload->a_obj_branding = NULL;
    }
    free(branding_get_list_v1_response_m_payload);
}

cJSON *branding_get_list_v1_response_m_payload_convertToJSON(branding_get_list_v1_response_m_payload_t *branding_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // branding_get_list_v1_response_m_payload->i_row_returned
    if (!branding_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", *branding_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // branding_get_list_v1_response_m_payload->i_row_filtered
    if (!branding_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", *branding_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }


    // branding_get_list_v1_response_m_payload->a_obj_branding
    if (!branding_get_list_v1_response_m_payload->a_obj_branding) {
        goto fail;
    }
    cJSON *a_obj_branding = cJSON_AddArrayToObject(item, "a_objBranding");
    if(a_obj_branding == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_brandingListEntry;
    if (branding_get_list_v1_response_m_payload->a_obj_branding) {
    list_ForEach(a_obj_brandingListEntry, branding_get_list_v1_response_m_payload->a_obj_branding) {
    cJSON *itemLocal = branding_list_element_convertToJSON(a_obj_brandingListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_branding, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

branding_get_list_v1_response_m_payload_t *branding_get_list_v1_response_m_payload_parseFromJSON(cJSON *branding_get_list_v1_response_m_payloadJSON){

    branding_get_list_v1_response_m_payload_t *branding_get_list_v1_response_m_payload_local_var = NULL;

    // define the local variable for branding_get_list_v1_response_m_payload->i_row_returned
    int *i_row_returned_local_var = NULL;

    // define the local variable for branding_get_list_v1_response_m_payload->i_row_filtered
    int *i_row_filtered_local_var = NULL;

    // define the local list for branding_get_list_v1_response_m_payload->a_obj_branding
    list_t *a_obj_brandingList = NULL;

    // branding_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(branding_get_list_v1_response_m_payloadJSON, "iRowReturned");
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

    // branding_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(branding_get_list_v1_response_m_payloadJSON, "iRowFiltered");
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

    // branding_get_list_v1_response_m_payload->a_obj_branding
    cJSON *a_obj_branding = cJSON_GetObjectItemCaseSensitive(branding_get_list_v1_response_m_payloadJSON, "a_objBranding");
    if (cJSON_IsNull(a_obj_branding)) {
        a_obj_branding = NULL;
    }
    if (!a_obj_branding) {
        goto end;
    }

    
    cJSON *a_obj_branding_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_branding)){
        goto end; //nonprimitive container
    }

    a_obj_brandingList = list_createList();

    cJSON_ArrayForEach(a_obj_branding_local_nonprimitive,a_obj_branding )
    {
        if(!cJSON_IsObject(a_obj_branding_local_nonprimitive)){
            goto end;
        }
        branding_list_element_t *a_obj_brandingItem = branding_list_element_parseFromJSON(a_obj_branding_local_nonprimitive);

        list_addElement(a_obj_brandingList, a_obj_brandingItem);
    }



    branding_get_list_v1_response_m_payload_local_var = branding_get_list_v1_response_m_payload_create_internal (
        i_row_returned_local_var,
        i_row_filtered_local_var,
        a_obj_brandingList
        );

    if (!branding_get_list_v1_response_m_payload_local_var) {
        goto end;
    }

    return branding_get_list_v1_response_m_payload_local_var;
end:
    if (i_row_returned_local_var) {
        free(i_row_returned_local_var);
        i_row_returned_local_var = NULL;
    }
    if (i_row_filtered_local_var) {
        free(i_row_filtered_local_var);
        i_row_filtered_local_var = NULL;
    }
    if (a_obj_brandingList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_brandingList) {
            branding_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_brandingList);
        a_obj_brandingList = NULL;
    }
    return NULL;

}
