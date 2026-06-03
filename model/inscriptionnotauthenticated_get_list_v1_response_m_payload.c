#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inscriptionnotauthenticated_get_list_v1_response_m_payload.h"



static inscriptionnotauthenticated_get_list_v1_response_m_payload_t *inscriptionnotauthenticated_get_list_v1_response_m_payload_create_internal(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_inscriptionnotauthenticated
    ) {
    inscriptionnotauthenticated_get_list_v1_response_m_payload_t *inscriptionnotauthenticated_get_list_v1_response_m_payload_local_var = malloc(sizeof(inscriptionnotauthenticated_get_list_v1_response_m_payload_t));
    if (!inscriptionnotauthenticated_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(inscriptionnotauthenticated_get_list_v1_response_m_payload_local_var, 0, sizeof(inscriptionnotauthenticated_get_list_v1_response_m_payload_t));
    inscriptionnotauthenticated_get_list_v1_response_m_payload_local_var->_library_owned = 1;
    inscriptionnotauthenticated_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    inscriptionnotauthenticated_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;
    inscriptionnotauthenticated_get_list_v1_response_m_payload_local_var->a_obj_inscriptionnotauthenticated = a_obj_inscriptionnotauthenticated;
    return inscriptionnotauthenticated_get_list_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) inscriptionnotauthenticated_get_list_v1_response_m_payload_t *inscriptionnotauthenticated_get_list_v1_response_m_payload_create(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_inscriptionnotauthenticated
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
    inscriptionnotauthenticated_get_list_v1_response_m_payload_t *result = inscriptionnotauthenticated_get_list_v1_response_m_payload_create_internal (
        i_row_returned_copy,
        i_row_filtered_copy,
        a_obj_inscriptionnotauthenticated
        );
    if (!result) {
        free(i_row_returned_copy);
        free(i_row_filtered_copy);
    }
    return result;
}

void inscriptionnotauthenticated_get_list_v1_response_m_payload_free(inscriptionnotauthenticated_get_list_v1_response_m_payload_t *inscriptionnotauthenticated_get_list_v1_response_m_payload) {
    if(NULL == inscriptionnotauthenticated_get_list_v1_response_m_payload){
        return ;
    }
    if(inscriptionnotauthenticated_get_list_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "inscriptionnotauthenticated_get_list_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (inscriptionnotauthenticated_get_list_v1_response_m_payload->i_row_returned) {
        free(inscriptionnotauthenticated_get_list_v1_response_m_payload->i_row_returned);
        inscriptionnotauthenticated_get_list_v1_response_m_payload->i_row_returned = NULL;
    }
    if (inscriptionnotauthenticated_get_list_v1_response_m_payload->i_row_filtered) {
        free(inscriptionnotauthenticated_get_list_v1_response_m_payload->i_row_filtered);
        inscriptionnotauthenticated_get_list_v1_response_m_payload->i_row_filtered = NULL;
    }
    if (inscriptionnotauthenticated_get_list_v1_response_m_payload->a_obj_inscriptionnotauthenticated) {
        list_ForEach(listEntry, inscriptionnotauthenticated_get_list_v1_response_m_payload->a_obj_inscriptionnotauthenticated) {
            inscriptionnotauthenticated_list_element_free(listEntry->data);
        }
        list_freeList(inscriptionnotauthenticated_get_list_v1_response_m_payload->a_obj_inscriptionnotauthenticated);
        inscriptionnotauthenticated_get_list_v1_response_m_payload->a_obj_inscriptionnotauthenticated = NULL;
    }
    free(inscriptionnotauthenticated_get_list_v1_response_m_payload);
}

cJSON *inscriptionnotauthenticated_get_list_v1_response_m_payload_convertToJSON(inscriptionnotauthenticated_get_list_v1_response_m_payload_t *inscriptionnotauthenticated_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // inscriptionnotauthenticated_get_list_v1_response_m_payload->i_row_returned
    if (!inscriptionnotauthenticated_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", *inscriptionnotauthenticated_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // inscriptionnotauthenticated_get_list_v1_response_m_payload->i_row_filtered
    if (!inscriptionnotauthenticated_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", *inscriptionnotauthenticated_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }


    // inscriptionnotauthenticated_get_list_v1_response_m_payload->a_obj_inscriptionnotauthenticated
    if (!inscriptionnotauthenticated_get_list_v1_response_m_payload->a_obj_inscriptionnotauthenticated) {
        goto fail;
    }
    cJSON *a_obj_inscriptionnotauthenticated = cJSON_AddArrayToObject(item, "a_objInscriptionnotauthenticated");
    if(a_obj_inscriptionnotauthenticated == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_inscriptionnotauthenticatedListEntry;
    if (inscriptionnotauthenticated_get_list_v1_response_m_payload->a_obj_inscriptionnotauthenticated) {
    list_ForEach(a_obj_inscriptionnotauthenticatedListEntry, inscriptionnotauthenticated_get_list_v1_response_m_payload->a_obj_inscriptionnotauthenticated) {
    cJSON *itemLocal = inscriptionnotauthenticated_list_element_convertToJSON(a_obj_inscriptionnotauthenticatedListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_inscriptionnotauthenticated, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inscriptionnotauthenticated_get_list_v1_response_m_payload_t *inscriptionnotauthenticated_get_list_v1_response_m_payload_parseFromJSON(cJSON *inscriptionnotauthenticated_get_list_v1_response_m_payloadJSON){

    inscriptionnotauthenticated_get_list_v1_response_m_payload_t *inscriptionnotauthenticated_get_list_v1_response_m_payload_local_var = NULL;

    // define the local variable for inscriptionnotauthenticated_get_list_v1_response_m_payload->i_row_returned
    int *i_row_returned_local_var = NULL;

    // define the local variable for inscriptionnotauthenticated_get_list_v1_response_m_payload->i_row_filtered
    int *i_row_filtered_local_var = NULL;

    // define the local list for inscriptionnotauthenticated_get_list_v1_response_m_payload->a_obj_inscriptionnotauthenticated
    list_t *a_obj_inscriptionnotauthenticatedList = NULL;

    // inscriptionnotauthenticated_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_get_list_v1_response_m_payloadJSON, "iRowReturned");
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

    // inscriptionnotauthenticated_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_get_list_v1_response_m_payloadJSON, "iRowFiltered");
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

    // inscriptionnotauthenticated_get_list_v1_response_m_payload->a_obj_inscriptionnotauthenticated
    cJSON *a_obj_inscriptionnotauthenticated = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_get_list_v1_response_m_payloadJSON, "a_objInscriptionnotauthenticated");
    if (cJSON_IsNull(a_obj_inscriptionnotauthenticated)) {
        a_obj_inscriptionnotauthenticated = NULL;
    }
    if (!a_obj_inscriptionnotauthenticated) {
        goto end;
    }

    
    cJSON *a_obj_inscriptionnotauthenticated_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_inscriptionnotauthenticated)){
        goto end; //nonprimitive container
    }

    a_obj_inscriptionnotauthenticatedList = list_createList();

    cJSON_ArrayForEach(a_obj_inscriptionnotauthenticated_local_nonprimitive,a_obj_inscriptionnotauthenticated )
    {
        if(!cJSON_IsObject(a_obj_inscriptionnotauthenticated_local_nonprimitive)){
            goto end;
        }
        inscriptionnotauthenticated_list_element_t *a_obj_inscriptionnotauthenticatedItem = inscriptionnotauthenticated_list_element_parseFromJSON(a_obj_inscriptionnotauthenticated_local_nonprimitive);

        list_addElement(a_obj_inscriptionnotauthenticatedList, a_obj_inscriptionnotauthenticatedItem);
    }



    inscriptionnotauthenticated_get_list_v1_response_m_payload_local_var = inscriptionnotauthenticated_get_list_v1_response_m_payload_create_internal (
        i_row_returned_local_var,
        i_row_filtered_local_var,
        a_obj_inscriptionnotauthenticatedList
        );

    if (!inscriptionnotauthenticated_get_list_v1_response_m_payload_local_var) {
        goto end;
    }

    return inscriptionnotauthenticated_get_list_v1_response_m_payload_local_var;
end:
    if (i_row_returned_local_var) {
        free(i_row_returned_local_var);
        i_row_returned_local_var = NULL;
    }
    if (i_row_filtered_local_var) {
        free(i_row_filtered_local_var);
        i_row_filtered_local_var = NULL;
    }
    if (a_obj_inscriptionnotauthenticatedList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_inscriptionnotauthenticatedList) {
            inscriptionnotauthenticated_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_inscriptionnotauthenticatedList);
        a_obj_inscriptionnotauthenticatedList = NULL;
    }
    return NULL;

}
