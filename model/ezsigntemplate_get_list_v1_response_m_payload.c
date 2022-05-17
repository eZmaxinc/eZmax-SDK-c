#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplate_get_list_v1_response_m_payload.h"



ezsigntemplate_get_list_v1_response_m_payload_t *ezsigntemplate_get_list_v1_response_m_payload_create(
    list_t *a_obj_ezsigntemplate,
    int i_row_returned,
    int i_row_filtered
    ) {
    ezsigntemplate_get_list_v1_response_m_payload_t *ezsigntemplate_get_list_v1_response_m_payload_local_var = malloc(sizeof(ezsigntemplate_get_list_v1_response_m_payload_t));
    if (!ezsigntemplate_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplate_get_list_v1_response_m_payload_local_var->a_obj_ezsigntemplate = a_obj_ezsigntemplate;
    ezsigntemplate_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    ezsigntemplate_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;

    return ezsigntemplate_get_list_v1_response_m_payload_local_var;
}


void ezsigntemplate_get_list_v1_response_m_payload_free(ezsigntemplate_get_list_v1_response_m_payload_t *ezsigntemplate_get_list_v1_response_m_payload) {
    if(NULL == ezsigntemplate_get_list_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplate_get_list_v1_response_m_payload->a_obj_ezsigntemplate) {
        list_ForEach(listEntry, ezsigntemplate_get_list_v1_response_m_payload->a_obj_ezsigntemplate) {
            ezsigntemplate_list_element_free(listEntry->data);
        }
        list_freeList(ezsigntemplate_get_list_v1_response_m_payload->a_obj_ezsigntemplate);
        ezsigntemplate_get_list_v1_response_m_payload->a_obj_ezsigntemplate = NULL;
    }
    free(ezsigntemplate_get_list_v1_response_m_payload);
}

cJSON *ezsigntemplate_get_list_v1_response_m_payload_convertToJSON(ezsigntemplate_get_list_v1_response_m_payload_t *ezsigntemplate_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplate_get_list_v1_response_m_payload->a_obj_ezsigntemplate
    if (!ezsigntemplate_get_list_v1_response_m_payload->a_obj_ezsigntemplate) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplate = cJSON_AddArrayToObject(item, "a_objEzsigntemplate");
    if(a_obj_ezsigntemplate == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplateListEntry;
    if (ezsigntemplate_get_list_v1_response_m_payload->a_obj_ezsigntemplate) {
    list_ForEach(a_obj_ezsigntemplateListEntry, ezsigntemplate_get_list_v1_response_m_payload->a_obj_ezsigntemplate) {
    cJSON *itemLocal = ezsigntemplate_list_element_convertToJSON(a_obj_ezsigntemplateListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplate, itemLocal);
    }
    }


    // ezsigntemplate_get_list_v1_response_m_payload->i_row_returned
    if (!ezsigntemplate_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", ezsigntemplate_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplate_get_list_v1_response_m_payload->i_row_filtered
    if (!ezsigntemplate_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", ezsigntemplate_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplate_get_list_v1_response_m_payload_t *ezsigntemplate_get_list_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplate_get_list_v1_response_m_payloadJSON){

    ezsigntemplate_get_list_v1_response_m_payload_t *ezsigntemplate_get_list_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsigntemplate_get_list_v1_response_m_payload->a_obj_ezsigntemplate
    list_t *a_obj_ezsigntemplateList = NULL;

    // ezsigntemplate_get_list_v1_response_m_payload->a_obj_ezsigntemplate
    cJSON *a_obj_ezsigntemplate = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_get_list_v1_response_m_payloadJSON, "a_objEzsigntemplate");
    if (!a_obj_ezsigntemplate) {
        goto end;
    }

    
    cJSON *a_obj_ezsigntemplate_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplate)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplateList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplate_local_nonprimitive,a_obj_ezsigntemplate )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplate_local_nonprimitive)){
            goto end;
        }
        ezsigntemplate_list_element_t *a_obj_ezsigntemplateItem = ezsigntemplate_list_element_parseFromJSON(a_obj_ezsigntemplate_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplateList, a_obj_ezsigntemplateItem);
    }

    // ezsigntemplate_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_get_list_v1_response_m_payloadJSON, "iRowReturned");
    if (!i_row_returned) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_row_returned))
    {
    goto end; //Numeric
    }

    // ezsigntemplate_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_get_list_v1_response_m_payloadJSON, "iRowFiltered");
    if (!i_row_filtered) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_row_filtered))
    {
    goto end; //Numeric
    }


    ezsigntemplate_get_list_v1_response_m_payload_local_var = ezsigntemplate_get_list_v1_response_m_payload_create (
        a_obj_ezsigntemplateList,
        i_row_returned->valuedouble,
        i_row_filtered->valuedouble
        );

    return ezsigntemplate_get_list_v1_response_m_payload_local_var;
end:
    if (a_obj_ezsigntemplateList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplateList) {
            ezsigntemplate_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplateList);
        a_obj_ezsigntemplateList = NULL;
    }
    return NULL;

}
