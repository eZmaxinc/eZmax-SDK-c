#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackage_get_list_v1_response_m_payload_all_of.h"



ezsigntemplatepackage_get_list_v1_response_m_payload_all_of_t *ezsigntemplatepackage_get_list_v1_response_m_payload_all_of_create(
    list_t *a_obj_ezsigntemplatepackage
    ) {
    ezsigntemplatepackage_get_list_v1_response_m_payload_all_of_t *ezsigntemplatepackage_get_list_v1_response_m_payload_all_of_local_var = malloc(sizeof(ezsigntemplatepackage_get_list_v1_response_m_payload_all_of_t));
    if (!ezsigntemplatepackage_get_list_v1_response_m_payload_all_of_local_var) {
        return NULL;
    }
    ezsigntemplatepackage_get_list_v1_response_m_payload_all_of_local_var->a_obj_ezsigntemplatepackage = a_obj_ezsigntemplatepackage;

    return ezsigntemplatepackage_get_list_v1_response_m_payload_all_of_local_var;
}


void ezsigntemplatepackage_get_list_v1_response_m_payload_all_of_free(ezsigntemplatepackage_get_list_v1_response_m_payload_all_of_t *ezsigntemplatepackage_get_list_v1_response_m_payload_all_of) {
    if(NULL == ezsigntemplatepackage_get_list_v1_response_m_payload_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepackage_get_list_v1_response_m_payload_all_of->a_obj_ezsigntemplatepackage) {
        list_ForEach(listEntry, ezsigntemplatepackage_get_list_v1_response_m_payload_all_of->a_obj_ezsigntemplatepackage) {
            ezsigntemplatepackage_list_element_free(listEntry->data);
        }
        list_free(ezsigntemplatepackage_get_list_v1_response_m_payload_all_of->a_obj_ezsigntemplatepackage);
        ezsigntemplatepackage_get_list_v1_response_m_payload_all_of->a_obj_ezsigntemplatepackage = NULL;
    }
    free(ezsigntemplatepackage_get_list_v1_response_m_payload_all_of);
}

cJSON *ezsigntemplatepackage_get_list_v1_response_m_payload_all_of_convertToJSON(ezsigntemplatepackage_get_list_v1_response_m_payload_all_of_t *ezsigntemplatepackage_get_list_v1_response_m_payload_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackage_get_list_v1_response_m_payload_all_of->a_obj_ezsigntemplatepackage
    if (!ezsigntemplatepackage_get_list_v1_response_m_payload_all_of->a_obj_ezsigntemplatepackage) {
        goto fail;
    }
    
    cJSON *a_obj_ezsigntemplatepackage = cJSON_AddArrayToObject(item, "a_objEzsigntemplatepackage");
    if(a_obj_ezsigntemplatepackage == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplatepackageListEntry;
    if (ezsigntemplatepackage_get_list_v1_response_m_payload_all_of->a_obj_ezsigntemplatepackage) {
    list_ForEach(a_obj_ezsigntemplatepackageListEntry, ezsigntemplatepackage_get_list_v1_response_m_payload_all_of->a_obj_ezsigntemplatepackage) {
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

ezsigntemplatepackage_get_list_v1_response_m_payload_all_of_t *ezsigntemplatepackage_get_list_v1_response_m_payload_all_of_parseFromJSON(cJSON *ezsigntemplatepackage_get_list_v1_response_m_payload_all_ofJSON){

    ezsigntemplatepackage_get_list_v1_response_m_payload_all_of_t *ezsigntemplatepackage_get_list_v1_response_m_payload_all_of_local_var = NULL;

    // ezsigntemplatepackage_get_list_v1_response_m_payload_all_of->a_obj_ezsigntemplatepackage
    cJSON *a_obj_ezsigntemplatepackage = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_get_list_v1_response_m_payload_all_ofJSON, "a_objEzsigntemplatepackage");
    if (!a_obj_ezsigntemplatepackage) {
        goto end;
    }

    list_t *a_obj_ezsigntemplatepackageList;
    
    cJSON *a_obj_ezsigntemplatepackage_local_nonprimitive;
    if(!cJSON_IsArray(a_obj_ezsigntemplatepackage)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplatepackageList = list_create();

    cJSON_ArrayForEach(a_obj_ezsigntemplatepackage_local_nonprimitive,a_obj_ezsigntemplatepackage )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplatepackage_local_nonprimitive)){
            goto end;
        }
        ezsigntemplatepackage_list_element_t *a_obj_ezsigntemplatepackageItem = ezsigntemplatepackage_list_element_parseFromJSON(a_obj_ezsigntemplatepackage_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplatepackageList, a_obj_ezsigntemplatepackageItem);
    }


    ezsigntemplatepackage_get_list_v1_response_m_payload_all_of_local_var = ezsigntemplatepackage_get_list_v1_response_m_payload_all_of_create (
        a_obj_ezsigntemplatepackageList
        );

    return ezsigntemplatepackage_get_list_v1_response_m_payload_all_of_local_var;
end:
    return NULL;

}
