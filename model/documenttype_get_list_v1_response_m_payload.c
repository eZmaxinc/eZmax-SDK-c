#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "documenttype_get_list_v1_response_m_payload.h"



static documenttype_get_list_v1_response_m_payload_t *documenttype_get_list_v1_response_m_payload_create_internal(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_documenttype
    ) {
    documenttype_get_list_v1_response_m_payload_t *documenttype_get_list_v1_response_m_payload_local_var = malloc(sizeof(documenttype_get_list_v1_response_m_payload_t));
    if (!documenttype_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(documenttype_get_list_v1_response_m_payload_local_var, 0, sizeof(documenttype_get_list_v1_response_m_payload_t));
    documenttype_get_list_v1_response_m_payload_local_var->_library_owned = 1;
    documenttype_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    documenttype_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;
    documenttype_get_list_v1_response_m_payload_local_var->a_obj_documenttype = a_obj_documenttype;
    return documenttype_get_list_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) documenttype_get_list_v1_response_m_payload_t *documenttype_get_list_v1_response_m_payload_create(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_documenttype
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
    documenttype_get_list_v1_response_m_payload_t *result = documenttype_get_list_v1_response_m_payload_create_internal (
        i_row_returned_copy,
        i_row_filtered_copy,
        a_obj_documenttype
        );
    if (!result) {
        free(i_row_returned_copy);
        free(i_row_filtered_copy);
    }
    return result;
}

void documenttype_get_list_v1_response_m_payload_free(documenttype_get_list_v1_response_m_payload_t *documenttype_get_list_v1_response_m_payload) {
    if(NULL == documenttype_get_list_v1_response_m_payload){
        return ;
    }
    if(documenttype_get_list_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "documenttype_get_list_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (documenttype_get_list_v1_response_m_payload->i_row_returned) {
        free(documenttype_get_list_v1_response_m_payload->i_row_returned);
        documenttype_get_list_v1_response_m_payload->i_row_returned = NULL;
    }
    if (documenttype_get_list_v1_response_m_payload->i_row_filtered) {
        free(documenttype_get_list_v1_response_m_payload->i_row_filtered);
        documenttype_get_list_v1_response_m_payload->i_row_filtered = NULL;
    }
    if (documenttype_get_list_v1_response_m_payload->a_obj_documenttype) {
        list_ForEach(listEntry, documenttype_get_list_v1_response_m_payload->a_obj_documenttype) {
            documenttype_list_element_free(listEntry->data);
        }
        list_freeList(documenttype_get_list_v1_response_m_payload->a_obj_documenttype);
        documenttype_get_list_v1_response_m_payload->a_obj_documenttype = NULL;
    }
    free(documenttype_get_list_v1_response_m_payload);
}

cJSON *documenttype_get_list_v1_response_m_payload_convertToJSON(documenttype_get_list_v1_response_m_payload_t *documenttype_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // documenttype_get_list_v1_response_m_payload->i_row_returned
    if (!documenttype_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", *documenttype_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // documenttype_get_list_v1_response_m_payload->i_row_filtered
    if (!documenttype_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", *documenttype_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }


    // documenttype_get_list_v1_response_m_payload->a_obj_documenttype
    if (!documenttype_get_list_v1_response_m_payload->a_obj_documenttype) {
        goto fail;
    }
    cJSON *a_obj_documenttype = cJSON_AddArrayToObject(item, "a_objDocumenttype");
    if(a_obj_documenttype == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_documenttypeListEntry;
    if (documenttype_get_list_v1_response_m_payload->a_obj_documenttype) {
    list_ForEach(a_obj_documenttypeListEntry, documenttype_get_list_v1_response_m_payload->a_obj_documenttype) {
    cJSON *itemLocal = documenttype_list_element_convertToJSON(a_obj_documenttypeListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_documenttype, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

documenttype_get_list_v1_response_m_payload_t *documenttype_get_list_v1_response_m_payload_parseFromJSON(cJSON *documenttype_get_list_v1_response_m_payloadJSON){

    documenttype_get_list_v1_response_m_payload_t *documenttype_get_list_v1_response_m_payload_local_var = NULL;

    // define the local variable for documenttype_get_list_v1_response_m_payload->i_row_returned
    int *i_row_returned_local_var = NULL;

    // define the local variable for documenttype_get_list_v1_response_m_payload->i_row_filtered
    int *i_row_filtered_local_var = NULL;

    // define the local list for documenttype_get_list_v1_response_m_payload->a_obj_documenttype
    list_t *a_obj_documenttypeList = NULL;

    // documenttype_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(documenttype_get_list_v1_response_m_payloadJSON, "iRowReturned");
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

    // documenttype_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(documenttype_get_list_v1_response_m_payloadJSON, "iRowFiltered");
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

    // documenttype_get_list_v1_response_m_payload->a_obj_documenttype
    cJSON *a_obj_documenttype = cJSON_GetObjectItemCaseSensitive(documenttype_get_list_v1_response_m_payloadJSON, "a_objDocumenttype");
    if (cJSON_IsNull(a_obj_documenttype)) {
        a_obj_documenttype = NULL;
    }
    if (!a_obj_documenttype) {
        goto end;
    }

    
    cJSON *a_obj_documenttype_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_documenttype)){
        goto end; //nonprimitive container
    }

    a_obj_documenttypeList = list_createList();

    cJSON_ArrayForEach(a_obj_documenttype_local_nonprimitive,a_obj_documenttype )
    {
        if(!cJSON_IsObject(a_obj_documenttype_local_nonprimitive)){
            goto end;
        }
        documenttype_list_element_t *a_obj_documenttypeItem = documenttype_list_element_parseFromJSON(a_obj_documenttype_local_nonprimitive);

        list_addElement(a_obj_documenttypeList, a_obj_documenttypeItem);
    }



    documenttype_get_list_v1_response_m_payload_local_var = documenttype_get_list_v1_response_m_payload_create_internal (
        i_row_returned_local_var,
        i_row_filtered_local_var,
        a_obj_documenttypeList
        );

    if (!documenttype_get_list_v1_response_m_payload_local_var) {
        goto end;
    }

    return documenttype_get_list_v1_response_m_payload_local_var;
end:
    if (i_row_returned_local_var) {
        free(i_row_returned_local_var);
        i_row_returned_local_var = NULL;
    }
    if (i_row_filtered_local_var) {
        free(i_row_filtered_local_var);
        i_row_filtered_local_var = NULL;
    }
    if (a_obj_documenttypeList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_documenttypeList) {
            documenttype_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_documenttypeList);
        a_obj_documenttypeList = NULL;
    }
    return NULL;

}
