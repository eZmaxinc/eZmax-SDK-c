#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "documenttypechecklist_get_list_v1_response_m_payload.h"



static documenttypechecklist_get_list_v1_response_m_payload_t *documenttypechecklist_get_list_v1_response_m_payload_create_internal(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_documenttypechecklist
    ) {
    documenttypechecklist_get_list_v1_response_m_payload_t *documenttypechecklist_get_list_v1_response_m_payload_local_var = malloc(sizeof(documenttypechecklist_get_list_v1_response_m_payload_t));
    if (!documenttypechecklist_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(documenttypechecklist_get_list_v1_response_m_payload_local_var, 0, sizeof(documenttypechecklist_get_list_v1_response_m_payload_t));
    documenttypechecklist_get_list_v1_response_m_payload_local_var->_library_owned = 1;
    documenttypechecklist_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    documenttypechecklist_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;
    documenttypechecklist_get_list_v1_response_m_payload_local_var->a_obj_documenttypechecklist = a_obj_documenttypechecklist;
    return documenttypechecklist_get_list_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) documenttypechecklist_get_list_v1_response_m_payload_t *documenttypechecklist_get_list_v1_response_m_payload_create(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_documenttypechecklist
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
    documenttypechecklist_get_list_v1_response_m_payload_t *result = documenttypechecklist_get_list_v1_response_m_payload_create_internal (
        i_row_returned_copy,
        i_row_filtered_copy,
        a_obj_documenttypechecklist
        );
    if (!result) {
        free(i_row_returned_copy);
        free(i_row_filtered_copy);
    }
    return result;
}

void documenttypechecklist_get_list_v1_response_m_payload_free(documenttypechecklist_get_list_v1_response_m_payload_t *documenttypechecklist_get_list_v1_response_m_payload) {
    if(NULL == documenttypechecklist_get_list_v1_response_m_payload){
        return ;
    }
    if(documenttypechecklist_get_list_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "documenttypechecklist_get_list_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (documenttypechecklist_get_list_v1_response_m_payload->i_row_returned) {
        free(documenttypechecklist_get_list_v1_response_m_payload->i_row_returned);
        documenttypechecklist_get_list_v1_response_m_payload->i_row_returned = NULL;
    }
    if (documenttypechecklist_get_list_v1_response_m_payload->i_row_filtered) {
        free(documenttypechecklist_get_list_v1_response_m_payload->i_row_filtered);
        documenttypechecklist_get_list_v1_response_m_payload->i_row_filtered = NULL;
    }
    if (documenttypechecklist_get_list_v1_response_m_payload->a_obj_documenttypechecklist) {
        list_ForEach(listEntry, documenttypechecklist_get_list_v1_response_m_payload->a_obj_documenttypechecklist) {
            documenttypechecklist_list_element_free(listEntry->data);
        }
        list_freeList(documenttypechecklist_get_list_v1_response_m_payload->a_obj_documenttypechecklist);
        documenttypechecklist_get_list_v1_response_m_payload->a_obj_documenttypechecklist = NULL;
    }
    free(documenttypechecklist_get_list_v1_response_m_payload);
}

cJSON *documenttypechecklist_get_list_v1_response_m_payload_convertToJSON(documenttypechecklist_get_list_v1_response_m_payload_t *documenttypechecklist_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // documenttypechecklist_get_list_v1_response_m_payload->i_row_returned
    if (!documenttypechecklist_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", *documenttypechecklist_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // documenttypechecklist_get_list_v1_response_m_payload->i_row_filtered
    if (!documenttypechecklist_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", *documenttypechecklist_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }


    // documenttypechecklist_get_list_v1_response_m_payload->a_obj_documenttypechecklist
    if (!documenttypechecklist_get_list_v1_response_m_payload->a_obj_documenttypechecklist) {
        goto fail;
    }
    cJSON *a_obj_documenttypechecklist = cJSON_AddArrayToObject(item, "a_objDocumenttypechecklist");
    if(a_obj_documenttypechecklist == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_documenttypechecklistListEntry;
    if (documenttypechecklist_get_list_v1_response_m_payload->a_obj_documenttypechecklist) {
    list_ForEach(a_obj_documenttypechecklistListEntry, documenttypechecklist_get_list_v1_response_m_payload->a_obj_documenttypechecklist) {
    cJSON *itemLocal = documenttypechecklist_list_element_convertToJSON(a_obj_documenttypechecklistListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_documenttypechecklist, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

documenttypechecklist_get_list_v1_response_m_payload_t *documenttypechecklist_get_list_v1_response_m_payload_parseFromJSON(cJSON *documenttypechecklist_get_list_v1_response_m_payloadJSON){

    documenttypechecklist_get_list_v1_response_m_payload_t *documenttypechecklist_get_list_v1_response_m_payload_local_var = NULL;

    // define the local variable for documenttypechecklist_get_list_v1_response_m_payload->i_row_returned
    int *i_row_returned_local_var = NULL;

    // define the local variable for documenttypechecklist_get_list_v1_response_m_payload->i_row_filtered
    int *i_row_filtered_local_var = NULL;

    // define the local list for documenttypechecklist_get_list_v1_response_m_payload->a_obj_documenttypechecklist
    list_t *a_obj_documenttypechecklistList = NULL;

    // documenttypechecklist_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_get_list_v1_response_m_payloadJSON, "iRowReturned");
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

    // documenttypechecklist_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_get_list_v1_response_m_payloadJSON, "iRowFiltered");
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

    // documenttypechecklist_get_list_v1_response_m_payload->a_obj_documenttypechecklist
    cJSON *a_obj_documenttypechecklist = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_get_list_v1_response_m_payloadJSON, "a_objDocumenttypechecklist");
    if (cJSON_IsNull(a_obj_documenttypechecklist)) {
        a_obj_documenttypechecklist = NULL;
    }
    if (!a_obj_documenttypechecklist) {
        goto end;
    }

    
    cJSON *a_obj_documenttypechecklist_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_documenttypechecklist)){
        goto end; //nonprimitive container
    }

    a_obj_documenttypechecklistList = list_createList();

    cJSON_ArrayForEach(a_obj_documenttypechecklist_local_nonprimitive,a_obj_documenttypechecklist )
    {
        if(!cJSON_IsObject(a_obj_documenttypechecklist_local_nonprimitive)){
            goto end;
        }
        documenttypechecklist_list_element_t *a_obj_documenttypechecklistItem = documenttypechecklist_list_element_parseFromJSON(a_obj_documenttypechecklist_local_nonprimitive);

        list_addElement(a_obj_documenttypechecklistList, a_obj_documenttypechecklistItem);
    }



    documenttypechecklist_get_list_v1_response_m_payload_local_var = documenttypechecklist_get_list_v1_response_m_payload_create_internal (
        i_row_returned_local_var,
        i_row_filtered_local_var,
        a_obj_documenttypechecklistList
        );

    if (!documenttypechecklist_get_list_v1_response_m_payload_local_var) {
        goto end;
    }

    return documenttypechecklist_get_list_v1_response_m_payload_local_var;
end:
    if (i_row_returned_local_var) {
        free(i_row_returned_local_var);
        i_row_returned_local_var = NULL;
    }
    if (i_row_filtered_local_var) {
        free(i_row_filtered_local_var);
        i_row_filtered_local_var = NULL;
    }
    if (a_obj_documenttypechecklistList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_documenttypechecklistList) {
            documenttypechecklist_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_documenttypechecklistList);
        a_obj_documenttypechecklistList = NULL;
    }
    return NULL;

}
