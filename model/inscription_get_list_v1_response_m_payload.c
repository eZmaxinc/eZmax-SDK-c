#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inscription_get_list_v1_response_m_payload.h"



static inscription_get_list_v1_response_m_payload_t *inscription_get_list_v1_response_m_payload_create_internal(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_inscription
    ) {
    inscription_get_list_v1_response_m_payload_t *inscription_get_list_v1_response_m_payload_local_var = malloc(sizeof(inscription_get_list_v1_response_m_payload_t));
    if (!inscription_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(inscription_get_list_v1_response_m_payload_local_var, 0, sizeof(inscription_get_list_v1_response_m_payload_t));
    inscription_get_list_v1_response_m_payload_local_var->_library_owned = 1;
    inscription_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    inscription_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;
    inscription_get_list_v1_response_m_payload_local_var->a_obj_inscription = a_obj_inscription;
    return inscription_get_list_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) inscription_get_list_v1_response_m_payload_t *inscription_get_list_v1_response_m_payload_create(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_inscription
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
    inscription_get_list_v1_response_m_payload_t *result = inscription_get_list_v1_response_m_payload_create_internal (
        i_row_returned_copy,
        i_row_filtered_copy,
        a_obj_inscription
        );
    if (!result) {
        free(i_row_returned_copy);
        free(i_row_filtered_copy);
    }
    return result;
}

void inscription_get_list_v1_response_m_payload_free(inscription_get_list_v1_response_m_payload_t *inscription_get_list_v1_response_m_payload) {
    if(NULL == inscription_get_list_v1_response_m_payload){
        return ;
    }
    if(inscription_get_list_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "inscription_get_list_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (inscription_get_list_v1_response_m_payload->i_row_returned) {
        free(inscription_get_list_v1_response_m_payload->i_row_returned);
        inscription_get_list_v1_response_m_payload->i_row_returned = NULL;
    }
    if (inscription_get_list_v1_response_m_payload->i_row_filtered) {
        free(inscription_get_list_v1_response_m_payload->i_row_filtered);
        inscription_get_list_v1_response_m_payload->i_row_filtered = NULL;
    }
    if (inscription_get_list_v1_response_m_payload->a_obj_inscription) {
        list_ForEach(listEntry, inscription_get_list_v1_response_m_payload->a_obj_inscription) {
            inscription_list_element_free(listEntry->data);
        }
        list_freeList(inscription_get_list_v1_response_m_payload->a_obj_inscription);
        inscription_get_list_v1_response_m_payload->a_obj_inscription = NULL;
    }
    free(inscription_get_list_v1_response_m_payload);
}

cJSON *inscription_get_list_v1_response_m_payload_convertToJSON(inscription_get_list_v1_response_m_payload_t *inscription_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // inscription_get_list_v1_response_m_payload->i_row_returned
    if (!inscription_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", *inscription_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // inscription_get_list_v1_response_m_payload->i_row_filtered
    if (!inscription_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", *inscription_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }


    // inscription_get_list_v1_response_m_payload->a_obj_inscription
    if (!inscription_get_list_v1_response_m_payload->a_obj_inscription) {
        goto fail;
    }
    cJSON *a_obj_inscription = cJSON_AddArrayToObject(item, "a_objInscription");
    if(a_obj_inscription == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_inscriptionListEntry;
    if (inscription_get_list_v1_response_m_payload->a_obj_inscription) {
    list_ForEach(a_obj_inscriptionListEntry, inscription_get_list_v1_response_m_payload->a_obj_inscription) {
    cJSON *itemLocal = inscription_list_element_convertToJSON(a_obj_inscriptionListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_inscription, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inscription_get_list_v1_response_m_payload_t *inscription_get_list_v1_response_m_payload_parseFromJSON(cJSON *inscription_get_list_v1_response_m_payloadJSON){

    inscription_get_list_v1_response_m_payload_t *inscription_get_list_v1_response_m_payload_local_var = NULL;

    // define the local variable for inscription_get_list_v1_response_m_payload->i_row_returned
    int *i_row_returned_local_var = NULL;

    // define the local variable for inscription_get_list_v1_response_m_payload->i_row_filtered
    int *i_row_filtered_local_var = NULL;

    // define the local list for inscription_get_list_v1_response_m_payload->a_obj_inscription
    list_t *a_obj_inscriptionList = NULL;

    // inscription_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(inscription_get_list_v1_response_m_payloadJSON, "iRowReturned");
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

    // inscription_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(inscription_get_list_v1_response_m_payloadJSON, "iRowFiltered");
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

    // inscription_get_list_v1_response_m_payload->a_obj_inscription
    cJSON *a_obj_inscription = cJSON_GetObjectItemCaseSensitive(inscription_get_list_v1_response_m_payloadJSON, "a_objInscription");
    if (cJSON_IsNull(a_obj_inscription)) {
        a_obj_inscription = NULL;
    }
    if (!a_obj_inscription) {
        goto end;
    }

    
    cJSON *a_obj_inscription_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_inscription)){
        goto end; //nonprimitive container
    }

    a_obj_inscriptionList = list_createList();

    cJSON_ArrayForEach(a_obj_inscription_local_nonprimitive,a_obj_inscription )
    {
        if(!cJSON_IsObject(a_obj_inscription_local_nonprimitive)){
            goto end;
        }
        inscription_list_element_t *a_obj_inscriptionItem = inscription_list_element_parseFromJSON(a_obj_inscription_local_nonprimitive);

        list_addElement(a_obj_inscriptionList, a_obj_inscriptionItem);
    }



    inscription_get_list_v1_response_m_payload_local_var = inscription_get_list_v1_response_m_payload_create_internal (
        i_row_returned_local_var,
        i_row_filtered_local_var,
        a_obj_inscriptionList
        );

    if (!inscription_get_list_v1_response_m_payload_local_var) {
        goto end;
    }

    return inscription_get_list_v1_response_m_payload_local_var;
end:
    if (i_row_returned_local_var) {
        free(i_row_returned_local_var);
        i_row_returned_local_var = NULL;
    }
    if (i_row_filtered_local_var) {
        free(i_row_filtered_local_var);
        i_row_filtered_local_var = NULL;
    }
    if (a_obj_inscriptionList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_inscriptionList) {
            inscription_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_inscriptionList);
        a_obj_inscriptionList = NULL;
    }
    return NULL;

}
