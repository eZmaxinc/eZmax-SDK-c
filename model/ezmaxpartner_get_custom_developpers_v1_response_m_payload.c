#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezmaxpartner_get_custom_developpers_v1_response_m_payload.h"



static ezmaxpartner_get_custom_developpers_v1_response_m_payload_t *ezmaxpartner_get_custom_developpers_v1_response_m_payload_create_internal(
    list_t *a_obj_ezmaxpartner
    ) {
    ezmaxpartner_get_custom_developpers_v1_response_m_payload_t *ezmaxpartner_get_custom_developpers_v1_response_m_payload_local_var = malloc(sizeof(ezmaxpartner_get_custom_developpers_v1_response_m_payload_t));
    if (!ezmaxpartner_get_custom_developpers_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(ezmaxpartner_get_custom_developpers_v1_response_m_payload_local_var, 0, sizeof(ezmaxpartner_get_custom_developpers_v1_response_m_payload_t));
    ezmaxpartner_get_custom_developpers_v1_response_m_payload_local_var->_library_owned = 1;
    ezmaxpartner_get_custom_developpers_v1_response_m_payload_local_var->a_obj_ezmaxpartner = a_obj_ezmaxpartner;
    return ezmaxpartner_get_custom_developpers_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) ezmaxpartner_get_custom_developpers_v1_response_m_payload_t *ezmaxpartner_get_custom_developpers_v1_response_m_payload_create(
    list_t *a_obj_ezmaxpartner
    ) {
    ezmaxpartner_get_custom_developpers_v1_response_m_payload_t *result = ezmaxpartner_get_custom_developpers_v1_response_m_payload_create_internal (
        a_obj_ezmaxpartner
        );
    if (!result) {
    }
    return result;
}

void ezmaxpartner_get_custom_developpers_v1_response_m_payload_free(ezmaxpartner_get_custom_developpers_v1_response_m_payload_t *ezmaxpartner_get_custom_developpers_v1_response_m_payload) {
    if(NULL == ezmaxpartner_get_custom_developpers_v1_response_m_payload){
        return ;
    }
    if(ezmaxpartner_get_custom_developpers_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezmaxpartner_get_custom_developpers_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezmaxpartner_get_custom_developpers_v1_response_m_payload->a_obj_ezmaxpartner) {
        list_ForEach(listEntry, ezmaxpartner_get_custom_developpers_v1_response_m_payload->a_obj_ezmaxpartner) {
            custom_ezmaxpartner_list_element_free(listEntry->data);
        }
        list_freeList(ezmaxpartner_get_custom_developpers_v1_response_m_payload->a_obj_ezmaxpartner);
        ezmaxpartner_get_custom_developpers_v1_response_m_payload->a_obj_ezmaxpartner = NULL;
    }
    free(ezmaxpartner_get_custom_developpers_v1_response_m_payload);
}

cJSON *ezmaxpartner_get_custom_developpers_v1_response_m_payload_convertToJSON(ezmaxpartner_get_custom_developpers_v1_response_m_payload_t *ezmaxpartner_get_custom_developpers_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezmaxpartner_get_custom_developpers_v1_response_m_payload->a_obj_ezmaxpartner
    if (!ezmaxpartner_get_custom_developpers_v1_response_m_payload->a_obj_ezmaxpartner) {
        goto fail;
    }
    cJSON *a_obj_ezmaxpartner = cJSON_AddArrayToObject(item, "a_objEzmaxpartner");
    if(a_obj_ezmaxpartner == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezmaxpartnerListEntry;
    if (ezmaxpartner_get_custom_developpers_v1_response_m_payload->a_obj_ezmaxpartner) {
    list_ForEach(a_obj_ezmaxpartnerListEntry, ezmaxpartner_get_custom_developpers_v1_response_m_payload->a_obj_ezmaxpartner) {
    cJSON *itemLocal = custom_ezmaxpartner_list_element_convertToJSON(a_obj_ezmaxpartnerListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezmaxpartner, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezmaxpartner_get_custom_developpers_v1_response_m_payload_t *ezmaxpartner_get_custom_developpers_v1_response_m_payload_parseFromJSON(cJSON *ezmaxpartner_get_custom_developpers_v1_response_m_payloadJSON){

    ezmaxpartner_get_custom_developpers_v1_response_m_payload_t *ezmaxpartner_get_custom_developpers_v1_response_m_payload_local_var = NULL;

    // define the local list for ezmaxpartner_get_custom_developpers_v1_response_m_payload->a_obj_ezmaxpartner
    list_t *a_obj_ezmaxpartnerList = NULL;

    // ezmaxpartner_get_custom_developpers_v1_response_m_payload->a_obj_ezmaxpartner
    cJSON *a_obj_ezmaxpartner = cJSON_GetObjectItemCaseSensitive(ezmaxpartner_get_custom_developpers_v1_response_m_payloadJSON, "a_objEzmaxpartner");
    if (cJSON_IsNull(a_obj_ezmaxpartner)) {
        a_obj_ezmaxpartner = NULL;
    }
    if (!a_obj_ezmaxpartner) {
        goto end;
    }

    
    cJSON *a_obj_ezmaxpartner_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezmaxpartner)){
        goto end; //nonprimitive container
    }

    a_obj_ezmaxpartnerList = list_createList();

    cJSON_ArrayForEach(a_obj_ezmaxpartner_local_nonprimitive,a_obj_ezmaxpartner )
    {
        if(!cJSON_IsObject(a_obj_ezmaxpartner_local_nonprimitive)){
            goto end;
        }
        custom_ezmaxpartner_list_element_t *a_obj_ezmaxpartnerItem = custom_ezmaxpartner_list_element_parseFromJSON(a_obj_ezmaxpartner_local_nonprimitive);

        list_addElement(a_obj_ezmaxpartnerList, a_obj_ezmaxpartnerItem);
    }



    ezmaxpartner_get_custom_developpers_v1_response_m_payload_local_var = ezmaxpartner_get_custom_developpers_v1_response_m_payload_create_internal (
        a_obj_ezmaxpartnerList
        );

    if (!ezmaxpartner_get_custom_developpers_v1_response_m_payload_local_var) {
        goto end;
    }

    return ezmaxpartner_get_custom_developpers_v1_response_m_payload_local_var;
end:
    if (a_obj_ezmaxpartnerList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezmaxpartnerList) {
            custom_ezmaxpartner_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezmaxpartnerList);
        a_obj_ezmaxpartnerList = NULL;
    }
    return NULL;

}
