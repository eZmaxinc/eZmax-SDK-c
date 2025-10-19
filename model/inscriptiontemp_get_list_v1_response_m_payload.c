#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inscriptiontemp_get_list_v1_response_m_payload.h"



static inscriptiontemp_get_list_v1_response_m_payload_t *inscriptiontemp_get_list_v1_response_m_payload_create_internal(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_inscriptiontemp
    ) {
    inscriptiontemp_get_list_v1_response_m_payload_t *inscriptiontemp_get_list_v1_response_m_payload_local_var = malloc(sizeof(inscriptiontemp_get_list_v1_response_m_payload_t));
    if (!inscriptiontemp_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    inscriptiontemp_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    inscriptiontemp_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;
    inscriptiontemp_get_list_v1_response_m_payload_local_var->a_obj_inscriptiontemp = a_obj_inscriptiontemp;

    inscriptiontemp_get_list_v1_response_m_payload_local_var->_library_owned = 1;
    return inscriptiontemp_get_list_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) inscriptiontemp_get_list_v1_response_m_payload_t *inscriptiontemp_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_inscriptiontemp
    ) {
    return inscriptiontemp_get_list_v1_response_m_payload_create_internal (
        i_row_returned,
        i_row_filtered,
        a_obj_inscriptiontemp
        );
}

void inscriptiontemp_get_list_v1_response_m_payload_free(inscriptiontemp_get_list_v1_response_m_payload_t *inscriptiontemp_get_list_v1_response_m_payload) {
    if(NULL == inscriptiontemp_get_list_v1_response_m_payload){
        return ;
    }
    if(inscriptiontemp_get_list_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "inscriptiontemp_get_list_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (inscriptiontemp_get_list_v1_response_m_payload->a_obj_inscriptiontemp) {
        list_ForEach(listEntry, inscriptiontemp_get_list_v1_response_m_payload->a_obj_inscriptiontemp) {
            inscriptiontemp_list_element_free(listEntry->data);
        }
        list_freeList(inscriptiontemp_get_list_v1_response_m_payload->a_obj_inscriptiontemp);
        inscriptiontemp_get_list_v1_response_m_payload->a_obj_inscriptiontemp = NULL;
    }
    free(inscriptiontemp_get_list_v1_response_m_payload);
}

cJSON *inscriptiontemp_get_list_v1_response_m_payload_convertToJSON(inscriptiontemp_get_list_v1_response_m_payload_t *inscriptiontemp_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // inscriptiontemp_get_list_v1_response_m_payload->i_row_returned
    if (!inscriptiontemp_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", inscriptiontemp_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // inscriptiontemp_get_list_v1_response_m_payload->i_row_filtered
    if (!inscriptiontemp_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", inscriptiontemp_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }


    // inscriptiontemp_get_list_v1_response_m_payload->a_obj_inscriptiontemp
    if (!inscriptiontemp_get_list_v1_response_m_payload->a_obj_inscriptiontemp) {
        goto fail;
    }
    cJSON *a_obj_inscriptiontemp = cJSON_AddArrayToObject(item, "a_objInscriptiontemp");
    if(a_obj_inscriptiontemp == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_inscriptiontempListEntry;
    if (inscriptiontemp_get_list_v1_response_m_payload->a_obj_inscriptiontemp) {
    list_ForEach(a_obj_inscriptiontempListEntry, inscriptiontemp_get_list_v1_response_m_payload->a_obj_inscriptiontemp) {
    cJSON *itemLocal = inscriptiontemp_list_element_convertToJSON(a_obj_inscriptiontempListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_inscriptiontemp, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inscriptiontemp_get_list_v1_response_m_payload_t *inscriptiontemp_get_list_v1_response_m_payload_parseFromJSON(cJSON *inscriptiontemp_get_list_v1_response_m_payloadJSON){

    inscriptiontemp_get_list_v1_response_m_payload_t *inscriptiontemp_get_list_v1_response_m_payload_local_var = NULL;

    // define the local list for inscriptiontemp_get_list_v1_response_m_payload->a_obj_inscriptiontemp
    list_t *a_obj_inscriptiontempList = NULL;

    // inscriptiontemp_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(inscriptiontemp_get_list_v1_response_m_payloadJSON, "iRowReturned");
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

    // inscriptiontemp_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(inscriptiontemp_get_list_v1_response_m_payloadJSON, "iRowFiltered");
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

    // inscriptiontemp_get_list_v1_response_m_payload->a_obj_inscriptiontemp
    cJSON *a_obj_inscriptiontemp = cJSON_GetObjectItemCaseSensitive(inscriptiontemp_get_list_v1_response_m_payloadJSON, "a_objInscriptiontemp");
    if (cJSON_IsNull(a_obj_inscriptiontemp)) {
        a_obj_inscriptiontemp = NULL;
    }
    if (!a_obj_inscriptiontemp) {
        goto end;
    }

    
    cJSON *a_obj_inscriptiontemp_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_inscriptiontemp)){
        goto end; //nonprimitive container
    }

    a_obj_inscriptiontempList = list_createList();

    cJSON_ArrayForEach(a_obj_inscriptiontemp_local_nonprimitive,a_obj_inscriptiontemp )
    {
        if(!cJSON_IsObject(a_obj_inscriptiontemp_local_nonprimitive)){
            goto end;
        }
        inscriptiontemp_list_element_t *a_obj_inscriptiontempItem = inscriptiontemp_list_element_parseFromJSON(a_obj_inscriptiontemp_local_nonprimitive);

        list_addElement(a_obj_inscriptiontempList, a_obj_inscriptiontempItem);
    }


    inscriptiontemp_get_list_v1_response_m_payload_local_var = inscriptiontemp_get_list_v1_response_m_payload_create_internal (
        i_row_returned->valuedouble,
        i_row_filtered->valuedouble,
        a_obj_inscriptiontempList
        );

    return inscriptiontemp_get_list_v1_response_m_payload_local_var;
end:
    if (a_obj_inscriptiontempList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_inscriptiontempList) {
            inscriptiontemp_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_inscriptiontempList);
        a_obj_inscriptiontempList = NULL;
    }
    return NULL;

}
