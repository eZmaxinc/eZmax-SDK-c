#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "disclosure_get_list_v1_response_m_payload.h"



static disclosure_get_list_v1_response_m_payload_t *disclosure_get_list_v1_response_m_payload_create_internal(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_disclosure
    ) {
    disclosure_get_list_v1_response_m_payload_t *disclosure_get_list_v1_response_m_payload_local_var = malloc(sizeof(disclosure_get_list_v1_response_m_payload_t));
    if (!disclosure_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(disclosure_get_list_v1_response_m_payload_local_var, 0, sizeof(disclosure_get_list_v1_response_m_payload_t));
    disclosure_get_list_v1_response_m_payload_local_var->_library_owned = 1;
    disclosure_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    disclosure_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;
    disclosure_get_list_v1_response_m_payload_local_var->a_obj_disclosure = a_obj_disclosure;
    return disclosure_get_list_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) disclosure_get_list_v1_response_m_payload_t *disclosure_get_list_v1_response_m_payload_create(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_disclosure
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
    disclosure_get_list_v1_response_m_payload_t *result = disclosure_get_list_v1_response_m_payload_create_internal (
        i_row_returned_copy,
        i_row_filtered_copy,
        a_obj_disclosure
        );
    if (!result) {
        free(i_row_returned_copy);
        free(i_row_filtered_copy);
    }
    return result;
}

void disclosure_get_list_v1_response_m_payload_free(disclosure_get_list_v1_response_m_payload_t *disclosure_get_list_v1_response_m_payload) {
    if(NULL == disclosure_get_list_v1_response_m_payload){
        return ;
    }
    if(disclosure_get_list_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "disclosure_get_list_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (disclosure_get_list_v1_response_m_payload->i_row_returned) {
        free(disclosure_get_list_v1_response_m_payload->i_row_returned);
        disclosure_get_list_v1_response_m_payload->i_row_returned = NULL;
    }
    if (disclosure_get_list_v1_response_m_payload->i_row_filtered) {
        free(disclosure_get_list_v1_response_m_payload->i_row_filtered);
        disclosure_get_list_v1_response_m_payload->i_row_filtered = NULL;
    }
    if (disclosure_get_list_v1_response_m_payload->a_obj_disclosure) {
        list_ForEach(listEntry, disclosure_get_list_v1_response_m_payload->a_obj_disclosure) {
            disclosure_list_element_free(listEntry->data);
        }
        list_freeList(disclosure_get_list_v1_response_m_payload->a_obj_disclosure);
        disclosure_get_list_v1_response_m_payload->a_obj_disclosure = NULL;
    }
    free(disclosure_get_list_v1_response_m_payload);
}

cJSON *disclosure_get_list_v1_response_m_payload_convertToJSON(disclosure_get_list_v1_response_m_payload_t *disclosure_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // disclosure_get_list_v1_response_m_payload->i_row_returned
    if (!disclosure_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", *disclosure_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // disclosure_get_list_v1_response_m_payload->i_row_filtered
    if (!disclosure_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", *disclosure_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }


    // disclosure_get_list_v1_response_m_payload->a_obj_disclosure
    if (!disclosure_get_list_v1_response_m_payload->a_obj_disclosure) {
        goto fail;
    }
    cJSON *a_obj_disclosure = cJSON_AddArrayToObject(item, "a_objDisclosure");
    if(a_obj_disclosure == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_disclosureListEntry;
    if (disclosure_get_list_v1_response_m_payload->a_obj_disclosure) {
    list_ForEach(a_obj_disclosureListEntry, disclosure_get_list_v1_response_m_payload->a_obj_disclosure) {
    cJSON *itemLocal = disclosure_list_element_convertToJSON(a_obj_disclosureListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_disclosure, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

disclosure_get_list_v1_response_m_payload_t *disclosure_get_list_v1_response_m_payload_parseFromJSON(cJSON *disclosure_get_list_v1_response_m_payloadJSON){

    disclosure_get_list_v1_response_m_payload_t *disclosure_get_list_v1_response_m_payload_local_var = NULL;

    // define the local variable for disclosure_get_list_v1_response_m_payload->i_row_returned
    int *i_row_returned_local_var = NULL;

    // define the local variable for disclosure_get_list_v1_response_m_payload->i_row_filtered
    int *i_row_filtered_local_var = NULL;

    // define the local list for disclosure_get_list_v1_response_m_payload->a_obj_disclosure
    list_t *a_obj_disclosureList = NULL;

    // disclosure_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(disclosure_get_list_v1_response_m_payloadJSON, "iRowReturned");
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

    // disclosure_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(disclosure_get_list_v1_response_m_payloadJSON, "iRowFiltered");
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

    // disclosure_get_list_v1_response_m_payload->a_obj_disclosure
    cJSON *a_obj_disclosure = cJSON_GetObjectItemCaseSensitive(disclosure_get_list_v1_response_m_payloadJSON, "a_objDisclosure");
    if (cJSON_IsNull(a_obj_disclosure)) {
        a_obj_disclosure = NULL;
    }
    if (!a_obj_disclosure) {
        goto end;
    }

    
    cJSON *a_obj_disclosure_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_disclosure)){
        goto end; //nonprimitive container
    }

    a_obj_disclosureList = list_createList();

    cJSON_ArrayForEach(a_obj_disclosure_local_nonprimitive,a_obj_disclosure )
    {
        if(!cJSON_IsObject(a_obj_disclosure_local_nonprimitive)){
            goto end;
        }
        disclosure_list_element_t *a_obj_disclosureItem = disclosure_list_element_parseFromJSON(a_obj_disclosure_local_nonprimitive);

        list_addElement(a_obj_disclosureList, a_obj_disclosureItem);
    }



    disclosure_get_list_v1_response_m_payload_local_var = disclosure_get_list_v1_response_m_payload_create_internal (
        i_row_returned_local_var,
        i_row_filtered_local_var,
        a_obj_disclosureList
        );

    if (!disclosure_get_list_v1_response_m_payload_local_var) {
        goto end;
    }

    return disclosure_get_list_v1_response_m_payload_local_var;
end:
    if (i_row_returned_local_var) {
        free(i_row_returned_local_var);
        i_row_returned_local_var = NULL;
    }
    if (i_row_filtered_local_var) {
        free(i_row_filtered_local_var);
        i_row_filtered_local_var = NULL;
    }
    if (a_obj_disclosureList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_disclosureList) {
            disclosure_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_disclosureList);
        a_obj_disclosureList = NULL;
    }
    return NULL;

}
