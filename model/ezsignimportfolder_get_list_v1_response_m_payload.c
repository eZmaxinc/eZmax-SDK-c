#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignimportfolder_get_list_v1_response_m_payload.h"



static ezsignimportfolder_get_list_v1_response_m_payload_t *ezsignimportfolder_get_list_v1_response_m_payload_create_internal(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_ezsignimportfolder
    ) {
    ezsignimportfolder_get_list_v1_response_m_payload_t *ezsignimportfolder_get_list_v1_response_m_payload_local_var = malloc(sizeof(ezsignimportfolder_get_list_v1_response_m_payload_t));
    if (!ezsignimportfolder_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(ezsignimportfolder_get_list_v1_response_m_payload_local_var, 0, sizeof(ezsignimportfolder_get_list_v1_response_m_payload_t));
    ezsignimportfolder_get_list_v1_response_m_payload_local_var->_library_owned = 1;
    ezsignimportfolder_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    ezsignimportfolder_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;
    ezsignimportfolder_get_list_v1_response_m_payload_local_var->a_obj_ezsignimportfolder = a_obj_ezsignimportfolder;
    return ezsignimportfolder_get_list_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsignimportfolder_get_list_v1_response_m_payload_t *ezsignimportfolder_get_list_v1_response_m_payload_create(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_ezsignimportfolder
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
    ezsignimportfolder_get_list_v1_response_m_payload_t *result = ezsignimportfolder_get_list_v1_response_m_payload_create_internal (
        i_row_returned_copy,
        i_row_filtered_copy,
        a_obj_ezsignimportfolder
        );
    if (!result) {
        free(i_row_returned_copy);
        free(i_row_filtered_copy);
    }
    return result;
}

void ezsignimportfolder_get_list_v1_response_m_payload_free(ezsignimportfolder_get_list_v1_response_m_payload_t *ezsignimportfolder_get_list_v1_response_m_payload) {
    if(NULL == ezsignimportfolder_get_list_v1_response_m_payload){
        return ;
    }
    if(ezsignimportfolder_get_list_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignimportfolder_get_list_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignimportfolder_get_list_v1_response_m_payload->i_row_returned) {
        free(ezsignimportfolder_get_list_v1_response_m_payload->i_row_returned);
        ezsignimportfolder_get_list_v1_response_m_payload->i_row_returned = NULL;
    }
    if (ezsignimportfolder_get_list_v1_response_m_payload->i_row_filtered) {
        free(ezsignimportfolder_get_list_v1_response_m_payload->i_row_filtered);
        ezsignimportfolder_get_list_v1_response_m_payload->i_row_filtered = NULL;
    }
    if (ezsignimportfolder_get_list_v1_response_m_payload->a_obj_ezsignimportfolder) {
        list_ForEach(listEntry, ezsignimportfolder_get_list_v1_response_m_payload->a_obj_ezsignimportfolder) {
            ezsignimportfolder_list_element_free(listEntry->data);
        }
        list_freeList(ezsignimportfolder_get_list_v1_response_m_payload->a_obj_ezsignimportfolder);
        ezsignimportfolder_get_list_v1_response_m_payload->a_obj_ezsignimportfolder = NULL;
    }
    free(ezsignimportfolder_get_list_v1_response_m_payload);
}

cJSON *ezsignimportfolder_get_list_v1_response_m_payload_convertToJSON(ezsignimportfolder_get_list_v1_response_m_payload_t *ezsignimportfolder_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignimportfolder_get_list_v1_response_m_payload->i_row_returned
    if (!ezsignimportfolder_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", *ezsignimportfolder_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // ezsignimportfolder_get_list_v1_response_m_payload->i_row_filtered
    if (!ezsignimportfolder_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", *ezsignimportfolder_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }


    // ezsignimportfolder_get_list_v1_response_m_payload->a_obj_ezsignimportfolder
    if (!ezsignimportfolder_get_list_v1_response_m_payload->a_obj_ezsignimportfolder) {
        goto fail;
    }
    cJSON *a_obj_ezsignimportfolder = cJSON_AddArrayToObject(item, "a_objEzsignimportfolder");
    if(a_obj_ezsignimportfolder == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignimportfolderListEntry;
    if (ezsignimportfolder_get_list_v1_response_m_payload->a_obj_ezsignimportfolder) {
    list_ForEach(a_obj_ezsignimportfolderListEntry, ezsignimportfolder_get_list_v1_response_m_payload->a_obj_ezsignimportfolder) {
    cJSON *itemLocal = ezsignimportfolder_list_element_convertToJSON(a_obj_ezsignimportfolderListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignimportfolder, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignimportfolder_get_list_v1_response_m_payload_t *ezsignimportfolder_get_list_v1_response_m_payload_parseFromJSON(cJSON *ezsignimportfolder_get_list_v1_response_m_payloadJSON){

    ezsignimportfolder_get_list_v1_response_m_payload_t *ezsignimportfolder_get_list_v1_response_m_payload_local_var = NULL;

    // define the local variable for ezsignimportfolder_get_list_v1_response_m_payload->i_row_returned
    int *i_row_returned_local_var = NULL;

    // define the local variable for ezsignimportfolder_get_list_v1_response_m_payload->i_row_filtered
    int *i_row_filtered_local_var = NULL;

    // define the local list for ezsignimportfolder_get_list_v1_response_m_payload->a_obj_ezsignimportfolder
    list_t *a_obj_ezsignimportfolderList = NULL;

    // ezsignimportfolder_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(ezsignimportfolder_get_list_v1_response_m_payloadJSON, "iRowReturned");
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

    // ezsignimportfolder_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(ezsignimportfolder_get_list_v1_response_m_payloadJSON, "iRowFiltered");
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

    // ezsignimportfolder_get_list_v1_response_m_payload->a_obj_ezsignimportfolder
    cJSON *a_obj_ezsignimportfolder = cJSON_GetObjectItemCaseSensitive(ezsignimportfolder_get_list_v1_response_m_payloadJSON, "a_objEzsignimportfolder");
    if (cJSON_IsNull(a_obj_ezsignimportfolder)) {
        a_obj_ezsignimportfolder = NULL;
    }
    if (!a_obj_ezsignimportfolder) {
        goto end;
    }

    
    cJSON *a_obj_ezsignimportfolder_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignimportfolder)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignimportfolderList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignimportfolder_local_nonprimitive,a_obj_ezsignimportfolder )
    {
        if(!cJSON_IsObject(a_obj_ezsignimportfolder_local_nonprimitive)){
            goto end;
        }
        ezsignimportfolder_list_element_t *a_obj_ezsignimportfolderItem = ezsignimportfolder_list_element_parseFromJSON(a_obj_ezsignimportfolder_local_nonprimitive);

        list_addElement(a_obj_ezsignimportfolderList, a_obj_ezsignimportfolderItem);
    }



    ezsignimportfolder_get_list_v1_response_m_payload_local_var = ezsignimportfolder_get_list_v1_response_m_payload_create_internal (
        i_row_returned_local_var,
        i_row_filtered_local_var,
        a_obj_ezsignimportfolderList
        );

    if (!ezsignimportfolder_get_list_v1_response_m_payload_local_var) {
        goto end;
    }

    return ezsignimportfolder_get_list_v1_response_m_payload_local_var;
end:
    if (i_row_returned_local_var) {
        free(i_row_returned_local_var);
        i_row_returned_local_var = NULL;
    }
    if (i_row_filtered_local_var) {
        free(i_row_filtered_local_var);
        i_row_filtered_local_var = NULL;
    }
    if (a_obj_ezsignimportfolderList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignimportfolderList) {
            ezsignimportfolder_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignimportfolderList);
        a_obj_ezsignimportfolderList = NULL;
    }
    return NULL;

}
