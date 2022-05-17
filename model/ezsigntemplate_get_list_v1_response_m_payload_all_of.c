#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplate_get_list_v1_response_m_payload_all_of.h"



ezsigntemplate_get_list_v1_response_m_payload_all_of_t *ezsigntemplate_get_list_v1_response_m_payload_all_of_create(
    list_t *a_obj_ezsigntemplate
    ) {
    ezsigntemplate_get_list_v1_response_m_payload_all_of_t *ezsigntemplate_get_list_v1_response_m_payload_all_of_local_var = malloc(sizeof(ezsigntemplate_get_list_v1_response_m_payload_all_of_t));
    if (!ezsigntemplate_get_list_v1_response_m_payload_all_of_local_var) {
        return NULL;
    }
    ezsigntemplate_get_list_v1_response_m_payload_all_of_local_var->a_obj_ezsigntemplate = a_obj_ezsigntemplate;

    return ezsigntemplate_get_list_v1_response_m_payload_all_of_local_var;
}


void ezsigntemplate_get_list_v1_response_m_payload_all_of_free(ezsigntemplate_get_list_v1_response_m_payload_all_of_t *ezsigntemplate_get_list_v1_response_m_payload_all_of) {
    if(NULL == ezsigntemplate_get_list_v1_response_m_payload_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplate_get_list_v1_response_m_payload_all_of->a_obj_ezsigntemplate) {
        list_ForEach(listEntry, ezsigntemplate_get_list_v1_response_m_payload_all_of->a_obj_ezsigntemplate) {
            ezsigntemplate_list_element_free(listEntry->data);
        }
        list_freeList(ezsigntemplate_get_list_v1_response_m_payload_all_of->a_obj_ezsigntemplate);
        ezsigntemplate_get_list_v1_response_m_payload_all_of->a_obj_ezsigntemplate = NULL;
    }
    free(ezsigntemplate_get_list_v1_response_m_payload_all_of);
}

cJSON *ezsigntemplate_get_list_v1_response_m_payload_all_of_convertToJSON(ezsigntemplate_get_list_v1_response_m_payload_all_of_t *ezsigntemplate_get_list_v1_response_m_payload_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplate_get_list_v1_response_m_payload_all_of->a_obj_ezsigntemplate
    if (!ezsigntemplate_get_list_v1_response_m_payload_all_of->a_obj_ezsigntemplate) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplate = cJSON_AddArrayToObject(item, "a_objEzsigntemplate");
    if(a_obj_ezsigntemplate == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplateListEntry;
    if (ezsigntemplate_get_list_v1_response_m_payload_all_of->a_obj_ezsigntemplate) {
    list_ForEach(a_obj_ezsigntemplateListEntry, ezsigntemplate_get_list_v1_response_m_payload_all_of->a_obj_ezsigntemplate) {
    cJSON *itemLocal = ezsigntemplate_list_element_convertToJSON(a_obj_ezsigntemplateListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplate, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplate_get_list_v1_response_m_payload_all_of_t *ezsigntemplate_get_list_v1_response_m_payload_all_of_parseFromJSON(cJSON *ezsigntemplate_get_list_v1_response_m_payload_all_ofJSON){

    ezsigntemplate_get_list_v1_response_m_payload_all_of_t *ezsigntemplate_get_list_v1_response_m_payload_all_of_local_var = NULL;

    // define the local list for ezsigntemplate_get_list_v1_response_m_payload_all_of->a_obj_ezsigntemplate
    list_t *a_obj_ezsigntemplateList = NULL;

    // ezsigntemplate_get_list_v1_response_m_payload_all_of->a_obj_ezsigntemplate
    cJSON *a_obj_ezsigntemplate = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_get_list_v1_response_m_payload_all_ofJSON, "a_objEzsigntemplate");
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


    ezsigntemplate_get_list_v1_response_m_payload_all_of_local_var = ezsigntemplate_get_list_v1_response_m_payload_all_of_create (
        a_obj_ezsigntemplateList
        );

    return ezsigntemplate_get_list_v1_response_m_payload_all_of_local_var;
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
