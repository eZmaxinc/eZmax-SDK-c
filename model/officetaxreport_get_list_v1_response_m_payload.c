#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "officetaxreport_get_list_v1_response_m_payload.h"



static officetaxreport_get_list_v1_response_m_payload_t *officetaxreport_get_list_v1_response_m_payload_create_internal(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_officetaxreport
    ) {
    officetaxreport_get_list_v1_response_m_payload_t *officetaxreport_get_list_v1_response_m_payload_local_var = malloc(sizeof(officetaxreport_get_list_v1_response_m_payload_t));
    if (!officetaxreport_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(officetaxreport_get_list_v1_response_m_payload_local_var, 0, sizeof(officetaxreport_get_list_v1_response_m_payload_t));
    officetaxreport_get_list_v1_response_m_payload_local_var->_library_owned = 1;
    officetaxreport_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    officetaxreport_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;
    officetaxreport_get_list_v1_response_m_payload_local_var->a_obj_officetaxreport = a_obj_officetaxreport;
    return officetaxreport_get_list_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) officetaxreport_get_list_v1_response_m_payload_t *officetaxreport_get_list_v1_response_m_payload_create(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_officetaxreport
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
    officetaxreport_get_list_v1_response_m_payload_t *result = officetaxreport_get_list_v1_response_m_payload_create_internal (
        i_row_returned_copy,
        i_row_filtered_copy,
        a_obj_officetaxreport
        );
    if (!result) {
        free(i_row_returned_copy);
        free(i_row_filtered_copy);
    }
    return result;
}

void officetaxreport_get_list_v1_response_m_payload_free(officetaxreport_get_list_v1_response_m_payload_t *officetaxreport_get_list_v1_response_m_payload) {
    if(NULL == officetaxreport_get_list_v1_response_m_payload){
        return ;
    }
    if(officetaxreport_get_list_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "officetaxreport_get_list_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (officetaxreport_get_list_v1_response_m_payload->i_row_returned) {
        free(officetaxreport_get_list_v1_response_m_payload->i_row_returned);
        officetaxreport_get_list_v1_response_m_payload->i_row_returned = NULL;
    }
    if (officetaxreport_get_list_v1_response_m_payload->i_row_filtered) {
        free(officetaxreport_get_list_v1_response_m_payload->i_row_filtered);
        officetaxreport_get_list_v1_response_m_payload->i_row_filtered = NULL;
    }
    if (officetaxreport_get_list_v1_response_m_payload->a_obj_officetaxreport) {
        list_ForEach(listEntry, officetaxreport_get_list_v1_response_m_payload->a_obj_officetaxreport) {
            officetaxreport_list_element_free(listEntry->data);
        }
        list_freeList(officetaxreport_get_list_v1_response_m_payload->a_obj_officetaxreport);
        officetaxreport_get_list_v1_response_m_payload->a_obj_officetaxreport = NULL;
    }
    free(officetaxreport_get_list_v1_response_m_payload);
}

cJSON *officetaxreport_get_list_v1_response_m_payload_convertToJSON(officetaxreport_get_list_v1_response_m_payload_t *officetaxreport_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // officetaxreport_get_list_v1_response_m_payload->i_row_returned
    if (!officetaxreport_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", *officetaxreport_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // officetaxreport_get_list_v1_response_m_payload->i_row_filtered
    if (!officetaxreport_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", *officetaxreport_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }


    // officetaxreport_get_list_v1_response_m_payload->a_obj_officetaxreport
    if (!officetaxreport_get_list_v1_response_m_payload->a_obj_officetaxreport) {
        goto fail;
    }
    cJSON *a_obj_officetaxreport = cJSON_AddArrayToObject(item, "a_objOfficetaxreport");
    if(a_obj_officetaxreport == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_officetaxreportListEntry;
    if (officetaxreport_get_list_v1_response_m_payload->a_obj_officetaxreport) {
    list_ForEach(a_obj_officetaxreportListEntry, officetaxreport_get_list_v1_response_m_payload->a_obj_officetaxreport) {
    cJSON *itemLocal = officetaxreport_list_element_convertToJSON(a_obj_officetaxreportListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_officetaxreport, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

officetaxreport_get_list_v1_response_m_payload_t *officetaxreport_get_list_v1_response_m_payload_parseFromJSON(cJSON *officetaxreport_get_list_v1_response_m_payloadJSON){

    officetaxreport_get_list_v1_response_m_payload_t *officetaxreport_get_list_v1_response_m_payload_local_var = NULL;

    // define the local variable for officetaxreport_get_list_v1_response_m_payload->i_row_returned
    int *i_row_returned_local_var = NULL;

    // define the local variable for officetaxreport_get_list_v1_response_m_payload->i_row_filtered
    int *i_row_filtered_local_var = NULL;

    // define the local list for officetaxreport_get_list_v1_response_m_payload->a_obj_officetaxreport
    list_t *a_obj_officetaxreportList = NULL;

    // officetaxreport_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(officetaxreport_get_list_v1_response_m_payloadJSON, "iRowReturned");
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

    // officetaxreport_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(officetaxreport_get_list_v1_response_m_payloadJSON, "iRowFiltered");
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

    // officetaxreport_get_list_v1_response_m_payload->a_obj_officetaxreport
    cJSON *a_obj_officetaxreport = cJSON_GetObjectItemCaseSensitive(officetaxreport_get_list_v1_response_m_payloadJSON, "a_objOfficetaxreport");
    if (cJSON_IsNull(a_obj_officetaxreport)) {
        a_obj_officetaxreport = NULL;
    }
    if (!a_obj_officetaxreport) {
        goto end;
    }

    
    cJSON *a_obj_officetaxreport_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_officetaxreport)){
        goto end; //nonprimitive container
    }

    a_obj_officetaxreportList = list_createList();

    cJSON_ArrayForEach(a_obj_officetaxreport_local_nonprimitive,a_obj_officetaxreport )
    {
        if(!cJSON_IsObject(a_obj_officetaxreport_local_nonprimitive)){
            goto end;
        }
        officetaxreport_list_element_t *a_obj_officetaxreportItem = officetaxreport_list_element_parseFromJSON(a_obj_officetaxreport_local_nonprimitive);

        list_addElement(a_obj_officetaxreportList, a_obj_officetaxreportItem);
    }



    officetaxreport_get_list_v1_response_m_payload_local_var = officetaxreport_get_list_v1_response_m_payload_create_internal (
        i_row_returned_local_var,
        i_row_filtered_local_var,
        a_obj_officetaxreportList
        );

    if (!officetaxreport_get_list_v1_response_m_payload_local_var) {
        goto end;
    }

    return officetaxreport_get_list_v1_response_m_payload_local_var;
end:
    if (i_row_returned_local_var) {
        free(i_row_returned_local_var);
        i_row_returned_local_var = NULL;
    }
    if (i_row_filtered_local_var) {
        free(i_row_filtered_local_var);
        i_row_filtered_local_var = NULL;
    }
    if (a_obj_officetaxreportList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_officetaxreportList) {
            officetaxreport_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_officetaxreportList);
        a_obj_officetaxreportList = NULL;
    }
    return NULL;

}
