#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackage_get_list_v1_response_m_payload.h"



ezsigntemplatepackage_get_list_v1_response_m_payload_t *ezsigntemplatepackage_get_list_v1_response_m_payload_create(
    list_t *a_obj_ezsigntemplatepackage,
    int i_row_returned,
    int i_row_filtered
    ) {
    ezsigntemplatepackage_get_list_v1_response_m_payload_t *ezsigntemplatepackage_get_list_v1_response_m_payload_local_var = malloc(sizeof(ezsigntemplatepackage_get_list_v1_response_m_payload_t));
    if (!ezsigntemplatepackage_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplatepackage_get_list_v1_response_m_payload_local_var->a_obj_ezsigntemplatepackage = a_obj_ezsigntemplatepackage;
    ezsigntemplatepackage_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    ezsigntemplatepackage_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;

    return ezsigntemplatepackage_get_list_v1_response_m_payload_local_var;
}


void ezsigntemplatepackage_get_list_v1_response_m_payload_free(ezsigntemplatepackage_get_list_v1_response_m_payload_t *ezsigntemplatepackage_get_list_v1_response_m_payload) {
    if(NULL == ezsigntemplatepackage_get_list_v1_response_m_payload){
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

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatepackage_get_list_v1_response_m_payload_t *ezsigntemplatepackage_get_list_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatepackage_get_list_v1_response_m_payloadJSON){

    ezsigntemplatepackage_get_list_v1_response_m_payload_t *ezsigntemplatepackage_get_list_v1_response_m_payload_local_var = NULL;

    // ezsigntemplatepackage_get_list_v1_response_m_payload->a_obj_ezsigntemplatepackage
    cJSON *a_obj_ezsigntemplatepackage = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_get_list_v1_response_m_payloadJSON, "a_objEzsigntemplatepackage");
    if (!a_obj_ezsigntemplatepackage) {
        goto end;
    }

    list_t *a_obj_ezsigntemplatepackageList;
    
    cJSON *a_obj_ezsigntemplatepackage_local_nonprimitive;
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

    // ezsigntemplatepackage_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_get_list_v1_response_m_payloadJSON, "iRowReturned");
    if (!i_row_returned) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_row_returned))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepackage_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_get_list_v1_response_m_payloadJSON, "iRowFiltered");
    if (!i_row_filtered) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_row_filtered))
    {
    goto end; //Numeric
    }


    ezsigntemplatepackage_get_list_v1_response_m_payload_local_var = ezsigntemplatepackage_get_list_v1_response_m_payload_create (
        a_obj_ezsigntemplatepackageList,
        i_row_returned->valuedouble,
        i_row_filtered->valuedouble
        );

    return ezsigntemplatepackage_get_list_v1_response_m_payload_local_var;
end:
    return NULL;

}
