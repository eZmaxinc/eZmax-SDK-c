#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackage_get_list_v1_response_m_payload.h"



static ezsigntemplatepackage_get_list_v1_response_m_payload_t *ezsigntemplatepackage_get_list_v1_response_m_payload_create_internal(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_ezsigntemplatepackage
    ) {
    ezsigntemplatepackage_get_list_v1_response_m_payload_t *ezsigntemplatepackage_get_list_v1_response_m_payload_local_var = malloc(sizeof(ezsigntemplatepackage_get_list_v1_response_m_payload_t));
    if (!ezsigntemplatepackage_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplatepackage_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    ezsigntemplatepackage_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;
    ezsigntemplatepackage_get_list_v1_response_m_payload_local_var->a_obj_ezsigntemplatepackage = a_obj_ezsigntemplatepackage;

    ezsigntemplatepackage_get_list_v1_response_m_payload_local_var->_library_owned = 1;
    return ezsigntemplatepackage_get_list_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsigntemplatepackage_get_list_v1_response_m_payload_t *ezsigntemplatepackage_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_ezsigntemplatepackage
    ) {
    return ezsigntemplatepackage_get_list_v1_response_m_payload_create_internal (
        i_row_returned,
        i_row_filtered,
        a_obj_ezsigntemplatepackage
        );
}

void ezsigntemplatepackage_get_list_v1_response_m_payload_free(ezsigntemplatepackage_get_list_v1_response_m_payload_t *ezsigntemplatepackage_get_list_v1_response_m_payload) {
    if(NULL == ezsigntemplatepackage_get_list_v1_response_m_payload){
        return ;
    }
    if(ezsigntemplatepackage_get_list_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatepackage_get_list_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepackage_get_list_v1_response_m_payload->a_obj_ezsigntemplatepackage) {
        list_ForEach(listEntry, ezsigntemplatepackage_get_list_v1_response_m_payload->a_obj_ezsigntemplatepackage) {
            ezsigntemplatepackage_list_element_free(listEntry->data);
        }
        list_freeList(ezsigntemplatepackage_get_list_v1_response_m_payload->a_obj_ezsigntemplatepackage);
        ezsigntemplatepackage_get_list_v1_response_m_payload->a_obj_ezsigntemplatepackage = NULL;
    }
    free(ezsigntemplatepackage_get_list_v1_response_m_payload);
}

cJSON *ezsigntemplatepackage_get_list_v1_response_m_payload_convertToJSON(ezsigntemplatepackage_get_list_v1_response_m_payload_t *ezsigntemplatepackage_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackage_get_list_v1_response_m_payload->i_row_returned
    if (!ezsigntemplatepackage_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", ezsigntemplatepackage_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackage_get_list_v1_response_m_payload->i_row_filtered
    if (!ezsigntemplatepackage_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", ezsigntemplatepackage_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackage_get_list_v1_response_m_payload->a_obj_ezsigntemplatepackage
    if (!ezsigntemplatepackage_get_list_v1_response_m_payload->a_obj_ezsigntemplatepackage) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplatepackage = cJSON_AddArrayToObject(item, "a_objEzsigntemplatepackage");
    if(a_obj_ezsigntemplatepackage == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplatepackageListEntry;
    if (ezsigntemplatepackage_get_list_v1_response_m_payload->a_obj_ezsigntemplatepackage) {
    list_ForEach(a_obj_ezsigntemplatepackageListEntry, ezsigntemplatepackage_get_list_v1_response_m_payload->a_obj_ezsigntemplatepackage) {
    cJSON *itemLocal = ezsigntemplatepackage_list_element_convertToJSON(a_obj_ezsigntemplatepackageListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplatepackage, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatepackage_get_list_v1_response_m_payload_t *ezsigntemplatepackage_get_list_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatepackage_get_list_v1_response_m_payloadJSON){

    ezsigntemplatepackage_get_list_v1_response_m_payload_t *ezsigntemplatepackage_get_list_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsigntemplatepackage_get_list_v1_response_m_payload->a_obj_ezsigntemplatepackage
    list_t *a_obj_ezsigntemplatepackageList = NULL;

    // ezsigntemplatepackage_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_get_list_v1_response_m_payloadJSON, "iRowReturned");
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

    // ezsigntemplatepackage_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_get_list_v1_response_m_payloadJSON, "iRowFiltered");
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

    // ezsigntemplatepackage_get_list_v1_response_m_payload->a_obj_ezsigntemplatepackage
    cJSON *a_obj_ezsigntemplatepackage = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_get_list_v1_response_m_payloadJSON, "a_objEzsigntemplatepackage");
    if (cJSON_IsNull(a_obj_ezsigntemplatepackage)) {
        a_obj_ezsigntemplatepackage = NULL;
    }
    if (!a_obj_ezsigntemplatepackage) {
        goto end;
    }

    
    cJSON *a_obj_ezsigntemplatepackage_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplatepackage)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplatepackageList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplatepackage_local_nonprimitive,a_obj_ezsigntemplatepackage )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplatepackage_local_nonprimitive)){
            goto end;
        }
        ezsigntemplatepackage_list_element_t *a_obj_ezsigntemplatepackageItem = ezsigntemplatepackage_list_element_parseFromJSON(a_obj_ezsigntemplatepackage_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplatepackageList, a_obj_ezsigntemplatepackageItem);
    }


    ezsigntemplatepackage_get_list_v1_response_m_payload_local_var = ezsigntemplatepackage_get_list_v1_response_m_payload_create_internal (
        i_row_returned->valuedouble,
        i_row_filtered->valuedouble,
        a_obj_ezsigntemplatepackageList
        );

    return ezsigntemplatepackage_get_list_v1_response_m_payload_local_var;
end:
    if (a_obj_ezsigntemplatepackageList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplatepackageList) {
            ezsigntemplatepackage_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplatepackageList);
        a_obj_ezsigntemplatepackageList = NULL;
    }
    return NULL;

}
