#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackage_get_autocomplete_v2_response_m_payload.h"



static ezsigntemplatepackage_get_autocomplete_v2_response_m_payload_t *ezsigntemplatepackage_get_autocomplete_v2_response_m_payload_create_internal(
    list_t *a_obj_ezsigntemplatepackage
    ) {
    ezsigntemplatepackage_get_autocomplete_v2_response_m_payload_t *ezsigntemplatepackage_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(ezsigntemplatepackage_get_autocomplete_v2_response_m_payload_t));
    if (!ezsigntemplatepackage_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplatepackage_get_autocomplete_v2_response_m_payload_local_var->a_obj_ezsigntemplatepackage = a_obj_ezsigntemplatepackage;

    ezsigntemplatepackage_get_autocomplete_v2_response_m_payload_local_var->_library_owned = 1;
    return ezsigntemplatepackage_get_autocomplete_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsigntemplatepackage_get_autocomplete_v2_response_m_payload_t *ezsigntemplatepackage_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_ezsigntemplatepackage
    ) {
    return ezsigntemplatepackage_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_ezsigntemplatepackage
        );
}

void ezsigntemplatepackage_get_autocomplete_v2_response_m_payload_free(ezsigntemplatepackage_get_autocomplete_v2_response_m_payload_t *ezsigntemplatepackage_get_autocomplete_v2_response_m_payload) {
    if(NULL == ezsigntemplatepackage_get_autocomplete_v2_response_m_payload){
        return ;
    }
    if(ezsigntemplatepackage_get_autocomplete_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatepackage_get_autocomplete_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepackage_get_autocomplete_v2_response_m_payload->a_obj_ezsigntemplatepackage) {
        list_ForEach(listEntry, ezsigntemplatepackage_get_autocomplete_v2_response_m_payload->a_obj_ezsigntemplatepackage) {
            ezsigntemplatepackage_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(ezsigntemplatepackage_get_autocomplete_v2_response_m_payload->a_obj_ezsigntemplatepackage);
        ezsigntemplatepackage_get_autocomplete_v2_response_m_payload->a_obj_ezsigntemplatepackage = NULL;
    }
    free(ezsigntemplatepackage_get_autocomplete_v2_response_m_payload);
}

cJSON *ezsigntemplatepackage_get_autocomplete_v2_response_m_payload_convertToJSON(ezsigntemplatepackage_get_autocomplete_v2_response_m_payload_t *ezsigntemplatepackage_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackage_get_autocomplete_v2_response_m_payload->a_obj_ezsigntemplatepackage
    if (!ezsigntemplatepackage_get_autocomplete_v2_response_m_payload->a_obj_ezsigntemplatepackage) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplatepackage = cJSON_AddArrayToObject(item, "a_objEzsigntemplatepackage");
    if(a_obj_ezsigntemplatepackage == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplatepackageListEntry;
    if (ezsigntemplatepackage_get_autocomplete_v2_response_m_payload->a_obj_ezsigntemplatepackage) {
    list_ForEach(a_obj_ezsigntemplatepackageListEntry, ezsigntemplatepackage_get_autocomplete_v2_response_m_payload->a_obj_ezsigntemplatepackage) {
    cJSON *itemLocal = ezsigntemplatepackage_autocomplete_element_response_convertToJSON(a_obj_ezsigntemplatepackageListEntry->data);
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

ezsigntemplatepackage_get_autocomplete_v2_response_m_payload_t *ezsigntemplatepackage_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *ezsigntemplatepackage_get_autocomplete_v2_response_m_payloadJSON){

    ezsigntemplatepackage_get_autocomplete_v2_response_m_payload_t *ezsigntemplatepackage_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for ezsigntemplatepackage_get_autocomplete_v2_response_m_payload->a_obj_ezsigntemplatepackage
    list_t *a_obj_ezsigntemplatepackageList = NULL;

    // ezsigntemplatepackage_get_autocomplete_v2_response_m_payload->a_obj_ezsigntemplatepackage
    cJSON *a_obj_ezsigntemplatepackage = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_get_autocomplete_v2_response_m_payloadJSON, "a_objEzsigntemplatepackage");
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
        ezsigntemplatepackage_autocomplete_element_response_t *a_obj_ezsigntemplatepackageItem = ezsigntemplatepackage_autocomplete_element_response_parseFromJSON(a_obj_ezsigntemplatepackage_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplatepackageList, a_obj_ezsigntemplatepackageItem);
    }


    ezsigntemplatepackage_get_autocomplete_v2_response_m_payload_local_var = ezsigntemplatepackage_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_ezsigntemplatepackageList
        );

    return ezsigntemplatepackage_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_ezsigntemplatepackageList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplatepackageList) {
            ezsigntemplatepackage_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplatepackageList);
        a_obj_ezsigntemplatepackageList = NULL;
    }
    return NULL;

}
