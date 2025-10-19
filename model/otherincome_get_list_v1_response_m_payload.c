#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "otherincome_get_list_v1_response_m_payload.h"



static otherincome_get_list_v1_response_m_payload_t *otherincome_get_list_v1_response_m_payload_create_internal(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_otherincome
    ) {
    otherincome_get_list_v1_response_m_payload_t *otherincome_get_list_v1_response_m_payload_local_var = malloc(sizeof(otherincome_get_list_v1_response_m_payload_t));
    if (!otherincome_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    otherincome_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    otherincome_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;
    otherincome_get_list_v1_response_m_payload_local_var->a_obj_otherincome = a_obj_otherincome;

    otherincome_get_list_v1_response_m_payload_local_var->_library_owned = 1;
    return otherincome_get_list_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) otherincome_get_list_v1_response_m_payload_t *otherincome_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_otherincome
    ) {
    return otherincome_get_list_v1_response_m_payload_create_internal (
        i_row_returned,
        i_row_filtered,
        a_obj_otherincome
        );
}

void otherincome_get_list_v1_response_m_payload_free(otherincome_get_list_v1_response_m_payload_t *otherincome_get_list_v1_response_m_payload) {
    if(NULL == otherincome_get_list_v1_response_m_payload){
        return ;
    }
    if(otherincome_get_list_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "otherincome_get_list_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (otherincome_get_list_v1_response_m_payload->a_obj_otherincome) {
        list_ForEach(listEntry, otherincome_get_list_v1_response_m_payload->a_obj_otherincome) {
            otherincome_list_element_free(listEntry->data);
        }
        list_freeList(otherincome_get_list_v1_response_m_payload->a_obj_otherincome);
        otherincome_get_list_v1_response_m_payload->a_obj_otherincome = NULL;
    }
    free(otherincome_get_list_v1_response_m_payload);
}

cJSON *otherincome_get_list_v1_response_m_payload_convertToJSON(otherincome_get_list_v1_response_m_payload_t *otherincome_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // otherincome_get_list_v1_response_m_payload->i_row_returned
    if (!otherincome_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", otherincome_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // otherincome_get_list_v1_response_m_payload->i_row_filtered
    if (!otherincome_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", otherincome_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }


    // otherincome_get_list_v1_response_m_payload->a_obj_otherincome
    if (!otherincome_get_list_v1_response_m_payload->a_obj_otherincome) {
        goto fail;
    }
    cJSON *a_obj_otherincome = cJSON_AddArrayToObject(item, "a_objOtherincome");
    if(a_obj_otherincome == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_otherincomeListEntry;
    if (otherincome_get_list_v1_response_m_payload->a_obj_otherincome) {
    list_ForEach(a_obj_otherincomeListEntry, otherincome_get_list_v1_response_m_payload->a_obj_otherincome) {
    cJSON *itemLocal = otherincome_list_element_convertToJSON(a_obj_otherincomeListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_otherincome, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

otherincome_get_list_v1_response_m_payload_t *otherincome_get_list_v1_response_m_payload_parseFromJSON(cJSON *otherincome_get_list_v1_response_m_payloadJSON){

    otherincome_get_list_v1_response_m_payload_t *otherincome_get_list_v1_response_m_payload_local_var = NULL;

    // define the local list for otherincome_get_list_v1_response_m_payload->a_obj_otherincome
    list_t *a_obj_otherincomeList = NULL;

    // otherincome_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(otherincome_get_list_v1_response_m_payloadJSON, "iRowReturned");
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

    // otherincome_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(otherincome_get_list_v1_response_m_payloadJSON, "iRowFiltered");
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

    // otherincome_get_list_v1_response_m_payload->a_obj_otherincome
    cJSON *a_obj_otherincome = cJSON_GetObjectItemCaseSensitive(otherincome_get_list_v1_response_m_payloadJSON, "a_objOtherincome");
    if (cJSON_IsNull(a_obj_otherincome)) {
        a_obj_otherincome = NULL;
    }
    if (!a_obj_otherincome) {
        goto end;
    }

    
    cJSON *a_obj_otherincome_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_otherincome)){
        goto end; //nonprimitive container
    }

    a_obj_otherincomeList = list_createList();

    cJSON_ArrayForEach(a_obj_otherincome_local_nonprimitive,a_obj_otherincome )
    {
        if(!cJSON_IsObject(a_obj_otherincome_local_nonprimitive)){
            goto end;
        }
        otherincome_list_element_t *a_obj_otherincomeItem = otherincome_list_element_parseFromJSON(a_obj_otherincome_local_nonprimitive);

        list_addElement(a_obj_otherincomeList, a_obj_otherincomeItem);
    }


    otherincome_get_list_v1_response_m_payload_local_var = otherincome_get_list_v1_response_m_payload_create_internal (
        i_row_returned->valuedouble,
        i_row_filtered->valuedouble,
        a_obj_otherincomeList
        );

    return otherincome_get_list_v1_response_m_payload_local_var;
end:
    if (a_obj_otherincomeList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_otherincomeList) {
            otherincome_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_otherincomeList);
        a_obj_otherincomeList = NULL;
    }
    return NULL;

}
